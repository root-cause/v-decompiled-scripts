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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	struct<726> Local_49 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0 } ;
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
	while (true)
	{
		func_126();
		func_1();
	}
}

void func_1()//Position - 0x80
{
	func_108();
	switch (Local_49.f_9)
	{
		case 0:
			func_105();
			break;
		
		case 1:
			func_84();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_10();
			break;
		
		case 4:
			func_2();
			break;
	}
}

void func_2()//Position - 0xD6
{
	struct<16> Var0;
	
	func_9(&(Local_49.f_25));
	func_8();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_7());
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_6());
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_5());
	Var0 = { func_4(Local_49.f_20) };
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Var0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_49.f_725));
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_24-2/DLC_24-2_Circuit_Hack");
	func_3();
	AUDIO::STOP_SOUND(Local_49.f_21);
	AUDIO::RELEASE_SOUND_ID(Local_49.f_21);
	Local_49.f_21 = -1;
	if (!AUDIO::HAS_SOUND_FINISHED(Local_49.f_22))
	{
		AUDIO::STOP_SOUND(Local_49.f_22);
	}
	AUDIO::RELEASE_SOUND_ID(Local_49.f_22);
	Local_49.f_22 = -1;
	AUDIO::STOP_AUDIO_SCENE("DLC_24-2_Hacking_Circuit_Scene");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0x169
{
	if (Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 0;
	}
}

struct<16> func_4(int iParam0)//Position - 0x187
{
	struct<16> Var0;
	
	StringCopy(&Var0, "PCB_Hack_Assets_LevelBlocks", 64);
	if (iParam0 > 0)
	{
		StringConCat(&Var0, "_", 64);
		StringIntConCat(&Var0, iParam0, 64);
	}
	return Var0;
}

char* func_5()//Position - 0x1AE
{
	return "MPBeamHack";
}

char* func_6()//Position - 0x1B9
{
	return "PCB_Hack_Assets_Foreground";
}

char* func_7()//Position - 0x1C4
{
	return "PCB_Hack_Assets_Backgrounds";
}

void func_8()//Position - 0x1CF
{
	Global_1919341.f_1 = 0;
}

void func_9(var uParam0)//Position - 0x1DE
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1981195 = 0;
}

void func_10()//Position - 0x2C8
{
	func_79();
	func_78();
	func_31();
	func_18();
	func_16();
	if (!func_15(Local_49.f_16))
	{
		func_14(&(Local_49.f_16));
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_49.f_22))
	{
		AUDIO::STOP_SOUND(Local_49.f_22);
	}
	if (!BitTest(Global_1919341, 6))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Fail", "DLC_24-2_Hack_Circuit_Board", true);
		MISC::SET_BIT(&Global_1919341, 6);
	}
	if (func_12(Local_49.f_16, 5000))
	{
		func_11(4);
	}
}

void func_11(int iParam0)//Position - 0x33E
{
	Local_49.f_9 = iParam0;
}

bool func_12(int iParam0, int iParam1)//Position - 0x34C
{
	return func_13(iParam0) > iParam1;
}

int func_13(int iParam0)//Position - 0x35D
{
	if (!func_15(iParam0))
	{
		return 0;
	}
	return (NETWORK::GET_NETWORK_TIME_ACCURATE() - iParam0);
}

void func_14(var uParam0)//Position - 0x37A
{
	if (*uParam0 == 0)
	{
		*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_15(int iParam0)//Position - 0x390
{
	return iParam0 != 0;
}

void func_16()//Position - 0x39C
{
	if (func_15(Local_49.f_16) && func_12(Local_49.f_16, 1250))
	{
		HUD::SET_TEXT_SCALE(1.6f, 1.6f);
		HUD::SET_TEXT_COLOUR(237, 35, 54, 255);
		HUD::SET_TEXT_DROPSHADOW(5, 0, 0, 0, 175);
		HUD::SET_TEXT_JUSTIFICATION(0);
		func_17(0.5f, 0.41f, "CBH_MV_FL" /* GXT: FAIL */, 0);
	}
}

void func_17(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x3F8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_18()//Position - 0x410
{
	int iVar0;
	
	if (!func_15(Local_49.f_15))
	{
		func_14(&(Local_49.f_15));
	}
	iVar0 = func_13(Local_49.f_15);
	iVar0 = (func_30(Local_49.f_20) - iVar0);
	if (Local_49.f_9 == 1)
	{
		Local_49.f_18 = iVar0;
	}
	else
	{
		iVar0 = Local_49.f_18;
	}
	if (((func_15(Local_49.f_17) && !func_12(Local_49.f_17, 1250)) || !func_15(Local_49.f_17)) && ((func_15(Local_49.f_16) && !func_12(Local_49.f_16, 1250)) || !func_15(Local_49.f_16)))
	{
		func_19(iVar0);
	}
	if (BitTest(Global_1919341, 1) || Local_49.f_9 != 1)
	{
		return;
	}
	if (func_12(Local_49.f_15, func_30(Local_49.f_20)))
	{
		MISC::SET_BIT(&Global_1919341, 1);
	}
}

void func_19(int iParam0)//Position - 0x4EC
{
	struct<2> Var0;
	struct<11> Var2;
	
	Var0.f_0 = func_29(0.7675f);
	Var0.f_1 = 0.1f;
	if (iParam0 > 10000)
	{
		Var2 = { func_27(0) };
	}
	else
	{
		Var2 = { func_27(1) };
	}
	if (iParam0 <= 0)
	{
		iParam0 = 0;
	}
	if (Local_49.f_9 == 1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_49.f_22))
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_49.f_22, "TimeRemaining", (SYSTEM::TO_FLOAT(iParam0) / 1000f));
		}
	}
	func_20(&Var0, &Var2, iParam0, 519, 0, 0, 0);
}

void func_20(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)//Position - 0x56B
{
	char* sVar0;
	
	if (func_25())
	{
		func_24(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(bParam6);
		HUD::SET_TEXT_CENTRE(bParam5);
		if (func_23(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_22(*uParam0), func_21(uParam0->f_1), 0);
	}
}

var func_21(var uParam0)//Position - 0x5C4
{
	return uParam0;
}

var func_22(var uParam0)//Position - 0x5CE
{
	return uParam0;
}

int func_23(char* sParam0)//Position - 0x5D8
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_24(var uParam0, bool bParam1)//Position - 0x610
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

int func_25()//Position - 0x6A9
{
	if (func_26())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_26()//Position - 0x6E8
{
	return Global_1574604;
}

struct<11> func_27(int iParam0)//Position - 0x6F4
{
	struct<11> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_1 = (0.85f / fLocal_45);
			Var0.f_2 = 0.85f;
			Var0.f_3 = 255;
			Var0.f_4 = 255;
			Var0.f_5 = 255;
			Var0.f_6 = 255;
			Var0.f_7 = 0;
			Var0.f_10 = 10;
			Var0.f_0 = 4;
			break;
		
		case 1:
			Var0.f_1 = (0.85f / fLocal_45);
			Var0.f_2 = 0.85f;
			Var0.f_3 = 255;
			Var0.f_4 = SYSTEM::ROUND(func_28(100f, 255f, Local_49.f_23));
			Var0.f_5 = SYSTEM::ROUND(func_28(100f, 255f, Local_49.f_23));
			Var0.f_6 = 255;
			Var0.f_7 = 0;
			Var0.f_10 = 10;
			Var0.f_0 = 4;
			break;
	}
	return Var0;
}

float func_28(float fParam0, float fParam1, float fParam2)//Position - 0x7B8
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_29(float fParam0)//Position - 0x7CD
{
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_45));
	return fParam0;
}

int func_30(int iParam0)//Position - 0x7EA
{
	switch (iParam0)
	{
		case 0:
			return 60000;
		
		case 1:
			return 60000;
		
		case 2:
			return 60000;
		
		case 3:
			return 60000;
		
		case 4:
			return 60000;
		
		case 5:
			return 60000;
		
		case 6:
			return 60000;
		
		case 7:
			return 60000;
		
		case 8:
			return 60000;
		
		case 9:
			return 60000;
		
		default:
	}
	return 20000;
}

void func_31()//Position - 0x87E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	fVar0 = (0.5f - (func_77() * IntToFloat((Local_49.f_11 - 1))));
	fVar1 = ((0.5f - ((func_76() / 2f) * IntToFloat((Local_49.f_10 - 1)))) + func_75());
	fVar2 = (fVar0 - (func_77() * 1.1f));
	fVar3 = 0.25f;
	fVar4 = ((0.5f + (func_77() * IntToFloat((Local_49.f_11 - 1)))) + (func_77() * 1.1f));
	fVar5 = 0.25f;
	fVar6 = (0.5f - 0.62f);
	fVar7 = 0.235f;
	fVar8 = (0.5f + 0.62f);
	fVar9 = 0.235f;
	iVar14 = 0;
	iVar14 = 0;
	while (iVar14 <= (Local_49.f_11 - 1))
	{
		iVar10 = 255;
		iVar11 = 255;
		iVar12 = 255;
		iVar13 = 255;
		if (func_66(Local_49.f_20, iVar14) == Local_49[iVar14])
		{
		}
		func_62(fVar0, fVar1, iVar14, Local_49[iVar14], iVar10, iVar11, iVar12, iVar13);
		if (iVar14 == Local_49.f_12 && Local_49.f_9 == 1)
		{
			func_56(fVar0, fVar1, iVar14, Local_49[iVar14]);
		}
		iVar14++;
	}
	iVar15 = func_55(Local_49.f_20);
	iVar16 = func_54(Local_49.f_20);
	iVar17 = func_53(Local_49.f_20);
	iVar18 = func_52(Local_49.f_20);
	if (iVar15 != -1)
	{
		func_50(fVar2, (fVar3 + (func_76() * IntToFloat(iVar15))));
	}
	if (iVar16 != -1)
	{
		func_48(fVar2, (fVar3 + (func_76() * IntToFloat(iVar16))));
	}
	if (iVar17 != -1)
	{
		func_45(fVar4, (fVar5 + (func_76() * IntToFloat(iVar17))));
	}
	if (iVar18 != -1)
	{
		func_42(fVar4, (fVar5 + (func_76() * IntToFloat(iVar18))));
	}
	if (Local_49.f_9 == 2)
	{
		func_37(fVar6, fVar7, 2);
		func_37(fVar8, fVar9, 2);
		if ((func_15(Local_49.f_17) && func_12(Local_49.f_17, 1250)) || (func_15(Local_49.f_16) && func_12(Local_49.f_16, 1250)))
		{
			iVar10 = 255;
			iVar11 = 255;
			iVar12 = 255;
			iVar13 = 255;
			GRAPHICS::DRAW_SPRITE(func_5(), func_36(), 0.5f, 0.5f, (1f * fLocal_46), 1f, 0f, iVar10, iVar11, iVar12, iVar13, false, 0);
		}
	}
	else if (Local_49.f_9 == 3)
	{
		func_37(fVar6, fVar7, func_35(Local_49.f_24, 1, 0));
		func_37(fVar8, fVar9, func_35(Local_49.f_24, 1, 0));
		if ((func_15(Local_49.f_17) && func_12(Local_49.f_17, 1250)) || (func_15(Local_49.f_16) && func_12(Local_49.f_16, 1250)))
		{
			iVar10 = 255;
			iVar11 = 255;
			iVar12 = 255;
			iVar13 = 255;
			GRAPHICS::DRAW_SPRITE(func_34(), func_33(), 0.5f, 0.5f, (1f * fLocal_46), 1f, 0f, iVar10, iVar11, iVar12, iVar13, false, 0);
		}
	}
	else
	{
		func_37(fVar6, fVar7, 2);
		if (func_32(Local_49.f_20))
		{
			func_37(fVar8, fVar9, func_35(Local_49.f_24, 2, 0));
		}
		else
		{
			func_37(fVar8, fVar9, 0);
		}
	}
}

int func_32(int iParam0)//Position - 0xB73
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_49.f_11 - 1))
	{
		if (Local_49[iVar0] != func_66(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

char* func_33()//Position - 0xBAB
{
	return "fail";
}

char* func_34()//Position - 0xBB6
{
	return "MPBeamHack";
}

int func_35(bool bParam0, int iParam1, int iParam2)//Position - 0xBC1
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_36()//Position - 0xBD8
{
	return "pass";
}

void func_37(float fParam0, float fParam1, int iParam2)//Position - 0xBE3
{
	char cVar0[24];
	
	switch (iParam2)
	{
		case 2:
			StringCopy(&cVar0, func_41(), 24);
			break;
		
		case 1:
			StringCopy(&cVar0, func_40(), 24);
			break;
		
		case 0:
			StringCopy(&cVar0, func_39(), 24);
			break;
	}
	GRAPHICS::DRAW_SPRITE(func_38(), &cVar0, func_29(fParam0), fParam1, ((0.042968754f * 1.788f) / fLocal_45), 0.07638889f, 0f, 255, 255, 255, 255, false, 0);
}

char* func_38()//Position - 0xC53
{
	return "PCB_Hack_Assets_Foreground";
}

char* func_39()//Position - 0xC5E
{
	return "PCB_Hack_OffLight";
}

char* func_40()//Position - 0xC69
{
	return "PCB_Hack_RedLight";
}

char* func_41()//Position - 0xC75
{
	return "PCB_Hack_GreenLight";
}

void func_42(float fParam0, float fParam1)//Position - 0xC81
{
	GRAPHICS::DRAW_SPRITE(func_44(), func_43(), func_29(fParam0), fParam1, ((0.046875f * 1.788f) / fLocal_45), 0.054166667f, 0f, 255, 255, 255, 255, false, 0);
}

char* func_43()//Position - 0xCB9
{
	return "PCB_Hack_EndSolder_Top";
}

char* func_44()//Position - 0xCC5
{
	return "PCB_Hack_Assets_Foreground";
}

void func_45(float fParam0, float fParam1)//Position - 0xCD0
{
	GRAPHICS::DRAW_SPRITE(func_47(), func_46(), func_29(fParam0), fParam1, ((0.046875f * 1.788f) / fLocal_45), 0.054166667f, 0f, 255, 255, 255, 255, false, 0);
}

char* func_46()//Position - 0xD08
{
	return "PCB_Hack_StartSolder_Bottom";
}

char* func_47()//Position - 0xD14
{
	return "PCB_Hack_Assets_Foreground";
}

void func_48(float fParam0, float fParam1)//Position - 0xD1F
{
	GRAPHICS::DRAW_SPRITE(func_47(), func_49(), func_29(fParam0), fParam1, ((0.046875f * 1.788f) / fLocal_45), 0.054166667f, 0f, 255, 255, 255, 255, false, 0);
}

char* func_49()//Position - 0xD57
{
	return "PCB_Hack_StartSolder_Middle";
}

void func_50(float fParam0, float fParam1)//Position - 0xD63
{
	GRAPHICS::DRAW_SPRITE(func_47(), func_51(), func_29(fParam0), fParam1, ((0.046875f * 1.788f) / fLocal_45), 0.054166667f, 0f, 255, 255, 255, 255, false, 0);
}

char* func_51()//Position - 0xD9B
{
	return "PCB_Hack_StartSolder_Top";
}

int func_52(int iParam0)//Position - 0xDA7
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return -1;
		
		case 6:
			return 4;
		
		case 7:
			return -1;
		
		case 8:
			return 5;
		
		case 9:
			return 7;
		
		default:
	}
	return -1;
}

int func_53(int iParam0)//Position - 0xE1B
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		case 3:
			return 4;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 3;
		
		case 7:
			return 7;
		
		case 8:
			return 7;
		
		case 9:
			return 5;
		
		default:
	}
	return -1;
}

int func_54(int iParam0)//Position - 0xE8F
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 5:
			return 4;
		
		case 6:
			return 7;
		
		case 7:
			return 6;
		
		case 8:
			return -1;
		
		case 9:
			return -1;
		
		default:
	}
	return -1;
}

int func_55(int iParam0)//Position - 0xF03
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return -1;
		
		case 3:
			return 4;
		
		case 4:
			return -1;
		
		case 5:
			return 2;
		
		case 6:
			return 5;
		
		case 7:
			return 4;
		
		case 8:
			return 4;
		
		case 9:
			return 4;
		
		default:
	}
	return -1;
}

void func_56(float fParam0, float fParam1, int iParam2, int iParam3)//Position - 0xF77
{
	struct<8> Var0;
	char cVar16[64];
	struct<4> Var32;
	float fVar36;
	float fVar37;
	
	StringCopy(&Var0, func_6(), 64);
	StringCopy(&cVar16, func_61(), 64);
	Var32.f_3 = 255;
	Var32.f_0 = 255;
	Var32.f_1 = 255;
	Var32.f_2 = 255;
	Var32.f_3 = SYSTEM::ROUND(func_28(100f, 255f, Local_49.f_23));
	fVar36 = -0.001f;
	fVar37 = -0.002f;
	func_57(&Var0, &cVar16, ((fVar36 + fParam0) + ((func_77() * 2f) * IntToFloat(iParam2))), ((fVar37 + fParam1) + (func_76() * IntToFloat(iParam3))), func_60(), func_59(), 0f, &Var32);
}

void func_57(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7)//Position - 0x1002
{
	func_58(&fParam2, &fParam3, &fParam4, &fParam5);
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, fParam2, fParam3, fParam4, fParam5, fParam6, *uParam7, uParam7->f_1, uParam7->f_2, uParam7->f_3, false, 1);
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1039
{
	int iVar0;
	
	iVar0 = SYSTEM::ROUND((*uParam1 * IntToFloat(iLocal_48)));
	*uParam1 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_48)));
	iVar0 = SYSTEM::ROUND(((*uParam3 * IntToFloat(iLocal_48)) / 4f)) * 4;
	*uParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_48)));
	*uParam0 = func_29(*uParam0);
	*uParam2 = (*uParam2 * fLocal_46);
}

float func_59()//Position - 0x1090
{
	return 0.453f;
}

float func_60()//Position - 0x109D
{
	return 0.074f;
}

char* func_61()//Position - 0x10AA
{
	return "PCB_Hack_Selection";
}

void func_62(float fParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x10B6
{
	struct<16> Var0;
	char cVar16[128];
	struct<4> Var32;
	
	Var0 = { func_4(Local_49.f_20) };
	cVar16 = { func_65(iParam2, Local_49.f_20) };
	Var32.f_3 = 255;
	Var32.f_0 = iParam4;
	Var32.f_1 = iParam5;
	Var32.f_2 = iParam6;
	Var32.f_3 = iParam7;
	func_57(&Var0, &cVar16, (fParam0 + ((func_77() * 2f) * IntToFloat(iParam2))), (fParam1 + (func_76() * IntToFloat(iParam3))), func_64(), func_63(), 0f, &Var32);
}

float func_63()//Position - 0x1125
{
	return 0.465f;
}

float func_64()//Position - 0x1132
{
	return 0.081f;
}

struct<16> func_65(int iParam0, int iParam1)//Position - 0x113F
{
	struct<16> Var0;
	
	if (iParam1 > 0)
	{
		StringCopy(&Var0, "PCB_Hack", 64);
		StringIntConCat(&Var0, iParam1, 64);
		StringConCat(&Var0, "_Block", 64);
	}
	else
	{
		StringCopy(&Var0, "PCB_Hack_Block", 64);
	}
	StringIntConCat(&Var0, iParam0 + 1, 64);
	return Var0;
}

int func_66(int iParam0, int iParam1)//Position - 0x117B
{
	switch (iParam1)
	{
		case 0:
			return func_74(iParam0);
		
		case 1:
			return func_73(iParam0);
		
		case 2:
			return func_72(iParam0);
		
		case 3:
			return func_71(iParam0);
		
		case 4:
			return func_70(iParam0);
		
		case 5:
			return func_69(iParam0);
		
		case 6:
			return func_68(iParam0);
		
		case 7:
			return func_67(iParam0);
		
		default:
	}
	return -1;
}

int func_67(int iParam0)//Position - 0x1203
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 7:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 0;
		
		default:
	}
	return -1;
}

int func_68(int iParam0)//Position - 0x1277
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 1:
			return 2;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		default:
	}
	return -1;
}

int func_69(int iParam0)//Position - 0x12EB
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 4:
			return 0;
		
		case 5:
			return 2;
		
		case 6:
			return 1;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		default:
	}
	return -1;
}

int func_70(int iParam0)//Position - 0x135F
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		default:
	}
	return -1;
}

int func_71(int iParam0)//Position - 0x13D3
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 2;
		
		case 6:
			return 0;
		
		case 7:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 1;
		
		default:
	}
	return -1;
}

int func_72(int iParam0)//Position - 0x1447
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 1:
			return 0;
		
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 4:
			return 1;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 7:
			return 1;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		default:
	}
	return -1;
}

int func_73(int iParam0)//Position - 0x14BB
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		default:
	}
	return -1;
}

int func_74(int iParam0)//Position - 0x152F
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 7:
			return 1;
		
		case 8:
			return 0;
		
		case 9:
			return 2;
		
		default:
	}
	return -1;
}

float func_75()//Position - 0x15A3
{
	return 0.004f;
}

float func_76()//Position - 0x15B0
{
	return 0.0625f;
}

float func_77()//Position - 0x15BD
{
	return (func_64() - 0.014f);
}

void func_78()//Position - 0x15CF
{
	if (Local_49.f_24)
	{
		Local_49.f_23 = (Local_49.f_23 + (3f * SYSTEM::TIMESTEP()));
		if (Local_49.f_23 >= 1f)
		{
			Local_49.f_24 = 0;
			Local_49.f_23 = 1f;
		}
	}
	else
	{
		Local_49.f_23 = (Local_49.f_23 - (3f * SYSTEM::TIMESTEP()));
		if (Local_49.f_23 <= 0f)
		{
			Local_49.f_24 = 1;
			Local_49.f_23 = 0f;
		}
	}
}

void func_79()//Position - 0x1625
{
	func_81(0f, 0f, 1f, 1f, 0, 0, 100, 255);
	GRAPHICS::DRAW_SPRITE(func_7(), func_80(), 0.5f, 0.5f, (1f * fLocal_46), 1f, 0f, 255, 255, 255, 255, false, 0);
}

char* func_80()//Position - 0x165E
{
	return "PCB_Hack_Background";
}

void func_81(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x166A
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_82()//Position - 0x1699
{
	func_79();
	func_78();
	func_31();
	func_83();
	func_18();
	if (!AUDIO::HAS_SOUND_FINISHED(Local_49.f_22))
	{
		AUDIO::STOP_SOUND(Local_49.f_22);
	}
	if (!BitTest(Global_1919341, 3))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Success", "DLC_24-2_Hack_Circuit_Board", true);
		MISC::SET_BIT(&Global_1919341, 3);
	}
	if (!func_15(Local_49.f_17))
	{
		func_14(&(Local_49.f_17));
	}
	if (func_12(Local_49.f_17, 5000))
	{
		func_11(4);
	}
}

void func_83()//Position - 0x1710
{
	if (func_15(Local_49.f_17) && func_12(Local_49.f_17, 1250))
	{
		HUD::SET_TEXT_SCALE(1.6f, 1.6f);
		HUD::SET_TEXT_COLOUR(13, 118, 94, 255);
		HUD::SET_TEXT_DROPSHADOW(5, 0, 0, 0, 175);
		HUD::SET_TEXT_JUSTIFICATION(0);
		func_17(0.5f, 0.41f, "CBH_MV_PS" /* GXT: SUCCESS */, 0);
	}
}

void func_84()//Position - 0x176D
{
	func_79();
	func_78();
	func_31();
	func_92();
	func_89();
	func_18();
	func_88();
	if (func_87())
	{
		func_11(2);
		return;
	}
	if (func_86())
	{
		func_11(3);
		return;
	}
	if (func_85())
	{
		func_11(4);
		return;
	}
}

int func_85()//Position - 0x17BE
{
	if (BitTest(Global_1919341, 0))
	{
		return 1;
	}
	return 0;
}

int func_86()//Position - 0x17D4
{
	if (BitTest(Global_1919341, 1) || BitTest(Global_1919341, 4))
	{
		return 1;
	}
	return 0;
}

int func_87()//Position - 0x17F6
{
	if (BitTest(Global_1919341, 5) && BitTest(Global_1919341, 2))
	{
		return 1;
	}
	return 0;
}

void func_88()//Position - 0x1817
{
	if (func_32(Local_49.f_20))
	{
		MISC::SET_BIT(&Global_1919341, 2);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1919341, 2);
	}
}

void func_89()//Position - 0x183F
{
	if (func_91(Local_49.f_14))
	{
		if (Local_49.f_12 > -1 && Local_49.f_12 < Local_49.f_11)
		{
			if (Local_49.f_14 < 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Move_Circuit_Up", "DLC_24-2_Hack_Circuit_Board", true);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Move_Circuit_Down", "DLC_24-2_Hack_Circuit_Board", true);
			}
			Local_49[Local_49.f_12] = (Local_49[Local_49.f_12] + Local_49.f_14);
		}
	}
	if (func_90(Local_49.f_13))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav", "DLC_24-2_Hack_Circuit_Board", true);
		Local_49.f_12 = (Local_49.f_12 + Local_49.f_13);
	}
	Local_49.f_13 = 0;
	Local_49.f_14 = 0;
}

int func_90(int iParam0)//Position - 0x18D2
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if ((Local_49.f_12 + iParam0) >= Local_49.f_11 || (Local_49.f_12 + iParam0) < 0)
	{
		return 0;
	}
	return 1;
}

int func_91(int iParam0)//Position - 0x1907
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if ((Local_49[Local_49.f_12] + iParam0) >= Local_49.f_10 || (Local_49[Local_49.f_12] + iParam0) < 0)
	{
		return 0;
	}
	return 1;
}

void func_92()//Position - 0x1944
{
	struct<9> Var0;
	
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_9(&(Local_49.f_25));
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_49.f_725));
		MISC::CLEAR_BIT(&(Local_49.f_19), 0);
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
	{
		Local_49.f_14 = (Local_49.f_14 - 1);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
	{
		Local_49.f_14++;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
	{
		Local_49.f_13 = (Local_49.f_13 - 1);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		Local_49.f_13++;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
	{
		if (!BitTest(Global_1919341, 5))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Test", "DLC_24-2_Hack_Circuit_Board", true);
		}
		MISC::SET_BIT(&Global_1919341, 5);
	}
	else
	{
		if (BitTest(Global_1919341, 5) && !BitTest(Global_1919341, 2))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Error", "DLC_24-2_Hack_Circuit_Board", true);
		}
		MISC::CLEAR_BIT(&Global_1919341, 5);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		MISC::SET_BIT(&Global_1919341, 4);
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/) && Local_49.f_25.f_693 != 0)
	{
		func_9(&(Local_49.f_25));
		return;
	}
	if (Local_49.f_25.f_693 == 0)
	{
		func_104(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "CBH_CONFI" /* GXT: Confirm */, &(Local_49.f_25), 0);
		func_104(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "CBH_QUIT" /* GXT: Quit */, &(Local_49.f_25), 0);
		func_103(0, 4, "CBH_MV_UD" /* GXT: Move */, &(Local_49.f_25));
		func_103(0, 5, "CBH_MV_LR" /* GXT: Select */, &(Local_49.f_25));
	}
	Var0 = { func_102() };
	if (MISC::IS_PC_VERSION() && HUD::IS_MP_TEXT_CHAT_TYPING())
	{
		return;
	}
	if ((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_49.f_725) || !BitTest(Local_49.f_19, 0)) || GRAPHICS::IS_SCALEFORM_MOVIE_DELETING(Local_49.f_725))
	{
		Local_49.f_725 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("GENERIC_INSTRUCTIONAL_BUTTONS");
		MISC::SET_BIT(&(Local_49.f_19), 0);
	}
	else
	{
		func_101(1);
		func_93(&(Local_49.f_725), &Var0, &(Local_49.f_25), func_100(&(Local_49.f_25)));
	}
}

void func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1B17
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_99(uParam2);
	}
	if (Global_1577950 < 2)
	{
		func_98(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("GENERIC_INSTRUCTIONAL_BUTTONS");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_97(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 365)
						{
							func_97(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_97(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_96(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_97(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_97(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_96(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_95(*uParam0, uParam1);
	}
	func_94();
}

void func_94()//Position - 0x1EB2
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_95(int iParam0, var uParam1)//Position - 0x1ED0
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iParam0, *uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_96(char* sParam0)//Position - 0x1EFE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_97(char* sParam0)//Position - 0x1F10
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_98(int iParam0)//Position - 0x1F1E
{
	Global_1577950 = iParam0;
}

void func_99(var uParam0)//Position - 0x1F2C
{
	Global_1981195 = 0;
	uParam0->f_692 = 0;
}

int func_100(var uParam0)//Position - 0x1F3F
{
	return (Global_1981195 || uParam0->f_692);
}

void func_101(int iParam0)//Position - 0x1F56
{
	Global_1675211.f_1163 = iParam0;
}

struct<9> func_102()//Position - 0x1F67
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_103(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1FAB
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_104(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x200F
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_105()//Position - 0x205F
{
	int iVar0;
	struct<16> Var1;
	
	MISC::CLEAR_BIT(&Global_1919341, 0);
	MISC::CLEAR_BIT(&Global_1919341, 1);
	MISC::CLEAR_BIT(&Global_1919341, 2);
	MISC::CLEAR_BIT(&Global_1919341, 3);
	MISC::CLEAR_BIT(&Global_1919341, 4);
	MISC::CLEAR_BIT(&Global_1919341, 6);
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	Local_49.f_20 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_49.f_11 - 1))
	{
		Local_49[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (func_66(Local_49.f_20, iVar0) == Local_49[iVar0])
		{
			iVar0 = -1;
		}
		iVar0++;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_24-2/DLC_24-2_Circuit_Hack", false, -1))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_107(), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_107()))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_7(), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_7()))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_6(), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_6()))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_5(), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_5()))
	{
		return;
	}
	Var1 = { func_4(Local_49.f_20) };
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Var1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Var1))
	{
		return;
	}
	func_106("CBH_MV_HELP" /* GXT: Arrange the circuit blocks to create a continuous line between the start and end points. Use ~INPUTGROUP_CELLPHONE_NAVIGATE~ to select and move each block. Press ~INPUT_FRONTEND_ACCEPT~ to test the circuit. */, 10000);
	AUDIO::START_AUDIO_SCENE("DLC_24-2_Hacking_Circuit_Scene");
	Local_49.f_21 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(Local_49.f_21, "Background_Loop", "DLC_24-2_Hack_Circuit_Board", true);
	Local_49.f_22 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(Local_49.f_22, "Timer", "DLC_24-2_Hack_Circuit_Board", true);
	func_11(1);
}

void func_106(char* sParam0, int iParam1)//Position - 0x21C7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_107()//Position - 0x21DE
{
	return "CommonMenu";
}

void func_108()//Position - 0x21EA
{
	func_119(0);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	func_101(1);
	func_118(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_117();
	func_116();
	func_115();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (!func_113())
	{
		MISC::SET_BIT(&Global_1919341, 0);
	}
	func_112();
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_111();
	func_110();
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&uLocal_47, &iLocal_48);
	func_109();
}

void func_109()//Position - 0x2265
{
	if (!Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 1;
	}
}

void func_110()//Position - 0x2284
{
	fLocal_46 = (1.778f / fLocal_45);
	fLocal_46 = fLocal_46;
}

void func_111()//Position - 0x229A
{
	fLocal_45 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_45 >= 4f)
		{
			fLocal_45 = (fLocal_45 / 3f);
		}
	}
}

void func_112()//Position - 0x22BD
{
	Global_23831.f_134 = 1;
}

int func_113()//Position - 0x22CB
{
	if (func_114() == 0)
	{
		return 1;
	}
	return 0;
}

int func_114()//Position - 0x22E0
{
	return Global_1574633.f_18;
}

void func_115()//Position - 0x22EE
{
	Global_2739811.f_4667 = 0;
}

void func_116()//Position - 0x22FE
{
	Global_23831.f_6 = 1;
}

void func_117()//Position - 0x230C
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
}

void func_118(int iParam0, int iParam1)//Position - 0x2335
{
	MISC::SET_BIT(&(Global_1673654.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1673654.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_119(int iParam0)//Position - 0x236B
{
	if (func_125())
	{
		return;
	}
	if (!Global_21066.f_1 == 1)
	{
		if (func_124(0))
		{
			func_120(iParam0);
		}
		MISC::SET_BIT(&Global_8920, 2);
	}
}

void func_120(int iParam0)//Position - 0x239E
{
	if (func_125())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_123())
		{
			func_122(1, 1);
		}
		else
		{
			func_122(0, 0);
		}
	}
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8920, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22425 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 30);
	}
	if (!func_121())
	{
		Global_21066.f_1 = 3;
	}
}

int func_121()//Position - 0x2428
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_122(bool bParam0, bool bParam1)//Position - 0x244F
{
	if (bParam0)
	{
		if (func_124(0))
		{
			Global_21284 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
			}
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == 1)
	{
		Global_21284 = 0;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
}

bool func_123()//Position - 0x24C3
{
	return BitTest(Global_1957675, 5);
}

int func_124(int iParam0)//Position - 0x24D1
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_125()//Position - 0x2528
{
	return BitTest(Global_1957675, 19);
}

void func_126()//Position - 0x2537
{
	SYSTEM::WAIT(0);
}

