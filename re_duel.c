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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<5> Local_47[8];
	struct<4> Local_48[8];
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 5 } ;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 5;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
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
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_49 = { 0f, 0f, 0f };
	Local_51 = { 1064.871f, 2670.857f, 38.5511f };
	Local_52 = { 926.3422f, 2708.926f, 39.5394f };
	Local_53 = { 1140.03f, 2698.027f, 37.1568f };
	Local_54 = { Local_49 };
	fLocal_74 = 0f;
	iLocal_75 = joaat("dukes2");
	iLocal_76 = joaat("phantom");
	iLocal_77 = joaat("trailers2");
	iLocal_78 = joaat("rancherxl");
	iLocal_79 = joaat("a_m_m_hillbilly_01");
	iLocal_80 = joaat("a_m_m_hillbilly_02");
	iLocal_83 = 3;
	Local_50 = { ScriptParam_84.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (func_227(Local_48[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
		}
		func_200(1, 0);
	}
	if (func_158(Local_50, 31, 0, 0, 0))
	{
		func_155(31);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_154(1)) || iLocal_65 > 2)
		{
			if (func_154(13))
			{
				func_123();
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
			if (func_227(Local_48[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
			}
			func_200(1, 0);
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
			switch (iLocal_65)
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
	func_32(Local_48[0 /*4*/], 145);
	func_6(-1, 0);
	func_3();
	func_200(1, 0);
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
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_5(bool bParam0)//Position - 0x27A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
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
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_7(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
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
	Global_113372 = iParam0;
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
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		func_11(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()//Position - 0x956
{
	return Global_31959;
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_12(int iParam0, bool bParam1, int iParam2)//Position - 0x9B2
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_13()//Position - 0x9D0
{
	return Global_1574918;
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
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
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
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_19();
	}
}

void func_19()//Position - 0xFB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_20()//Position - 0x10CC
{
	func_21();
	switch (Global_113386.f_2363.f_539.f_4321)
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
		if (func_25(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_22(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_23(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_22(int iParam0)//Position - 0x120F
{
	return Global_43052 == iParam0;
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
	return Global_1998[iParam0 /*29*/];
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
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)//Position - 0x12DA
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
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
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_31(Var0);
	return uVar1;
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
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_33(iParam0, &(Global_113386.f_32749.f_5510));
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
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
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
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
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
	if (!func_40(iParam0, 0))
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
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_40(int iParam0, bool bParam1)//Position - 0x2049
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
			}
			iVar0++;
		}
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
		if (!func_43(iParam0))
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

int func_41(int iParam0)//Position - 0x21C9
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_42())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
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
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_42()//Position - 0x228D
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x22A4
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CORSITA"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DRAUGUR"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GREENWOOD"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KANJOSJ"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LM87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POSTLUDE"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RHINEHART"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SM722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGERO2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WEEVIL2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONADA"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNISEGT"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_44()//Position - 0x5576
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_45()//Position - 0x558C
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_46()//Position - 0x55A2
{
	return 0;
}

int func_47()//Position - 0x55AB
{
	return 1;
}

int func_48()//Position - 0x55B4
{
	return 1;
}

int func_49()//Position - 0x55BD
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x55D6
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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

int func_51(int iParam0)//Position - 0x568E
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_40(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x56D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x570E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x578A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x5872
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_56(int iParam0, int iParam1, bool bParam2)//Position - 0x58D5
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_57(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
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

int func_57(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x5943
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

void func_58(int iParam0, bool bParam1)//Position - 0x5A16
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
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_59(iParam0, 0, 0);
	}
}

void func_59(int iParam0, int iParam1, bool bParam2)//Position - 0x5A73
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
	}
}

int func_60(int iParam0, int iParam1)//Position - 0x5AAE
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_61()//Position - 0x5ACE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	switch (iLocal_46)
	{
		case 0:
			func_112();
			func_111(13);
			STREAMING::REQUEST_MODEL(iLocal_75);
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_65)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_75))
					{
						func_107(0, Local_49, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
						STREAMING::REQUEST_MODEL(iLocal_76);
						STREAMING::REQUEST_MODEL(iLocal_79);
						STREAMING::REQUEST_MODEL(iLocal_77);
						func_97(1);
						iLocal_65++;
					}
					break;
				
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(iLocal_77))
					{
						func_111(9);
						iLocal_65++;
					}
					break;
				
				case 2:
					if ((func_227(Local_48[3 /*4*/]) && func_227(Local_47[0 /*5*/])) && func_96())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (Var0.f_0 <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, false, true, 0))
						{
							if ((((func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_90(3, 0, 4, 1);
								iLocal_65 = 4;
							}
						}
					}
					if (((!func_154(8) && func_227(Local_48[4 /*4*/])) && func_227(Local_47[1 /*5*/])) && func_96())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (Var0.f_0 >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, false, true, 0))
						{
							if ((((func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 15f, 0f), 2f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_95(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_90(4, 1, 3, 0);
								iLocal_65 = 4;
							}
						}
					}
					if (!func_154(8) && func_88())
					{
						func_111(6);
						if (func_227(Local_47[0 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[0 /*5*/].f_3 = 3;
						}
						if (func_227(Local_47[1 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[1 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_47[1 /*5*/].f_3 = 3;
						}
						if (func_227(Local_48[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*4*/], 1);
						}
						if (func_227(Local_48[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[4 /*4*/], 1);
						}
						iLocal_65++;
					}
					break;
				
				case 3:
					if ((!func_227(Local_47[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1)) && (!func_227(Local_47[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1)))
					{
						iLocal_65++;
					}
					break;
				
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_81);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_81, joaat("player"));
					if (func_227(Local_48[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*4*/], 1);
					}
					if (func_227(Local_48[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_78);
					SYSTEM::SETTIMERA(0);
					iLocal_65++;
					break;
				
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_78))
					{
						STREAMING::REQUEST_MODEL(iLocal_79);
						iLocal_65++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_79))
					{
						STREAMING::REQUEST_MODEL(iLocal_80);
						iLocal_65++;
					}
					break;
				
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_78) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(iLocal_80))
					{
						func_107(5, Local_49, -1082130432, 0);
						func_107(6, Local_49, -1082130432, 0);
						func_107(7, Local_49, -1082130432, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
						func_83(2, 0, Local_49, -1082130432);
						func_83(3, 0, Local_49, -1082130432);
						func_83(4, 0, Local_49, -1082130432);
						func_83(5, 0, Local_49, -1082130432);
						func_83(6, 0, Local_49, -1082130432);
						func_83(7, 0, Local_49, -1082130432);
						if (func_154(10) && func_154(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
						iLocal_65++;
					}
					break;
				
				case 8:
					if (!func_227(Local_47[0 /*5*/]) && !func_227(Local_47[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && func_82(PLAYER::PLAYER_PED_ID(), Local_51, 1) >= 150f)
					{
						iLocal_65++;
					}
					break;
				
				case 9:
					if (func_96() || (func_227(Local_48[0 /*4*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], 1) <= 35f))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var1, iVar5, &Var2, 1, 5f, 0))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var2, &uVar7, &uVar8);
							if (((uVar8 & 4 == 0 && (!func_80() || uVar8 & 8 == 0)) && (func_79() || uVar8 & 1 == 0)) && !func_78(Var2, 1084227584))
							{
								fVar6 = func_77(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
								Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, fVar6, 6f, -6f, 0f) };
								Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, fVar6, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(Var2, 7f) && !CAM::IS_SPHERE_VISIBLE(Var3, 7f)) && !CAM::IS_SPHERE_VISIBLE(Var4, 7f)) && !func_78(Var3, 1084227584)) && !func_78(Var4, 1084227584))
								{
									func_76(Local_48[5 /*4*/], Var2);
									func_76(Local_48[6 /*4*/], Var3);
									func_76(Local_48[7 /*4*/], Var4);
									iLocal_59 = MISC::GET_GAME_TIMER();
									iVar9 = 2;
									while (iVar9 <= 7)
									{
										if (func_227(Local_47[iVar9 /*5*/]))
										{
											Local_47[iVar9 /*5*/].f_1 = func_73(Local_47[iVar9 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar9 /*5*/], false))
											{
												if (func_72(Local_47[iVar9 /*5*/], 0) == -1)
												{
													HUD::SET_BLIP_SCALE(Local_47[iVar9 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_47[iVar9 /*5*/].f_1, 0);
													HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar9 /*5*/].f_1, true);
												}
											}
										}
										iVar9++;
									}
									func_111(2);
									func_111(7);
									iLocal_69 = (MISC::GET_GAME_TIMER() + 60000);
									func_71(6);
									iLocal_65++;
								}
							}
						}
					}
					break;
				
				case 10:
					if (((((func_227(Local_47[2 /*5*/]) || func_227(Local_47[3 /*5*/])) || func_227(Local_47[4 /*5*/])) || func_227(Local_47[5 /*5*/])) || func_227(Local_47[6 /*5*/])) || func_227(Local_47[7 /*5*/]))
					{
						if (func_154(7))
						{
							if (func_227(Local_48[5 /*4*/]))
							{
								func_64(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_60);
							}
							if (func_227(Local_48[6 /*4*/]))
							{
								func_64(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_61);
							}
							if (func_227(Local_48[7 /*4*/]))
							{
								func_64(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_62);
							}
						}
					}
					else if (!func_227(Local_47[0 /*5*/]) && !func_227(Local_47[1 /*5*/]))
					{
						if (func_227(Local_48[0 /*4*/]))
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

void func_62(int iParam0)//Position - 0x6393
{
	iLocal_65 = 0;
	iLocal_46 = 0;
	iLocal_45 = iParam0;
}

void func_63()//Position - 0x63A5
{
	if (func_227(Local_48[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
	}
	func_200(1, 0);
}

void func_64(int iParam0, int iParam1, var uParam2)//Position - 0x63C9
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_48[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_70(Local_48[iParam0 /*4*/]))
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
			if (func_82(iParam1, Local_55, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				Local_57 = { Local_55 };
				fLocal_58 = fLocal_56;
				Local_55 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				fLocal_56 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_48[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_59) > 1500) && func_81(Local_48[iParam0 /*4*/], iParam1, 1) > func_82(iParam1, Local_57, 1)) && func_69(iParam0)) && func_82(iParam1, Local_57, 1) >= fVar0) && func_81(Local_48[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_68(Local_48[iParam0 /*4*/], Local_57, 1153138688)) && func_67(Local_48[iParam0 /*4*/], iParam1, Local_57)) && !func_66(Local_57)) && !CAM::IS_SPHERE_VISIBLE(Local_57, 4f)) && !func_78(Local_57, 1084227584))
			{
				MISC::CLEAR_AREA_OF_PEDS(Local_57, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_57, 5f, false, false, false, false, false, false, 0);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_48[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_65(0, 3);
					}
					else
					{
						func_65(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_48[iParam0 /*4*/], Local_57, true, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[iParam0 /*4*/], 5f);
				ENTITY::SET_ENTITY_HEADING(Local_48[iParam0 /*4*/], fLocal_58);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iParam0 /*4*/], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_48[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_59 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x6660
{
	MISC::SET_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_66(struct<3> Param0)//Position - 0x6676
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, struct<3> Param2)//Position - 0x66A0
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, Param2) };
	if ((Var0.f_1 > 0f && Var1.f_1 > 0f) || (Var0.f_1 < 0f && Var1.f_1 < 0f))
	{
		return 1;
	}
	if (iParam0 == Local_48[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_48[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, struct<3> Param1, float fParam2)//Position - 0x6737
{
	if (func_82(iParam0, Param1, 1) <= fParam2)
	{
		return 1;
	}
	if (iParam0 == Local_48[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_48[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)//Position - 0x6795
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (func_154(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_154(7))
	{
		iVar1 = 7;
	}
	else if (func_154(6))
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
		if (func_227(Local_48[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_48[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_48[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_81(Local_48[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5)
			{
				fVar5 = func_81(Local_48[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
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

int func_70(int iParam0)//Position - 0x6874
{
	int iVar0;
	
	if (func_227(iParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (func_227(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x68AB
{
	MISC::CLEAR_BIT(&iLocal_66, iParam0);
}

int func_72(int iParam0, bool bParam1)//Position - 0x68BB
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

int func_73(int iParam0, bool bParam1, int iParam2)//Position - 0x6940
{
	int iVar0;
	
	iVar0 = func_74(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_74(int iParam0, bool bParam1, bool bParam2)//Position - 0x698A
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

float func_75(bool bParam0, float fParam1, float fParam2)//Position - 0x6A2E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_76(int iParam0, struct<3> Param1)//Position - 0x6A45
{
	if (func_227(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		MISC::CLEAR_AREA_OF_PEDS(Param1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Param1, 3f, false, false, false, false, false, false, 0);
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
		ENTITY::SET_ENTITY_HEADING(iParam0, func_77(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
		if (func_227(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
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

float func_77(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)//Position - 0x6B10
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_78(struct<3> Param0, float fParam1)//Position - 0x6B2A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar1 /*4*/], Param0, fParam1, fParam1, fParam1, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_79()//Position - 0x6B76
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar2, &uVar1))
		{
			return uVar1 & 1 == 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x6BB0
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar2, &uVar1))
		{
			return uVar1 & 8 == 0;
		}
	}
	return 0;
}

float func_81(int iParam0, int iParam1, bool bParam2)//Position - 0x6BEB
{
	struct<3> Var0;
	struct<3> Var1;
	
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
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

float func_82(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x6C49
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

int func_83(int iParam0, bool bParam1, struct<3> Param2, float fParam3)//Position - 0x6C83
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
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
	int iVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	char* sVar65;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		iVar3 = joaat("weapon_unarmed");
		iVar4 = 0;
		iVar5 = -1;
		Var7 = { Local_49 };
		Var8 = { Local_49 };
		iVar9 = 0;
		iVar10 = 1;
		iVar11 = 0;
		iVar12 = 0;
		iVar13 = 10;
		fVar14 = 0f;
		fVar15 = 0f;
		fVar16 = 60f;
		fVar17 = 5f;
		fVar18 = 120f;
		fVar19 = -90f;
		fVar20 = 90f;
		iVar21 = iLocal_81;
		bVar22 = true;
		bVar23 = true;
		bVar24 = false;
		bVar25 = true;
		bVar26 = true;
		bVar27 = true;
		bVar28 = false;
		bVar29 = true;
		bVar30 = false;
		bVar31 = true;
		bVar32 = true;
		bVar33 = false;
		bVar34 = false;
		bVar35 = true;
		bVar36 = false;
		bVar37 = true;
		bVar38 = true;
		bVar39 = false;
		bVar40 = true;
		bVar41 = true;
		bVar42 = true;
		bVar43 = false;
		bVar44 = false;
		bVar45 = false;
		bVar46 = false;
		bVar47 = false;
		bVar48 = false;
		bVar49 = true;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = true;
		bVar54 = true;
		iVar55 = 0;
		bVar56 = false;
		bVar57 = false;
		bVar58 = false;
		bVar59 = false;
		bVar60 = false;
		bVar61 = false;
		bVar62 = true;
		bVar63 = true;
		bVar64 = false;
		switch (iParam0)
		{
			case 0:
				iVar2 = iLocal_79;
				iVar4 = Local_48[3 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				bVar28 = true;
				bVar64 = true;
				break;
			
			case 1:
				iVar2 = iLocal_79;
				iVar4 = Local_48[4 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				bVar28 = true;
				bVar64 = true;
				break;
			
			case 2:
				iVar2 = iLocal_80;
				iVar4 = Local_48[5 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 3:
				iVar2 = iLocal_79;
				iVar4 = Local_48[5 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 4:
				iVar2 = iLocal_79;
				iVar4 = Local_48[6 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 5:
				iVar2 = iLocal_80;
				iVar4 = Local_48[6 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 6:
				iVar2 = iLocal_80;
				iVar4 = Local_48[7 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 7:
				iVar2 = iLocal_80;
				iVar4 = Local_48[7 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		if (!func_87(Param2, Local_49, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var7 = { Param2 };
			}
		}
		if (fParam3 != -1f)
		{
			fVar1 = fParam3;
		}
		if (func_227(iVar4))
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar4, 26, iVar2, iVar5, true, true);
		}
		else
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED(26, iVar2, Var0, fVar1, true, true);
			ENTITY::SET_ENTITY_COLLISION(Local_47[iParam0 /*5*/], bVar35, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_47[iParam0 /*5*/], !bVar59, false);
		}
		if (bVar34)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_47[iParam0 /*5*/], Var0, false, false, true);
		}
		if (bParam1)
		{
			if (iVar21 == iLocal_81)
			{
				Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_47[iParam0 /*5*/].f_1 = func_73(Local_47[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_47[iParam0 /*5*/], bVar53);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 213, bVar22);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 212, bVar23);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam0 /*5*/], bVar24);
		PED::SET_PED_KEEP_TASK(Local_47[iParam0 /*5*/], bVar25);
		PED::SET_PED_DIES_WHEN_INJURED(Local_47[iParam0 /*5*/], bVar26);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 188, bVar49);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 42, !bVar27);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 9, bVar29);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 3, bVar31);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 342, bVar51);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_47[iParam0 /*5*/], bVar30, 1);
		PED::SET_PED_ARMOUR(Local_47[iParam0 /*5*/], iVar12);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 8, bVar33);
		ENTITY::SET_ENTITY_VISIBLE(Local_47[iParam0 /*5*/], bVar32, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_47[iParam0 /*5*/], bVar36);
		WEAPON::GIVE_WEAPON_TO_PED(Local_47[iParam0 /*5*/], iVar3, -1, bVar28, bVar28);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 2, bVar37);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 1, bVar38);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 52, bVar39);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 13, bVar62);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_47[iParam0 /*5*/], bVar40);
		PED::SET_PED_CAN_BE_TARGETTED(Local_47[iParam0 /*5*/], bVar41);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 118, bVar42);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 115, bVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 12, bVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 36, bVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 35, bVar46);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 29, bVar47);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 185, bVar48);
		PED::SET_PED_TO_LOAD_COVER(Local_47[iParam0 /*5*/], bVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 17, bVar56);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_47[iParam0 /*5*/], bVar57);
		AUDIO::STOP_PED_SPEAKING(Local_47[iParam0 /*5*/], bVar52);
		func_86(Local_47[iParam0 /*5*/], fVar16, fVar17, fVar18, fVar19, fVar20);
		ENTITY::FREEZE_ENTITY_POSITION(Local_47[iParam0 /*5*/], bVar60);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 203, bVar61);
		PED::_0xA9B61A329BFDCBEA(Local_47[iParam0 /*5*/], !bVar61);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 366, bVar63);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 134, bVar64);
		if (!bVar54)
		{
			func_65(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar65))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_47[iParam0 /*5*/], sVar65, -1, false);
		}
		if (iVar11 > 0)
		{
			if (iVar11 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/]) || iVar55)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/], iVar11);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_47[iParam0 /*5*/], iVar11, 0);
		}
		if (iVar13 > 0)
		{
			PED::SET_PED_ACCURACY(Local_47[iParam0 /*5*/], iVar13);
		}
		if (fVar14 > 0f || fVar15 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_47[iParam0 /*5*/], fVar14, fVar15);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_47[iParam0 /*5*/], iVar21);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_47[iParam0 /*5*/], iVar6, -1, Var7, Var8, true, true, true, false, 2, true, 0);
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], false);
			func_65(iParam0, 1);
		}
		func_85(iParam0);
		func_84(iParam0);
		if (iVar9 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_47[iParam0 /*5*/], iVar3, iVar9);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_47[iParam0 /*5*/], iVar3, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_47[iParam0 /*5*/], iVar10);
		if (bVar58)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_47[iParam0 /*5*/], true, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0)//Position - 0x72BE
{
	if (func_227(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_85(int iParam0)//Position - 0x72E3
{
	if (func_227(Local_47[iParam0 /*5*/]))
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

void func_86(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x7507
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

bool func_87(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x7543
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_88()//Position - 0x758A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((func_227(Local_47[0 /*5*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_47[0 /*5*/], 1) >= 200f) && (func_227(Local_47[1 /*5*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_47[1 /*5*/], 1) >= 200f))
	{
		return 1;
	}
	if ((func_154(10) && !func_227(Local_47[0 /*5*/])) || (func_154(11) && !func_227(Local_47[1 /*5*/])))
	{
		return 1;
	}
	if ((func_227(Local_47[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[0 /*5*/], false))) || (func_227(Local_47[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[1 /*5*/], false))))
	{
		return 1;
	}
	if ((func_227(Local_48[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[1 /*4*/], PLAYER::PLAYER_PED_ID(), true)) || (func_227(Local_48[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[2 /*4*/], PLAYER::PLAYER_PED_ID(), true)))
	{
		return 1;
	}
	if (func_89(Local_48[3 /*4*/]) || func_89(Local_48[4 /*4*/]))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (func_227(iVar0))
	{
		fLocal_74 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_74 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
		iVar1 = iVar2;
		if ((iVar1 == Local_48[3 /*4*/] && func_227(Local_47[0 /*5*/])) || (iVar1 == Local_48[4 /*4*/] && func_227(Local_47[1 /*5*/])))
		{
			return 1;
		}
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x7752
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((func_227(iParam0) && func_227(iVar0)) && fLocal_74 != 0f) && fLocal_74 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_74 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x77B2
{
	func_111(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], 5f);
	Local_47[iParam1 /*5*/].f_1 = func_73(Local_47[iParam1 /*5*/], 1, 145);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam1 /*5*/], true);
	func_94();
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_48[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_93(Local_47[iParam1 /*5*/]);
	func_91(Local_47[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_47[iParam1 /*5*/].f_3 = 3;
	if (func_227(Local_48[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			Local_54 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			Local_54 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_71 = MISC::GET_GAME_TIMER() + 1000;
		if (func_227(Local_47[iParam3 /*5*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam3 /*5*/], true);
			TASK::TASK_VEHICLE_MISSION(Local_47[iParam3 /*5*/], Local_48[iParam2 /*4*/], Local_48[0 /*4*/], 2, 30f, 262144, -1f, -1f, true);
		}
		Local_47[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_81, joaat("player"));
}

void func_91(int iParam0, char* sParam1, int iParam2)//Position - 0x78F6
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_92(iParam2), 1);
}

int func_92(int iParam0)//Position - 0x790D
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

void func_93(int iParam0)//Position - 0x7B02
{
	if (func_154(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_82);
		func_71(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_82);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_82);
}

void func_94()//Position - 0x7B2B
{
	if (!func_154(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_82);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_82);
		func_111(0);
	}
}

int func_95(struct<3> Param0, float fParam1)//Position - 0x7B4D
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	fVar1 = func_82(PLAYER::PLAYER_PED_ID(), Param0, 1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { Var2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	if ((fVar1 / fVar0) <= fParam1 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param0, true))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x7BBF
{
	return (func_227(Local_48[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], false));
}

int func_97(int iParam0)//Position - 0x7BE3
{
	if (func_101())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_15(Global_113375))
		{
			func_98(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_15(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x7C36
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_99(char* sParam0, int iParam1)//Position - 0x7D11
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_100(int iParam0)//Position - 0x7D28
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_101()//Position - 0x7D6B
{
	switch (func_102(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x7DA1
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
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
		Global_43016++;
		*uParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
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
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)//Position - 0x7ED8
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_104(int iParam0)//Position - 0x7F27
{
	return func_105(iParam0, Global_43052);
}

int func_105(int iParam0, int iParam1)//Position - 0x7F38
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

int func_106(int iParam0)//Position - 0x8124
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_107(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x8146
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
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
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	struct<3> Var26;
	char* sVar27;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*4*/]))
	{
		iVar3 = 0;
		bVar4 = true;
		bVar5 = true;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = true;
		bVar11 = false;
		bVar12 = false;
		bVar13 = false;
		bVar14 = false;
		bVar15 = false;
		bVar16 = true;
		bVar17 = false;
		bVar18 = true;
		bVar19 = false;
		bVar20 = false;
		fVar22 = -1f;
		fVar23 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_51 };
				fVar1 = 89.7263f;
				iVar2 = iLocal_75;
				bVar10 = false;
				bVar15 = true;
				bVar16 = false;
				bVar19 = true;
				bVar6 = true;
				bVar18 = false;
				iVar3 = 7;
				break;
			
			case 3:
				Var0 = { Local_52 };
				fVar1 = 175.3714f;
				iVar2 = iLocal_76;
				bVar8 = true;
				bVar15 = true;
				bVar16 = false;
				sVar27 = "96NWO218";
				iVar3 = 2;
				break;
			
			case 4:
				Var0 = { Local_53 };
				fVar1 = 171f;
				iVar2 = iLocal_76;
				bVar8 = true;
				bVar15 = true;
				bVar16 = false;
				sVar27 = "01DTS039";
				iVar3 = 2;
				break;
			
			case 1:
				Var0 = { 930.46f, 2719.65f, 42.41f };
				fVar1 = 180.53f;
				iVar2 = iLocal_77;
				break;
			
			case 2:
				Var0 = { 1141.17f, 2711.97f, 40.04f };
				fVar1 = 176.67f;
				iVar2 = iLocal_77;
				break;
			
			case 5:
				Var0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar1 = 182.0097f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "18NJM316";
				break;
			
			case 6:
				Var0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar1 = 177.8055f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "28HDT291";
				break;
			
			case 7:
				Var0 = { 1200.547f, -1553.607f, 38.4019f };
				fVar1 = 0.0001f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "23DJT162";
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		if (!func_87(Param1, Local_49, 0))
		{
			Var0 = { Param1 };
		}
		if (fParam2 != -1f)
		{
			fVar1 = fParam2;
		}
		Local_48[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar2, Var0, fVar1, true, true, false);
		func_110(iParam0);
		func_109(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_48[iParam0 /*4*/], bVar5, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar24))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_48[iParam0 /*4*/], iVar24, -1, Var25, Var26, false, false, false, false, 2, true, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_48[iParam0 /*4*/], bVar4, false);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_48[iParam0 /*4*/], bVar6);
		ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*4*/], bVar7);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iParam0 /*4*/], bVar8, true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_48[iParam0 /*4*/], bVar11);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[iParam0 /*4*/], bVar12, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_48[iParam0 /*4*/], bVar13);
		VEHICLE::_0x4D9D109F63FEE1D4(Local_48[iParam0 /*4*/], bVar14);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_48[iParam0 /*4*/], bVar16, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_48[iParam0 /*4*/], bVar15);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_48[iParam0 /*4*/], bVar17);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_48[iParam0 /*4*/], bVar18);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_48[iParam0 /*4*/], bVar19);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_48[iParam0 /*4*/], !bVar20, false);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar27))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_48[iParam0 /*4*/], sVar27);
		}
		if (fVar21 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], fVar21);
		}
		if (bVar9)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_48[iParam0 /*4*/]);
		}
		if (fVar22 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_48[iParam0 /*4*/], fVar22);
		}
		if (fVar23 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_48[iParam0 /*4*/], fVar23);
		}
		if (iVar3 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[iParam0 /*4*/], iVar3);
		}
		if (bParam3)
		{
			Local_48[iParam0 /*4*/].f_1 = func_108(Local_48[iParam0 /*4*/], bVar10, 0);
		}
	}
	return 1;
}

int func_108(int iParam0, bool bParam1, bool bParam2)//Position - 0x84E2
{
	return func_74(iParam0, !bParam1, bParam2);
}

void func_109(int iParam0)//Position - 0x84F5
{
	if (func_227(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_48[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_110(int iParam0)//Position - 0x8541
{
	if (func_227(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_111(int iParam0)//Position - 0x85EE
{
	MISC::SET_BIT(&iLocal_66, iParam0);
}

void func_112()//Position - 0x85FE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_122(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("player"), iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_81, iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_81, joaat("player"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("player"));
	func_113(1);
}

void func_113(bool bParam0)//Position - 0x8674
{
	func_114(39, bParam0);
	func_114(40, bParam0);
	func_114(41, bParam0);
	func_114(42, bParam0);
	func_114(43, bParam0);
	func_114(44, bParam0);
}

void func_114(int iParam0, bool bParam1)//Position - 0x86AC
{
	if (bParam1)
	{
		if (!func_121(iParam0, 2, 1))
		{
			func_120(iParam0, 2, 1);
		}
	}
	else if (func_121(iParam0, 2, 1))
	{
		func_115(iParam0, 2, 1);
	}
}

void func_115(int iParam0, int iParam1, bool bParam2)//Position - 0x86E3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_118(func_119(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_116(func_119(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

void func_116(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8755
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_117(var uParam0)//Position - 0x8785
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_118(int iParam0, int iParam1, int iParam2)//Position - 0x87B9
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_117(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_119(int iParam0)//Position - 0x87F6
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
			return 11352;
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
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_120(int iParam0, int iParam1, bool bParam2)//Position - 0x8B71
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_118(func_119(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_116(func_119(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

int func_121(int iParam0, int iParam1, bool bParam2)//Position - 0x8BE3
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return BitTest(func_118(func_119(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_122(bool bParam0)//Position - 0x8C44
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_78, bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_76, bParam0);
}

void func_123()//Position - 0x8C5C
{
	if (!func_153())
	{
		if (func_140())
		{
			func_200(1, 0);
		}
	}
	RECORDING::_0x208784099002BC30("RE_DUEL", 0);
	func_138();
	func_133();
	func_129();
	func_124();
	if ((func_154(5) && func_227(Local_48[iLocal_83 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_67)
	{
		AUDIO::SET_HORN_PERMANENTLY_ON(Local_48[iLocal_83 /*4*/]);
	}
	if (func_154(6))
	{
		if (iLocal_68 == 0)
		{
			if (func_82(PLAYER::PLAYER_PED_ID(), Local_51, 1) >= 150f)
			{
				iLocal_68 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_68)
		{
			func_71(6);
		}
	}
	if (func_154(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_69)
		{
			func_71(7);
		}
	}
	if ((func_154(9) && func_227(Local_48[0 /*4*/])) && func_81(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], 1) <= 35f)
	{
		if (!func_154(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_52, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_72) >= 1000 && !func_78(Local_52, 7f)) && func_82(PLAYER::PLAYER_PED_ID(), Local_52, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_52, 7f, true, false, false, false);
					func_107(3, Local_49, -1082130432, 0);
					func_107(1, Local_49, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_48[3 /*4*/], Local_48[1 /*4*/], 1f);
					func_83(0, 0, Local_49, -1082130432);
					func_111(10);
					if (iLocal_65 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[0 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_47[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_47[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_154(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_53, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_73) >= 1000 && !func_78(Local_53, 7f)) && func_82(PLAYER::PLAYER_PED_ID(), Local_53, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_53, 7f, true, false, false, false);
					func_107(4, Local_49, -1082130432, 0);
					func_107(2, Local_49, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_48[4 /*4*/], Local_48[2 /*4*/], 1f);
					func_83(1, 0, Local_49, -1082130432);
					func_111(11);
					if (iLocal_65 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[1 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_47[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_47[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_73 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_154(10) && func_154(11))
		{
			func_71(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
		}
	}
	if (func_154(8))
	{
		if (iLocal_70 == 0)
		{
			iLocal_70 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_70)
		{
			func_71(8);
			func_111(6);
		}
	}
}

void func_124()//Position - 0x8F44
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar0 /*5*/], false))
			{
				if (!func_128(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 1f);
					func_65(iVar0, 0);
				}
				if (func_72(Local_47[iVar0 /*5*/], 0) != -1)
				{
					if (func_127(iVar0))
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
			else if (func_128(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 0.7f);
				func_126(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iVar0 /*5*/].f_1, false);
				}
			}
			if (PED::IS_PED_INJURED(Local_47[iVar0 /*5*/]))
			{
				func_125(&(Local_47[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_48[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iVar0 /*4*/], false))
			{
				func_125(&(Local_48[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_125(int* iParam0)//Position - 0x90CF
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_126(int iParam0, int iParam1)//Position - 0x90EF
{
	MISC::CLEAR_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_127(int iParam0)//Position - 0x9105
{
	if (iParam0 == 3)
	{
		if (!func_227(Local_47[2 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 5)
	{
		if (!func_227(Local_47[4 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 7)
	{
		if (!func_227(Local_47[6 /*5*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_128(int iParam0, int iParam1)//Position - 0x9153
{
	return BitTest(Local_47[iParam0 /*5*/].f_2, iParam1);
}

void func_129()//Position - 0x9166
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*4*/]))
		{
			func_130(iVar0);
		}
		iVar0++;
	}
}

void func_130(int iParam0)//Position - 0x9194
{
	if (func_227(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!func_227(Local_47[2 /*5*/]) && !func_227(Local_47[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					func_131(iParam0, 0);
				}
				break;
			
			case 6:
				if ((!func_227(Local_47[4 /*5*/]) && !func_227(Local_47[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					func_131(iParam0, 0);
				}
				break;
			
			case 7:
				if ((!func_227(Local_47[6 /*5*/]) && !func_227(Local_47[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					func_131(iParam0, 0);
				}
				break;
			
			case 3:
				if (!func_227(Local_47[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					if (func_81(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*4*/], 1) >= 50f)
					{
						func_131(iParam0, 0);
					}
				}
				if (func_154(6))
				{
					func_64(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_63);
				}
				break;
			
			case 4:
				if (!func_227(Local_47[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_48[iParam0 /*4*/], false))
				{
					if (func_81(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*4*/], 1) >= 50f)
					{
						func_131(iParam0, 0);
					}
				}
				if (func_154(6))
				{
					func_64(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_64);
				}
				break;
			
			case 1:
				if (!func_227(Local_48[3 /*4*/]) || func_81(Local_48[3 /*4*/], Local_48[iParam0 /*4*/], 1) >= 150f)
				{
					func_131(iParam0, 0);
				}
				break;
			
			case 2:
				if (!func_227(Local_48[4 /*4*/]) || func_81(Local_48[4 /*4*/], Local_48[iParam0 /*4*/], 1) >= 150f)
				{
					func_131(iParam0, 0);
				}
				break;
			
			case 0:
				switch (Local_48[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_96())
						{
							func_111(1);
							func_125(&(Local_48[iParam0 /*4*/].f_1));
							Local_48[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_48[iParam0 /*4*/]))
	{
		func_131(iParam0, 0);
	}
	else
	{
		func_131(iParam0, 1);
	}
}

void func_131(int iParam0, bool bParam1)//Position - 0x9404
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*4*/]))
	{
		func_125(&(Local_48[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[iParam0 /*4*/]);
		}
		if (func_132(&(Local_48[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_48[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[iParam0 /*4*/]));
			}
		}
		Local_48[iParam0 /*4*/] = 0;
		Local_48[iParam0 /*4*/].f_2 = 0;
		Local_48[iParam0 /*4*/].f_3 = 0;
	}
}

int func_132(var uParam0)//Position - 0x947E
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_133()//Position - 0x949A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]))
		{
			func_134(iVar0);
		}
		iVar0++;
	}
}

void func_134(int iParam0)//Position - 0x94C8
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	
	if (func_227(Local_47[iParam0 /*5*/]))
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
							PED::SET_IK_TARGET(Local_47[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, Local_49, 0, -1, -1);
						}
						break;
					
					case 1:
						if (func_227(Local_48[iVar0 /*4*/]))
						{
							VEHICLE::_0x88BC673CA9E0AE99(Local_48[iVar0 /*4*/], true);
							if (func_227(Local_48[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iVar0 /*4*/], Local_48[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_71 && !func_154(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar0 /*4*/], Local_54, 7f, 7f, 7f, false, true, 0)) && func_82(PLAYER::PLAYER_PED_ID(), Local_54, 1) < func_81(Local_48[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(Local_54, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_48[iVar0 /*4*/], true), 7f)) && !func_78(Local_54, 8f))
								{
									fVar3 = func_77(Local_54, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									MISC::CLEAR_AREA_OF_VEHICLES(Local_54, 8f, false, false, false, false, false, false, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_54, fVar3, 0f, -8f, 0f), 8f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(Local_48[iVar0 /*4*/], Local_54, true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[iVar0 /*4*/], 5f);
									ENTITY::SET_ENTITY_HEADING(Local_48[iVar0 /*4*/], fVar3);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iVar0 /*4*/], true, true, false);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iVar0 /*4*/], 30f);
									func_111(5);
									iLocal_83 = iVar0;
									iLocal_67 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_154(12) && ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar0 /*4*/], Local_54, 7f, 7f, 7f, false, true, 0))
								{
									func_111(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_71 && ENTITY::IS_ENTITY_OCCLUDED(Local_48[iVar0 /*4*/])) && func_227(Local_48[iVar1 /*4*/])) && func_81(Local_48[iVar0 /*4*/], Local_48[iVar1 /*4*/], 1) >= 20f)
								{
									Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (Var2.f_0 < -3.5f || Var2.f_0 > 3.5f)
									{
										fVar4 = ENTITY::GET_ENTITY_SPEED(Local_48[iVar0 /*4*/]);
										fVar4 = func_137(fVar4, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_48[iVar0 /*4*/], func_77(ENTITY::GET_ENTITY_COORDS(Local_48[iVar0 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iVar0 /*4*/], fVar4);
									}
								}
								if ((func_128(iParam0, 3) || func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f) || (func_227(Local_48[iVar1 /*4*/]) && func_81(Local_48[iVar0 /*4*/], Local_48[iVar1 /*4*/], 1) <= 15f))
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
						if (func_227(Local_48[iVar0 /*4*/]))
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
						if (func_154(6) || func_154(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], false) && func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
							{
								func_136(iParam0, 0);
							}
						}
						else if (func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
						{
							func_136(iParam0, 0);
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
				if (func_154(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !func_135(Local_47[iParam0 /*5*/], 579380604, 1))
					{
						TASK::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				if (func_154(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], false) && func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
					{
						func_136(iParam0, 0);
					}
				}
				else if (func_154(2) && func_81(Local_47[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
				{
					func_136(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_128(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], true);
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], true, false);
			func_126(iParam0, 1);
		}
		if (!func_128(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_47[iParam0 /*5*/]))
			{
				func_136(iParam0, 0);
			}
			else
			{
				func_136(iParam0, 1);
			}
		}
	}
}

int func_135(int iParam0, int iParam1, bool bParam2)//Position - 0x9ABE
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

void func_136(int iParam0, bool bParam1)//Position - 0x9B04
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		func_125(&(Local_47[iParam0 /*5*/].f_1));
		if ((((func_227(Local_47[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_47[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], true)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_47[iParam0 /*5*/]))
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

float func_137(float fParam0, float fParam1, float fParam2)//Position - 0x9BA3
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

void func_138()//Position - 0x9BCA
{
	if ((func_154(1) || iLocal_65 > 2) && func_139())
	{
		if (func_227(Local_48[0 /*4*/]) && func_81(PLAYER::PLAYER_PED_ID(), Local_48[0 /*4*/], 1) >= 250f)
		{
			func_63();
		}
	}
	if (func_139())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*4*/]) && !func_227(Local_48[0 /*4*/]))
		{
			func_63();
		}
	}
}

int func_139()//Position - 0x9C3C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_227(Local_47[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

int func_140()//Position - 0x9C81
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_149())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_148())
		{
			return 0;
		}
	}
	if (func_141(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_141(float fParam0, bool bParam1)//Position - 0x9CE3
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_23(func_147()))
		{
			iVar5 = func_20();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_142(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_142(int iParam0, var uParam1)//Position - 0x9D94
{
	switch (iParam0)
	{
		case 0:
			func_143(uParam1, "Abigail1", func_145(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 1:
			func_143(uParam1, "Abigail2", func_145(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 2:
			func_143(uParam1, "Barry1", func_145(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 3:
			func_143(uParam1, "Barry2", func_145(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_144(iParam0), 1, 1);
			break;
		
		case 4:
			func_143(uParam1, "Barry3", func_145(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 5:
			func_143(uParam1, "Barry3A", func_145(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 6:
			func_143(uParam1, "Barry3C", func_145(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 7:
			func_143(uParam1, "Barry4", func_145(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_144(iParam0), 0, 0);
			break;
		
		case 8:
			func_143(uParam1, "Dreyfuss1", func_145(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 9:
			func_143(uParam1, "Epsilon1", func_145(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 10:
			func_143(uParam1, "Epsilon2", func_145(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 11:
			func_143(uParam1, "Epsilon3", func_145(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 12:
			func_143(uParam1, "Epsilon4", func_145(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 13:
			func_143(uParam1, "Epsilon5", func_145(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 14:
			func_143(uParam1, "Epsilon6", func_145(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 15:
			func_143(uParam1, "Epsilon7", func_145(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 16:
			func_143(uParam1, "Epsilon8", func_145(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 17:
			func_143(uParam1, "Extreme1", func_145(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 18:
			func_143(uParam1, "Extreme2", func_145(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 19:
			func_143(uParam1, "Extreme3", func_145(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 20:
			func_143(uParam1, "Extreme4", func_145(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 21:
			func_143(uParam1, "Fanatic1", func_145(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_144(iParam0), 1, 0);
			break;
		
		case 22:
			func_143(uParam1, "Fanatic2", func_145(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_144(iParam0), 1, 0);
			break;
		
		case 23:
			func_143(uParam1, "Fanatic3", func_145(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_144(iParam0), 0, 1);
			break;
		
		case 24:
			func_143(uParam1, "Hao1", func_145(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_144(iParam0), 0, 1);
			break;
		
		case 25:
			func_143(uParam1, "Hunting1", func_145(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 26:
			func_143(uParam1, "Hunting2", func_145(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 27:
			func_143(uParam1, "Josh1", func_145(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 28:
			func_143(uParam1, "Josh2", func_145(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_144(iParam0), 1, 1);
			break;
		
		case 29:
			func_143(uParam1, "Josh3", func_145(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_144(iParam0), 1, 1);
			break;
		
		case 30:
			func_143(uParam1, "Josh4", func_145(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 31:
			func_143(uParam1, "Maude1", func_145(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 32:
			func_143(uParam1, "Minute1", func_145(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 33:
			func_143(uParam1, "Minute2", func_145(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 34:
			func_143(uParam1, "Minute3", func_145(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 35:
			func_143(uParam1, "MrsPhilips1", func_145(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 36:
			func_143(uParam1, "MrsPhilips2", func_145(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 37:
			func_143(uParam1, "Nigel1", func_145(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 38:
			func_143(uParam1, "Nigel1A", func_145(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_144(iParam0), 1, 1);
			break;
		
		case 39:
			func_143(uParam1, "Nigel1B", func_145(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_144(iParam0), 1, 1);
			break;
		
		case 40:
			func_143(uParam1, "Nigel1C", func_145(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_144(iParam0), 1, 1);
			break;
		
		case 41:
			func_143(uParam1, "Nigel1D", func_145(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_144(iParam0), 1, 1);
			break;
		
		case 42:
			func_143(uParam1, "Nigel2", func_145(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_144(iParam0), 1, 1);
			break;
		
		case 43:
			func_143(uParam1, "Nigel3", func_145(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_144(iParam0), 1, 1);
			break;
		
		case 44:
			func_143(uParam1, "Omega1", func_145(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 45:
			func_143(uParam1, "Omega2", func_145(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 46:
			func_143(uParam1, "Paparazzo1", func_145(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 47:
			func_143(uParam1, "Paparazzo2", func_145(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 48:
			func_143(uParam1, "Paparazzo3", func_145(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 49:
			func_143(uParam1, "Paparazzo3A", func_145(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 50:
			func_143(uParam1, "Paparazzo3B", func_145(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 51:
			func_143(uParam1, "Paparazzo4", func_145(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 52:
			func_143(uParam1, "Rampage1", func_145(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 54:
			func_143(uParam1, "Rampage3", func_145(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 55:
			func_143(uParam1, "Rampage4", func_145(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 56:
			func_143(uParam1, "Rampage5", func_145(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_144(iParam0), 0, 0);
			break;
		
		case 53:
			func_143(uParam1, "Rampage2", func_145(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_144(iParam0), 1, 0);
			break;
		
		case 57:
			func_143(uParam1, "TheLastOne", func_145(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 58:
			func_143(uParam1, "Tonya1", func_145(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 59:
			func_143(uParam1, "Tonya2", func_145(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 60:
			func_143(uParam1, "Tonya3", func_145(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 61:
			func_143(uParam1, "Tonya4", func_145(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		case 62:
			func_143(uParam1, "Tonya5", func_145(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_144(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_143(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xAF49
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_144(int iParam0)//Position - 0xAFDA
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

struct<2> func_145(int iParam0)//Position - 0xB320
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_146(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_146(int iParam0)//Position - 0xB357
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

int func_147()//Position - 0xB7A3
{
	func_21();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_148()//Position - 0xB7BC
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_149()//Position - 0xB7D9
{
	if (func_152() && !func_148())
	{
		return 1;
	}
	if (func_151() && func_150())
	{
		return 1;
	}
	return 0;
}

bool func_150()//Position - 0xB80B
{
	return Global_113104 > 0;
}

int func_151()//Position - 0xB819
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_152()//Position - 0xB82E
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_153()//Position - 0xB851
{
	if ((Global_113375 == func_30() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

bool func_154(int iParam0)//Position - 0xB87C
{
	return BitTest(iLocal_66, iParam0);
}

void func_155(int iParam0)//Position - 0xB889
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_157(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_156();
}

void func_156()//Position - 0xB8BF
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

void func_157(int iParam0)//Position - 0xB8FC
{
	Global_113375 = iParam0;
}

int func_158(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB90A
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_50())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_148())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_149())
		{
			return 0;
		}
		if (func_199())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_23(func_147()))
		{
			if (func_141(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_198(iParam1))
		{
			return 0;
		}
		if (func_23(func_147()))
		{
			if (func_197(func_147()) == 4 || func_197(func_147()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_147()))
		{
			if (!func_196(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_195(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_193())
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
		if (!func_183(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_182(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_182(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_198(30) && !func_182(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_147()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_181(iVar4))
				{
					if (func_159(iVar2))
					{
						if (!func_87(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (func_147() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_159(int iParam0)//Position - 0xBCA4
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_160(iVar0);
}

int func_160(int iParam0)//Position - 0xBCC5
{
	return func_161(iParam0, 1);
}

int func_161(int iParam0, int iParam1)//Position - 0xBCD4
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_181(iParam0))
	{
		return 0;
	}
	func_162(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xBD27
{
	func_163(func_174(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_163(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xBD45
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_173(iParam0, iParam1))
	{
		iVar0 = func_172(iParam1);
		iVar1 = func_170(iParam0);
		iVar2 = (func_170(iParam0) - func_170(iParam1));
		iVar3 = (func_172(iParam0) - func_172(iParam1));
		iVar4 = (func_169(iParam0) - func_169(iParam1));
		iVar5 = (func_168(iParam0) - func_168(iParam1));
		iVar6 = (func_167(iParam0) - func_167(iParam1));
		iVar7 = (func_166(iParam0) - func_166(iParam1));
	}
	else
	{
		iVar0 = func_172(iParam0);
		iVar1 = func_170(iParam1);
		iVar2 = (func_170(iParam1) - func_170(iParam0));
		iVar3 = (func_172(iParam1) - func_172(iParam0));
		iVar4 = (func_169(iParam1) - func_169(iParam0));
		iVar5 = (func_168(iParam1) - func_168(iParam0));
		iVar6 = (func_167(iParam1) - func_167(iParam0));
		iVar7 = (func_166(iParam1) - func_166(iParam0));
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
		iVar4 = (iVar4 + func_165(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_164(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_164(float fParam0, float fParam1, float fParam2)//Position - 0xBF46
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

int func_165(int iParam0, int iParam1)//Position - 0xBF88
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

int func_166(int iParam0)//Position - 0xC02B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_167(int iParam0)//Position - 0xC03E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_168(int iParam0)//Position - 0xC051
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_169(int iParam0)//Position - 0xC064
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_170(int iParam0)//Position - 0xC076
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_171(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_171(bool bParam0, int iParam1, int iParam2)//Position - 0xC098
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_172(int iParam0)//Position - 0xC0AF
{
	return iParam0 & 15;
}

int func_173(int iParam0, int iParam1)//Position - 0xC0BC
{
	int iVar0;
	int iVar1;
	
	if (!func_181(iParam1) || !func_181(iParam0))
	{
		return 1;
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
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xC1C8
{
	var uVar0;
	
	func_180(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_179(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_178(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_177(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_176(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_175(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_175(var uParam0, int iParam1)//Position - 0xC20E
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

void func_176(var uParam0, int iParam1)//Position - 0xC294
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_177(var uParam0, int iParam1)//Position - 0xC2C7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_172(*uParam0);
	iVar1 = func_170(*uParam0);
	if (iParam1 < 1 || iParam1 > func_165(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_178(var uParam0, int iParam1)//Position - 0xC318
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_179(var uParam0, int iParam1)//Position - 0xC352
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_180(var uParam0, int iParam1)//Position - 0xC38D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_181(int iParam0)//Position - 0xC3C9
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
	iVar0 = func_166(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_167(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_168(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_170(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_172(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_169(iParam0);
	if (iVar5 < 1 || iVar5 > func_165(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_182(int iParam0, bool bParam1)//Position - 0xC4A5
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0xC4C5
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_147();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_192()) || Global_112433) || Global_31962) || func_191()) || func_190(8, -1)) || func_189()) || func_188()) || func_187()) || func_186()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_192()) || Global_31962) || func_191()) || func_190(8, -1)) || func_187()) || func_189()) || func_188()) || func_186()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_192()) || Global_112433) || Global_31962) || func_191()) || func_190(8, -1)) || func_187()) || func_189()) || func_188()) || func_186()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_192()) || Global_112433) || Global_31962) || func_191()) || func_190(8, -1)) || func_189()) || func_188()) || func_186()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_192() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_190(8, -1)) || func_186()) || func_185()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_190(8, -1) || func_189()) || func_188()) || func_185()) || func_184())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_192()) || Global_31962) || func_191()) || func_190(8, -1)) || func_188()) || func_187()) || func_186()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_192()) || func_188()) || Global_112433) || Global_31962) || func_191()) || Global_44238) || func_190(8, -1)) || func_187()) || func_185()) || func_186()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_192()) || Global_112433) || Global_31962) || func_191()) || func_190(8, -1)) || func_187()) || func_185()) || func_189()) || func_188()) || func_186())
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

var func_184()//Position - 0xCBE2
{
	return Global_100480.f_1;
}

int func_185()//Position - 0xCBF0
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_186()//Position - 0xCC13
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_187()//Position - 0xCC2D
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_188()//Position - 0xCC57
{
	return Global_100493.f_376 > 0;
}

bool func_189()//Position - 0xCC68
{
	return Global_100493.f_375 > 0;
}

var func_190(int iParam0, int iParam1)//Position - 0xCC79
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

var func_191()//Position - 0xCCB1
{
	return Global_1575058;
}

int func_192()//Position - 0xCCBD
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_193()//Position - 0xCCD9
{
	func_194();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_194()//Position - 0xCD01
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_147();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

bool func_195(int iParam0)//Position - 0xCDA3
{
	return func_173(func_174(), iParam0);
}

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0xCDB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_147();
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

int func_197(int iParam0)//Position - 0xCE99
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_198(int iParam0)//Position - 0xCEBD
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
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_199()//Position - 0xCF15
{
	int iVar0;
	
	if (Global_32110)
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

void func_200(bool bParam0, bool bParam1)//Position - 0xCF59
{
	func_226();
	func_225();
	func_122(0);
	func_223(1, 1, 1, 0);
	func_221(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	func_220();
	func_219();
	func_218();
	if (func_227(Local_48[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_48[0 /*4*/], true);
	}
	func_217(bParam1);
	func_216(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
	func_214();
	func_212();
	func_113(0);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (bParam0)
	{
		func_201(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_201(int iParam0)//Position - 0xCFEE
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
	if (func_153())
	{
		func_205(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_204(30000);
		StringCopy(&cVar0, func_203(Global_113375, 1), 64);
		if (func_29(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	func_202(&Global_32019);
	Global_113376 = 0;
	func_157(-1);
}

void func_202(var uParam0)//Position - 0xD0A0
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_203(int iParam0, bool bParam1)//Position - 0xD0DD
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

void func_204(int iParam0)//Position - 0xD326
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_205(int iParam0)//Position - 0xD338
{
	func_206(iParam0, 0, func_211(iParam0));
}

void func_206(int iParam0, int iParam1, int iParam2)//Position - 0xD34D
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_174();
	func_209(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_208(iParam0, &uVar0);
	Var1 = { func_207(&uVar0) };
}

struct<16> func_207(var uParam0)//Position - 0xD37C
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_168(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_167(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_166(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_169(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_172(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_170(*uParam0), 64);
	return Var0;
}

void func_208(int iParam0, var uParam1)//Position - 0xD44C
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_209(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD464
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_170(*uParam0);
	iVar1 = func_172(*uParam0);
	iVar2 = func_169(*uParam0);
	iVar3 = func_168(*uParam0);
	iVar4 = func_167(*uParam0);
	iVar5 = func_166(*uParam0);
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
	iVar6 = func_165(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_165(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_210(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_210(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD5E6
{
	func_180(uParam0, iParam1);
	func_179(uParam0, iParam2);
	func_178(uParam0, iParam3);
	func_176(uParam0, iParam5);
	func_177(uParam0, iParam4);
	func_175(uParam0, iParam6);
}

int func_211(int iParam0)//Position - 0xD61E
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

void func_212()//Position - 0xD7C1
{
	Global_20471 = 0;
	func_213();
}

void func_213()//Position - 0xD7D1
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_214()//Position - 0xD828
{
	Global_20471 = 0;
	func_215();
}

void func_215()//Position - 0xD838
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_216(bool bParam0)//Position - 0xD859
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_131(iVar0, bParam0);
		iVar0++;
	}
}

void func_217(bool bParam0)//Position - 0xD87C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

void func_218()//Position - 0xD89F
{
}

void func_219()//Position - 0xD8A7
{
}

void func_220()//Position - 0xD8AF
{
}

void func_221(bool bParam0)//Position - 0xD8B7
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
		func_222(9, 1);
		func_222(8, 1);
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
		func_222(9, 0);
		func_222(8, 0);
	}
}

void func_222(int iParam0, bool bParam1)//Position - 0xD98A
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32207, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32207, iParam0);
	}
}

void func_223(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xD9AC
{
	if (bParam0)
	{
		func_212();
	}
	if (bParam1)
	{
		if (!func_224() || (bParam0 && !bParam3))
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

int func_224()//Position - 0xD9EC
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_225()//Position - 0xDA0E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_125(&(Local_47[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_125(&(Local_48[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_226()//Position - 0xDA54
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
}

int func_227(int iParam0)//Position - 0xDA68
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

