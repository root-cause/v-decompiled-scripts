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
	var uLocal_88 = -1;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<282> Local_96 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_378 = -1;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = -1;
	var uLocal_384 = -1;
	var uLocal_385 = -1;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	struct<15> Local_396 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	struct<2> Local_421[32];
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	if (func_164())
	{
		while (!func_154())
		{
			SYSTEM::WAIT(0);
			func_61(&Local_96, &Local_396);
			func_48();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_38(&Local_96, &Local_396);
				func_37();
			}
		}
	}
	func_1();
}

void func_1()//Position - 0xC9
{
	func_3(&Local_96, &Local_396);
	Global_2764795 = 0;
	func_2();
}

void func_2()//Position - 0xE3
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, var uParam1)//Position - 0xEF
{
	int iVar0;
	
	if (func_36(&(uParam0->f_281), 15))
	{
		func_35();
		MISC::CLEAR_BIT(&Global_2764798, 8);
		func_34(&(uParam0->f_281), 15);
	}
	func_32(&(uParam0->f_281.f_6));
	func_27(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), false, true);
					func_26(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1970693, 7) && !BitTest(Global_1970693, 3)) && !func_24(PLAYER::PLAYER_ID()))
		{
			func_23(-1);
			func_22(-1);
		}
		Global_2764796 = 0;
		MISC::CLEAR_BIT(&Global_2764798, 6);
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_20())
		{
			func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()//Position - 0x26A
{
	if (Global_2672524.f_947.f_10)
	{
		Global_2672524.f_947.f_10 = 0;
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x288
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
	if (func_19())
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
		if (!func_20())
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
				else if (bVar14 || ((!func_15(PLAYER::PLAYER_ID(), 0) && !func_14()) && !func_13(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657704[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_10(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_9(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_8();
					func_7();
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
				Global_2657704[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635560.f_2781)
				{
					Global_2635560.f_2781 = 0;
				}
			}
			else
			{
				if (!func_9(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_6(Global_4718592.f_171044))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575038)
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

bool func_6(int iParam0)//Position - 0x724
{
	return iParam0 == 17;
}

void func_7()//Position - 0x731
{
	struct<3> Var0;
	
	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { Var0 };
}

void func_8()//Position - 0x77E
{
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
}

int func_9(int iParam0)//Position - 0x7BC
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

void func_10(bool bParam0, int iParam1, int iParam2)//Position - 0x7ED
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
				func_12();
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
		if (func_15(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_11(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_11(int iParam0, bool bParam1)//Position - 0x8BD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_12()//Position - 0x8D9
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

int func_13(int iParam0)//Position - 0x931
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_14())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_14()//Position - 0x970
{
	return BitTest(Global_2621446, 3);
}

bool func_15(int iParam0, int iParam1)//Position - 0x97E
{
	bool bVar0;
	
	if (!func_18(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
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

int func_16(int iParam0, bool bParam1)//Position - 0x9D7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
	}
	if (Global_1575043[iVar1] == 1)
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

int func_17()//Position - 0xA18
{
	return Global_1574918;
}

int func_18(var uParam0)//Position - 0xA24
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

int func_19()//Position - 0xA46
{
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0xA77
{
	if (func_21() == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xA8C
{
	return Global_1574632.f_18;
}

void func_22(int iParam0)//Position - 0xA9A
{
	Global_2694603 = iParam0;
}

void func_23(int iParam0)//Position - 0xAA8
{
	Global_2694605 = iParam0;
	Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_857 = iParam0;
}

int func_24(int iParam0)//Position - 0xAC6
{
	if (iParam0 != func_25())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_366, 29);
	}
	return 0;
}

int func_25()//Position - 0xAED
{
	return -1;
}

void func_26(var uParam0)//Position - 0xAF6
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

void func_27(var uParam0, int iParam1)//Position - 0xB2F
{
	if (func_28())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_32(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_28()//Position - 0xB69
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1970694, 13)) && !BitTest(Global_1970694, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1970694, 15)) && !BitTest(Global_1970694, 19))
	{
		return 0;
	}
	if ((((((((((((func_31("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || func_31("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || func_31("ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || func_31("ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || func_30("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */)) || func_30("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */)) || func_29("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */)) || func_29("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */)) || func_29("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */)) || func_29("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */)) || func_31("ARENA_SEAT4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || func_31("ARENA_SEAT_PC4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */)) || func_31("ARENA_SEAT_EX" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
	{
		return 1;
	}
	return 0;
}

bool func_29(char* sParam0, int iParam1)//Position - 0xCA7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_30(char* sParam0, int iParam1, int iParam2)//Position - 0xCC0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_31(char* sParam0)//Position - 0xCDF
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_32(var uParam0)//Position - 0xCF2
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_33(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_33(int iParam0)//Position - 0xD49
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
		if (Global_44123[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_34(int* iParam0, int iParam1)//Position - 0xD84
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_35()//Position - 0xD94
{
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
}

bool func_36(var uParam0, int iParam1)//Position - 0xDA0
{
	return BitTest(*uParam0, iParam1);
}

void func_37()//Position - 0xDAE
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
		if (bVar2 != func_25() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
		{
			if (BitTest(Local_421[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_396.f_13, bVar2))
				{
					if (Local_421[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_421[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_396.f_2[iVar3] < 0)
								{
									Local_396.f_2[iVar3] = bVar2;
									MISC::SET_BIT(&(Local_396.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_421[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_396.f_2[iVar4] = bVar2;
									MISC::SET_BIT(&(Local_396.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != PLAYER::PLAYER_ID())
		{
			if (BitTest(Local_396.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_396.f_2[iVar5] == bVar0)
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_396.f_14[iVar5]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_396.f_14[iVar5]))
							{
								Local_396.f_2[iVar5] = -1;
								func_26(&(Local_396.f_14[iVar5]));
								MISC::CLEAR_BIT(&(Local_396.f_13), bVar0);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_396.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_396.f_2[iVar5] = -1;
								MISC::CLEAR_BIT(&(Local_396.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_38(var uParam0, var uParam1)//Position - 0xF4C
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	STREAMING::REQUEST_ANIM_DICT(func_45());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_45()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			STREAMING::REQUEST_MODEL(iVar0);
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return;
			}
			if (func_39(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
					MISC::SET_BIT(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
				{
					Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					iVar1 = OBJECT::CREATE_OBJECT(iVar0, Var2, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var2, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar1, Var5, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = NETWORK::OBJ_TO_NET(iVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_39(int iParam0, bool bParam1, bool bParam2)//Position - 0x10BC
{
	return func_40(2, iParam0, 1, bParam1, bParam2);
}

int func_40(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x10D0
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666708, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_44(iParam0) - func_43(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_43(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_44(iParam0) - func_42(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_43(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_44(iParam0) - func_43(iParam0, 1));
		}
		if (!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] != 3)
		{
			iVar1 = (iVar1 - func_41(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x1196
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

int func_42(int iParam0)//Position - 0x11D0
{
	switch (iParam0)
	{
		case 0:
			return Global_1666708.f_1;
			break;
		
		case 1:
			return Global_1666708.f_2;
			break;
		
		case 2:
			return Global_1666708.f_3;
			break;
	}
	return 0;
}

int func_43(int iParam0, bool bParam1)//Position - 0x1216
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x12B3
{
	switch (iParam0)
	{
		case 0:
			return Global_1666716;
			break;
		
		case 1:
			return Global_1666717;
			break;
		
		case 2:
			return Global_1666718;
			break;
	}
	return 0;
}

char* func_45()//Position - 0x12F3
{
	if (func_46())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_46()//Position - 0x130B
{
	return func_47(PLAYER::PLAYER_ID());
}

int func_47(int iParam0)//Position - 0x131B
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x133A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_396.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_396.f_2[iVar1] == -1 || Local_396.f_2[iVar1] == PLAYER::PLAYER_ID())
			{
				iVar0 = 0;
				if (Local_396.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_58()) && func_54())
					{
						ENTITY::CREATE_MODEL_HIDE(func_53(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
					}
					else
					{
						ENTITY::REMOVE_MODEL_HIDE(func_53(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), false);
					}
				}
				else
				{
					ENTITY::CREATE_MODEL_HIDE(func_53(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
				}
			}
			else
			{
				ENTITY::CREATE_MODEL_HIDE(func_53(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
			}
			iVar1++;
		}
		Global_2764795 = iVar0;
	}
	else
	{
		Global_2764795 = 0;
	}
	if (Local_96.f_281.f_5 == 4)
	{
		if (!BitTest(Local_421[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			MISC::SET_BIT(&(Local_421[PLAYER::PLAYER_ID() /*2*/]), 0);
			if (func_52())
			{
				MISC::SET_BIT(&(Local_421[PLAYER::PLAYER_ID() /*2*/].f_1), 0);
			}
			else if (Local_96.f_281.f_9 == 1)
			{
				MISC::SET_BIT(&(Local_421[PLAYER::PLAYER_ID() /*2*/].f_1), Local_96.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_396.f_13, PLAYER::PLAYER_ID()))
		{
			if (func_51() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_396.f_2[iVar2] == PLAYER::PLAYER_ID())
					{
						func_23(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1970693, 7) && !BitTest(Global_1970693, 3)) && !func_24(PLAYER::PLAYER_ID()))
	{
		if (func_52())
		{
			if (func_50() && CAM::IS_SCREEN_FADED_IN())
			{
				func_49(0);
			}
		}
		if (BitTest(Local_421[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			if (!func_50() && func_51() < 0)
			{
				if (func_52())
				{
					func_49(0);
				}
				MISC::CLEAR_BIT(&(Local_421[PLAYER::PLAYER_ID() /*2*/]), 0);
				Local_421[PLAYER::PLAYER_ID() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_49(int iParam0)//Position - 0x1544
{
	Global_2764794 = iParam0;
}

int func_50()//Position - 0x1552
{
	if (Global_2694603 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x1567
{
	return Global_2694605;
}

bool func_52()//Position - 0x1573
{
	return Global_2764794;
}

Vector3 func_53(int iParam0)//Position - 0x157F
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.3013f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.2683f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.2427f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.2126f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.1782f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.1526f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.1226f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.0867f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_54()//Position - 0x1681
{
	int iVar0;
	int iVar1;
	
	if (func_57() && !func_56())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_55())
		{
			return 1;
		}
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 > 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058071.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8122[iVar1], 23) && BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8122[iVar1], 24)) && BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8122[iVar1], 25)) && BitTest(Global_4718592.f_1816[iVar0 /*24279*/].f_8122[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_55()//Position - 0x1772
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_56()//Position - 0x178C
{
	return Global_1574966;
}

var func_57()//Position - 0x1798
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1970693, 0));
}

int func_58()//Position - 0x17B4
{
	if (func_60() && !func_59())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_59()//Position - 0x17E2
{
	if (Global_4718592.f_118167 == 1 || Global_4718592.f_118167 == 2)
	{
		return 1;
	}
	return 0;
}

var func_60()//Position - 0x1810
{
	return BitTest(Global_4718592.f_164769, 12);
}

void func_61(var uParam0, int iParam1)//Position - 0x1825
{
	char* sVar0;
	char* sVar16;
	int iVar20;
	int iVar21;
	struct<3> Var22;
	struct<3> Var25;
	bool bVar28;
	int iVar29;
	struct<3> Var30;
	float fVar33;
	float fVar34;
	float fVar35;
	struct<3> Var36;
	int iVar39;
	int iVar40;
	struct<3> Var41;
	struct<3> Var44;
	int iVar47;
	int iVar48;
	struct<3> Var49;
	struct<3> Var52;
	
	func_151(uParam0);
	func_149(uParam0);
	func_137(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_34(&(uParam0->f_281), 11);
			func_136(uParam0, 1);
			break;
		
		case 1:
			if (func_135(uParam0))
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_136(uParam0, 2);
			}
			else if (func_52())
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_136(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_134(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_133(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_52())
			{
				if ((((((func_132(uParam0) || Global_1935879) || func_130(uParam0)) || !func_129(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())) || ((uParam0->f_281.f_2 <= 7 && func_58()) && func_54())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26830 /* Tunable: -1263858477 */))
				{
					if (!Global_1935879 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID()))
					{
						iVar21 = PLAYER::GET_PLAYER_PED(iParam1->f_2[uParam0->f_281.f_2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar21) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar21, 2797.9878f, -3954.8984f, 181.00049f, 2797.9492f, -3930.8503f, 187.4114f, 30f, false, true, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL" /* GXT: Unavailable. This seat is currently reserved for ~a~. */, 0, PLAYER::GET_PLAYER_NAME(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_27(uParam0, 1);
							func_136(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_58()) && func_54())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO" /* GXT: Unavailable. Weaponized tablets are reserved for players that are active in the match. */, 0, 0, 0, 0);
						}
					}
					else
					{
						func_27(uParam0, 1);
						func_136(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_128(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Spectator Tablet. */, 0, 0, 0, 0);
						}
						else
						{
							func_128(&(uParam0->f_281.f_6), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					func_32(&(uParam0->f_281.f_6));
					func_125(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 0, 256, 0);
						func_136(uParam0, 4);
					}
					else
					{
						func_136(uParam0, 3);
					}
				}
			}
			else if (func_52())
			{
				func_32(&(uParam0->f_281.f_6));
				func_136(uParam0, 4);
			}
			else
			{
				func_27(uParam0, 1);
				func_136(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_51() >= 0)
			{
				if (func_52())
				{
					uParam0->f_281.f_2 = func_51();
					if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
					}
					func_124(&(uParam0->f_281), 14);
				}
				func_125(uParam0);
				func_136(uParam0, 3);
			}
			if (!func_52())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())
				{
					func_27(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
					func_4();
					func_136(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_123(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_122();
				func_136(uParam0, 5);
			}
			break;
		
		case 5:
			func_123(uParam0, &sVar0);
			func_121(uParam0, &sVar16, 0);
			Var22 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_120(uParam0), func_119(uParam0), 0f, 2) };
			Var25 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_120(uParam0), func_119(uParam0), 0f, 2) };
			if (func_36(&(uParam0->f_281), 14))
			{
				bVar28 = true;
				if (func_118() >= 0)
				{
					bVar28 = false;
				}
				if (func_106(Var22, Var25.f_2, 0, 0, 0, 0, 1, bVar28, 1, 0, 0) && Global_2764797)
				{
					func_136(uParam0, 6);
				}
				else if (!Global_2764797)
				{
				}
			}
			else if (Global_2764797)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var22, 1f, 500, Var25.f_2, 0.05f);
				func_23(uParam0->f_281.f_2);
				func_136(uParam0, 6);
			}
			else if (!Global_2764797)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_123(uParam0, &sVar0);
			func_121(uParam0, &sVar16, 0);
			iVar29 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
			Var30 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_120(uParam0), func_119(uParam0), 0f, 2) };
			fVar33 = Var30.f_2;
			if (((iVar29 != 1 && iVar29 != 0) || func_105(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar33, 5f)) || func_36(&(uParam0->f_281), 14))
			{
				fVar34 = 1f;
				fVar35 = 0f;
				Var36 = { func_120(uParam0) };
				if (func_36(&(uParam0->f_281), 14))
				{
					fVar34 = 2f;
					fVar35 = 0.9f;
				}
				uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var36, func_119(uParam0), 2, true, false, 1f, fVar35, fVar34);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
				func_124(&(uParam0->f_281), 8);
				func_136(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_36(&(uParam0->f_281), 10))
			{
				func_34(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iVar39, "Exit_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
				}
				func_104(uParam0);
			}
			func_64(uParam0, iParam1);
			iVar20 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar20))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar20) >= 1f)
				{
					if (!Global_2764796)
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_1574965)
							{
								NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
					if (!func_50())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar40, "Enter_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_22(uParam0->f_281.f_2);
						}
						else
						{
							func_22(uParam0->f_281.f_2 + 20);
						}
						Global_2764796 = 1;
					}
					else
					{
						Global_2764796 = 1;
					}
					func_62(uParam0, 0);
					func_123(uParam0, &sVar0);
					func_121(uParam0, &sVar16, 0);
					uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_120(uParam0), func_119(uParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
					func_124(&(uParam0->f_281), 8);
					func_124(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("attachtablet")) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar20) > 0.25f))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
					func_34(&(uParam0->f_281), 8);
				}
			}
			else if (!func_36(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_26(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_136(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
					}
					Var41 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					Var44 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var41, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var44, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_136(uParam0, 9);
			break;
		
		case 9:
			if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				MISC::CLEAR_BIT(&Global_2764798, 8);
				func_34(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			iVar47 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			iVar48 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"));
			if (iVar48 == 0 || iVar48 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar47))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar47) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
						if ((!BitTest(Global_1970693, 7) && !BitTest(Global_1970693, 3)) && !func_24(PLAYER::PLAYER_ID()))
						{
							func_23(-1);
							func_22(-1);
						}
						Global_2764796 = 0;
						MISC::CLEAR_BIT(&Global_2764798, 6);
						func_27(uParam0, 1);
						func_34(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
								Var49 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								Var52 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var49, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var52, 2, true);
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
							}
						}
						func_4();
						func_136(uParam0, 0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detachtablet")))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_26(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1970693, 7) && !BitTest(Global_1970693, 3)) && !func_24(PLAYER::PLAYER_ID()))
				{
					func_23(-1);
					func_22(-1);
				}
				Global_2764796 = 0;
				MISC::CLEAR_BIT(&Global_2764798, 6);
				func_27(uParam0, 1);
				func_34(&(uParam0->f_281), 14);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
				func_4();
				func_136(uParam0, 0);
			}
			break;
	}
}

void func_62(var uParam0, bool bParam1)//Position - 0x2826
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_63(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_63(uParam0);
			uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_63(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_63(var uParam0)//Position - 0x2971
{
	return uParam0->f_281.f_9.f_1;
}

void func_64(var uParam0, var uParam1)//Position - 0x2982
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if ((BitTest(Global_1970693, 7) || BitTest(Global_1970693, 3)) || func_24(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_281.f_5 == 7 && CAM::IS_SCREEN_FADED_OUT())
		{
			func_3(uParam0, uParam1);
			func_136(uParam0, 9);
		}
	}
	if (func_36(&(uParam0->f_281), 13))
	{
		iVar0 = func_96(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, "Select_Turret", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
			}
			MISC::SET_BIT(&Global_1970693, 9);
			func_34(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2764798, 7))
			{
				MISC::SET_BIT(&Global_2764798, 7);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_34(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			func_27(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
		{
			func_27(uParam0, 1);
			if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				MISC::CLEAR_BIT(&Global_2764798, 8);
				func_34(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_36(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1970693, 23) && !func_95())) || Global_2766615) || Global_2766618) || BitTest(Global_1963795, 13)) || BitTest(Global_1970693, 14)) || BitTest(Global_1963795, 9)) || BitTest(Global_2764798, 0)) || BitTest(Global_1970693, 6)) || BitTest(Global_1970693, 7)) || BitTest(Global_1970693, 8)) || BitTest(Global_1970693, 9)) || BitTest(Global_1970693, 2)) || BitTest(Global_1970693, 3)) || BitTest(Global_1970693, 4)) || BitTest(Global_1970693, 5)) || func_24(PLAYER::PLAYER_ID())) || func_52()) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)) || !CAM::IS_SCREEN_FADED_IN()) || func_92(PLAYER::PLAYER_ID())) || Global_2764819 != 0)
		{
			func_27(uParam0, 1);
			if (!BitTest(Global_1970693, 23))
			{
				if (!func_36(&(uParam0->f_281), 15) && Global_2764819 == 0)
				{
					func_91("ARENA SPECTATOR BOX TABLETS");
					MISC::SET_BIT(&Global_2764798, 8);
					func_124(&(uParam0->f_281), 15);
				}
			}
			else if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				MISC::CLEAR_BIT(&Global_2764798, 8);
				func_34(&(uParam0->f_281), 15);
			}
		}
		else if (func_90(uParam0))
		{
			func_27(uParam0, 1);
			if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				MISC::CLEAR_BIT(&Global_2764798, 8);
				func_34(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_36(&(uParam0->f_281), 15))
			{
				func_91("ARENA SPECTATOR BOX TABLETS");
				MISC::SET_BIT(&Global_2764798, 8);
				func_124(&(uParam0->f_281), 15);
			}
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			bVar2 = false;
			if (func_89())
			{
				bVar2 = true;
			}
			if (func_29("ARENA_VIP_CASH1" /* GXT: You do not have enough money. It costs $~1~ to use Spectator Cam. */, Global_262145.f_26833 /* Tunable: -887378230 */))
			{
				MISC::CLEAR_BIT(&Global_2764798, 5);
			}
			if (func_29("ARENA_VIP_CASH2" /* GXT: You do not have enough money. It costs $~1~ to fly a Spectator Drone. */, Global_262145.f_26834 /* Tunable: -76677190 */))
			{
				MISC::CLEAR_BIT(&Global_2764798, 4);
			}
			if (func_31("ARENA_VIP_ABIL" /* GXT: This option is currently unavailable. */))
			{
				MISC::CLEAR_BIT(&Global_2764798, 7);
			}
			if (BitTest(Global_2764798, 4) && uParam0->f_281.f_6 == -1)
			{
				func_88("ARENA_VIP_CASH2" /* GXT: You do not have enough money. It costs $~1~ to fly a Spectator Drone. */, Global_262145.f_26834 /* Tunable: -76677190 */, 2000);
			}
			if (BitTest(Global_2764798, 5) && uParam0->f_281.f_6 == -1)
			{
				func_88("ARENA_VIP_CASH1" /* GXT: You do not have enough money. It costs $~1~ to use Spectator Cam. */, Global_262145.f_26833 /* Tunable: -887378230 */, 2000);
			}
			if (BitTest(Global_2764798, 7) && uParam0->f_281.f_6 == -1)
			{
				func_87("ARENA_VIP_ABIL" /* GXT: This option is currently unavailable. */, 2000);
			}
			if ((BitTest(Global_2764798, 4) || BitTest(Global_2764798, 5)) || BitTest(Global_2764798, 7))
			{
				func_27(uParam0, 1);
			}
			if ((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !Global_1935879) && !func_36(&(uParam0->f_281), 0)) && !func_36(&(uParam0->f_281), 4)) && !func_86()) && !func_84(1)) && uParam0->f_281.f_9.f_2 != 3) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !func_83())
			{
				if (bVar2)
				{
					if (func_58() && !func_54())
					{
						if (((((func_30("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */) || func_29("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */)) || func_29("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */)) || func_30("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */)) || func_29("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */)) || func_29("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */))
						{
							func_27(uParam0, 1);
						}
					}
					else if (func_31("ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */) || func_31("ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
					{
						func_27(uParam0, 1);
					}
				}
				if ((((((!func_28() && !BitTest(Global_2764798, 4)) && !BitTest(Global_2764798, 5)) && !BitTest(Global_2764798, 7)) && !func_29("ARENA_VIP_CASH1" /* GXT: You do not have enough money. It costs $~1~ to use Spectator Cam. */, Global_262145.f_26833 /* Tunable: -887378230 */)) && !func_29("ARENA_VIP_CASH2" /* GXT: You do not have enough money. It costs $~1~ to fly a Spectator Drone. */, Global_262145.f_26834 /* Tunable: -76677190 */)) && !func_31("ARENA_VIP_ABIL" /* GXT: This option is currently unavailable. */))
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (bVar2)
						{
							if (func_58() && !func_54())
							{
								if ((func_30("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */) || func_29("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */)) || func_29("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */))
								{
									func_27(uParam0, 1);
								}
								func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								if (func_31("ARENA_SEAT_PC" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
								{
									func_27(uParam0, 1);
								}
								if (!BitTest(Global_2764798, 2) && !BitTest(Global_2764798, 3))
								{
									func_82("ARENA_SEAT_PC1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */);
								}
								else if (BitTest(Global_2764798, 2) && !BitTest(Global_2764798, 3))
								{
									func_88("ARENA_SEAT_PC2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, -1);
								}
								else if (!BitTest(Global_2764798, 2) && BitTest(Global_2764798, 3))
								{
									func_88("ARENA_SEAT_PC3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */, -1);
								}
								else
								{
									func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_58() && !func_54())
						{
							if ((func_30("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */) || func_29("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */)) || func_29("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */))
							{
								func_27(uParam0, 1);
							}
							func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							if (func_31("ARENA_SEAT" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to fly a Battle Drone.~n~Press ~INPUT_SCRIPT_RRIGHT~ to drive an RC Bandito.~n~Press ~INPUT_SCRIPT_RLEFT~ to use the Trap Cam.~n~Press ~INPUT_SCRIPT_RUP~ to use a Turret.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */))
							{
								func_27(uParam0, 1);
							}
							if (!BitTest(Global_2764798, 2) && !BitTest(Global_2764798, 3))
							{
								func_82("ARENA_SEAT1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, Global_262145.f_26834 /* Tunable: -76677190 */);
							}
							else if (BitTest(Global_2764798, 2) && !BitTest(Global_2764798, 3))
							{
								func_88("ARENA_SEAT2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26833 /* Tunable: -887378230 */, -1);
							}
							else if (!BitTest(Global_2764798, 2) && BitTest(Global_2764798, 3))
							{
								func_88("ARENA_SEAT3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, Global_262145.f_26834 /* Tunable: -76677190 */, -1);
							}
							else
							{
								func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX" /* GXT: Press ~INPUT_SCRIPT_PAD_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_58() && !func_54())
					{
						if (((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1970693, 6)) && !BitTest(Global_1970693, 7)) && !BitTest(Global_1970693, 8)) && !BitTest(Global_1970693, 9)) && !func_24(PLAYER::PLAYER_ID()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_104(uParam0);
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1970693, 6)) && !BitTest(Global_1970693, 7)) && !BitTest(Global_1970693, 8)) && !BitTest(Global_1970693, 9)) && !func_24(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_81())
							{
								func_27(uParam0, 1);
								MISC::SET_BIT(&Global_1970693, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar4, "Select_Drone", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2764798, 7))
								{
									MISC::SET_BIT(&Global_2764798, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1970693, 6)) && !BitTest(Global_1970693, 7)) && !BitTest(Global_1970693, 8)) && !BitTest(Global_1970693, 9)) && !func_24(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_80())
							{
								func_27(uParam0, 1);
								MISC::SET_BIT(&Global_1970693, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar5, "Select_RC_Car", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2764798, 7))
								{
									MISC::SET_BIT(&Global_2764798, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/)) && !BitTest(Global_1970693, 6)) && !BitTest(Global_1970693, 7)) && !BitTest(Global_1970693, 8)) && !BitTest(Global_1970693, 9)) && !func_24(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_77())
							{
								func_27(uParam0, 1);
								MISC::SET_BIT(&Global_1970693, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar6, "Select_Trap_Cam", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2764798, 7))
								{
									MISC::SET_BIT(&Global_2764798, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !BitTest(Global_1970693, 6)) && !BitTest(Global_1970693, 7)) && !BitTest(Global_1970693, 8)) && !BitTest(Global_1970693, 9)) && !func_24(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_76())
							{
								func_27(uParam0, 1);
								if (func_36(&(uParam0->f_281), 15))
								{
									func_35();
									MISC::CLEAR_BIT(&Global_2764798, 8);
									func_34(&(uParam0->f_281), 15);
								}
								func_124(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2764798, 7))
								{
									MISC::SET_BIT(&Global_2764798, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					else
					{
						if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !Global_2766618) && !Global_2766615)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar7, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_104(uParam0);
						}
						if ((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && bVar2) && !Global_262145.f_26831 /* Tunable: -774498395 */)
						{
							if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26833 /* Tunable: -887378230 */, false, false, true, -1, 0) || BitTest(Global_2764798, 3))
							{
								func_27(uParam0, 1);
								Global_2766618 = 1;
								Global_2766615 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar8, "Select_Live_Stream", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
								func_74(73, -1);
								func_71();
								func_65();
							}
							else if (!BitTest(Global_2764798, 5))
							{
								MISC::SET_BIT(&Global_2764798, 5);
							}
						}
					}
				}
			}
		}
	}
	func_34(&(uParam0->f_281), 9);
}

void func_65()//Position - 0x3802
{
	func_66(7986, -1);
}

void func_66(int iParam0, int iParam1)//Position - 0x3812
{
	int iVar0;
	
	iVar0 = func_69(iParam0, func_70(iParam1));
	iVar0++;
	func_67(iParam0, iVar0, iParam1, 1);
}

void func_67(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x3839
{
	int iVar0;
	
	iVar0 = func_68(iParam0, uParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_68(int iParam0, var uParam1)//Position - 0x385C
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_70(uParam1));
}

int func_69(int iParam0, var uParam1)//Position - 0x3871
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_68(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_70(var uParam0)//Position - 0x38A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

void func_71()//Position - 0x38D4
{
	int iVar0;
	
	iVar0 = func_72(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_373.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_373.f_3), 13);
	}
}

int func_72(int iParam0, int iParam1)//Position - 0x3921
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_73(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_73(int iParam0, var uParam1)//Position - 0x3945
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_70(uParam1));
}

void func_74(int iParam0, int iParam1)//Position - 0x395B
{
	int iVar0;
	
	iVar0 = func_72(iParam0, func_70(iParam1));
	iVar0++;
	func_75(iParam0, iVar0, iParam1);
}

void func_75(int iParam0, int iParam1, var uParam2)//Position - 0x3981
{
	int iVar0;
	
	iVar0 = func_73(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_76()//Position - 0x399D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058071.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iVar1 /*24279*/].f_8122[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x3A0D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_78())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058071.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iVar1 /*24279*/].f_8122[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_78()//Position - 0x3A89
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_74915 - 1))
	{
		if (!func_79(Global_4980736.f_74917[iVar0 /*225*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_79(struct<3> Param0)//Position - 0x3ACA
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_80()//Position - 0x3AF4
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058071.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iVar1 /*24279*/].f_8122[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x3B65
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058071.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iVar1 /*24279*/].f_8122[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_82(char* sParam0, int iParam1, int iParam2)//Position - 0x3BD6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
}

bool func_83()//Position - 0x3BF8
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_84(bool bParam0)//Position - 0x3C0D
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_85(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23251.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x3CF8
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86()//Position - 0x3D55
{
	if (Global_2672524.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1)//Position - 0x3D6F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_88(char* sParam0, int iParam1, int iParam2)//Position - 0x3D86
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_89()//Position - 0x3DA3
{
	if (Global_2694603 >= 0 && Global_2694603 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_90(var uParam0)//Position - 0x3DC5
{
	return func_36(&(uParam0->f_281), 9);
}

void func_91(char* sParam0)//Position - 0x3DD8
{
	PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
}

bool func_92(int iParam0)//Position - 0x3DE7
{
	return func_93(iParam0) != 0;
}

int func_93(int iParam0)//Position - 0x3DF7
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_94())
	{
		return Global_2764825.f_1;
	}
	return Global_2648711.f_1399[iParam0 /*3*/].f_1;
}

int func_94()//Position - 0x3E29
{
	if (((Global_2764828 != 0 && Global_2764828 == Global_2764829) && Global_2764817 != 3) && Global_2764817 != 1)
	{
		return 0;
	}
	return 1;
}

int func_95()//Position - 0x3E63
{
	if (((((func_31("ARENA_SEAT_GM0") || func_31("ARENA_SEAT_GM1")) || func_31("TAGTM_HELP_2O")) || func_31("TAGTM_HELP_2P")) || func_31("TAGTM_HELP_2Pi")) || func_31("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0)//Position - 0x3EC1
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_102(1, 0, 0, 1, 1);
	}
	iVar0 = func_101(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_97(0, -1, -1);
	}
	return iVar0;
}

int func_97(int iParam0, int iParam1, int iParam2)//Position - 0x3F06
{
	if (iParam0 != 0 && Global_2764822.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2764822.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2764822 != iParam2)
	{
		return 0;
	}
	if (func_100())
	{
		return 0;
	}
	func_99();
	func_98(3);
	Global_2764822.f_1 = 0;
	Global_2764822.f_2 = -1;
	Global_2764822 = -1;
	Global_2764818 = 0;
	Global_2764820 = 0;
	Global_2764828 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2764821 = 1;
	return 1;
}

void func_98(int iParam0)//Position - 0x3F96
{
	Global_2764817 = iParam0;
}

void func_99()//Position - 0x3FA4
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("turret_cam_script")) > 0)
	{
		Global_2764830 = 1;
	}
}

bool func_100()//Position - 0x3FBE
{
	return (Global_2764817 == 3 || Global_2764817 == 0);
}

int func_101(int iParam0)//Position - 0x3FD8
{
	if (Global_2764828 == iParam0)
	{
		if (Global_2764817 == 2)
		{
			if (Global_2764828 == Global_2764829)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2764817 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_102(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x401E
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_98(1);
	Global_2764822 = { Var0 };
	Global_2764818 = iParam3;
	Global_2764828 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2764820 = 0;
	func_103(&Global_2764820, 0, !bParam4);
	Global_2764821 = 1;
	return Global_2764828;
}

void func_103(int* iParam0, int iParam1, bool bParam2)//Position - 0x4076
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iParam1);
	}
}

void func_104(var uParam0)//Position - 0x4096
{
	char* sVar0;
	
	uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_120(uParam0), func_119(uParam0), 2, true, false, 1f, 0f, 1f);
	func_123(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
	func_32(&(uParam0->f_281.f_6));
	MISC::SET_BIT(&Global_2764798, 6);
	func_34(&(uParam0->f_281), 14);
	func_136(uParam0, 9);
}

int func_105(float fParam0, float fParam1, float fParam2)//Position - 0x4121
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
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
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

int func_106(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)//Position - 0x41A7
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23251.f_6 = 1;
	if (Global_2672524.f_1024 && Global_2672524.f_1032)
	{
		func_115(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2672524.f_1024)
		{
			func_115(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_114(0))
	{
		if (func_113(PLAYER::PLAYER_ID(), 1, 0) && !(func_57() || func_112()))
		{
			if (((bParam9 && func_111(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_232 == 1)
			{
			}
			else if (func_110() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2672524.f_1024 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2672524.f_1024 = 0;
				Global_2672524.f_1025 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672524.f_1026 || !Param0.f_1 == Global_2672524.f_1026.f_1) || !Param0.f_2 == Global_2672524.f_1026.f_2) || !fParam3 == Global_2672524.f_1029)
	{
		if (Global_2672524.f_1024 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672524.f_1030) < func_109(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2672524.f_1025 = 1;
		}
		else
		{
			Global_2672524.f_1025 = 0;
		}
		Global_2672524.f_1026 = { Param0 };
		Global_2672524.f_1029 = fParam3;
		Global_2672524.f_1024 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2672524.f_1024 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(Global_100885.f_1414[44], 16))
			{
				func_108(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635560.f_502)))
			{
				Global_2635560.f_502 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2672524.f_1031 = 0;
				}
			}
		}
		if (Global_2672524.f_1031 > -1)
		{
			Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1024 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_115(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1024 = 1;
		}
	}
	if (Global_2672524.f_1024)
	{
		Global_23251.f_6 = 1;
		Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
		if (Global_2672524.f_1031 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_107(&(Global_2672524.f_1031), Param0, fParam3, iVar0))
			{
				func_115(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2672524.f_1026) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_115(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2672524.f_1032 = 1;
						return 0;
					}
				}
				func_115(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_107(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x46BB
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_1033) && !ENTITY::IS_ENTITY_DEAD(Global_2672524.f_1033, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672524.f_1033);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2672524.f_1033 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672524.f_1033);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2672524.f_1033))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2672524.f_1033, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2672524.f_1033, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2672524.f_1033, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_108(int iParam0)//Position - 0x475E
{
	int iVar0;
	
	iVar0 = Global_2635560.f_2791;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635560.f_2789 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635560.f_2788)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2635560.f_2788 = iVar0;
		}
	}
}

int func_109(bool bParam0)//Position - 0x47B3
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_110()//Position - 0x47D6
{
	return Global_1574996;
}

int func_111(int iParam0, bool bParam1, bool bParam2)//Position - 0x47E2
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_112()//Position - 0x4842
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1970693, 12)) && Global_1970692 == 8);
}

int func_113(int iParam0, bool bParam1, int iParam2)//Position - 0x486B
{
	if (Global_2657704[iParam0 /*463*/].f_232 == 99)
	{
		if ((iParam2 && Global_2657704[iParam0 /*463*/].f_235 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2657704[iParam0 /*463*/].f_232 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_114(bool bParam0)//Position - 0x48C2
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_115(bool bParam0, bool bParam1)//Position - 0x48D3
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_7();
	if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 14) && !func_117())
	{
		func_116();
	}
}

void func_116()//Position - 0x4943
{
	Global_2803912.f_92 = 1;
}

int func_117()//Position - 0x4952
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_114(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_179188[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_118()//Position - 0x4989
{
	return Global_2694603;
}

Vector3 func_119(var uParam0)//Position - 0x4995
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_120(var uParam0)//Position - 0x49AE
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_121(var uParam0, char* sParam1, bool bParam2)//Position - 0x49C5
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_122()//Position - 0x4C06
{
	if (!Global_2672524.f_947.f_10)
	{
		Global_2672524.f_947.f_10 = 1;
	}
}

void func_123(var uParam0, char* sParam1)//Position - 0x4C25
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_46())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_124(int* iParam0, int iParam1)//Position - 0x4D15
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_125(var uParam0)//Position - 0x4D25
{
	uParam0->f_281.f_9 = func_127((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_126(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_126(var uParam0)//Position - 0x4D66
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_46())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x4DDE
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x4E02
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_32(uParam0);
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
		if (!Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/] = 1;
			Global_44123[iVar0 /*32*/].f_1 = Global_44324;
			Global_44324++;
			Global_44123[iVar0 /*32*/].f_4 = 0;
			Global_44123[iVar0 /*32*/].f_29 = 0;
			Global_44123[iVar0 /*32*/].f_5 = 0;
			Global_44123[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44123[iVar0 /*32*/].f_6 = iParam3;
			Global_44123[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44123[iVar0 /*32*/].f_7 = 0;
			Global_44123[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44123[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44123[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44123[iVar0 /*32*/].f_12 = 0;
				Global_44123[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44123[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_129(var uParam0)//Position - 0x4F2D
{
	Stack.Push(!func_36(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_130(var uParam0)//Position - 0x4F60
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID() && func_111(iVar1, 1, 1))
			{
				if (func_134(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_131(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x4FDE
{
	if (iParam0 != func_25())
	{
		return Global_1853988[iParam0 /*867*/].f_857;
	}
	return -1;
}

bool func_132(var uParam0)//Position - 0x4FFF
{
	if (((BitTest(Global_1970693, 6) || BitTest(Global_1970693, 7)) || BitTest(Global_1970693, 8)) || BitTest(Global_1970693, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_133(int iParam0, struct<3> Param1)//Position - 0x5044
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_105(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_134(int iParam0, var uParam1)//Position - 0x5076
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_135(var uParam0)//Position - 0x509B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_134(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_133(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_136(var uParam0, int iParam1)//Position - 0x5104
{
	uParam0->f_281.f_5 = iParam1;
}

void func_137(var uParam0)//Position - 0x5115
{
	int iVar0;
	
	if (BitTest(Global_1970693, 7))
	{
		func_143(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_143(1);
		
		case 7:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
			if (!func_142())
			{
				func_141();
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			func_139(1);
			func_138();
			break;
	}
}

void func_138()//Position - 0x51B4
{
	Global_23251.f_6 = 1;
}

void func_139(bool bParam0)//Position - 0x51C2
{
	if (bParam0)
	{
		if (func_140())
		{
			Global_2683883.f_41 = 1;
		}
	}
	else
	{
		Global_2683883.f_41 = 0;
	}
}

bool func_140()//Position - 0x51E7
{
	return BitTest(Global_2683883.f_2, 11);
}

void func_141()//Position - 0x51F8
{
	MISC::SET_BIT(&Global_8371, 4);
}

bool func_142()//Position - 0x5208
{
	return BitTest(Global_1963795, 19);
}

void func_143(int iParam0)//Position - 0x5217
{
	if (func_142())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_148(0))
		{
			func_144(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_144(int iParam0)//Position - 0x524A
{
	if (func_142())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_147())
		{
			func_146(1, 1);
		}
		else
		{
			func_146(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_145())
	{
		Global_20500.f_1 = 3;
	}
}

int func_145()//Position - 0x52D4
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_146(bool bParam0, bool bParam1)//Position - 0x52FB
{
	if (bParam0)
	{
		if (func_148(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_147()//Position - 0x536F
{
	return BitTest(Global_1963795, 5);
}

int func_148(int iParam0)//Position - 0x537D
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_149(var uParam0)//Position - 0x53D4
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_150());
		uParam0->f_281.f_8 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_281.f_8) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_150());
	}
}

float func_150()//Position - 0x5433
{
	return 0.13f;
}

void func_151(var uParam0)//Position - 0x5440
{
	func_152(&(uParam0->f_281), 4, func_153());
	func_152(&(uParam0->f_281), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	func_152(&(uParam0->f_281), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	func_152(&(uParam0->f_281), 0, func_148(0));
	func_152(&(uParam0->f_281), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_152(int* iParam0, int iParam1, bool bParam2)//Position - 0x549D
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar0);
	}
}

bool func_153()//Position - 0x54C1
{
	return Global_75816;
}

int func_154()//Position - 0x54CD
{
	if ((((!func_163() && !func_52()) && !BitTest(Global_1970693, 7)) && !BitTest(Global_1970693, 3)) && !func_24(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Global_1970693, 11) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2764792)
	{
		return 1;
	}
	return 0;
}

int func_155()//Position - 0x5554
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_162())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (func_160(159))
	{
		if (!func_159())
		{
			return 1;
		}
	}
	if (func_160(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_156() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_156()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_156()//Position - 0x55D8
{
	switch (func_158())
	{
		case 0:
			return func_157();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_157()//Position - 0x560B
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_158()//Position - 0x562F
{
	return Global_32283;
}

bool func_159()//Position - 0x563A
{
	return Global_2683883.f_698;
}

int func_160(int iParam0)//Position - 0x5649
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_161()//Position - 0x5660
{
	return Global_2694576;
}

bool func_162()//Position - 0x566C
{
	return Global_2683883.f_693;
}

int func_163()//Position - 0x567B
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2797.9878f, -3943.8984f, 181.00049f, 2797.9492f, -3919.8503f, 187.4114f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_164()//Position - 0x56B9
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_box_bench_seats", -1, true, 0))
	{
		return 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_172(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_396, 25, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_421, 65, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_171();
	func_165();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_396.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_396.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_396.f_0 = 1;
		}
	}
	return 1;
}

void func_165()//Position - 0x573D
{
	func_166(0, &Local_96, 0, 2);
	func_166(1, &Local_96, 1, 2);
	func_166(2, &Local_96, 2, 2);
	func_166(3, &Local_96, 3, 2);
	func_166(4, &Local_96, 4, 2);
	func_166(5, &Local_96, 5, 2);
	func_166(6, &Local_96, 6, 2);
	func_166(7, &Local_96, 7, 2);
	func_166(8, &Local_96, 8, 2);
	func_166(9, &Local_96, 9, 2);
	func_166(10, &Local_96, 10, 1);
	func_166(11, &Local_96, 11, 1);
	func_166(12, &Local_96, 12, 1);
	func_166(13, &Local_96, 13, 1);
	func_166(14, &Local_96, 14, 1);
	func_166(15, &Local_96, 15, 1);
	func_166(16, &Local_96, 16, 1);
	func_166(17, &Local_96, 17, 1);
	func_166(18, &Local_96, 18, 1);
	func_166(19, &Local_96, 19, 1);
}

void func_166(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5811
{
	struct<3> Var0;
	float fVar3;
	
	func_170(iParam0, &Var0, &fVar3);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar3 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_168(func_169(), (fVar3 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_168(func_167(), (fVar3 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_167()//Position - 0x5898
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_168(struct<3> Param0, float fParam3)//Position - 0x58AB
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

Vector3 func_169()//Position - 0x58EF
{
	return -0.5f, -0.5f, 0f;
}

void func_170(int iParam0, var uParam1, var uParam2)//Position - 0x5902
{
	if (func_46())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.8845f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.8574f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8206f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.7944f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.7644f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.7285f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.7056f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.6775f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.6384f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.6106f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.5786f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_171()//Position - 0x5E22
{
}

int func_172(int iParam0, int iParam1, bool bParam2)//Position - 0x5E2A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_114(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_162())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_160(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

