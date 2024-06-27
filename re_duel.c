#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	struct<3> Local_41 = { 0, 0, 0 } ;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<5> Local_47[8];
	struct<4> Local_88[8];
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	float fLocal_142 = 0f;
	struct<3> Local_143 = { 0, 0, 0 } ;
	float fLocal_146 = 0f;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	float fLocal_162 = 0f;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_121 = { 0f, 0f, 0f };
	Local_127 = { 1064.8711f, 2670.8572f, 38.5511f };
	Local_130 = { 926.3422f, 2708.926f, 39.5394f };
	Local_133 = { 1140.03f, 2698.027f, 37.1568f };
	Local_136 = { Local_121 };
	fLocal_162 = 0f;
	iLocal_163 = joaat("dukes2");
	iLocal_164 = joaat("phantom");
	iLocal_165 = joaat("trailers2");
	iLocal_166 = joaat("rancherxl");
	iLocal_167 = joaat("A_M_M_Hillbilly_01");
	iLocal_168 = joaat("A_M_M_Hillbilly_02");
	iLocal_171 = 3;
	Local_124 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (func_228(Local_88[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[0 /*4*/], 2);
		}
		func_201(1, 0);
	}
	if (func_159(Local_124, 31, 0, 0, 0))
	{
		func_156(31);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_155(1)) || iLocal_153 > 2)
		{
			if (func_155(13))
			{
				func_124();
			}
			switch (iLocal_45)
			{
				case 0:
					func_61();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_228(Local_88[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[0 /*4*/], 2);
			}
			func_201(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1AD
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_153)
			{
				case 0:
					iLocal_46 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1F1
{
	func_58(64, 1);
	func_58(65, 1);
	func_32(Local_88[0 /*4*/], 145);
	func_6(-1, 0);
	func_3();
	func_201(1, 0);
}

void func_3()//Position - 0x222
{
	func_4();
}

int func_4()//Position - 0x22F
{
	if (func_5(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_5(bool bParam0)//Position - 0x27A
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_6(int iParam0, int iParam1)//Position - 0x2A2
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_17("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113957 = iParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_7(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)//Position - 0x3A4
{
	Global_113955 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)//Position - 0x3B2
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_12((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()//Position - 0x498
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_11(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()//Position - 0x956
{
	return Global_32948;
}

int func_11(int iParam0, int iParam1)//Position - 0x961
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

void func_12(int iParam0, bool bParam1, int iParam2)//Position - 0x9B2
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_13()//Position - 0x9D0
{
	return Global_1574926;
}

int func_14(int iParam0, int iParam1)//Position - 0x9DC
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_15(int iParam0)//Position - 0xD50
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_16(int iParam0)//Position - 0xD7F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xDC1
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xDE2
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_19();
	}
}

void func_19()//Position - 0xFB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_20()//Position - 0x10CC
{
	func_21();
	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_21()//Position - 0x1112
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_22(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_23(Global_113969.f_2366.f_539.f_4321))
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

bool func_22(int iParam0)//Position - 0x120F
{
	return Global_44042 == iParam0;
}

bool func_23(int iParam0)//Position - 0x121D
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x1229
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x1266
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)//Position - 0x128B
{
	return Global_2169[iParam0 /*29*/];
}

int func_27(int iParam0)//Position - 0x129A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)//Position - 0x12DA
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)//Position - 0x12F5
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_30()//Position - 0x13A6
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_31(Var0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x13C3
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_32(int iParam0, int iParam1)//Position - 0x159D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_38(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_33(iParam0, &(Global_113969.f_32753.f_5510));
}

void func_33(int iParam0, var uParam1)//Position - 0x179F
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_37(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_36(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_35(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_34(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_34(int iParam0)//Position - 0x1A48
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_35(int iParam0, var uParam1, var uParam2)//Position - 0x1AF8
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)//Position - 0x1CEB
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_37(var uParam0)//Position - 0x1D0B
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_38(int iParam0)//Position - 0x1DBB
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_56(iParam0, 0, 0)) || func_56(iParam0, 1, 0)) || func_56(iParam0, 2, 0)) || func_55(iParam0) != 145) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || func_51(iParam0)) || !func_39(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_53(iParam0))
		{
		}
		if (func_53(iParam0))
		{
		}
		if (func_56(iParam0, 0, 0))
		{
		}
		if (func_56(iParam0, 1, 0))
		{
		}
		if (func_56(iParam0, 2, 0))
		{
		}
		if (func_55(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_39(int iParam0)//Position - 0x1E98
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_40(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_40(int iParam0, bool bParam1, int iParam2)//Position - 0x2056
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_50())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_49() && !func_48()) && !func_47()) && !func_46()) && !func_50())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_45() || MISC::IS_PC_VERSION()) || func_44())
					{
					}
					else if (!func_47())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_43(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_41(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_41(int iParam0)//Position - 0x21DB
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_42())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_42()//Position - 0x229F
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_43(int iParam0, int iParam1)//Position - 0x22B6
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("vorschlaghammer"):
			iVar1 = Global_262145.f_35588[0] /* Tunable: LAUNCHPOSIX_VEHICLE_0 */;
			break;
		
		case joaat("driftvorschlag"):
			iVar1 = Global_262145.f_35588[1] /* Tunable: LAUNCHPOSIX_VEHICLE_1 */;
			break;
		
		case joaat("driftnebula"):
			iVar1 = Global_262145.f_35588[2] /* Tunable: LAUNCHPOSIX_VEHICLE_2 */;
			break;
		
		case joaat("driftcypher"):
			iVar1 = Global_262145.f_35588[3] /* Tunable: LAUNCHPOSIX_VEHICLE_3 */;
			break;
		
		case joaat("polimpaler5"):
			iVar1 = Global_262145.f_35588[4] /* Tunable: LAUNCHPOSIX_VEHICLE_4 */;
			break;
		
		case joaat("driftsentinel"):
			iVar1 = Global_262145.f_35588[5] /* Tunable: LAUNCHPOSIX_VEHICLE_5 */;
			break;
		
		case joaat("castigator"):
			iVar1 = Global_262145.f_35588[6] /* Tunable: LAUNCHPOSIX_VEHICLE_6 */;
			break;
		
		case joaat("polgreenwood"):
			iVar1 = Global_262145.f_35588[7] /* Tunable: LAUNCHPOSIX_VEHICLE_7 */;
			break;
		
		case joaat("pipistrello"):
			iVar1 = Global_262145.f_35588[8] /* Tunable: LAUNCHPOSIX_VEHICLE_8 */;
			break;
		
		case joaat("envisage"):
			iVar1 = Global_262145.f_35588[9] /* Tunable: LAUNCHPOSIX_VEHICLE_9 */;
			break;
		
		case joaat("poldorado"):
			iVar1 = Global_262145.f_35588[10] /* Tunable: LAUNCHPOSIX_VEHICLE_10 */;
			break;
		
		case joaat("paragon3"):
			iVar1 = Global_262145.f_35588[11] /* Tunable: LAUNCHPOSIX_VEHICLE_11 */;
			break;
		
		case joaat("dominator10"):
			iVar1 = Global_262145.f_35588[12] /* Tunable: LAUNCHPOSIX_VEHICLE_12 */;
			break;
		
		case joaat("poldominator10"):
			iVar1 = Global_262145.f_35588[13] /* Tunable: LAUNCHPOSIX_VEHICLE_13 */;
			break;
		
		case joaat("pizzaboy"):
			iVar1 = Global_262145.f_35588[14] /* Tunable: LAUNCHPOSIX_VEHICLE_14 */;
			break;
		
		case joaat("coquette5"):
			iVar1 = Global_262145.f_35588[15] /* Tunable: LAUNCHPOSIX_VEHICLE_15 */;
			break;
		
		case joaat("niobe"):
			iVar1 = Global_262145.f_35588[16] /* Tunable: LAUNCHPOSIX_VEHICLE_16 */;
			break;
		
		case joaat("eurosx32"):
			iVar1 = Global_262145.f_35588[17] /* Tunable: LAUNCHPOSIX_VEHICLE_17 */;
			break;
		
		case joaat("yosemite1500"):
			iVar1 = Global_262145.f_35588[18] /* Tunable: LAUNCHPOSIX_VEHICLE_18 */;
			break;
		
		case joaat("polimpaler6"):
			iVar1 = Global_262145.f_35588[19] /* Tunable: LAUNCHPOSIX_VEHICLE_19 */;
			break;
		
		case joaat("policet3"):
			iVar1 = Global_262145.f_35588[20] /* Tunable: LAUNCHPOSIX_VEHICLE_20 */;
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x2507
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_45()//Position - 0x251D
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_46()//Position - 0x2533
{
	return 0;
}

int func_47()//Position - 0x253C
{
	return 1;
}

int func_48()//Position - 0x2545
{
	return 1;
}

int func_49()//Position - 0x254E
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x2567
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

int func_51(int iParam0)//Position - 0x261F
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_40(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x2665
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

int func_53(int iParam0)//Position - 0x26A0
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

int func_54(int iParam0)//Position - 0x271C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x2804
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_56(int iParam0, int iParam1, bool bParam2)//Position - 0x2867
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_57(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x28D5
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_58(int iParam0, bool bParam1)//Position - 0x29A8
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_60(iParam0, 0))
		{
			func_59(iParam0, 1, 0);
			func_59(iParam0, 2, 0);
			func_59(iParam0, 3, 0);
			func_59(iParam0, 4, 0);
			func_59(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_59(iParam0, 0, 0);
	}
}

void func_59(int iParam0, int iParam1, bool bParam2)//Position - 0x2A05
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_32753[iParam0]), iParam1);
	}
}

int func_60(int iParam0, int iParam1)//Position - 0x2A40
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_61()//Position - 0x2A60
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	float fVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	
	switch (iLocal_46)
	{
		case 0:
			func_112();
			func_111(13);
			STREAMING::REQUEST_MODEL(iLocal_163);
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_153)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_163))
					{
						func_107(0, Local_121, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_163);
						STREAMING::REQUEST_MODEL(iLocal_164);
						STREAMING::REQUEST_MODEL(iLocal_167);
						STREAMING::REQUEST_MODEL(iLocal_165);
						func_97(1);
						iLocal_153++;
					}
					break;
				
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_164) && STREAMING::HAS_MODEL_LOADED(iLocal_167)) && STREAMING::HAS_MODEL_LOADED(iLocal_165))
					{
						func_111(9);
						iLocal_153++;
					}
					break;
				
				case 2:
					if ((func_228(Local_88[3 /*4*/]) && func_228(Local_47[0 /*5*/])) && func_96())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_88[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (Var0.f_0 <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.5872f, 38.612366f, 955.0941f, 2716.872f, 50.670456f, 71f, false, true, 0))
						{
							if ((((func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_90(3, 0, 4, 1);
								iLocal_153 = 4;
							}
						}
					}
					if (((!func_155(8) && func_228(Local_88[4 /*4*/])) && func_228(Local_47[1 /*5*/])) && func_96())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_88[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (Var0.f_0 >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.6704f, 36.77993f, 1109.166f, 2665.5308f, 48.503548f, 71f, false, true, 0))
						{
							if ((((func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[4 /*4*/], 0f, 15f, 0f), 2f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_90(4, 1, 3, 0);
								iLocal_153 = 4;
							}
						}
					}
					if (!func_155(8) && func_88())
					{
						func_111(6);
						if (func_228(Local_47[0 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[0 /*5*/].f_3 = 3;
						}
						if (func_228(Local_47[1 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[1 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[1 /*5*/].f_3 = 3;
						}
						if (func_228(Local_88[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[3 /*4*/], 1);
						}
						if (func_228(Local_88[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[4 /*4*/], 1);
						}
						iLocal_153++;
					}
					break;
				
				case 3:
					if ((!func_228(Local_47[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1)) && (!func_228(Local_47[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1)))
					{
						iLocal_153++;
					}
					break;
				
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_169);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_169, joaat("PLAYER"));
					if (func_228(Local_88[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[3 /*4*/], 1);
					}
					if (func_228(Local_88[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_166);
					SYSTEM::SETTIMERA(0);
					iLocal_153++;
					break;
				
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_166))
					{
						STREAMING::REQUEST_MODEL(iLocal_167);
						iLocal_153++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_167))
					{
						STREAMING::REQUEST_MODEL(iLocal_168);
						iLocal_153++;
					}
					break;
				
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_166) && STREAMING::HAS_MODEL_LOADED(iLocal_167)) && STREAMING::HAS_MODEL_LOADED(iLocal_168))
					{
						func_107(5, Local_121, -1082130432, 0);
						func_107(6, Local_121, -1082130432, 0);
						func_107(7, Local_121, -1082130432, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
						func_83(2, 0, Local_121, -1082130432);
						func_83(3, 0, Local_121, -1082130432);
						func_83(4, 0, Local_121, -1082130432);
						func_83(5, 0, Local_121, -1082130432);
						func_83(6, 0, Local_121, -1082130432);
						func_83(7, 0, Local_121, -1082130432);
						if (func_155(10) && func_155(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
						iLocal_153++;
					}
					break;
				
				case 8:
					if (!func_228(Local_47[0 /*5*/]) && !func_228(Local_47[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && func_82(PLAYER::PLAYER_PED_ID(), Local_127, 1) >= 150f)
					{
						iLocal_153++;
					}
					break;
				
				case 9:
					if (func_96() || (func_228(Local_88[0 /*4*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_88[0 /*4*/], 1) <= 35f))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var3, iVar15, &Var6, 1, 5f, 0f))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var6, &uVar17, &uVar18);
							if (((uVar18 & 4 == 0 && (!func_80() || uVar18 & 8 == 0)) && (func_79() || uVar18 & 1 == 0)) && !func_78(Var6, 1084227584))
							{
								fVar16 = func_77(Var6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
								Var9 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, fVar16, 6f, -6f, 0f) };
								Var12 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, fVar16, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(Var6, 7f) && !CAM::IS_SPHERE_VISIBLE(Var9, 7f)) && !CAM::IS_SPHERE_VISIBLE(Var12, 7f)) && !func_78(Var9, 1084227584)) && !func_78(Var12, 1084227584))
								{
									func_76(Local_88[5 /*4*/], Var6);
									func_76(Local_88[6 /*4*/], Var9);
									func_76(Local_88[7 /*4*/], Var12);
									iLocal_147 = MISC::GET_GAME_TIMER();
									iVar19 = 2;
									while (iVar19 <= 7)
									{
										if (func_228(Local_47[iVar19 /*5*/]))
										{
											Local_47[iVar19 /*5*/].f_1 = func_73(Local_47[iVar19 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar19 /*5*/], false))
											{
												if (func_72(Local_47[iVar19 /*5*/], 0) == -1)
												{
													HUD::SET_BLIP_SCALE(Local_47[iVar19 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_47[iVar19 /*5*/].f_1, 0);
													HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar19 /*5*/].f_1, true);
												}
											}
										}
										iVar19++;
									}
									func_111(2);
									func_111(7);
									iLocal_157 = (MISC::GET_GAME_TIMER() + 60000);
									func_71(6);
									iLocal_153++;
								}
							}
						}
					}
					break;
				
				case 10:
					if (((((func_228(Local_47[2 /*5*/]) || func_228(Local_47[3 /*5*/])) || func_228(Local_47[4 /*5*/])) || func_228(Local_47[5 /*5*/])) || func_228(Local_47[6 /*5*/])) || func_228(Local_47[7 /*5*/]))
					{
						if (func_155(7))
						{
							if (func_228(Local_88[5 /*4*/]))
							{
								func_64(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_148);
							}
							if (func_228(Local_88[6 /*4*/]))
							{
								func_64(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_149);
							}
							if (func_228(Local_88[7 /*4*/]))
							{
								func_64(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_150);
							}
						}
					}
					else if (!func_228(Local_47[0 /*5*/]) && !func_228(Local_47[1 /*5*/]))
					{
						if (func_228(Local_88[0 /*4*/]))
						{
							iLocal_46 = 2;
						}
						else
						{
							func_63();
						}
					}
					break;
			}
			break;
		
		case 2:
			func_62(1);
			break;
	}
}

void func_62(int iParam0)//Position - 0x3325
{
	iLocal_153 = 0;
	iLocal_46 = 0;
	iLocal_45 = iParam0;
}

void func_63()//Position - 0x3337
{
	if (func_228(Local_88[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[0 /*4*/], 2);
	}
	func_201(1, 0);
}

void func_64(int iParam0, int iParam1, var uParam2)//Position - 0x335B
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iParam0 /*4*/], false))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_88[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_70(Local_88[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (func_82(iParam1, Local_139, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				Local_143 = { Local_139 };
				fLocal_146 = fLocal_142;
				Local_139 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				fLocal_142 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_88[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_147) > 1500) && func_81(Local_88[iParam0 /*4*/], iParam1, 1) > func_82(iParam1, Local_143, 1)) && func_69(iParam0)) && func_82(iParam1, Local_143, 1) >= fVar0) && func_81(Local_88[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_68(Local_88[iParam0 /*4*/], Local_143, 1153138688)) && func_67(Local_88[iParam0 /*4*/], iParam1, Local_143)) && !func_66(Local_143)) && !CAM::IS_SPHERE_VISIBLE(Local_143, 4f)) && !func_78(Local_143, 1084227584))
			{
				MISC::CLEAR_AREA_OF_PEDS(Local_143, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_143, 5f, false, false, false, false, false, false, 0);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_88[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_65(0, 3);
					}
					else
					{
						func_65(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_88[iParam0 /*4*/], Local_143, true, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_88[iParam0 /*4*/], 5f);
				ENTITY::SET_ENTITY_HEADING(Local_88[iParam0 /*4*/], fLocal_146);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_88[iParam0 /*4*/], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_88[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_88[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_147 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x35F2
{
	MISC::SET_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_66(struct<3> Param0)//Position - 0x3608
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, struct<3> Param2)//Position - 0x3632
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, Param2) };
	if ((Var0.f_1 > 0f && Var3.f_1 > 0f) || (Var0.f_1 < 0f && Var3.f_1 < 0f))
	{
		return 1;
	}
	if (iParam0 == Local_88[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_88[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, struct<3> Param1, float fParam4)//Position - 0x36C9
{
	if (func_82(iParam0, Param1, 1) <= fParam4)
	{
		return 1;
	}
	if (iParam0 == Local_88[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_88[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)//Position - 0x3727
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (func_155(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_155(7))
	{
		iVar1 = 7;
	}
	else if (func_155(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_228(Local_88[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_88[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_88[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_81(Local_88[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5)
			{
				fVar5 = func_81(Local_88[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x3806
{
	int iVar0;
	
	if (func_228(iParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (func_228(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x383D
{
	MISC::CLEAR_BIT(&iLocal_154, iParam0);
}

int func_72(int iParam0, bool bParam1)//Position - 0x384D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_73(int iParam0, bool bParam1, int iParam2)//Position - 0x38D2
{
	int iVar0;
	
	iVar0 = func_74(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_74(int iParam0, bool bParam1, bool bParam2)//Position - 0x391C
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_75(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_75(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_75(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_75(bool bParam0, float fParam1, float fParam2)//Position - 0x39C0
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_76(int iParam0, struct<3> Param1)//Position - 0x39D7
{
	if (func_228(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		MISC::CLEAR_AREA_OF_PEDS(Param1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Param1, 3f, false, false, false, false, false, false, 0);
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
		ENTITY::SET_ENTITY_HEADING(iParam0, func_77(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
		if (func_228(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, true);
			}
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
	}
}

float func_77(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x3AA2
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_78(struct<3> Param0, float fParam3)//Position - 0x3ABC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_88[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_88[iVar1 /*4*/], Param0, fParam3, fParam3, fParam3, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_79()//Position - 0x3B08
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar4, &uVar3))
		{
			return uVar3 & 1 == 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x3B42
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar4, &uVar3))
		{
			return uVar3 & 8 == 0;
		}
	}
	return 0;
}

float func_81(int iParam0, int iParam1, bool bParam2)//Position - 0x3B7D
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

float func_82(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x3BDB
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

int func_83(int iParam0, bool bParam1, struct<3> Param2, float fParam5)//Position - 0x3C15
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	int iVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	char* sVar71;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		iVar5 = joaat("WEAPON_UNARMED");
		iVar6 = 0;
		iVar7 = -1;
		Var9 = { Local_121 };
		Var12 = { Local_121 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 10;
		fVar20 = 0f;
		fVar21 = 0f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		iVar27 = iLocal_169;
		bVar28 = true;
		bVar29 = true;
		bVar30 = false;
		bVar31 = true;
		bVar32 = true;
		bVar33 = true;
		bVar34 = false;
		bVar35 = true;
		bVar36 = false;
		bVar37 = true;
		bVar38 = true;
		bVar39 = false;
		bVar40 = false;
		bVar41 = true;
		bVar42 = false;
		bVar43 = true;
		bVar44 = true;
		bVar45 = false;
		bVar46 = true;
		bVar47 = true;
		bVar48 = true;
		bVar49 = false;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = false;
		bVar54 = false;
		bVar55 = true;
		bVar56 = false;
		bVar57 = false;
		bVar58 = false;
		bVar59 = true;
		bVar60 = true;
		iVar61 = 0;
		bVar62 = false;
		bVar63 = false;
		bVar64 = false;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		bVar68 = true;
		bVar69 = true;
		bVar70 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_167;
				iVar6 = Local_88[3 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				bVar34 = true;
				bVar70 = true;
				break;
			
			case 1:
				iVar4 = iLocal_167;
				iVar6 = Local_88[4 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				bVar34 = true;
				bVar70 = true;
				break;
			
			case 2:
				iVar4 = iLocal_168;
				iVar6 = Local_88[5 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 3:
				iVar4 = iLocal_167;
				iVar6 = Local_88[5 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 4:
				iVar4 = iLocal_167;
				iVar6 = Local_88[6 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 5:
				iVar4 = iLocal_168;
				iVar6 = Local_88[6 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 6:
				iVar4 = iLocal_168;
				iVar6 = Local_88[7 /*4*/];
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 7:
				iVar4 = iLocal_168;
				iVar6 = Local_88[7 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("WEAPON_PISTOL");
				bVar36 = true;
				bVar33 = false;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!func_87(Param2, Local_121, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var9 = { Param2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_228(iVar6))
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar6, 26, iVar4, iVar7, true, true);
		}
		else
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED(26, iVar4, Var0, fVar3, true, true);
			ENTITY::SET_ENTITY_COLLISION(Local_47[iParam0 /*5*/], bVar41, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_47[iParam0 /*5*/], !bVar65, false);
		}
		if (bVar40)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_47[iParam0 /*5*/], Var0, false, false, true);
		}
		if (bParam1)
		{
			if (iVar27 == iLocal_169)
			{
				Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_47[iParam0 /*5*/], bVar59);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 213, bVar28);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 212, bVar29);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam0 /*5*/], bVar30);
		PED::SET_PED_KEEP_TASK(Local_47[iParam0 /*5*/], bVar31);
		PED::SET_PED_DIES_WHEN_INJURED(Local_47[iParam0 /*5*/], bVar32);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 188, bVar55);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 42, !bVar33);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 9, bVar35);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 3, bVar37);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 342, bVar57);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_47[iParam0 /*5*/], bVar36, 1);
		PED::SET_PED_ARMOUR(Local_47[iParam0 /*5*/], iVar18);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 8, bVar39);
		ENTITY::SET_ENTITY_VISIBLE(Local_47[iParam0 /*5*/], bVar38, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_47[iParam0 /*5*/], bVar42);
		WEAPON::GIVE_WEAPON_TO_PED(Local_47[iParam0 /*5*/], iVar5, -1, bVar34, bVar34);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 2, bVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 1, bVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 52, bVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 13, bVar68);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_47[iParam0 /*5*/], bVar46);
		PED::SET_PED_CAN_BE_TARGETTED(Local_47[iParam0 /*5*/], bVar47);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 118, bVar48);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 115, bVar49);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 12, bVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 36, bVar51);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 35, bVar52);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 29, bVar53);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 185, bVar54);
		PED::SET_PED_TO_LOAD_COVER(Local_47[iParam0 /*5*/], bVar56);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 17, bVar62);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_47[iParam0 /*5*/], bVar63);
		AUDIO::STOP_PED_SPEAKING(Local_47[iParam0 /*5*/], bVar58);
		func_86(Local_47[iParam0 /*5*/], fVar22, fVar23, fVar24, fVar25, fVar26, 1101004800, 1125515264);
		ENTITY::FREEZE_ENTITY_POSITION(Local_47[iParam0 /*5*/], bVar66);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 203, bVar67);
		PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_47[iParam0 /*5*/], !bVar67);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 366, bVar69);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 134, bVar70);
		if (!bVar60)
		{
			func_65(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar71))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_47[iParam0 /*5*/], sVar71, -1, false);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/]) || iVar61)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/], iVar17);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_47[iParam0 /*5*/], iVar17, 0, 0);
		}
		if (iVar19 > 0)
		{
			PED::SET_PED_ACCURACY(Local_47[iParam0 /*5*/], iVar19);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_47[iParam0 /*5*/], fVar20, fVar21);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_47[iParam0 /*5*/], iVar27);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_47[iParam0 /*5*/], iVar8, -1, Var9, Var12, true, true, true, false, 2, true, 0);
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], false);
			func_65(iParam0, 1);
		}
		func_85(iParam0);
		func_84(iParam0);
		if (iVar15 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_47[iParam0 /*5*/], iVar5, iVar15);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_47[iParam0 /*5*/], iVar5, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_47[iParam0 /*5*/], iVar16);
		if (bVar64)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_47[iParam0 /*5*/], true, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0)//Position - 0x425D
{
	if (func_228(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_85(int iParam0)//Position - 0x4282
{
	if (func_228(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 1, 1, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			}
	}
}

void func_86(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x44A6
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
		PED::SET_PED_ID_RANGE(iParam0, fParam6);
		PED::SET_COMBAT_FLOAT(iParam0, 10, fParam7);
	}
}

bool func_87(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x44F4
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_88()//Position - 0x453B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((func_228(Local_47[0 /*5*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_47[0 /*5*/], 1) >= 200f) && (func_228(Local_47[1 /*5*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_47[1 /*5*/], 1) >= 200f))
	{
		return 1;
	}
	if ((func_155(10) && !func_228(Local_47[0 /*5*/])) || (func_155(11) && !func_228(Local_47[1 /*5*/])))
	{
		return 1;
	}
	if ((func_228(Local_47[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[0 /*5*/], false))) || (func_228(Local_47[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[1 /*5*/], false))))
	{
		return 1;
	}
	if ((func_228(Local_88[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_88[1 /*4*/], PLAYER::PLAYER_PED_ID(), true)) || (func_228(Local_88[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_88[2 /*4*/], PLAYER::PLAYER_PED_ID(), true)))
	{
		return 1;
	}
	if (func_89(Local_88[3 /*4*/]) || func_89(Local_88[4 /*4*/]))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (func_228(iVar0))
	{
		fLocal_162 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_162 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
		iVar1 = iVar2;
		if ((iVar1 == Local_88[3 /*4*/] && func_228(Local_47[0 /*5*/])) || (iVar1 == Local_88[4 /*4*/] && func_228(Local_47[1 /*5*/])))
		{
			return 1;
		}
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x4703
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((func_228(iParam0) && func_228(iVar0)) && fLocal_162 != 0f) && fLocal_162 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_162 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4763
{
	func_111(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_88[iParam0 /*4*/], 5f);
	Local_47[iParam1 /*5*/].f_1 = func_73(Local_47[iParam1 /*5*/], 1, 145);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam1 /*5*/], true);
	func_94();
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_88[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_88[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_93(Local_47[iParam1 /*5*/]);
	func_91(Local_47[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_47[iParam1 /*5*/].f_3 = 3;
	if (func_228(Local_88[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			Local_136 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			Local_136 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_159 = MISC::GET_GAME_TIMER() + 1000;
		if (func_228(Local_47[iParam3 /*5*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam3 /*5*/], true);
			TASK::TASK_VEHICLE_MISSION(Local_47[iParam3 /*5*/], Local_88[iParam2 /*4*/], Local_88[0 /*4*/], 2, 30f, 262144, -1f, -1f, true);
		}
		Local_47[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_169);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_169, joaat("PLAYER"));
}

void func_91(int iParam0, char* sParam1, int iParam2)//Position - 0x48A7
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_92(iParam2), 1);
}

int func_92(int iParam0)//Position - 0x48BE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_93(int iParam0)//Position - 0x4AB3
{
	if (func_155(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_170);
		func_71(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_170);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_170);
}

void func_94()//Position - 0x4ADC
{
	if (!func_155(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_170);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_170);
		func_111(0);
	}
}

int func_95(struct<3> Param0, float fParam3)//Position - 0x4AFE
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	fVar1 = func_82(PLAYER::PLAYER_PED_ID(), Param0, 1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var5 = { Var2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	if ((fVar1 / fVar0) <= fParam3 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Param0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param0, true))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x4B70
{
	return (func_228(Local_88[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_88[0 /*4*/], false));
}

int func_97(int iParam0)//Position - 0x4B94
{
	if (func_101())
	{
		Global_113959 = 1;
		Global_113956 = MISC::GET_GAME_TIMER();
		if (func_15(Global_113958))
		{
			func_98(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_15(Global_113958))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x4BE7
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113969.f_24998.f_2++;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113969.f_24998.f_3++;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113969.f_24998.f_4++;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}
}

void func_99(char* sParam0, int iParam1)//Position - 0x4CC2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_100(int iParam0)//Position - 0x4CD9
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

int func_101()//Position - 0x4D1C
{
	switch (func_102(&Global_33008, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4D52
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_106(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_104(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)//Position - 0x4E89
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_104(int iParam0)//Position - 0x4ED8
{
	return func_105(iParam0, Global_44042);
}

int func_105(int iParam0, int iParam1)//Position - 0x4EE9
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x50CA
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_107(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x50EC
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
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
	float fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	struct<3> Var30;
	char* sVar33;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_88[iParam0 /*4*/]))
	{
		iVar5 = 0;
		bVar6 = true;
		bVar7 = true;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = true;
		bVar13 = false;
		bVar14 = false;
		bVar15 = false;
		bVar16 = false;
		bVar17 = false;
		bVar18 = true;
		bVar19 = false;
		bVar20 = true;
		bVar21 = false;
		bVar22 = false;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_127 };
				fVar3 = 89.7263f;
				iVar4 = iLocal_163;
				bVar12 = false;
				bVar17 = true;
				bVar18 = false;
				bVar21 = true;
				bVar8 = true;
				bVar20 = false;
				iVar5 = 7;
				break;
			
			case 3:
				Var0 = { Local_130 };
				fVar3 = 175.3714f;
				iVar4 = iLocal_164;
				bVar10 = true;
				bVar17 = true;
				bVar18 = false;
				sVar33 = "96NWO218";
				iVar5 = 2;
				break;
			
			case 4:
				Var0 = { Local_133 };
				fVar3 = 171f;
				iVar4 = iLocal_164;
				bVar10 = true;
				bVar17 = true;
				bVar18 = false;
				sVar33 = "01DTS039";
				iVar5 = 2;
				break;
			
			case 1:
				Var0 = { 930.46f, 2719.65f, 42.41f };
				fVar3 = 180.53f;
				iVar4 = iLocal_165;
				break;
			
			case 2:
				Var0 = { 1141.17f, 2711.97f, 40.04f };
				fVar3 = 176.67f;
				iVar4 = iLocal_165;
				break;
			
			case 5:
				Var0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar3 = 182.0097f;
				iVar4 = iLocal_166;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "18NJM316";
				break;
			
			case 6:
				Var0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar3 = 177.8055f;
				iVar4 = iLocal_166;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "28HDT291";
				break;
			
			case 7:
				Var0 = { 1200.5469f, -1553.6067f, 38.4019f };
				fVar3 = 0.0001f;
				iVar4 = iLocal_166;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "23DJT162";
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!func_87(Param1, Local_121, 0))
		{
			Var0 = { Param1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_88[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar4, Var0, fVar3, true, true, false);
		func_110(iParam0);
		func_109(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_88[iParam0 /*4*/], bVar7, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar26))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_88[iParam0 /*4*/], iVar26, -1, Var27, Var30, false, false, false, false, 2, true, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_88[iParam0 /*4*/], bVar6, false);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_88[iParam0 /*4*/], bVar8);
		ENTITY::FREEZE_ENTITY_POSITION(Local_88[iParam0 /*4*/], bVar9);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_88[iParam0 /*4*/], bVar10, true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_88[iParam0 /*4*/], bVar13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_88[iParam0 /*4*/], bVar14, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_88[iParam0 /*4*/], bVar15);
		VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Local_88[iParam0 /*4*/], bVar16);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_88[iParam0 /*4*/], bVar18, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_88[iParam0 /*4*/], bVar17);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_88[iParam0 /*4*/], bVar19);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_88[iParam0 /*4*/], bVar20);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_88[iParam0 /*4*/], bVar21);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_88[iParam0 /*4*/], !bVar22, false);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar33))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_88[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_88[iParam0 /*4*/], fVar23);
		}
		if (bVar11)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_88[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_88[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_88[iParam0 /*4*/], fVar25);
		}
		if (iVar5 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_88[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_88[iParam0 /*4*/].f_1 = func_108(Local_88[iParam0 /*4*/], bVar12, 0);
		}
	}
	return 1;
}

int func_108(int iParam0, bool bParam1, bool bParam2)//Position - 0x5488
{
	return func_74(iParam0, !bParam1, bParam2);
}

void func_109(int iParam0)//Position - 0x549B
{
	if (func_228(Local_88[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_88[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_110(int iParam0)//Position - 0x54E7
{
	if (func_228(Local_88[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_88[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_88[iParam0 /*4*/], 8, 156);
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_88[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_88[iParam0 /*4*/], 8, 156);
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_88[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_88[iParam0 /*4*/], 8, 156);
				break;
			
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_88[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_88[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_111(int iParam0)//Position - 0x5594
{
	MISC::SET_BIT(&iLocal_154, iParam0);
}

void func_112()//Position - 0x55A4
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_123(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_169);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_169);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_169, iLocal_169);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_169, joaat("PLAYER"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	func_113(1);
}

void func_113(bool bParam0)//Position - 0x561A
{
	func_114(39, bParam0);
	func_114(40, bParam0);
	func_114(41, bParam0);
	func_114(42, bParam0);
	func_114(43, bParam0);
	func_114(44, bParam0);
}

void func_114(int iParam0, bool bParam1)//Position - 0x5652
{
	if (bParam1)
	{
		if (!func_122(iParam0, 2, 1))
		{
			func_121(iParam0, 2, 1);
		}
	}
	else if (func_122(iParam0, 2, 1))
	{
		func_115(iParam0, 2, 1);
	}
}

void func_115(int iParam0, int iParam1, bool bParam2)//Position - 0x5689
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_119(func_120(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_116(func_120(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

void func_116(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x56F9
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_117(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_117(int iParam0, var uParam1)//Position - 0x5727
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_118(uParam1));
}

int func_118(var uParam0)//Position - 0x573C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_119(int iParam0, int iParam1)//Position - 0x5770
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_117(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x579F
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

void func_121(int iParam0, int iParam1, bool bParam2)//Position - 0x5B47
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_119(func_120(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_116(func_120(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_122(int iParam0, int iParam1, bool bParam2)//Position - 0x5BB7
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return BitTest(func_119(func_120(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_123(bool bParam0)//Position - 0x5C17
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_166, bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_164, bParam0);
}

void func_124()//Position - 0x5C2F
{
	if (!func_154())
	{
		if (func_141())
		{
			func_201(1, 0);
		}
	}
	RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DUEL", 0);
	func_139();
	func_134();
	func_130();
	func_125();
	if ((func_155(5) && func_228(Local_88[iLocal_171 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_155)
	{
		AUDIO::SET_HORN_PERMANENTLY_ON(Local_88[iLocal_171 /*4*/]);
	}
	if (func_155(6))
	{
		if (iLocal_156 == 0)
		{
			if (func_82(PLAYER::PLAYER_PED_ID(), Local_127, 1) >= 150f)
			{
				iLocal_156 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_156)
		{
			func_71(6);
		}
	}
	if (func_155(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_157)
		{
			func_71(7);
		}
	}
	if ((func_155(9) && func_228(Local_88[0 /*4*/])) && func_81(PLAYER::PLAYER_PED_ID(), Local_88[0 /*4*/], 1) <= 35f)
	{
		if (!func_155(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_130, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_160) >= 1000 && !func_78(Local_130, 7f)) && func_82(PLAYER::PLAYER_PED_ID(), Local_130, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_130, 7f, true, false, false, false);
					func_107(3, Local_121, -1082130432, 0);
					func_107(1, Local_121, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_88[3 /*4*/], Local_88[1 /*4*/], 1f);
					func_83(0, 0, Local_121, -1082130432);
					func_111(10);
					if (iLocal_153 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[0 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_47[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_160 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_155(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_133, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_161) >= 1000 && !func_78(Local_133, 7f)) && func_82(PLAYER::PLAYER_PED_ID(), Local_133, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_133, 7f, true, false, false, false);
					func_107(4, Local_121, -1082130432, 0);
					func_107(2, Local_121, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_88[4 /*4*/], Local_88[2 /*4*/], 1f);
					func_83(1, 0, Local_121, -1082130432);
					func_111(11);
					if (iLocal_153 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[1 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_47[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_161 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_155(10) && func_155(11))
		{
			func_71(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
		}
	}
	if (func_155(8))
	{
		if (iLocal_158 == 0)
		{
			iLocal_158 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_158)
		{
			func_71(8);
			func_111(6);
		}
	}
}

void func_125()//Position - 0x5F17
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar0 /*5*/], false))
			{
				if (!func_129(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 1f);
					func_65(iVar0, 0);
				}
				if (func_72(Local_47[iVar0 /*5*/], 0) != -1)
				{
					if (func_128(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, true);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, false);
					}
				}
			}
			else if (func_129(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 0.7f);
				func_127(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, false);
				}
			}
			if (PED::IS_PED_INJURED(Local_47[iVar0 /*5*/]))
			{
				func_126(&(Local_47[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_88[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_88[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iVar0 /*4*/], false))
			{
				func_126(&(Local_88[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_126(int* iParam0)//Position - 0x60A2
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_127(int iParam0, int iParam1)//Position - 0x60C2
{
	MISC::CLEAR_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_128(int iParam0)//Position - 0x60D8
{
	if (iParam0 == 3)
	{
		if (!func_228(Local_47[2 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 5)
	{
		if (!func_228(Local_47[4 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 7)
	{
		if (!func_228(Local_47[6 /*5*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_129(int iParam0, int iParam1)//Position - 0x6126
{
	return BitTest(Local_47[iParam0 /*5*/].f_2, iParam1);
}

void func_130()//Position - 0x6139
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_88[iVar0 /*4*/]))
		{
			func_131(iVar0);
		}
		iVar0++;
	}
}

void func_131(int iParam0)//Position - 0x6167
{
	if (func_228(Local_88[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!func_228(Local_47[2 /*5*/]) && !func_228(Local_47[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iParam0 /*4*/], false))
				{
					func_132(iParam0, 0);
				}
				break;
			
			case 6:
				if ((!func_228(Local_47[4 /*5*/]) && !func_228(Local_47[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iParam0 /*4*/], false))
				{
					func_132(iParam0, 0);
				}
				break;
			
			case 7:
				if ((!func_228(Local_47[6 /*5*/]) && !func_228(Local_47[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iParam0 /*4*/], false))
				{
					func_132(iParam0, 0);
				}
				break;
			
			case 3:
				if (!func_228(Local_47[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iParam0 /*4*/], false))
				{
					if (func_81(PLAYER::PLAYER_PED_ID(), Local_88[iParam0 /*4*/], 1) >= 50f)
					{
						func_132(iParam0, 0);
					}
				}
				if (func_155(6))
				{
					func_64(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_151);
				}
				break;
			
			case 4:
				if (!func_228(Local_47[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_88[iParam0 /*4*/], false))
				{
					if (func_81(PLAYER::PLAYER_PED_ID(), Local_88[iParam0 /*4*/], 1) >= 50f)
					{
						func_132(iParam0, 0);
					}
				}
				if (func_155(6))
				{
					func_64(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_152);
				}
				break;
			
			case 1:
				if (!func_228(Local_88[3 /*4*/]) || func_81(Local_88[3 /*4*/], Local_88[iParam0 /*4*/], 1) >= 150f)
				{
					func_132(iParam0, 0);
				}
				break;
			
			case 2:
				if (!func_228(Local_88[4 /*4*/]) || func_81(Local_88[4 /*4*/], Local_88[iParam0 /*4*/], 1) >= 150f)
				{
					func_132(iParam0, 0);
				}
				break;
			
			case 0:
				switch (Local_88[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_96())
						{
							func_111(1);
							func_126(&(Local_88[iParam0 /*4*/].f_1));
							Local_88[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_88[iParam0 /*4*/]))
	{
		func_132(iParam0, 0);
	}
	else
	{
		func_132(iParam0, 1);
	}
}

void func_132(int iParam0, bool bParam1)//Position - 0x63D7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_88[iParam0 /*4*/]))
	{
		func_126(&(Local_88[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_88[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_88[iParam0 /*4*/]);
		}
		if (func_133(&(Local_88[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_88[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_88[iParam0 /*4*/]));
			}
		}
		Local_88[iParam0 /*4*/] = 0;
		Local_88[iParam0 /*4*/].f_2 = 0;
		Local_88[iParam0 /*4*/].f_3 = 0;
	}
}

int func_133(var uParam0)//Position - 0x6451
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_134()//Position - 0x646D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]))
		{
			func_135(iVar0);
		}
		iVar0++;
	}
}

void func_135(int iParam0)//Position - 0x649B
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	
	if (func_228(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_47[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_47[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
						if (func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
						{
							PED::SET_IK_TARGET(Local_47[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, Local_121, 0, -1, -1);
						}
						break;
					
					case 1:
						if (func_228(Local_88[iVar0 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_88[iVar0 /*4*/], true);
							if (func_228(Local_88[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_88[iVar0 /*4*/], Local_88[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_159 && !func_155(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_88[iVar0 /*4*/], Local_136, 7f, 7f, 7f, false, true, 0)) && func_82(PLAYER::PLAYER_PED_ID(), Local_136, 1) < func_81(Local_88[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(Local_136, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_88[iVar0 /*4*/], true), 7f)) && !func_78(Local_136, 8f))
								{
									fVar5 = func_77(Local_136, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									MISC::CLEAR_AREA_OF_VEHICLES(Local_136, 8f, false, false, false, false, false, false, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_136, fVar5, 0f, -8f, 0f), 8f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(Local_88[iVar0 /*4*/], Local_136, true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_88[iVar0 /*4*/], 5f);
									ENTITY::SET_ENTITY_HEADING(Local_88[iVar0 /*4*/], fVar5);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_88[iVar0 /*4*/], true, true, false);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_88[iVar0 /*4*/], 30f);
									func_111(5);
									iLocal_171 = iVar0;
									iLocal_155 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_155(12) && ENTITY::IS_ENTITY_AT_COORD(Local_88[iVar0 /*4*/], Local_136, 7f, 7f, 7f, false, true, 0))
								{
									func_111(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_159 && ENTITY::IS_ENTITY_OCCLUDED(Local_88[iVar0 /*4*/])) && func_228(Local_88[iVar1 /*4*/])) && func_81(Local_88[iVar0 /*4*/], Local_88[iVar1 /*4*/], 1) >= 20f)
								{
									Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_88[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (Var2.f_0 < -3.5f || Var2.f_0 > 3.5f)
									{
										fVar6 = ENTITY::GET_ENTITY_SPEED(Local_88[iVar0 /*4*/]);
										fVar6 = func_138(fVar6, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_88[iVar0 /*4*/], func_77(ENTITY::GET_ENTITY_COORDS(Local_88[iVar0 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_88[iVar0 /*4*/], fVar6);
									}
								}
								if ((func_129(iParam0, 3) || func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f) || (func_228(Local_88[iVar1 /*4*/]) && func_81(Local_88[iVar0 /*4*/], Local_88[iVar1 /*4*/], 1) <= 15f))
								{
									if (func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
									{
										if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
										{
											Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 1, 145);
											func_91(Local_47[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_47[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
								{
									Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 1, 145);
									func_91(Local_47[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_47[iParam0 /*5*/].f_3++;
							}
						}
						break;
					
					case 2:
						if (func_228(Local_88[iVar0 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[iParam0 /*5*/].f_3++;
						}
						break;
					
					case 3:
						if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
						{
							if (func_81(PLAYER::PLAYER_PED_ID(), Local_47[iParam0 /*5*/], 1) <= 85f)
							{
								Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_155(6) || func_155(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], false) && func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
							{
								func_137(iParam0, 0);
							}
						}
						else if (func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
						{
							func_137(iParam0, 0);
						}
						break;
				}
				break;
			
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_155(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !func_136(Local_47[iParam0 /*5*/], joaat("SCRIPT_TASK_VEHICLE_CHASE"), 1))
					{
						TASK::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				if (func_155(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], false) && func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
					{
						func_137(iParam0, 0);
					}
				}
				else if (func_155(2) && func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
				{
					func_137(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_129(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], true);
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], true, false);
			func_127(iParam0, 1);
		}
		if (!func_129(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_47[iParam0 /*5*/]))
			{
				func_137(iParam0, 0);
			}
			else
			{
				func_137(iParam0, 1);
			}
		}
	}
}

int func_136(int iParam0, int iParam1, bool bParam2)//Position - 0x6A91
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_137(int iParam0, bool bParam1)//Position - 0x6AD7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		func_126(&(Local_47[iParam0 /*5*/].f_1));
		if ((((func_228(Local_47[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_47[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], true)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_47[iParam0 /*5*/]))
		{
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], true, true);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_47[iParam0 /*5*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_47[iParam0 /*5*/]));
		}
		Local_47[iParam0 /*5*/].f_2 = 0;
	}
}

float func_138(float fParam0, float fParam1, float fParam2)//Position - 0x6B76
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

void func_139()//Position - 0x6B9D
{
	if ((func_155(1) || iLocal_153 > 2) && func_140())
	{
		if (func_228(Local_88[0 /*4*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_88[0 /*4*/], 1) >= 250f)
		{
			func_63();
		}
	}
	if (func_140())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_88[0 /*4*/]) && !func_228(Local_88[0 /*4*/]))
		{
			func_63();
		}
	}
}

int func_140()//Position - 0x6C0F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_228(Local_47[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

int func_141()//Position - 0x6C54
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_150())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_142(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_142(float fParam0, bool bParam1)//Position - 0x6CB6
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_23(func_148()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113969.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar32 /*6*/], 3))
				{
					func_143(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_143(int iParam0, var uParam1)//Position - 0x6D67
{
	switch (iParam0)
	{
		case 0:
			func_144(uParam1, "Abigail1", func_146(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 1:
			func_144(uParam1, "Abigail2", func_146(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 2:
			func_144(uParam1, "Barry1", func_146(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 3:
			func_144(uParam1, "Barry2", func_146(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_145(iParam0), 1, 1);
			break;
		
		case 4:
			func_144(uParam1, "Barry3", func_146(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 5:
			func_144(uParam1, "Barry3A", func_146(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 6:
			func_144(uParam1, "Barry3C", func_146(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 7:
			func_144(uParam1, "Barry4", func_146(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_145(iParam0), 0, 0);
			break;
		
		case 8:
			func_144(uParam1, "Dreyfuss1", func_146(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 9:
			func_144(uParam1, "Epsilon1", func_146(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 10:
			func_144(uParam1, "Epsilon2", func_146(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 11:
			func_144(uParam1, "Epsilon3", func_146(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 12:
			func_144(uParam1, "Epsilon4", func_146(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 13:
			func_144(uParam1, "Epsilon5", func_146(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 14:
			func_144(uParam1, "Epsilon6", func_146(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 15:
			func_144(uParam1, "Epsilon7", func_146(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 16:
			func_144(uParam1, "Epsilon8", func_146(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 17:
			func_144(uParam1, "Extreme1", func_146(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 18:
			func_144(uParam1, "Extreme2", func_146(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 19:
			func_144(uParam1, "Extreme3", func_146(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 20:
			func_144(uParam1, "Extreme4", func_146(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 21:
			func_144(uParam1, "Fanatic1", func_146(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_145(iParam0), 1, 0);
			break;
		
		case 22:
			func_144(uParam1, "Fanatic2", func_146(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_145(iParam0), 1, 0);
			break;
		
		case 23:
			func_144(uParam1, "Fanatic3", func_146(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_145(iParam0), 0, 1);
			break;
		
		case 24:
			func_144(uParam1, "Hao1", func_146(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_145(iParam0), 0, 1);
			break;
		
		case 25:
			func_144(uParam1, "Hunting1", func_146(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 26:
			func_144(uParam1, "Hunting2", func_146(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 27:
			func_144(uParam1, "Josh1", func_146(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 28:
			func_144(uParam1, "Josh2", func_146(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_145(iParam0), 1, 1);
			break;
		
		case 29:
			func_144(uParam1, "Josh3", func_146(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_145(iParam0), 1, 1);
			break;
		
		case 30:
			func_144(uParam1, "Josh4", func_146(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 31:
			func_144(uParam1, "Maude1", func_146(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 32:
			func_144(uParam1, "Minute1", func_146(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 33:
			func_144(uParam1, "Minute2", func_146(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 34:
			func_144(uParam1, "Minute3", func_146(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 35:
			func_144(uParam1, "MrsPhilips1", func_146(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 36:
			func_144(uParam1, "MrsPhilips2", func_146(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 37:
			func_144(uParam1, "Nigel1", func_146(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 38:
			func_144(uParam1, "Nigel1A", func_146(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_145(iParam0), 1, 1);
			break;
		
		case 39:
			func_144(uParam1, "Nigel1B", func_146(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_145(iParam0), 1, 1);
			break;
		
		case 40:
			func_144(uParam1, "Nigel1C", func_146(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_145(iParam0), 1, 1);
			break;
		
		case 41:
			func_144(uParam1, "Nigel1D", func_146(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_145(iParam0), 1, 1);
			break;
		
		case 42:
			func_144(uParam1, "Nigel2", func_146(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_145(iParam0), 1, 1);
			break;
		
		case 43:
			func_144(uParam1, "Nigel3", func_146(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_145(iParam0), 1, 1);
			break;
		
		case 44:
			func_144(uParam1, "Omega1", func_146(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 45:
			func_144(uParam1, "Omega2", func_146(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 46:
			func_144(uParam1, "Paparazzo1", func_146(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 47:
			func_144(uParam1, "Paparazzo2", func_146(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 48:
			func_144(uParam1, "Paparazzo3", func_146(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 49:
			func_144(uParam1, "Paparazzo3A", func_146(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 50:
			func_144(uParam1, "Paparazzo3B", func_146(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 51:
			func_144(uParam1, "Paparazzo4", func_146(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 52:
			func_144(uParam1, "Rampage1", func_146(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 54:
			func_144(uParam1, "Rampage3", func_146(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 55:
			func_144(uParam1, "Rampage4", func_146(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 56:
			func_144(uParam1, "Rampage5", func_146(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_145(iParam0), 0, 0);
			break;
		
		case 53:
			func_144(uParam1, "Rampage2", func_146(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_145(iParam0), 1, 0);
			break;
		
		case 57:
			func_144(uParam1, "TheLastOne", func_146(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 58:
			func_144(uParam1, "Tonya1", func_146(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 59:
			func_144(uParam1, "Tonya2", func_146(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 60:
			func_144(uParam1, "Tonya3", func_146(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 61:
			func_144(uParam1, "Tonya4", func_146(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		case 62:
			func_144(uParam1, "Tonya5", func_146(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_145(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_144(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x7F1C
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_145(int iParam0)//Position - 0x7FAD
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
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_146(int iParam0)//Position - 0x833F
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_147(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_147(int iParam0)//Position - 0x8376
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_148()//Position - 0x87C2
{
	func_21();
	return Global_113969.f_2366.f_539.f_4321;
}

int func_149()//Position - 0x87DB
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()//Position - 0x87F8
{
	if (func_153() && !func_149())
	{
		return 1;
	}
	if (func_152() && func_151())
	{
		return 1;
	}
	return 0;
}

bool func_151()//Position - 0x882A
{
	return Global_113687 > 0;
}

int func_152()//Position - 0x8838
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_153()//Position - 0x884D
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_154()//Position - 0x8870
{
	if ((Global_113958 == func_30() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

bool func_155(int iParam0)//Position - 0x889B
{
	return BitTest(iLocal_154, iParam0);
}

void func_156(int iParam0)//Position - 0x88A8
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_158(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_157();
}

void func_157()//Position - 0x88DE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_158(int iParam0)//Position - 0x891B
{
	Global_113958 = iParam0;
}

int func_159(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8929
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_50())
		{
			return 0;
		}
	}
	Local_41 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_150())
		{
			return 0;
		}
		if (func_200())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_23(func_148()))
		{
			if (func_142(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_41.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_199(iParam3))
		{
			return 0;
		}
		if (func_23(func_148()))
		{
			if (func_198(func_148()) == 4 || func_198(func_148()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_148()))
		{
			if (!func_197(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_196(Global_113969.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113960) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_194())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_184(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_183(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_183(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_199(30) && !func_183(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_148()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113969.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113969.f_2366.f_539.f_2296[iVar4];
				if (func_182(iVar8))
				{
					if (func_160(iVar4))
					{
						if (!func_87(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_148() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_160(int iParam0)//Position - 0x8CC3
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_161(iVar0);
}

int func_161(int iParam0)//Position - 0x8CE4
{
	return func_162(iParam0, 1);
}

int func_162(int iParam0, int iParam1)//Position - 0x8CF3
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_182(iParam0))
	{
		return 0;
	}
	func_163(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8D46
{
	func_164(func_175(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_164(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8D64
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_174(iParam0, iParam1))
	{
		iVar0 = func_173(iParam1);
		iVar1 = func_171(iParam0);
		iVar2 = (func_171(iParam0) - func_171(iParam1));
		iVar3 = (func_173(iParam0) - func_173(iParam1));
		iVar4 = (func_170(iParam0) - func_170(iParam1));
		iVar5 = (func_169(iParam0) - func_169(iParam1));
		iVar6 = (func_168(iParam0) - func_168(iParam1));
		iVar7 = (func_167(iParam0) - func_167(iParam1));
	}
	else
	{
		iVar0 = func_173(iParam0);
		iVar1 = func_171(iParam1);
		iVar2 = (func_171(iParam1) - func_171(iParam0));
		iVar3 = (func_173(iParam1) - func_173(iParam0));
		iVar4 = (func_170(iParam1) - func_170(iParam0));
		iVar5 = (func_169(iParam1) - func_169(iParam0));
		iVar6 = (func_168(iParam1) - func_168(iParam0));
		iVar7 = (func_167(iParam1) - func_167(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_166(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_165(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_165(float fParam0, float fParam1, float fParam2)//Position - 0x8F65
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_166(int iParam0, int iParam1)//Position - 0x8FA7
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

int func_167(int iParam0)//Position - 0x9049
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_168(int iParam0)//Position - 0x905C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_169(int iParam0)//Position - 0x906F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_170(int iParam0)//Position - 0x9082
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_171(int iParam0)//Position - 0x9094
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_172(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_172(bool bParam0, int iParam1, int iParam2)//Position - 0x90B6
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_173(int iParam0)//Position - 0x90CD
{
	return iParam0 & 15;
}

int func_174(int iParam0, int iParam1)//Position - 0x90DA
{
	int iVar0;
	int iVar1;
	
	if (!func_182(iParam1) || !func_182(iParam0))
	{
		return 1;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_170(iParam0);
	iVar1 = func_170(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_169(iParam0);
	iVar1 = func_169(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_168(iParam0);
	iVar1 = func_168(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_167(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_175()//Position - 0x91E6
{
	var uVar0;
	
	func_181(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_180(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_179(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_178(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_177(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_176(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_176(var uParam0, int iParam1)//Position - 0x922C
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_177(var uParam0, int iParam1)//Position - 0x92B2
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_178(var uParam0, int iParam1)//Position - 0x92E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_171(*uParam0);
	if (iParam1 < 1 || iParam1 > func_166(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_179(var uParam0, int iParam1)//Position - 0x9336
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_180(var uParam0, int iParam1)//Position - 0x9370
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_181(var uParam0, int iParam1)//Position - 0x93AB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_182(int iParam0)//Position - 0x93E7
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
	iVar0 = func_167(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_168(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_169(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_171(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_173(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_170(iParam0);
	if (iVar5 < 1 || iVar5 > func_166(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_183(int iParam0, bool bParam1)//Position - 0x94C3
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)//Position - 0x94E3
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_148();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_193()) || Global_113016) || Global_32951) || func_192()) || func_191(8, -1)) || func_190()) || func_189()) || func_188()) || func_187()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_193()) || Global_32951) || func_192()) || func_191(8, -1)) || func_188()) || func_190()) || func_189()) || func_187()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_193()) || Global_113016) || Global_32951) || func_192()) || func_191(8, -1)) || func_188()) || func_190()) || func_189()) || func_187()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_193()) || Global_113016) || Global_32951) || func_192()) || func_191(8, -1)) || func_190()) || func_189()) || func_187()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_193() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_191(8, -1)) || func_187()) || func_186()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_191(8, -1) || func_190()) || func_189()) || func_186()) || func_185())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_193()) || Global_32951) || func_192()) || func_191(8, -1)) || func_189()) || func_188()) || func_187()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_193()) || func_189()) || Global_113016) || Global_32951) || func_192()) || Global_45250) || func_191(8, -1)) || func_188()) || func_186()) || func_187()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_193()) || Global_113016) || Global_32951) || func_192()) || func_191(8, -1)) || func_188()) || func_186()) || func_190()) || func_189()) || func_187())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_185()//Position - 0x9C00
{
	return Global_101572.f_1;
}

int func_186()//Position - 0x9C0E
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_187()//Position - 0x9C31
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0x9C4B
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_189()//Position - 0x9C75
{
	return Global_101585.f_394 > 0;
}

bool func_190()//Position - 0x9C86
{
	return Global_101585.f_393 > 0;
}

var func_191(int iParam0, int iParam1)//Position - 0x9C97
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

var func_192()//Position - 0x9CCF
{
	return Global_1575083;
}

int func_193()//Position - 0x9CDB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_194()//Position - 0x9CF7
{
	func_195();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_195()//Position - 0x9D1F
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_148();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

bool func_196(int iParam0)//Position - 0x9DC1
{
	return func_174(func_175(), iParam0);
}

int func_197(int iParam0, int iParam1, int iParam2)//Position - 0x9DD3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_148();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_198(int iParam0)//Position - 0x9EB7
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_199(int iParam0)//Position - 0x9EDB
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_50())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_200()//Position - 0x9F33
{
	int iVar0;
	
	if (Global_33100)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_201(bool bParam0, bool bParam1)//Position - 0x9F77
{
	func_227();
	func_226();
	func_123(0);
	func_224(1, 1, 1, 0);
	func_222(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	func_221();
	func_220();
	func_219();
	if (func_228(Local_88[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_88[0 /*4*/], true);
	}
	func_218(bParam1);
	func_217(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_169);
	func_215();
	func_213();
	func_113(0);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (bParam0)
	{
		func_202(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_202(int iParam0)//Position - 0xA00C
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_154())
	{
		func_206(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_205(30000);
		StringCopy(&cVar0, func_204(Global_113958, 1), 64);
		if (func_29(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113955, (MISC::GET_GAME_TIMER() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, 0);
	}
	func_203(&Global_33008);
	Global_113959 = 0;
	func_158(-1);
}

void func_203(var uParam0)//Position - 0xA0BE
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

char* func_204(int iParam0, bool bParam1)//Position - 0xA0FB
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_205(int iParam0)//Position - 0xA344
{
	Global_44593 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_206(int iParam0)//Position - 0xA356
{
	func_207(iParam0, 0, func_212(iParam0));
}

void func_207(int iParam0, int iParam1, int iParam2)//Position - 0xA36B
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_175();
	func_210(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_209(iParam0, &uVar0);
	Var1 = { func_208(&uVar0) };
}

struct<16> func_208(var uParam0)//Position - 0xA39A
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_169(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_168(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_167(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_170(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_171(*uParam0), 64);
	return Var0;
}

void func_209(int iParam0, var uParam1)//Position - 0xA46A
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_210(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA482
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_171(*uParam0);
	iVar1 = func_173(*uParam0);
	iVar2 = func_170(*uParam0);
	iVar3 = func_169(*uParam0);
	iVar4 = func_168(*uParam0);
	iVar5 = func_167(*uParam0);
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
	iVar6 = func_166(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_166(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_211(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_211(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA604
{
	func_181(uParam0, iParam1);
	func_180(uParam0, iParam2);
	func_179(uParam0, iParam3);
	func_177(uParam0, iParam5);
	func_178(uParam0, iParam4);
	func_176(uParam0, iParam6);
}

int func_212(int iParam0)//Position - 0xA63C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_213()//Position - 0xA7DF
{
	Global_21152 = 0;
	func_214();
}

void func_214()//Position - 0xA7EF
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_215()//Position - 0xA846
{
	Global_21152 = 0;
	func_216();
}

void func_216()//Position - 0xA856
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_217(bool bParam0)//Position - 0xA877
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_132(iVar0, bParam0);
		iVar0++;
	}
}

void func_218(bool bParam0)//Position - 0xA89A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_137(iVar0, bParam0);
		iVar0++;
	}
}

void func_219()//Position - 0xA8BD
{
}

void func_220()//Position - 0xA8C5
{
}

void func_221()//Position - 0xA8CD
{
}

void func_222(bool bParam0)//Position - 0xA8D5
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(8, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(6, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(12, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_223(9, 1);
		func_223(8, 1);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PED::SET_CREATE_RANDOM_COPS(true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(8, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(6, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(12, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_223(9, 0);
		func_223(8, 0);
	}
}

void func_223(int iParam0, bool bParam1)//Position - 0xA9A8
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33197, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33197, iParam0);
	}
}

void func_224(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA9CA
{
	if (bParam0)
	{
		func_213();
	}
	if (bParam1)
	{
		if (!func_225() || (bParam0 && !bParam3))
		{
			HUD::CLEAR_PRINTS();
		}
		HUD::CLEAR_REMINDER_MESSAGE();
	}
	if (bParam2)
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_225()//Position - 0xAA0A
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_226()//Position - 0xAA2C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_126(&(Local_47[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_126(&(Local_88[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_227()//Position - 0xAA72
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_153 = 0;
	iLocal_154 = 0;
}

int func_228(int iParam0)//Position - 0xAA86
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

