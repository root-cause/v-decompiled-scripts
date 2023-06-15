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
	var uLocal_18 = 0;
	struct<3> Local_19 = { 0, 0, 0 } ;
	struct<18> Local_22 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_40 = 0;
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
	int iLocal_57[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_87 = 0;
	struct<178> Local_88[27];
	var uLocal_4895 = 0;
	struct<24> Local_4896[30];
	var uLocal_5617 = 0;
	struct<24> Local_5618[24];
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	float fLocal_6197 = 0f;
	float fLocal_6198 = 0f;
	int iLocal_6199 = 0;
	int iLocal_6200 = 0;
	int iLocal_6201 = 0;
	int iLocal_6202 = 0;
	bool bLocal_6203 = 0;
	bool bLocal_6204 = 0;
	int iLocal_6205 = 0;
	int iLocal_6206 = 0;
	int iLocal_6207 = 0;
	int* iLocal_6208 = NULL;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	int iLocal_6211 = 0;
	bool bLocal_6212 = 0;
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
	iLocal_87 = 29;
	fLocal_6197 = 0.075f;
	fLocal_6198 = 0.725f;
	iLocal_6205 = 1;
	iLocal_6206 = 1;
	bLocal_6212 = true;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_43();
	}
	bLocal_6212 = false;
	CAM::DO_SCREEN_FADE_OUT(0);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
	func_36(1);
	CUTSCENE::REQUEST_CUTSCENE("FOS_EP_1_P6", 8);
	func_19(0);
	func_8(1, 1, 1, 0, 0, 0, 0);
	while (true)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		func_7(PLAYER::PLAYER_PED_ID());
		if (func_2())
		{
			func_43();
		}
		if (bLocal_6204)
		{
			HUD::SET_TEXT_SCALE(0.5f, 0.5f);
			func_1(0.1f, 0.1f, "NUMBER", 1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xE2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

int func_2()//Position - 0x100
{
	CLOCK::SET_CLOCK_TIME(Local_19.f_0, Local_19.f_1, Local_19.f_2);
	MISC::SET_WIND(-1f);
	switch (iLocal_6207)
	{
		case 0:
			CAM::DO_SCREEN_FADE_IN(0);
			func_6();
			CAM::DO_SCREEN_FADE_IN(500);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_6207++;
			break;
		
		case 1:
			if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (bLocal_6212)
				{
					func_4();
				}
				HUD::SET_TEXT_RENDER_ID(iLocal_6201);
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_6199, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
				HUD::SET_TEXT_RENDER_ID(iLocal_6202);
				if (bLocal_6203)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_6200, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_6200, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3(char* sParam0)//Position - 0x1D9
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_4()//Position - 0x1EB
{
	int iVar0;
	bool bVar1;
	
	iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	bVar1 = false;
	while (bVar1 <= (16 - 1))
	{
		if (Local_22[bVar1] != -1)
		{
			if ((!BitTest(uLocal_56, bVar1) && iVar0 >= Local_22[bVar1]) && iVar0 < Local_22.f_17[bVar1])
			{
				func_5();
				MISC::SET_BIT(&uLocal_56, bVar1);
			}
		}
		bVar1++;
	}
}

void func_5()//Position - 0x24B
{
}

void func_6()//Position - 0x253
{
}

bool func_7(int iParam0)//Position - 0x25B
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_8(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x279
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_18(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_17())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_16(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_18(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_16(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_14(PLAYER::PLAYER_ID())) && !func_10(PLAYER::PLAYER_ID(), 0)) && !func_9()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_14(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_9()//Position - 0x3C6
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_10(int iParam0, int iParam1)//Position - 0x3E0
{
	bool bVar0;
	
	if (!func_13(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x439
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x47A
{
	return Global_1574918;
}

int func_13(var uParam0)//Position - 0x486
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

int func_14(int iParam0)//Position - 0x4A8
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_15())
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

bool func_15()//Position - 0x4E7
{
	return BitTest(Global_2621446, 3);
}

int func_16(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x4F5
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_17()//Position - 0x528
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)//Position - 0x54F
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

void func_19(bool bParam0)//Position - 0x572
{
	int iVar0;
	
	if (func_7(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 689.1f, 586.5f, 130.5f, true, false, false, true);
		MISC::CLEAR_AREA_OF_PEDS(689.1f, 586.5f, 130.5f, 500f, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	}
	func_35(0);
	func_34(&iLocal_6211, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (bParam0)
	{
		STREAMING::REQUEST_IPL("LInvader");
		while (!STREAMING::IS_IPL_ACTIVE("LInvader"))
		{
			SYSTEM::WAIT(0);
		}
	}
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	iLocal_57[0] = joaat("A_M_Y_Hipster_01");
	iLocal_57[1] = joaat("A_M_Y_Hipster_02");
	iLocal_57[2] = joaat("A_M_Y_Hipster_03");
	iLocal_57[3] = joaat("A_F_Y_Hipster_01");
	iLocal_57[4] = joaat("A_F_Y_Hipster_02");
	iLocal_57[5] = joaat("A_F_Y_Hipster_03");
	iLocal_57[6] = joaat("A_F_Y_Hipster_04");
	iLocal_57[7] = joaat("A_F_Y_BevHills_01");
	iLocal_57[8] = joaat("A_M_M_Business_01");
	iLocal_57[9] = joaat("A_M_M_BevHills_02");
	iLocal_57[10] = joaat("A_M_M_Skater_01");
	iLocal_57[11] = joaat("A_M_Y_BeachVesp_01");
	iLocal_57[12] = joaat("A_M_Y_BevHills_01");
	iLocal_57[13] = joaat("A_F_M_BevHills_01");
	iLocal_57[14] = joaat("A_M_M_KTown_01");
	iLocal_57[15] = joaat("A_M_Y_BusiCas_01");
	iLocal_57[16] = joaat("A_M_Y_Business_02");
	iLocal_57[17] = joaat("A_M_Y_Gay_01");
	iLocal_57[18] = joaat("A_M_Y_KTown_02");
	iLocal_57[19] = joaat("A_M_M_BevHills_02");
	iLocal_57[20] = joaat("A_M_Y_Business_03");
	iLocal_57[21] = joaat("A_M_Y_Gay_02");
	iLocal_57[22] = joaat("A_M_M_Malibu_01");
	iLocal_57[22] = joaat("A_M_Y_Gay_02");
	iLocal_57[23] = joaat("A_M_Y_EastSA_02");
	iLocal_57[24] = joaat("A_M_Y_SouCent_02");
	iLocal_57[25] = joaat("A_M_Y_Vinewood_01");
	iLocal_57[26] = joaat("A_M_Y_Vinewood_02");
	iLocal_57[27] = joaat("A_M_Y_Vinewood_03");
	iLocal_57[28] = joaat("A_M_Y_Vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_32(func_33(iVar0), 1);
		iVar0++;
	}
	func_32("misslester1b_crowdlow@14@", 1);
	func_32("misslester1b_crowdlow@24@", 1);
	func_31("BREAKING_NEWS", &iLocal_6200, 1);
	func_31("lifeinvader_presentation", &iLocal_6199, 1);
	func_30("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_24(&(Local_88[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_23(&(Local_4896[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_22(&(Local_5618[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	HUD::REGISTER_NAMED_RENDERTARGET("Big_Disp", false);
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_01"));
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_02"));
	iLocal_6201 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("Big_Disp");
	iLocal_6202 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
	while (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::WAIT(2000);
	iLocal_6207 = 0;
	Local_19.f_0 = 12;
	Local_19.f_1 = 0;
	Local_19.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_20(iVar0);
		iVar0++;
	}
	if (bLocal_6204)
	{
	}
}

void func_20(int iParam0)//Position - 0x8A6
{
	switch (iParam0)
	{
		case 0:
			func_21(iParam0, 0, 10000);
			break;
		
		case 1:
			func_21(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_21(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_21(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_21(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_21(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_21(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_21(iParam0, 69600, 79200);
			break;
		
		case 8:
			func_21(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_21(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_21(iParam0, -1, -1);
			break;
		
		case 11:
			func_21(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_21(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_21(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_21(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_21(iParam0, 154200, 154200);
			break;
	}
}

void func_21(int iParam0, int iParam1, int iParam2)//Position - 0xA16
{
	Local_22[iParam0] = iParam1;
	Local_22.f_17[iParam0] = iParam2;
}

void func_22(var uParam0, int iParam1)//Position - 0xA30
{
	uParam0->f_22 = 0;
	MISC::CLEAR_BIT(&uLocal_6195, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_23(var uParam0, int iParam1)//Position - 0xA58
{
	uParam0->f_22 = 0;
	MISC::CLEAR_BIT(&uLocal_5617, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_24(var uParam0, int iParam1)//Position - 0xA80
{
	struct<3> Var0;
	
	func_29(uParam0);
	MISC::CLEAR_BIT(&uLocal_4895, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (func_28(-4.29f) + 180f) };
			func_26(uParam0, 82047830, 667.319f, 572.133f, 128.521f, Var0, 6, 0, 0);
			func_26(uParam0, 83248680, 666.312f, 571.675f, 128.521f, Var0, 6, 1, 0);
			func_26(uParam0, 71526810, 665.235f, 571.183f, 128.521f, Var0, 6, 2, 0);
			func_26(uParam0, 49826530, 664.124f, 570.679f, 128.521f, Var0, 6, 0, 0);
			func_26(uParam0, 78575440, 663.029f, 570.181f, 128.521f, Var0, 6, 1, 0);
			func_26(uParam0, 12133230, 661.937f, 569.685f, 128.521f, Var0, 6, 2, 0);
			func_26(uParam0, 89665750, 660.839f, 569.194f, 128.521f, Var0, 6, 0, 0);
			func_26(uParam0, 65990810, 659.537f, 569.392f, 128.521f, Var0, 6, 1, 0);
			func_26(uParam0, 21233450, 658.187f, 569.572f, 128.523f, Var0, 4, 0, 1f);
			func_25(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, Var0, 0, 0.5f, -1.5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 1:
			Var0 = { 0f, 0f, (func_28(-3.98f) + 180f) };
			func_26(uParam0, 21091970, 670.312f, 568.023f, 128.521f, Var0, 5, 0, 0.5f);
			func_26(uParam0, 97482490, 669.189f, 567.502f, 128.522f, Var0, 6, 1, 0);
			func_26(uParam0, 66764240, 668.28f, 566.688f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 82832850, 667.384f, 565.885f, 128.522f, Var0, 6, 2, 0);
			func_26(uParam0, 33636100, 666.491f, 565.085f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 22769640, 665.595f, 564.282f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 2:
			Var0 = { 0f, 0f, (func_28(-3.78f) + 180f) };
			func_26(uParam0, 91480760, 673.7f, 564.799f, 128.521f, Var0, 6, 0, 0);
			func_26(uParam0, 64996320, 672.996f, 563.847f, 128.521f, Var0, 6, 1, 0);
			func_26(uParam0, 30855220, 672.271f, 562.865f, 128.521f, Var0, 6, 2, 0);
			func_26(uParam0, 98921990, 671.557f, 561.897f, 128.521f, Var0, 6, 0, 0);
			func_26(uParam0, 73357200, 670.258f, 561.366f, 128.522f, Var0, 6, 1, 0);
			func_25(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, Var0, 2, -1.5f, -1.5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, Var0, 2, -1.5f, -1.5f);
			break;
		
		case 3:
			Var0 = { 0f, 0f, (func_28(-3.38f) + 180f) };
			func_26(uParam0, 89689390, 681.517f, 555.801f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 71057000, 681.796f, 556.967f, 128.522f, Var0, 6, 1, 0);
			func_26(uParam0, 26206390, 682.076f, 558.137f, 128.522f, Var0, 6, 2, 0);
			func_26(uParam0, 58207860, 682.36f, 559.342f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 43622440, 682.635f, 560.475f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 4:
			Var0 = { 0f, 0f, (func_28(-3.17f) + 180f) };
			func_26(uParam0, 78555440, 687.841f, 559.785f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 12324420, 687.807f, 558.602f, 128.522f, Var0, 6, 1, 0);
			func_26(uParam0, 4083210, 687.771f, 557.382f, 128.522f, Var0, 6, 2, 0);
			func_26(uParam0, 2021980, 688.465f, 556.159f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 21091970, 688.431f, 554.961f, 128.521f, Var0, 6, 1, 0);
			func_25(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, Var0, 0, 0.5f, -1.5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, Var0, 1, -1.5f, -1.5f);
			break;
		
		case 5:
			Var0 = { 0f, 0f, (func_28(-2.97f) + 180f) };
			func_26(uParam0, 31491440, 692.632f, 559.992f, 128.522f, Var0, 5, 2, -0.5f);
			func_26(uParam0, 34393340, 693.189f, 558.886f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 94762900, 693.396f, 557.684f, 128.522f, Var0, 6, 1, 0);
			func_26(uParam0, 95283980, 693.6f, 556.498f, 128.522f, Var0, 6, 2, 0);
			func_26(uParam0, 92416940, 693.803f, 555.317f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 53597080, 694.007f, 554.131f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 6:
			Var0 = { 0f, 0f, (func_28(-2.7f) + 180f) };
			func_26(uParam0, 86170110, 697.492f, 561.188f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 62247860, 697.964f, 560.188f, 128.522f, Var0, 6, 1, 0);
			func_26(uParam0, 43665230, 698.467f, 559.116f, 128.522f, Var0, 6, 2, 0);
			func_26(uParam0, 32906070, 698.988f, 558.013f, 128.522f, Var0, 6, 0, 0);
			func_26(uParam0, 70836820, 699.502f, 556.925f, 128.522f, Var0, 6, 1, 0);
			func_26(uParam0, 67800350, 700.014f, 555.841f, 128.522f, Var0, 6, 2, 0);
			func_26(uParam0, 41115560, 701.184f, 555.063f, 128.521f, Var0, 6, 0, 0);
			func_26(uParam0, 98430790, 701.005f, 553.758f, 128.522f, Var0, 6, 1, 0);
			func_25(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, Var0, 0, 0.5f, -1.5f);
			func_25(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 7:
			Var0 = { 0f, 0f, (func_28(-3.99f) + 180f) };
			func_26(uParam0, 13168530, 652.833f, 570.052f, 128.529f, Var0, 6, 0, 0);
			func_26(uParam0, 92127780, 652.006f, 569.319f, 128.528f, Var0, 6, 1, 0);
			func_26(uParam0, 51664260, 651.136f, 568.538f, 128.729f, Var0, 6, 2, 0);
			func_26(uParam0, 35914010, 650.242f, 567.746f, 128.729f, Var0, 6, 0, 0);
			func_26(uParam0, 43076060, 649.661f, 566.94f, 128.929f, Var0, 6, 1, 0);
			func_26(uParam0, 21755390, 648.426f, 566.137f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 8:
			Var0 = { 0f, 0f, (func_28(-3.9f) + 180f) };
			func_26(uParam0, 20501110, 656.955f, 565.868f, 128.53f, Var0, 6, 0, 0);
			func_26(uParam0, 10114780, 656.193f, 565.067f, 128.53f, Var0, 6, 1, 0);
			func_26(uParam0, 12664730, 655.358f, 564.19f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 32956570, 654.534f, 563.324f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 11862860, 653.696f, 562.443f, 128.93f, Var0, 6, 1, 0);
			func_26(uParam0, 87809290, 652.862f, 561.566f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 9:
			Var0 = { 0f, 0f, (func_28(-3.76f) + 180f) };
			func_26(uParam0, 75170110, 662.947f, 560.965f, 128.529f, Var0, 6, 0, 0);
			func_26(uParam0, 62246860, 662.306f, 560.065f, 128.529f, Var0, 6, 1, 0);
			func_26(uParam0, 83665250, 661.603f, 559.079f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 22016170, 660.91f, 558.106f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 41846840, 660.204f, 557.116f, 128.929f, Var0, 6, 1, 0);
			func_26(uParam0, 10000350, 659.502f, 556.13f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 10:
			Var0 = { 0f, 0f, (func_28(-3.68f) + 180f) };
			func_26(uParam0, 86878180, 667.872f, 557.785f, 128.53f, Var0, 6, 0, 0);
			func_26(uParam0, 22242820, 667.31f, 556.833f, 128.53f, Var0, 6, 1, 0);
			func_26(uParam0, 93969290, 666.693f, 555.791f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 12101010, 666.086f, 554.762f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 20232220, 665.467f, 553.715f, 128.93f, Var0, 6, 1, 0);
			func_26(uParam0, 57707370, 664.852f, 552.673f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 11:
			Var0 = { 0f, 0f, (func_28(-3.53f) + 180f) };
			func_26(uParam0, 13130110, 674.882f, 554.326f, 128.529f, Var0, 6, 0, 0);
			func_26(uParam0, 97845810, 674.46f, 553.305f, 128.529f, Var0, 6, 1, 0);
			func_26(uParam0, 12345670, 673.997f, 552.186f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 89101110, 673.541f, 551.081f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 12131410, 673.076f, 549.958f, 128.929f, Var0, 6, 1, 0);
			func_26(uParam0, 51617180, 672.613f, 548.839f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 12:
			Var0 = { 0f, 0f, (func_28(-3.45f) + 180f) };
			func_26(uParam0, 60616260, 680.396f, 552.335f, 128.53f, Var0, 6, 0, 0);
			func_26(uParam0, 36465660, 680.063f, 551.281f, 128.53f, Var0, 6, 1, 0);
			func_26(uParam0, 67686970, 679.697f, 550.127f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 71727370, 679.336f, 548.988f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 47576770, 678.969f, 547.829f, 128.93f, Var0, 6, 1, 0);
			func_26(uParam0, 78798080, 678.603f, 546.674f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 13:
			Var0 = { 0f, 0f, (func_28(-3.31f) + 180f) };
			func_26(uParam0, 11511610, 688.034f, 550.483f, 128.529f, Var0, 6, 0, 0);
			func_26(uParam0, 17118110, 687.853f, 549.393f, 128.529f, Var0, 6, 1, 0);
			func_26(uParam0, 91201210, 687.653f, 548.199f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 12212310, 687.457f, 547.02f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 23124120, 687.257f, 545.821f, 128.929f, Var0, 6, 1, 0);
			func_26(uParam0, 51261270, 687.058f, 544.627f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 14:
			Var0 = { 0f, 0f, (func_28(-3.22f) + 180f) };
			func_26(uParam0, 15515610, 693.855f, 549.783f, 128.53f, Var0, 6, 0, 0);
			func_26(uParam0, 57158150, 693.767f, 548.682f, 128.53f, Var0, 6, 1, 0);
			func_26(uParam0, 91601610, 693.67f, 547.474f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 16216310, 693.575f, 546.283f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 64165160, 693.478f, 545.071f, 128.93f, Var0, 6, 1, 0);
			func_26(uParam0, 61671680, 693.381f, 543.865f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 15:
			Var0 = { 0f, 0f, (func_28(-3.08f) + 180f) };
			func_26(uParam0, 19920020, 701.652f, 549.708f, 128.529f, Var0, 6, 0, 0);
			func_26(uParam0, 1202200, 701.721f, 548.605f, 128.529f, Var0, 6, 1, 0);
			func_26(uParam0, 32042050, 701.795f, 547.396f, 128.729f, Var0, 6, 2, 0);
			func_26(uParam0, 20620720, 701.869f, 546.203f, 128.729f, Var0, 6, 0, 0);
			func_26(uParam0, 8209210, 701.944f, 544.99f, 128.929f, Var0, 6, 1, 0);
			func_26(uParam0, 2112120, 702.019f, 543.781f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 16:
			Var0 = { 0f, 0f, (func_28(-2.99f) + 180f) };
			func_26(uParam0, 24024120, 707.482f, 550.335f, 128.53f, Var0, 6, 0, 0);
			func_26(uParam0, 43244240, 707.644f, 549.242f, 128.53f, Var0, 6, 1, 0);
			func_26(uParam0, 42452460, 707.821f, 548.044f, 128.73f, Var0, 6, 2, 0);
			func_26(uParam0, 24724820, 707.996f, 546.862f, 128.73f, Var0, 6, 0, 0);
			func_26(uParam0, 48249250, 708.174f, 545.659f, 128.929f, Var0, 6, 1, 0);
			func_26(uParam0, 2512520, 708.351f, 544.461f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 17:
			Var0 = { 0f, 0f, (func_28(-3.98f) + 180f) };
			func_26(uParam0, 46779100, 646.434f, 564.522f, 128.927f, Var0, 6, 0, 0);
			func_26(uParam0, 93643160, 645.612f, 563.784f, 128.927f, Var0, 6, 1, 0);
			func_26(uParam0, 34729570, 644.71f, 562.975f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 28556490, 643.821f, 562.177f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 75335160, 642.916f, 561.365f, 129.327f, Var0, 6, 1, 0);
			func_26(uParam0, 84872300, 642.015f, 560.557f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 18:
			Var0 = { 0f, 0f, (func_28(-3.91f) + 180f) };
			func_26(uParam0, 65187100, 651.092f, 559.707f, 128.926f, Var0, 6, 0, 0);
			func_26(uParam0, 87514460, 650.325f, 558.912f, 128.926f, Var0, 6, 1, 0);
			func_26(uParam0, 46165810, 649.483f, 558.04f, 128.127f, Var0, 6, 2, 0);
			func_26(uParam0, 12560720, 648.654f, 557.18f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 27854880, 647.809f, 556.306f, 129.326f, Var0, 6, 1, 0);
			func_26(uParam0, 97601360, 646.968f, 555.435f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 19:
			Var0 = { 0f, 0f, (func_28(-3.75f) + 180f) };
			func_26(uParam0, 55178130, 657.925f, 554.108f, 128.927f, Var0, 6, 0, 0);
			func_26(uParam0, 75148880, 657.29f, 553.204f, 128.927f, Var0, 6, 1, 0);
			func_26(uParam0, 88865540, 656.593f, 552.213f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 64916770, 655.906f, 551.235f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 70536220, 655.207f, 550.241f, 129.327f, Var0, 6, 1, 0);
			func_26(uParam0, 17101310, 654.512f, 549.25f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 20:
			Var0 = { 0f, 0f, (func_28(-3.68f) + 180f) };
			func_26(uParam0, 76870120, 663.545f, 550.463f, 128.926f, Var0, 6, 0, 0);
			func_26(uParam0, 32147850, 662.977f, 549.515f, 128.926f, Var0, 6, 1, 0);
			func_26(uParam0, 97662220, 662.353f, 548.477f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 12107070, 661.738f, 547.453f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 60841880, 661.111f, 546.411f, 129.326f, Var0, 6, 1, 0);
			func_26(uParam0, 27803350, 660.489f, 545.373f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 21:
			Var0 = { 0f, 0f, (func_28(-3.53f) + 180f) };
			func_26(uParam0, 19202120, 671.531f, 546.515f, 128.927f, Var0, 6, 0, 0);
			func_26(uParam0, 22232420, 671.116f, 545.491f, 128.927f, Var0, 6, 1, 0);
			func_26(uParam0, 52627280, 670.66f, 544.369f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 29303130, 670.211f, 543.262f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 23334350, 669.753f, 542.135f, 129.327f, Var0, 6, 1, 0);
			func_26(uParam0, 36373830, 669.298f, 541.014f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 22:
			Var0 = { 0f, 0f, (func_28(-3.46f) + 180f) };
			func_26(uParam0, 18283840, 677.828f, 544.227f, 128.926f, Var0, 6, 0, 0);
			func_26(uParam0, 85858680, 677.487f, 543.176f, 128.926f, Var0, 6, 1, 0);
			func_26(uParam0, 78889900, 677.112f, 542.024f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 91929390, 676.744f, 540.888f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 49596970, 676.368f, 539.731f, 129.326f, Var0, 6, 1, 0);
			func_26(uParam0, 98991000, 675.994f, 538.58f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 23:
			Var0 = { 0f, 0f, (func_28(-3.3f) + 180f) };
			func_26(uParam0, 12812910, 686.526f, 542.118f, 128.927f, Var0, 6, 0, 0);
			func_26(uParam0, 30131130, 686.352f, 541.027f, 128.927f, Var0, 6, 1, 0);
			func_26(uParam0, 21331340, 686.16f, 539.831f, 129.127f, Var0, 6, 1, 0);
			func_26(uParam0, 13513610, 685.972f, 538.652f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 37138130, 685.779f, 537.451f, 129.327f, Var0, 6, 1, 0);
			func_26(uParam0, 91401410, 685.588f, 536.256f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 24:
			Var0 = { 0f, 0f, (func_28(-3.23f) + 180f) };
			func_26(uParam0, 16917010, 693.176f, 541.306f, 128.926f, Var0, 6, 0, 0);
			func_26(uParam0, 71172170, 693.08f, 540.205f, 128.926f, Var0, 6, 1, 0);
			func_26(uParam0, 31741750, 692.975f, 538.998f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 17617810, 692.871f, 537.808f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 79180180, 692.765f, 536.597f, 129.326f, Var0, 6, 1, 0);
			func_26(uParam0, 21831840, 692.66f, 535.391f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 25:
			Var0 = { 0f, 0f, (func_28(-3.07f) + 180f) };
			func_26(uParam0, 21321420, 702.065f, 541.218f, 128.927f, Var0, 6, 0, 0);
			func_26(uParam0, 15216210, 702.14f, 540.116f, 128.927f, Var0, 6, 1, 0);
			func_26(uParam0, 72182190, 702.223f, 538.907f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 22022120, 702.304f, 537.715f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 22223220, 702.387f, 536.502f, 129.327f, Var0, 6, 1, 0);
			func_26(uParam0, 42252260, 703.116f, 526.841f, 129.618f, Var0, 6, 2, 0);
			break;
		
		case 26:
			Var0 = { 0f, 0f, (func_28(-3f) + 180f) };
			func_26(uParam0, 25325420, 708.727f, 541.922f, 128.926f, Var0, 6, 0, 0);
			func_26(uParam0, 55256250, 709.881f, 539.828f, 128.926f, Var0, 6, 1, 0);
			func_26(uParam0, 72582590, 709.05f, 539.628f, 129.127f, Var0, 6, 2, 0);
			func_26(uParam0, 26026120, 709.217f, 538.445f, 129.127f, Var0, 6, 0, 0);
			func_26(uParam0, 62263260, 709.386f, 537.241f, 129.326f, Var0, 6, 1, 0);
			func_26(uParam0, 42652650, 709.555f, 536.043f, 129.326f, Var0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_25(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, float fParam8, float fParam9)//Position - 0x2425
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = iParam7;
	*uParam0 = 1;
	uParam0->f_8 = fParam8;
	uParam0->f_9 = fParam9;
}

void func_26(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, int iParam8, int iParam9, int iParam10)//Position - 0x2457
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_27(uParam0[uParam0->f_154 /*17*/], iParam1, Param2, Param5, iParam8, iParam9, iParam10);
	uParam0->f_154++;
}

void func_27(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, var uParam8, var uParam9, var uParam10)//Position - 0x2492
{
	*uParam0 = { Param2 };
	uParam0->f_3 = { Param5 };
	uParam0->f_6 = uParam8;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam9;
	uParam0->f_9 = uParam10;
}

float func_28(float fParam0)//Position - 0x24C4
{
	return (fParam0 * 57.29578f);
}

void func_29(var uParam0)//Position - 0x24D4
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_30(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24F1
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	HUD::REQUEST_ADDITIONAL_TEXT(sParam0, iParam1);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_31(char* sParam0, var uParam1, int iParam2)//Position - 0x2556
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam0);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_32(char* sParam0, int iParam1)//Position - 0x25BE
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_33(int iParam0)//Position - 0x2619
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_34(int iParam0, int iParam1)//Position - 0x26E9
{
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
	PED::SET_CREATE_RANDOM_COPS(false);
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(true);
	*iParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, true, true, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(PLAYER::PLAYER_PED_ID()) && iParam1 == 1)
	{
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
	}
}

void func_35(bool bParam0)//Position - 0x27B8
{
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(8, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
}

void func_36(bool bParam0)//Position - 0x2812
{
	if (bParam0)
	{
		func_42();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_41(0))
		{
			func_37(0);
		}
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!Global_20500.f_1 == 0)
		{
			Global_20500.f_1 = 3;
		}
	}
}

void func_37(int iParam0)//Position - 0x2875
{
	if (func_40())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_39())
		{
			func_38(1, 1);
		}
		else
		{
			func_38(0, 0);
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
	if (!func_17())
	{
		Global_20500.f_1 = 3;
	}
}

void func_38(bool bParam0, bool bParam1)//Position - 0x28FF
{
	if (bParam0)
	{
		if (func_41(0))
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

bool func_39()//Position - 0x2973
{
	return BitTest(Global_1963795, 5);
}

bool func_40()//Position - 0x2981
{
	return BitTest(Global_1963795, 19);
}

int func_41(int iParam0)//Position - 0x2990
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

void func_42()//Position - 0x29E7
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_43()//Position - 0x2A10
{
	func_44();
	func_8(0, 1, 1, 0, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_44()//Position - 0x2A2B
{
	int iVar0;
	
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
	func_54(&iLocal_6208);
	HUD::RELEASE_NAMED_RENDERTARGET("Big_Disp");
	STREAMING::REMOVE_IPL("LInvader");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_6199);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_6200);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar0 = 0;
	while (iVar0 < Local_88.f_0)
	{
		func_51(&(Local_88[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_4896.f_0)
	{
		func_48(&(Local_4896[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_5618.f_0)
	{
		func_48(&(Local_5618[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		func_47(iLocal_57[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_46(func_33(iVar0));
		iVar0++;
	}
	func_45(iLocal_6211);
	func_8(0, 1, 1, 0, 0, 0, 0);
}

void func_45(int iParam0)//Position - 0x2B21
{
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(false);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 315f, true, true);
}

void func_46(char* sParam0)//Position - 0x2B84
{
	STREAMING::REMOVE_ANIM_DICT(sParam0);
}

void func_47(int iParam0)//Position - 0x2B92
{
	if (iParam0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_48(var uParam0)//Position - 0x2BA6
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	sVar1 = func_50(uParam0->f_16);
	sVar2 = func_49(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0], false))
		{
			ENTITY::STOP_ENTITY_ANIM(uParam0->f_17[iVar0], sVar2, sVar1, -1000f);
		}
		func_54(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_49(int iParam0)//Position - 0x2C1B
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_50(int iParam0)//Position - 0x2C31
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_51(var uParam0)//Position - 0x2C46
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_53(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_52(&(uParam0->f_155[iVar0 /*11*/].f_10));
		iVar0++;
	}
}

void func_52(int* iParam0)//Position - 0x2C92
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_53(var uParam0)//Position - 0x2CD3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_52(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_54(int* iParam0)//Position - 0x2CFC
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

