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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<282> Local_93 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = -1;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = -1;
	var uLocal_100 = -1;
	var uLocal_101 = -1;
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
	struct<15> Local_112 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	struct<2> Local_123[32];
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_160())
	{
		while (!func_150())
		{
			SYSTEM::WAIT(0);
			func_59(&Local_93, &Local_112);
			func_46();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_36(&Local_93, &Local_112);
				func_35();
			}
		}
	}
	func_1();
}

void func_1()//Position - 0xC9
{
	func_3(&Local_93, &Local_112);
	Global_2787910 = 0;
	func_2();
}

void func_2()//Position - 0xE3
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, var uParam1)//Position - 0xEF
{
	int iVar0;
	
	if (func_34(&(uParam0->f_281), 15))
	{
		func_33();
		MISC::CLEAR_BIT(&Global_2787913, 8);
		func_32(&(uParam0->f_281), 15);
	}
	func_30(&(uParam0->f_281.f_6));
	func_25(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), false, true);
					func_24(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(PLAYER::PLAYER_ID()))
		{
			func_21(-1);
			func_20(-1);
		}
		Global_2787911 = 0;
		MISC::CLEAR_BIT(&Global_2787913, 6);
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_18())
		{
			func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()//Position - 0x26A
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
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
	if (func_17())
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
		if (!func_18())
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
				else if (bVar14 || (!func_14(PLAYER::PLAYER_ID(), 0) && !func_13()))
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
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_6(Global_4718592.f_168757))
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

bool func_6(int iParam0)//Position - 0x716
{
	return iParam0 == 17;
}

void func_7()//Position - 0x723
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_8()//Position - 0x770
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_9(int iParam0)//Position - 0x7AE
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

void func_10(bool bParam0, int iParam1, int iParam2)//Position - 0x7DF
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
		if (func_14(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_11(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_11(int iParam0, bool bParam1)//Position - 0x8AF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_12()//Position - 0x8CB
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

bool func_13()//Position - 0x923
{
	return BitTest(Global_2621446, 3);
}

bool func_14(int iParam0, int iParam1)//Position - 0x931
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)//Position - 0x97C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

int func_16()//Position - 0x9BD
{
	return Global_1574918;
}

int func_17()//Position - 0x9C9
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_18()//Position - 0x9FA
{
	if (func_19() == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0xA0F
{
	return Global_1574632.f_18;
}

void func_20(int iParam0)//Position - 0xA1D
{
	Global_2725430 = iParam0;
}

void func_21(int iParam0)//Position - 0xA2B
{
	Global_2725432 = iParam0;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_827 = iParam0;
}

int func_22(int iParam0)//Position - 0xA49
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_23()//Position - 0xA70
{
	return -1;
}

void func_24(var uParam0)//Position - 0xA79
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

void func_25(var uParam0, int iParam1)//Position - 0xAB2
{
	if (func_26())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_30(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_26()//Position - 0xAEC
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1965532, 13)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1965532, 15)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((((((((((((func_29("MPOFSEAT_PCEXIT") || func_29("MPOFSEAT_EXIT")) || func_29("ARENA_SEAT")) || func_29("ARENA_SEAT_PC")) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_29("ARENA_SEAT4")) || func_29("ARENA_SEAT_PC4")) || func_29("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_27(char* sParam0, int iParam1)//Position - 0xC2A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_28(char* sParam0, int iParam1, int iParam2)//Position - 0xC43
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_29(char* sParam0)//Position - 0xC62
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_30(var uParam0)//Position - 0xC75
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_31(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_31(int iParam0)//Position - 0xCCC
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_32(int* iParam0, int iParam1)//Position - 0xD07
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_33()//Position - 0xD17
{
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
}

bool func_34(var uParam0, int iParam1)//Position - 0xD23
{
	return BitTest(*uParam0, iParam1);
}

void func_35()//Position - 0xD31
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
		if (bVar2 != func_23() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
		{
			if (BitTest(Local_123[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_112.f_13, bVar2))
				{
					if (Local_123[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_123[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_112.f_2[iVar3] < 0)
								{
									Local_112.f_2[iVar3] = bVar2;
									MISC::SET_BIT(&(Local_112.f_13), bVar2);
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
								if (BitTest(Local_123[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_112.f_2[iVar4] = bVar2;
									MISC::SET_BIT(&(Local_112.f_13), bVar2);
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
			if (BitTest(Local_112.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_112.f_2[iVar5] == bVar0)
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_14[iVar5]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_14[iVar5]))
							{
								Local_112.f_2[iVar5] = -1;
								func_24(&(Local_112.f_14[iVar5]));
								MISC::CLEAR_BIT(&(Local_112.f_13), bVar0);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_112.f_2[iVar5] = -1;
								MISC::CLEAR_BIT(&(Local_112.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_36(var uParam0, var uParam1)//Position - 0xECF
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	STREAMING::REQUEST_ANIM_DICT(func_43());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_43()))
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
			if (func_37(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
					MISC::SET_BIT(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
				{
					Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					iVar1 = OBJECT::CREATE_OBJECT(iVar0, Var2, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var2, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar1, Var3, 2, true);
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

bool func_37(int iParam0, bool bParam1, bool bParam2)//Position - 0x103F
{
	return func_38(2, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1053
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_42(iParam0) - func_41(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_40(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_41(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_39(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1119
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

int func_40(int iParam0)//Position - 0x1153
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)//Position - 0x1199
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x1236
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

char* func_43()//Position - 0x1276
{
	if (func_44())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_44()//Position - 0x128E
{
	return func_45(PLAYER::PLAYER_ID());
}

int func_45(int iParam0)//Position - 0x129E
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_46()//Position - 0x12BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_112.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_112.f_2[iVar1] == -1 || Local_112.f_2[iVar1] == PLAYER::PLAYER_ID())
			{
				iVar0 = 0;
				if (Local_112.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_56()) && func_52())
					{
						ENTITY::CREATE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
					}
					else
					{
						ENTITY::REMOVE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), false);
					}
				}
				else
				{
					ENTITY::CREATE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
				}
			}
			else
			{
				ENTITY::CREATE_MODEL_HIDE(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
			}
			iVar1++;
		}
		Global_2787910 = iVar0;
	}
	else
	{
		Global_2787910 = 0;
	}
	if (Local_93.f_281.f_5 == 4)
	{
		if (!BitTest(Local_123[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			MISC::SET_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/]), 0);
			if (func_50())
			{
				MISC::SET_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/].f_1), 0);
			}
			else if (Local_93.f_281.f_9 == 1)
			{
				MISC::SET_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/].f_1), Local_93.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_112.f_13, PLAYER::PLAYER_ID()))
		{
			if (func_49() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_112.f_2[iVar2] == PLAYER::PLAYER_ID())
					{
						func_21(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(PLAYER::PLAYER_ID()))
	{
		if (func_50())
		{
			if (func_48() && CAM::IS_SCREEN_FADED_IN())
			{
				func_47(0);
			}
		}
		if (BitTest(Local_123[PLAYER::PLAYER_ID() /*2*/], 0))
		{
			if (!func_48() && func_49() < 0)
			{
				if (func_50())
				{
					func_47(0);
				}
				MISC::CLEAR_BIT(&(Local_123[PLAYER::PLAYER_ID() /*2*/]), 0);
				Local_123[PLAYER::PLAYER_ID() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_47(int iParam0)//Position - 0x14C7
{
	Global_2787909 = iParam0;
}

int func_48()//Position - 0x14D5
{
	if (Global_2725430 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_49()//Position - 0x14EA
{
	return Global_2725432;
}

bool func_50()//Position - 0x14F6
{
	return Global_2787909;
}

Vector3 func_51(int iParam0)//Position - 0x1502
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.301f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.268f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.243f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.213f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.178f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.153f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.123f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.087f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_52()//Position - 0x1604
{
	int iVar0;
	int iVar1;
	
	if (func_55() && !func_54())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_53())
		{
			return 1;
		}
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 > 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058069.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 23) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 24)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 25)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53()//Position - 0x16F5
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_54()//Position - 0x170F
{
	return Global_1574966;
}

var func_55()//Position - 0x171B
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_56()//Position - 0x1737
{
	if (func_58() && !func_57())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_57()//Position - 0x1765
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

var func_58()//Position - 0x1793
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_59(var uParam0, int iParam1)//Position - 0x17A8
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	
	func_147(uParam0);
	func_145(uParam0);
	func_133(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_32(&(uParam0->f_281), 11);
			func_132(uParam0, 1);
			break;
		
		case 1:
			if (func_131(uParam0))
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_132(uParam0, 2);
			}
			else if (func_50())
			{
				uParam0->f_281.f_7 = MISC::GET_GAME_TIMER();
				func_132(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_130(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_50())
			{
				if ((((((func_128(uParam0) || Global_1931426) || func_126(uParam0)) || !func_125(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())) || ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26630))
				{
					if (!Global_1931426 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID()))
					{
						iVar3 = PLAYER::GET_PLAYER_PED(iParam1->f_2[uParam0->f_281.f_2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, 2797.988f, -3954.898f, 181.0005f, 2797.949f, -3930.85f, 187.4114f, 30f, false, true, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, PLAYER::GET_PLAYER_NAME(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_25(uParam0, 1);
							func_132(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_25(uParam0, 1);
						func_132(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_124(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_30(&(uParam0->f_281.f_6));
					func_121(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 0, 256, 0);
						func_132(uParam0, 4);
					}
					else
					{
						func_132(uParam0, 3);
					}
				}
			}
			else if (func_50())
			{
				func_30(&(uParam0->f_281.f_6));
				func_132(uParam0, 4);
			}
			else
			{
				func_25(uParam0, 1);
				func_132(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_49() >= 0)
			{
				if (func_50())
				{
					uParam0->f_281.f_2 = func_49();
					if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
					}
					func_120(&(uParam0->f_281), 14);
				}
				func_121(uParam0);
				func_132(uParam0, 3);
			}
			if (!func_50())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != PLAYER::PLAYER_ID())
				{
					func_25(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
					func_4();
					func_132(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_119(uParam0, &sVar0);
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
				func_118();
				func_132(uParam0, 5);
			}
			break;
		
		case 5:
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			if (func_34(&(uParam0->f_281), 14))
			{
				bVar6 = true;
				if (func_114() >= 0)
				{
					bVar6 = false;
				}
				if (func_102(Var4, Var5.f_2, 0, 0, 0, 0, 1, bVar6, 1, 0, 0) && Global_2787912)
				{
					func_132(uParam0, 6);
				}
				else if (!Global_2787912)
				{
				}
			}
			else if (Global_2787912)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var4, 1f, 500, Var5.f_2, 0.05f);
				func_21(uParam0->f_281.f_2);
				func_132(uParam0, 6);
			}
			else if (!Global_2787912)
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
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			iVar7 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073);
			Var8 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			fVar9 = Var8.f_2;
			if (((iVar7 != 1 && iVar7 != 0) || func_101(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar9, 5f)) || func_34(&(uParam0->f_281), 14))
			{
				fVar10 = 1f;
				fVar11 = 0f;
				Var12 = { func_116(uParam0) };
				if (func_34(&(uParam0->f_281), 14))
				{
					fVar10 = 2f;
					fVar11 = 0.9f;
				}
				uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var12, func_115(uParam0), 2, true, false, 1f, fVar11, fVar10);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
				func_120(&(uParam0->f_281), 8);
				func_132(uParam0, 7);
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
			if (func_34(&(uParam0->f_281), 10))
			{
				func_32(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iVar13, "Exit_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
				}
				func_100(uParam0);
			}
			func_62(uParam0, iParam1);
			iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= 1f)
				{
					if (!Global_2787911)
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_1574965)
							{
								NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
					if (!func_48())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar14, "Enter_Menu", NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_20(uParam0->f_281.f_2);
						}
						else
						{
							func_20(uParam0->f_281.f_2 + 20);
						}
						Global_2787911 = 1;
					}
					else
					{
						Global_2787911 = 1;
					}
					func_60(uParam0, 0);
					func_119(uParam0, &sVar0);
					func_117(uParam0, &sVar1, 0);
					uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
					func_120(&(uParam0->f_281), 8);
					func_120(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1374875855) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) > 0.25f))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
					func_32(&(uParam0->f_281), 8);
				}
			}
			else if (!func_34(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_132(uParam0, 9);
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
					Var15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					Var16 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var15, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var16, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_132(uParam0, 9);
			break;
		
		case 9:
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			iVar17 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_281.f_1);
			iVar18 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548);
			if (iVar18 == 0 || iVar18 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar17))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar17) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
						if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(PLAYER::PLAYER_ID()))
						{
							func_21(-1);
							func_20(-1);
						}
						Global_2787911 = 0;
						MISC::CLEAR_BIT(&Global_2787913, 6);
						func_25(uParam0, 1);
						func_32(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2])))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
								Var19 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								Var20 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var19, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(iParam1->f_14[uParam0->f_281.f_2]), Var20, 2, true);
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
						func_132(uParam0, 0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -641050666))
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
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(PLAYER::PLAYER_ID()))
				{
					func_21(-1);
					func_20(-1);
				}
				Global_2787911 = 0;
				MISC::CLEAR_BIT(&Global_2787913, 6);
				func_25(uParam0, 1);
				func_32(&(uParam0->f_281), 14);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
				func_4();
				func_132(uParam0, 0);
			}
			break;
	}
}

void func_60(var uParam0, bool bParam1)//Position - 0x27A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_61(uParam0);
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
			iVar1 = func_61(uParam0);
			uParam0->f_281.f_9.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_61(uParam0);
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

int func_61(var uParam0)//Position - 0x28F4
{
	return uParam0->f_281.f_9.f_1;
}

void func_62(var uParam0, var uParam1)//Position - 0x2905
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
	
	if ((BitTest(Global_1965531, 7) || BitTest(Global_1965531, 3)) || func_22(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_281.f_5 == 7 && CAM::IS_SCREEN_FADED_OUT())
		{
			func_3(uParam0, uParam1);
			func_132(uParam0, 9);
		}
	}
	if (func_34(&(uParam0->f_281), 13))
	{
		iVar0 = func_92(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar1, "Select_Turret", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
			}
			MISC::SET_BIT(&Global_1965531, 9);
			func_32(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2787913, 7))
			{
				MISC::SET_BIT(&Global_2787913, 7);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_32(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			func_25(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_34(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1965531, 23) && !func_91())) || Global_2789734) || Global_2789737) || BitTest(Global_1958711, 13)) || BitTest(Global_1965531, 14)) || BitTest(Global_1958711, 9)) || BitTest(Global_2787913, 0)) || BitTest(Global_1965531, 6)) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9)) || BitTest(Global_1965531, 2)) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5)) || func_22(PLAYER::PLAYER_ID())) || func_50()) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 19)) || !CAM::IS_SCREEN_FADED_IN()) || func_88(PLAYER::PLAYER_ID())) || Global_2787934 != 0)
		{
			func_25(uParam0, 1);
			if (!BitTest(Global_1965531, 23))
			{
				if (!func_34(&(uParam0->f_281), 15) && Global_2787934 == 0)
				{
					func_87("ARENA SPECTATOR BOX TABLETS");
					MISC::SET_BIT(&Global_2787913, 8);
					func_120(&(uParam0->f_281), 15);
				}
			}
			else if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if (func_86(uParam0))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				MISC::CLEAR_BIT(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_34(&(uParam0->f_281), 15))
			{
				func_87("ARENA SPECTATOR BOX TABLETS");
				MISC::SET_BIT(&Global_2787913, 8);
				func_120(&(uParam0->f_281), 15);
			}
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::DISABLE_CONTROL_ACTION(0, 24, true);
			PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			PAD::DISABLE_CONTROL_ACTION(0, 142, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 263, true);
			PAD::DISABLE_CONTROL_ACTION(0, 264, true);
			PAD::DISABLE_CONTROL_ACTION(0, 143, true);
			PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			bVar2 = false;
			if (func_85())
			{
				bVar2 = true;
			}
			if (func_27("ARENA_VIP_CASH1", Global_262145.f_26633))
			{
				MISC::CLEAR_BIT(&Global_2787913, 5);
			}
			if (func_27("ARENA_VIP_CASH2", Global_262145.f_26634))
			{
				MISC::CLEAR_BIT(&Global_2787913, 4);
			}
			if (func_29("ARENA_VIP_ABIL"))
			{
				MISC::CLEAR_BIT(&Global_2787913, 7);
			}
			if (BitTest(Global_2787913, 4) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH2", Global_262145.f_26634, 2000);
			}
			if (BitTest(Global_2787913, 5) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH1", Global_262145.f_26633, 2000);
			}
			if (BitTest(Global_2787913, 7) && uParam0->f_281.f_6 == -1)
			{
				func_83("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2787913, 4) || BitTest(Global_2787913, 5)) || BitTest(Global_2787913, 7))
			{
				func_25(uParam0, 1);
			}
			if ((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !Global_1931426) && !func_34(&(uParam0->f_281), 0)) && !func_34(&(uParam0->f_281), 4)) && !func_82()) && !func_80(1)) && uParam0->f_281.f_9.f_2 != 3) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !func_79())
			{
				if (bVar2)
				{
					if (func_56() && !func_52())
					{
						if (((((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
						{
							func_25(uParam0, 1);
						}
					}
					else if (func_29("ARENA_SEAT_PC") || func_29("ARENA_SEAT"))
					{
						func_25(uParam0, 1);
					}
				}
				if ((((((!func_26() && !BitTest(Global_2787913, 4)) && !BitTest(Global_2787913, 5)) && !BitTest(Global_2787913, 7)) && !func_27("ARENA_VIP_CASH1", Global_262145.f_26633)) && !func_27("ARENA_VIP_CASH2", Global_262145.f_26634)) && !func_29("ARENA_VIP_ABIL"))
				{
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						if (bVar2)
						{
							if (func_56() && !func_52())
							{
								if ((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634))
								{
									func_25(uParam0, 1);
								}
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_29("ARENA_SEAT_PC"))
								{
									func_25(uParam0, 1);
								}
								if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_78("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634);
								}
								else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC2", Global_262145.f_26633, -1);
								}
								else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC3", Global_262145.f_26634, -1);
								}
								else
								{
									func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_56() && !func_52())
						{
							if ((func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
							{
								func_25(uParam0, 1);
							}
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_29("ARENA_SEAT"))
							{
								func_25(uParam0, 1);
							}
							if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_78("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634);
							}
							else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT2", Global_262145.f_26633, -1);
							}
							else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT3", Global_262145.f_26634, -1);
							}
							else
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_56() && !func_52())
					{
						if (((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(PLAYER::PLAYER_ID()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_77())
							{
								func_25(uParam0, 1);
								MISC::SET_BIT(&Global_1965531, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar4, "Select_Drone", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 225) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_76())
							{
								func_25(uParam0, 1);
								MISC::SET_BIT(&Global_1965531, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar5, "Select_RC_Car", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_73())
							{
								func_25(uParam0, 1);
								MISC::SET_BIT(&Global_1965531, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar6, "Select_Trap_Cam", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 222) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 225)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(PLAYER::PLAYER_ID())) && bVar2)
						{
							if (func_72())
							{
								func_25(uParam0, 1);
								if (func_34(&(uParam0->f_281), 15))
								{
									func_33();
									MISC::CLEAR_BIT(&Global_2787913, 8);
									func_32(&(uParam0->f_281), 15);
								}
								func_120(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									MISC::SET_BIT(&Global_2787913, 7);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					else
					{
						if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && !Global_2789737) && !Global_2789734)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iVar7, "Exit_Menu", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 224)) && bVar2) && !Global_262145.f_26631)
						{
							if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26633, false, false, true, -1, 0) || BitTest(Global_2787913, 3))
							{
								func_25(uParam0, 1);
								Global_2789737 = 1;
								Global_2789734 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iVar8, "Select_Live_Stream", NETWORK::NET_TO_OBJ(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
								func_70(73, -1);
								func_68();
								func_63();
							}
							else if (!BitTest(Global_2787913, 5))
							{
								MISC::SET_BIT(&Global_2787913, 5);
							}
						}
					}
				}
			}
		}
	}
	func_32(&(uParam0->f_281), 9);
}

void func_63()//Position - 0x3785
{
	func_64(1, 7986);
}

void func_64(int iParam0, int iParam1)//Position - 0x3795
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_67(iParam1, -1, 0);
	func_65(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_65(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x37BE
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_66(var uParam0)//Position - 0x37EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x3822
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_68()//Position - 0x385F
{
	int iVar0;
	
	iVar0 = func_69(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_3), 13);
	}
}

int func_69(int iParam0, int iParam1)//Position - 0x38AC
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_66(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1)//Position - 0x38D8
{
	int iVar0;
	
	iVar0 = func_69(iParam0, func_66(iParam1));
	iVar0++;
	func_71(iParam0, iVar0, iParam1);
}

void func_71(int iParam0, int iParam1, var uParam2)//Position - 0x38FE
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_66(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_72()//Position - 0x3922
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
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 26))
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

int func_73()//Position - 0x3992
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_74())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 25))
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

int func_74()//Position - 0x3A0E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_63310 - 1))
	{
		if (!func_75(Global_4980736.f_63312[iVar0 /*183*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(struct<3> Param0)//Position - 0x3A4F
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_76()//Position - 0x3A79
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
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 24))
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

int func_77()//Position - 0x3AEA
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
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 23))
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

void func_78(char* sParam0, int iParam1, int iParam2)//Position - 0x3B5B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
}

bool func_79()//Position - 0x3B7D
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_80(bool bParam0)//Position - 0x3B92
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_81(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x3C7D
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()//Position - 0x3CDA
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_83(char* sParam0, int iParam1)//Position - 0x3CF4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_84(char* sParam0, int iParam1, int iParam2)//Position - 0x3D0B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_85()//Position - 0x3D28
{
	if (Global_2725430 >= 0 && Global_2725430 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_86(var uParam0)//Position - 0x3D4A
{
	return func_34(&(uParam0->f_281), 9);
}

void func_87(char* sParam0)//Position - 0x3D5D
{
	PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
}

bool func_88(int iParam0)//Position - 0x3D6C
{
	return func_89(iParam0) != 0;
}

int func_89(int iParam0)//Position - 0x3D7C
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_90())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_1;
}

int func_90()//Position - 0x3DAE
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
	{
		return 0;
	}
	return 1;
}

int func_91()//Position - 0x3DE8
{
	if (((((func_29("ARENA_SEAT_GM0") || func_29("ARENA_SEAT_GM1")) || func_29("TAGTM_HELP_2O")) || func_29("TAGTM_HELP_2P")) || func_29("TAGTM_HELP_2Pi")) || func_29("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0)//Position - 0x3E46
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_98(1, 0, 0, 1, 1);
	}
	iVar0 = func_97(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_93(0, -1, -1);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1, int iParam2)//Position - 0x3E8B
{
	if (iParam0 != 0 && Global_2787937.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2787937.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2787937 != iParam2)
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	func_95();
	func_94(3);
	Global_2787937.f_1 = 0;
	Global_2787937.f_2 = -1;
	Global_2787937 = -1;
	Global_2787933 = 0;
	Global_2787935 = 0;
	Global_2787943 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787936 = 1;
	return 1;
}

void func_94(int iParam0)//Position - 0x3F1B
{
	Global_2787932 = iParam0;
}

void func_95()//Position - 0x3F29
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("turret_cam_script")) > 0)
	{
		Global_2787945 = 1;
	}
}

bool func_96()//Position - 0x3F43
{
	return (Global_2787932 == 3 || Global_2787932 == 0);
}

int func_97(int iParam0)//Position - 0x3F5D
{
	if (Global_2787943 == iParam0)
	{
		if (Global_2787932 == 2)
		{
			if (Global_2787943 == Global_2787944)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2787932 == 0)
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

var func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3FA3
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_94(1);
	Global_2787937 = { Var0 };
	Global_2787933 = iParam3;
	Global_2787943 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787935 = 0;
	func_99(&Global_2787935, 0, !bParam4);
	Global_2787936 = 1;
	return Global_2787943;
}

void func_99(int* iParam0, int iParam1, bool bParam2)//Position - 0x3FFB
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

void func_100(var uParam0)//Position - 0x4020
{
	char* sVar0;
	
	uParam0->f_281.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
	func_119(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_281.f_1);
	func_30(&(uParam0->f_281.f_6));
	MISC::SET_BIT(&Global_2787913, 6);
	func_32(&(uParam0->f_281), 14);
	func_132(uParam0, 9);
}

int func_101(float fParam0, float fParam1, float fParam2)//Position - 0x40AB
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

int func_102(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)//Position - 0x4131
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23011.f_6 = 1;
	if (Global_2703735.f_910 && Global_2703735.f_918)
	{
		func_111(0, bParam7);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7)
	{
		if (Global_2703735.f_910)
		{
			func_111(0, bParam7);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_110(0))
	{
		if (func_109(PLAYER::PLAYER_ID(), 1, 0) && !(func_55() || func_108()))
		{
			if (((bParam7 && func_107(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
			{
			}
			else if (func_106() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2703735.f_910 && !bParam9)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (MISC::ABSF(fVar2) < 1f)
			{
				Global_2703735.f_910 = 0;
				Global_2703735.f_911 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703735.f_912 || !Param0.f_1 == Global_2703735.f_912.f_1) || !Param0.f_2 == Global_2703735.f_912.f_2) || !fParam1 == Global_2703735.f_915)
	{
		if (Global_2703735.f_910 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703735.f_916) < func_105(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2703735.f_911 = 1;
		}
		else
		{
			Global_2703735.f_911 = 0;
		}
		Global_2703735.f_912 = { Param0 };
		Global_2703735.f_915 = fParam1;
		Global_2703735.f_910 = 0;
	}
	if (bParam2)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2703735.f_910 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(Global_100493.f_1393[44], 16))
			{
				func_104(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2667225.f_502)))
			{
				Global_2667225.f_502 = 0;
			}
		}
		if (bParam2)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2703735.f_917 = 0;
				}
			}
		}
		if (Global_2703735.f_917 > -1)
		{
			Global_2703735.f_916 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_910 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, true);
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
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				}
				func_111(bParam4, bParam7);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam1, bParam2, bParam8, false);
			}
			Global_2703735.f_916 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_910 = 1;
		}
	}
	if (Global_2703735.f_910)
	{
		Global_23011.f_6 = 1;
		Global_2703735.f_916 = NETWORK::GET_NETWORK_TIME();
		if (Global_2703735.f_917 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_103(&(Global_2703735.f_917), Param0, fParam1, iVar0))
			{
				func_111(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2703735.f_912) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_111(bParam4, bParam7);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam10 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, true);
						Global_2703735.f_918 = 1;
						return 0;
					}
				}
				func_111(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_103(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x4645
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_919) && !ENTITY::IS_ENTITY_DEAD(Global_2703735.f_919, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2703735.f_919);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703735.f_919 = iParam3;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2703735.f_919);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_919))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_919, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2703735.f_919, fParam2);
					ENTITY::SET_ENTITY_COORDS(Global_2703735.f_919, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_104(int iParam0)//Position - 0x46E8
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_105(bool bParam0)//Position - 0x473D
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

int func_106()//Position - 0x4760
{
	return Global_1574991;
}

int func_107(int iParam0, bool bParam1, bool bParam2)//Position - 0x476C
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

bool func_108()//Position - 0x47CC
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

int func_109(int iParam0, bool bParam1, int iParam2)//Position - 0x47F5
{
	if (Global_2689235[iParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[iParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[iParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_110(bool bParam0)//Position - 0x484C
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_111(bool bParam0, bool bParam1)//Position - 0x485D
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
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14) && !func_113())
	{
		func_112();
	}
}

void func_112()//Position - 0x48CD
{
	Global_2824571.f_92 = 1;
}

int func_113()//Position - 0x48DC
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_110(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_114()//Position - 0x4913
{
	return Global_2725430;
}

Vector3 func_115(var uParam0)//Position - 0x491F
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_116(var uParam0)//Position - 0x4938
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_117(var uParam0, char* sParam1, bool bParam2)//Position - 0x494F
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

void func_118()//Position - 0x4B90
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_119(var uParam0, char* sParam1)//Position - 0x4BAF
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
	if (func_44())
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

void func_120(int* iParam0, int iParam1)//Position - 0x4C9F
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_121(var uParam0)//Position - 0x4CAF
{
	uParam0->f_281.f_9 = func_123((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_122(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_122(var uParam0)//Position - 0x4CF0
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_44())
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

int func_123(int iParam0)//Position - 0x4D68
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

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x4D8C
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_30(uParam0);
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
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_125(var uParam0)//Position - 0x4EB7
{
	Stack.Push(!func_34(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_126(var uParam0)//Position - 0x4EEA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (iVar1 != PLAYER::PLAYER_ID() && func_107(iVar1, 1, 1))
			{
				if (func_130(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_127(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x4F68
{
	if (iParam0 != func_23())
	{
		return Global_1853348[iParam0 /*834*/].f_827;
	}
	return -1;
}

bool func_128(var uParam0)//Position - 0x4F89
{
	if (((BitTest(Global_1965531, 6) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_129(int iParam0, struct<3> Param1)//Position - 0x4FCE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_101(ENTITY::GET_ENTITY_HEADING(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_130(int iParam0, var uParam1)//Position - 0x5000
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_131(var uParam0)//Position - 0x5025
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_130(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
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

void func_132(var uParam0, int iParam1)//Position - 0x508E
{
	uParam0->f_281.f_5 = iParam1;
}

void func_133(var uParam0)//Position - 0x509F
{
	int iVar0;
	
	if (BitTest(Global_1965531, 7))
	{
		func_139(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_139(1);
		
		case 7:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
			if (!func_138())
			{
				func_137();
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			func_135(1);
			func_134();
			break;
	}
}

void func_134()//Position - 0x513E
{
	Global_23011.f_6 = 1;
}

void func_135(bool bParam0)//Position - 0x514C
{
	if (bParam0)
	{
		if (func_136())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

bool func_136()//Position - 0x5171
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_137()//Position - 0x5182
{
	MISC::SET_BIT(&Global_8137, 4);
}

bool func_138()//Position - 0x5192
{
	return BitTest(Global_1958711, 19);
}

void func_139(int iParam0)//Position - 0x51A1
{
	if (func_138())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_144(0))
		{
			func_140(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_140(int iParam0)//Position - 0x51D4
{
	if (func_138())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_143())
		{
			func_142(1, 1);
		}
		else
		{
			func_142(0, 0);
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
	if (!func_141())
	{
		Global_20266.f_1 = 3;
	}
}

int func_141()//Position - 0x525E
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_142(bool bParam0, bool bParam1)//Position - 0x5285
{
	if (bParam0)
	{
		if (func_144(0))
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

bool func_143()//Position - 0x52F9
{
	return BitTest(Global_1958711, 5);
}

int func_144(int iParam0)//Position - 0x5307
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

void func_145(var uParam0)//Position - 0x535E
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		CAM::_DISABLE_CAM_COLLISION_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_146());
		uParam0->f_281.f_8 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_281.f_8) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_146());
	}
}

float func_146()//Position - 0x53BD
{
	return 0.13f;
}

void func_147(var uParam0)//Position - 0x53CA
{
	func_148(&(uParam0->f_281), 4, func_149());
	func_148(&(uParam0->f_281), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	func_148(&(uParam0->f_281), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	func_148(&(uParam0->f_281), 0, func_144(0));
	func_148(&(uParam0->f_281), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_148(int* iParam0, int iParam1, bool bParam2)//Position - 0x5427
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

bool func_149()//Position - 0x544B
{
	return Global_75485;
}

int func_150()//Position - 0x5457
{
	if ((((!func_159() && !func_50()) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 3)) && !func_22(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 11) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2787907)
	{
		return 1;
	}
	return 0;
}

int func_151()//Position - 0x54DE
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()//Position - 0x5562
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()//Position - 0x5595
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()//Position - 0x55B9
{
	return Global_31959;
}

bool func_155()//Position - 0x55C4
{
	return Global_2714762.f_698;
}

int func_156(int iParam0)//Position - 0x55D3
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()//Position - 0x55EA
{
	return Global_2725403;
}

bool func_158()//Position - 0x55F6
{
	return Global_2714762.f_693;
}

int func_159()//Position - 0x5605
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2797.988f, -3943.898f, 181.0005f, 2797.949f, -3919.85f, 187.4114f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_160()//Position - 0x5643
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_box_bench_seats", -1, true, 0))
	{
		return 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_168(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 25, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_123, 65, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_167();
	func_161();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_112.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_112.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_112.f_0 = 1;
		}
	}
	return 1;
}

void func_161()//Position - 0x56C7
{
	func_162(0, &Local_93, 0, 2);
	func_162(1, &Local_93, 1, 2);
	func_162(2, &Local_93, 2, 2);
	func_162(3, &Local_93, 3, 2);
	func_162(4, &Local_93, 4, 2);
	func_162(5, &Local_93, 5, 2);
	func_162(6, &Local_93, 6, 2);
	func_162(7, &Local_93, 7, 2);
	func_162(8, &Local_93, 8, 2);
	func_162(9, &Local_93, 9, 2);
	func_162(10, &Local_93, 10, 1);
	func_162(11, &Local_93, 11, 1);
	func_162(12, &Local_93, 12, 1);
	func_162(13, &Local_93, 13, 1);
	func_162(14, &Local_93, 14, 1);
	func_162(15, &Local_93, 15, 1);
	func_162(16, &Local_93, 16, 1);
	func_162(17, &Local_93, 17, 1);
	func_162(18, &Local_93, 18, 1);
	func_162(19, &Local_93, 19, 1);
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x579B
{
	struct<3> Var0;
	float fVar1;
	
	func_166(iParam0, &Var0, &fVar1);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar1 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_164(func_165(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_164(func_163(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_163()//Position - 0x5822
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_164(struct<3> Param0, float fParam1)//Position - 0x5835
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_165()//Position - 0x5879
{
	return -0.5f, -0.5f, 0f;
}

void func_166(int iParam0, var uParam1, var uParam2)//Position - 0x588C
{
	if (func_44())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.885f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.857f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.821f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.794f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.764f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.729f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.706f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.677f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.638f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.611f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
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
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_167()//Position - 0x5DAC
{
}

int func_168(int iParam0, int iParam1, bool bParam2)//Position - 0x5DB4
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
		if (!func_110(0))
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
				if (func_158())
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
				if (func_156(157))
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

