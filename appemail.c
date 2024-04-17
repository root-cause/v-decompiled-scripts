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
	int iLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
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
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	char* sLocal_67 = NULL;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_58 = -1;
	iLocal_59 = -1;
	fLocal_68 = 0f;
	iLocal_69 = 1;
	if (Global_79248)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_53 = func_79();
	HUD::REQUEST_ADDITIONAL_TEXT("email", 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	Global_23199 = 0;
	Global_23200 = 0;
	Global_20813.f_1 = 8;
	Global_23200 = 1;
	Global_45131 = 1;
	if (Global_20795)
	{
		func_78(0);
		func_77(1);
		func_75(0);
	}
	SYSTEM::SETTIMERB(0);
	Local_45 = { Global_20766[Global_20758 /*3*/] };
	Local_48 = { Local_45 };
	Local_48.f_0 = (Local_48.f_0 - 10f);
	Local_48.f_1 = (Local_48.f_1 + 20f);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20813.f_1 != 9)
		{
			if (Global_23200 && !Global_23199)
			{
				func_73();
			}
			else if (Global_23199)
			{
				func_68();
			}
			if (!iLocal_54)
			{
				iLocal_54 = 1;
			}
			else if (Global_20795)
			{
				if (!iLocal_55)
				{
					iLocal_55 = 1;
					func_66(Global_20794, iLocal_53);
					func_65(Global_20794, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_64(Global_20794, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_45132)
					{
						Global_45132 = 0;
						iLocal_56 = 1;
					}
					if (iLocal_56)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						if (iLocal_58 == -1)
						{
							if (iLocal_69)
							{
								iLocal_69 = 0;
								fLocal_68 = 0f;
							}
							func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_66(Global_20794, iLocal_53);
							func_65(Global_20794, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_57 = 0;
							if (iVar0 > 0)
							{
								func_78(1);
							}
							else
							{
								func_78(0);
							}
							func_77(1);
							func_75(0);
							func_64(Global_20794, "DISPLAY_VIEW", 8f, fLocal_68, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_64(Global_20794, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_77(1);
							func_63();
							if (iLocal_59 == -1)
							{
								func_61(iLocal_53, iLocal_58);
								func_56(Global_20794, iLocal_53, iLocal_58);
								Global_23226 = 0;
								iLocal_66 = func_54(iLocal_53, iLocal_58);
								if (iLocal_66)
								{
									sLocal_67 = func_51(iLocal_53, iLocal_58);
									if (!func_50(37))
									{
										switch (func_48("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */))
										{
											case 2:
												func_45("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_44(37);
												break;
										}
									}
									else if (MISC::IS_PC_VERSION())
									{
										if (!BitTest(Global_4542983, 17))
										{
											MISC::SET_BIT(&Global_4542983, 17);
											func_43("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */, -1);
										}
									}
									func_75(1);
								}
								else
								{
									if (!func_50(38))
									{
										switch (func_48("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */))
										{
											case 2:
												func_45("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_44(38);
												break;
											}
									}
									func_75(0);
								}
								func_64(Global_20794, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_64(Global_20794, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_40(Global_20794, iLocal_53, iLocal_58);
								func_64(Global_20794, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_56 = 0;
					}
					else
					{
						func_17();
					}
				}
			}
			if (!iLocal_53 == func_79())
			{
				Global_45131 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_23199 = 0;
			Global_23200 = 0;
			Global_45131 = 0;
			func_1(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)//Position - 0x48F
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
		}
		else if (Global_20813.f_1 > 3)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);
		}
	}
}

int func_2()//Position - 0x4BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4543261 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()//Position - 0x501
{
	if (((Global_20813.f_1 == 1 || Global_20813.f_1 == 3) || Global_20813.f_1 == 0) || Global_20757 == 1)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x544
{
	if (Global_54440 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16(Global_54440));
		Global_54440 = -1;
	}
	Global_45131 = 0;
	if (Global_20813.f_1 > 4)
	{
		Global_20813.f_1 = 6;
		func_5();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5()//Position - 0x57D
{
	char cVar0[24];
	
	if (Global_20796 == 1)
	{
		return;
	}
	if (Global_20813.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		if (Global_79248)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20813.f_1)
	{
		case 6:
			func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_9288);
			if (Global_9288 == 1)
			{
				func_64(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20817;
			}
			else
			{
				func_64(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20818;
			}
			if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21027 == 0)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else if (Global_79248)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else
			{
				if (Global_21026 == 1)
				{
					if (Global_20801)
					{
						func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20801)
				{
					func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8683, 17);
			}
			if (Global_79248)
			{
				func_11();
				MISC::CLEAR_BIT(&Global_8685, 9);
				func_64(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_64(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
			if (BitTest(Global_8683, 20))
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20756)
				{
					func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20812 == 1)
			{
				func_10();
				func_64(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114372.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_8(Global_7998, Global_20813) == 0)
				{
					func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
				func_64(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22166 == 4 || Global_22166 == 3)
			{
				func_64(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114372.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22424)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_8(Global_7998, Global_20813) == 0)
					{
						func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), &cVar0, &(Global_2139[Global_7998 /*29*/].f_3), 0);
					}
				}
				func_64(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()//Position - 0xB35
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		func_7();
		if (Global_20812 == 1)
		{
			if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22213)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8683, 20))
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else
		{
			func_13(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
			if (BitTest(Global_8683, 20))
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20756)
				{
					func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7()//Position - 0xCB3
{
	if (Global_79248)
	{
		func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8683, 17);
	}
}

int func_8(int iParam0, int iParam1)//Position - 0xCE3
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_24[iParam1];
}

void func_9(char* sParam0)//Position - 0xD0D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0xD1F
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813 == 0)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20813 == 1)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20813 == 2)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20813 == 3)
		{
			switch (Global_4543259)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()//Position - 0xF96
{
	if (Global_79248)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8683, 17);
	}
}

int func_12()//Position - 0xFD1
{
	return 0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xFDA
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(int iParam0)//Position - 0x108D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23234 = 0;
	Global_9288 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9252[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_15(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar2 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2695946)
							{
								if (iVar1 == 14)
								{
									func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114372.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114372.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114372.f_14144[iVar3 /*104*/].f_99[Global_20813] == 1)
											{
												Global_23234++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79248)
								{
									iVar4 = 0;
									iVar4 = Global_4541717;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541718[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541718[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541718[iVar5 /*104*/].f_99[Global_20813] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case 0:
											iVar6 = Global_45133;
											break;
										
										case 1:
											iVar6 = Global_45134;
											break;
										
										case 2:
											iVar6 = Global_45135;
											break;
										
										default:
											break;
									}
									func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8689);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8684, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar8 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8690[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8684, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8690[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1881898.f_1;
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_15(int iParam0)//Position - 0x1619
{
	return Global_43922 == iParam0;
}

char* func_16(int iParam0)//Position - 0x1627
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_17()//Position - 0x1783
{
	bool bVar0;
	
	if (Global_23226)
	{
		iLocal_58 = 0;
		fLocal_68 = SYSTEM::TO_FLOAT(iLocal_58);
		if (func_39(iLocal_53) == 0)
		{
			iLocal_58 = -1;
		}
		if (!iLocal_58 == -1)
		{
			Global_20813.f_1 = 8;
			iLocal_56 = 1;
			SYSTEM::SETTIMERB(0);
			func_37();
		}
		return;
	}
	if (func_36())
	{
		return;
	}
	if (Global_23199)
	{
		return;
	}
	if (!iLocal_62)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			iLocal_62 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
			SYSTEM::SETTIMERA(0);
			iLocal_69 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_58 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERA(0);
			iLocal_69 = 1;
		}
	}
	else
	{
		iLocal_62 = 0;
	}
	if (!iLocal_63)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			iLocal_63 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
			SYSTEM::SETTIMERB(0);
			iLocal_69 = 1;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_58 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			SYSTEM::SETTIMERB(0);
			iLocal_69 = 1;
		}
	}
	else
	{
		iLocal_63 = 0;
	}
	if (!iLocal_64)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
		{
			iLocal_64 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
	{
		iLocal_64 = 0;
	}
	if (!iLocal_65)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
		{
			iLocal_65 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		iLocal_65 = 0;
	}
	if (!iLocal_61)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_58 == -1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
				iLocal_51 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_51))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_52 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_51);
				iLocal_58 = iLocal_52;
				if (func_39(iLocal_53) == 0)
				{
					iLocal_58 = -1;
				}
				if (!iLocal_58 == -1)
				{
					if (iLocal_69 == 1)
					{
						fLocal_68 = SYSTEM::TO_FLOAT(iLocal_58);
						iLocal_69 = 0;
					}
					Global_20813.f_1 = 8;
					iLocal_56 = 1;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else if (iLocal_59 == -1)
			{
				if (func_34(iLocal_53, iLocal_58) && !iLocal_57)
				{
					iLocal_59 = 0;
					iLocal_56 = 1;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else
			{
				iLocal_59 = 0;
				func_22(iLocal_53, iLocal_58, iLocal_59);
				iLocal_57 = 1;
				iLocal_59 = -1;
				iLocal_56 = 1;
				func_37();
				SYSTEM::SETTIMERB(0);
			}
			iLocal_61 = 1;
		}
	}
	else
	{
		iLocal_61 = 0;
	}
	if (SYSTEM::TIMERB() > 100)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
		{
			bVar0 = false;
			if (iLocal_60 == 0)
			{
				if (!iLocal_58 == -1)
				{
					if (iLocal_59 == -1)
					{
						iLocal_58 = SYSTEM::ROUND(fLocal_68);
						iLocal_66 = 0;
						SYSTEM::SETTIMERB(0);
						bVar0 = true;
						func_21();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_59 = -1;
						func_21();
					}
					iLocal_56 = 1;
				}
				else
				{
					if (func_48("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */) == 0)
					{
						func_44(37);
					}
					if (func_48("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */) == 0)
					{
						func_44(38);
					}
					if (Global_23200 == 0 && !Global_23199)
					{
						func_21();
						Global_23199 = 1;
						Global_45131 = 0;
					}
				}
				iLocal_60 = 1;
			}
			if (bVar0)
			{
				iLocal_58 = -1;
			}
		}
		else
		{
			iLocal_60 = 0;
		}
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/))
	{
		if (iLocal_66)
		{
			if (func_48("AM_H_FLINK" /* GXT: Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page. */) == 0)
			{
				func_44(37);
			}
			if (func_48("AM_H_SCROLL" /* GXT: Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email. */) == 0)
			{
				func_44(38);
			}
			StringCopy(&Global_76352, sLocal_67, 64);
			func_18(7, 0, 0);
			iLocal_66 = 0;
			func_37();
		}
	}
}

int func_18(int iParam0, bool bParam1, int iParam2)//Position - 0x1B69
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_76482 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_76482)
	{
		case 3:
			Global_76480 = 0;
			break;
		
		case 4:
			Global_76480 = 3;
			break;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_79248 && func_20())
	{
		return 0;
	}
	if (!Global_79248 && func_19())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

var func_19()//Position - 0x1D84
{
	return Global_76370;
}

var func_20()//Position - 0x1D90
{
	return Global_1928228;
}

void func_21()//Position - 0x1D9C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20802, true);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0x1DBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_54079[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_54079[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_54079[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_48466[iVar3 /*46*/].f_32[iVar4];
	if (Global_45141[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_54079[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_54079[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_23(iVar3, iParam2);
}

void func_23(int iParam0, int iParam1)//Position - 0x1EB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_48466[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_48466[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_45141[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_45141[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_48466[iParam0 /*46*/].f_31 < (Global_48466[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_48466[iParam0 /*46*/].f_8[Global_48466[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_33(iParam0, iVar2);
			iVar5 = Global_48466[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_45141[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_27(Global_48466[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_45141[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_24(Global_45141[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_45141[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_48466[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_48466[iParam0 /*46*/].f_45 = Global_45141[iVar2 /*12*/].f_10;
		Global_48466[iParam0 /*46*/].f_43 = Global_45141[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_48466[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_48466[iParam0 /*46*/].f_43 < 30000)
	{
		Global_48466[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_24(int iParam0, bool bParam1)//Position - 0x205B
{
	Global_45132 = 1;
	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
	{
		Global_48466[iParam0 /*46*/] = 1;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}
}

void func_25(int iParam0)//Position - 0x20A2
{
	Global_48466[iParam0 /*46*/] = 0;
	Global_48466[iParam0 /*46*/].f_31 = 0;
	Global_48466[iParam0 /*46*/].f_42 = 0;
	Global_48466[iParam0 /*46*/].f_45 = 0;
	Global_48466[iParam0 /*46*/].f_43 = 0;
	Global_48466[iParam0 /*46*/].f_1 = 0;
}

void func_26(int iParam0, bool bParam1)//Position - 0x20E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_48466[iParam0 /*46*/].f_31 == Global_48466[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_48466[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_45141[Global_48466[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_48466[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_48466[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_48466[iParam0 /*46*/].f_8[Global_48466[iParam0 /*46*/].f_31];
	Global_48466[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_48466[iParam0 /*46*/].f_45 = Global_45141[iVar1 /*12*/].f_10;
	Global_48466[iParam0 /*46*/].f_43 = Global_45141[iVar1 /*12*/].f_11;
	iVar2 = Global_48466[iParam0 /*46*/].f_2;
	func_27(Global_45141[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_48466[iParam0 /*46*/].f_3[iVar3] != Global_45141[iVar1 /*12*/].f_2 && Global_48466[iParam0 /*46*/].f_3[iVar3] != Global_45141[iVar1 /*12*/].f_3)
		{
			func_27(Global_48466[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_48466[iParam0 /*46*/].f_31 == Global_48466[iParam0 /*46*/].f_30)
	{
		if (Global_45141[Global_48466[iParam0 /*46*/].f_32[(Global_48466[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_48466[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_27(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2280
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_48466[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_48466[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_32(Global_45141[iVar20 /*12*/].f_1) };
		if (Global_45141[iVar20 /*12*/].f_2 == iParam0 && !Global_45141[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_45141[iVar20 /*12*/].f_2;
		iVar0 = Global_54079[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_54079[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45133 = (Global_45133 - 1);
						if (Global_45133 < 0)
						{
							Global_45133 = 0;
						}
						break;
					
					case 1:
						Global_45134 = (Global_45134 - 1);
						if (Global_45134 < 0)
						{
							Global_45134 = 0;
						}
						break;
					
					case 2:
						Global_45135 = (Global_45135 - 1);
						if (Global_45135 < 0)
						{
							Global_45135 = 0;
						}
						break;
					}
				}
		}
		Global_54079[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_54079[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_54079[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54079[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_54079[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54079[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_54079[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_54079[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45133 = (Global_45133 - 1);
						if (Global_45133 < 0)
						{
							Global_45133 = 0;
						}
						break;
					
					case 1:
						Global_45134 = (Global_45134 - 1);
						if (Global_45134 < 0)
						{
							Global_45134 = 0;
						}
						break;
					
					case 2:
						Global_45135 = (Global_45135 - 1);
						if (Global_45135 < 0)
						{
							Global_45135 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_54441[iVar24 /*203*/].f_1 == iParam1 && Global_54441[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_54079[iParam0 /*120*/].f_18[iVar0] = Global_54441[iVar23 /*203*/].f_1;
		Global_54079[iParam0 /*120*/].f_1[iVar0] = (Global_54441[iVar23 /*203*/].f_9 - 1);
		Global_54079[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54079[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_54079[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54079[iParam0 /*120*/]++;
		iVar25 = Global_54079[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_54441[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_45141[iVar26 /*12*/].f_2;
		if (Global_54441[iVar23 /*203*/].f_10[(Global_54441[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_54441[iVar23 /*203*/].f_10[(Global_54441[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_32(Global_45141[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_54079[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_28(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_28(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_28(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_28(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_28(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x2655
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_79();
	bVar1 = false;
	StringCopy(&cVar2, func_31(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_29(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_30(iParam1)), 0));
		}
		else
		{
			func_29(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_30(iParam1)), 0));
		}
		switch (Global_20813)
		{
			case 0:
				StringCopy(&Global_20802, "Phone_SoundSet_Michael", 24);
				Global_45133++;
				if (Global_45133 > 16)
				{
					Global_45133 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20802, "Phone_SoundSet_Trevor", 24);
				Global_45135++;
				if (Global_45135 > 16)
				{
					Global_45135 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20802, "Phone_SoundSet_Franklin", 24);
				Global_45134++;
				if (Global_45134 > 16)
				{
					Global_45134 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20802, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20802, true);
	}
}

void func_29(int iParam0)//Position - 0x283D
{
	Global_45136[Global_45140] = iParam0;
	Global_23224 = 1;
	Global_23223 = iParam0;
	Global_45140++;
	if (Global_45140 == 3)
	{
		Global_45140 = 0;
	}
}

char* func_30(int iParam0)//Position - 0x286B
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
		
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
		
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
		
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
		
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
		
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
		
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
		
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
		
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
		
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
		
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
		
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
		
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
		
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
		
		case 14:
			return "EMSTR_87" /* GXT: DockTease */;
		
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
		
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
		
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
		
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
		
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
		
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
		
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
		
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
		
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
		
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
		
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
		
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
		
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
		
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
		
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
		
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
		
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
		
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
		
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
		
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
		
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
		
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
		
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
		
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
		
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
		
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
		
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
		
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
		
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
		
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
		
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
		
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
		
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
		
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
		
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
		
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
		
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
		
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
		
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
		
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
		
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
		
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
		
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
		
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
		
		case 63:
			return "EMSTR_640" /* GXT: Off-Road Events */;
		
		case 64:
			return "EMSTR_643" /* GXT: DockTease */;
		
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
		
		default:
	}
	return "NULL";
}

char* func_31(int iParam0, int iParam1)//Position - 0x2BD6
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_32(int iParam0)//Position - 0x2FA1
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_33(int iParam0, int iParam1)//Position - 0x2FD2
{
	if (Global_48466[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_48466[iParam0 /*46*/].f_32[Global_48466[iParam0 /*46*/].f_42] = iParam1;
	Global_48466[iParam0 /*46*/].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1)//Position - 0x3017
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_54079[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_54079[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_54079[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_54079[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_48466[iVar3 /*46*/].f_32[iVar4];
		if (Global_45141[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_54079[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return 0;
		}
		if (!func_35(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0x30F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_54079[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_54079[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_48466[iVar1 /*46*/] && !Global_48466[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_48466[iVar1 /*46*/].f_42 - 1))
	{
		return 0;
	}
	iVar2 = Global_48466[iVar1 /*46*/].f_32[(Global_48466[iVar1 /*46*/].f_42 - 1)];
	if (Global_45141[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}

bool func_36()//Position - 0x3186
{
	return Global_76369;
}

void func_37()//Position - 0x3192
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20802, true);
		func_38();
	}
}

void func_38()//Position - 0x31B8
{
	if (func_2())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_39(int iParam0)//Position - 0x31CC
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_54079[iVar0 /*120*/];
}

void func_40(int iParam0, int iParam1, int iParam2)//Position - 0x3209
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<16> Var9;
	struct<16> Var25;
	
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_54079[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_54079[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_54079[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_54079[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_48466[iVar3 /*46*/].f_32[iVar4];
		if (Global_45141[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_45141[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_45141[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_32(Global_45141[iVar8 /*12*/].f_1) };
			Var25 = { func_32(Global_45141[iVar8 /*12*/].f_1) };
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW" /* GXT: Response: */);
			func_9(&Var25);
			func_9(func_42(Global_45141[iVar8 /*12*/].f_2));
			func_41(iVar8, Global_45141[iVar8 /*12*/].f_2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar6++;
		}
	}
}

void func_41(int iParam0, int iParam1)//Position - 0x3372
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 34:
		case 35:
		case 36:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 31:
		case 32:
		case 33:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 15:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		case 19:
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			return;
		
		default:
	}
}

char* func_42(int iParam0)//Position - 0x348C
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2" /* GXT: -Michael */;
		
		case 3:
			return "EMSTR_5" /* GXT: J */;
		
		case 1:
			return "EMSTR_8" /* GXT: F */;
		
		case 2:
			return "EMSTR_11" /* GXT: T */;
		
		case 4:
			return "EMSTR_14" /* GXT: M */;
		
		case 5:
			return "EMSTR_31" /* GXT: Praise Kraff */;
		
		case 6:
			return "EMSTR_38" /* GXT: -Maude */;
		
		case 7:
			return "EMSTR_41" /* GXT: -Lester */;
		
		case 8:
			return "EMSTR_54" /* GXT: Maze Online Support */;
		
		case 9:
			return "EMSTR_57" /* GXT: Fleeca Customer Services */;
		
		case 10:
			return "EMSTR_60" /* GXT: BoL Transaction Services */;
		
		case 11:
			return "EMSTR_80" /* GXT: Legendary Motorsport */;
		
		case 12:
			return "EMSTR_83" /* GXT: Elitas Travel */;
		
		case 13:
			return "EMSTR_86" /* GXT: C&C */;
		
		case 14:
			return "EMSTR_89" /* GXT: DT Sales */;
		
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		
		case 16:
			return "EMSTR_116" /* GXT: ~b~<u>www.ammunation.net</u>~s~ */;
		
		case 17:
			return "EMSTR_144" /* GXT: C */;
		
		case 18:
			return "EMSTR_147" /* GXT: P */;
		
		case 19:
			return "EMSTR_154" /* GXT: LS Tourist Info */;
		
		case 20:
			return "EMSTR_159" /* GXT: R */;
		
		case 21:
			return "EMSTR_165" /* GXT: Minotaur Finance - navigating the maze that is property ownership */;
		
		case 22:
			return "EMSTR_184" /* GXT: -Saeeda Kadam */;
		
		case 23:
			return "EMSTR_189" /* GXT: -Vanilla Unicorn */;
		
		case 24:
			return "EMSTR_192" /* GXT: Isiah Friedlander */;
		
		case 25:
			return "EMSTR_208" /* GXT: - Tracey */;
		
		case 26:
			return "EMSTR_221" /* GXT: - Davey */;
		
		case 27:
			return "EMSTR_228" /* GXT: - Amanda */;
		
		case 28:
			return "EMSTR_235" /* GXT: - Donald Percival */;
		
		case 29:
			return "EMSTR_244" /* GXT: - Ron */;
		
		case 30:
			return "EMSTR_251" /* GXT: - Tanisha */;
		
		case 31:
			return "EMSTR_264" /* GXT: - Denise */;
		
		case 32:
			return "EMSTR_271" /* GXT: - Lamar */;
		
		case 33:
			return "EMSTR_321" /* GXT: - Brad */;
		
		case 34:
			return "EMSTR_342" /* GXT: - Patricia M */;
		
		case 35:
			return "EMSTR_350" /* GXT: - Eileen Haworth */;
		
		case 36:
			return "EMSTR_354" /* GXT: - Saeeda Kadam */;
		
		case 37:
			return "EMSTR_359" /* GXT: - Gray N */;
		
		case 38:
			return "EMSTR_362" /* GXT: - Nigel */;
		
		case 39:
			return "EMSTR_371" /* GXT: - Hookies */;
		
		case 40:
			return "EMSTR_378" /* GXT: - Towing Impound */;
		
		case 41:
			return "EMSTR_381" /* GXT: - Downtown Cab Co. */;
		
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		
		case 43:
			return "EMSTR_386" /* GXT: - Sonar Collections Dock */;
		
		case 44:
			return "EMSTR_389" /* GXT: - Los Santos Customs */;
		
		case 45:
			return "EMSTR_392" /* GXT: - Cinema Doppler */;
		
		case 46:
			return "EMSTR_395" /* GXT: - Ten Cent Theater */;
		
		case 47:
			return "EMSTR_398" /* GXT: - Tivoli Cinema */;
		
		case 48:
			return "EMSTR_401" /* GXT: - Los Santos Golf Club */;
		
		case 49:
			return "EMSTR_404" /* GXT: - Car Scrap Yard */;
		
		case 50:
			return "EMSTR_407" /* GXT: - Smoke on the Water */;
		
		case 51:
			return "EMSTR_410" /* GXT: - Tequi-la-la */;
		
		case 52:
			return "EMSTR_413" /* GXT: - Pitchers */;
		
		case 53:
			return "EMSTR_416" /* GXT: - The Hen House */;
		
		case 54:
			return "EMSTR_467" /* GXT: Pedal & Metal Cycles */;
		
		case 55:
			return "EMSTR_470" /* GXT: SSA Super Autos */;
		
		case 56:
			return "EMSTR_491" /* GXT: Hush Smush */;
		
		case 57:
			return "EMSTR_494" /* GXT: foxymama21 */;
		
		case 58:
			return "EMSTR_497" /* GXT: Altarego12 */;
		
		case 59:
			return "EMSTR_500" /* GXT: BadKitty11 */;
		
		case 60:
			return "EMSTR_503" /* GXT: 7yearbitch */;
		
		case 61:
			return "EMSTR_506" /* GXT: Froggy69 */;
		
		case 62:
			return "EMSTR_509" /* GXT: Misscuddles */;
		
		case 63:
			return "EMSTR_642" /* GXT: - Southern San Andreas Super Autos */;
		
		case 64:
			return "EMSTR_645" /* GXT: - DockTease Events */;
		
		case 65:
			return "EMSTR_654" /* GXT: Brother Adrian */;
		
		default:
	}
	return "NULL";
}

void func_43(char* sParam0, int iParam1)//Position - 0x37F7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_44(int iParam0)//Position - 0x380E
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
		MISC::SET_BIT(&(Global_114372.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3850
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x3872
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
	while (iVar0 < Global_114372.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114372.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114372.f_20413.f_145++;
		func_47();
	}
}

void func_47()//Position - 0x3A46
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114372.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114372.f_20413.f_145)
	{
		if (BitTest(Global_114372.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114372.f_20413[iVar0 /*16*/].f_12 > Global_114372.f_20413.f_146[0])
			{
				Global_114372.f_20413.f_146[0] = Global_114372.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114372.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114372.f_20413[iVar0 /*16*/].f_12 > Global_114372.f_20413.f_146[1])
			{
				Global_114372.f_20413.f_146[1] = Global_114372.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114372.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114372.f_20413[iVar0 /*16*/].f_12 > Global_114372.f_20413.f_146[2])
			{
				Global_114372.f_20413.f_146[2] = Global_114372.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_48(char* sParam0)//Position - 0x3B5D
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113012))
	{
		return 1;
	}
	if (func_49(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_49(char* sParam0)//Position - 0x3B84
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_114372.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114372.f_20413[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x3BBF
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
		return BitTest(Global_114372.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

char* func_51(int iParam0, int iParam1)//Position - 0x3BFF
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_53(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_54079[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_48466[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_54441[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_54441[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_52(iVar5);
}

char* func_52(int iParam0)//Position - 0x3CBF
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		case 275:
			return "WWW_AMMUNATION_NET";
		
		case 276:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3FCF
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_54079[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_54079[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_54079[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_54079[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_54(int iParam0, int iParam1)//Position - 0x402E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_53(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_54079[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_48466[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_54441[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_54441[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_55(iVar5);
}

int func_55(int iParam0)//Position - 0x40EB
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

void func_56(int iParam0, int iParam1, int iParam2)//Position - 0x4261
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var23;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	struct<16> Var47;
	struct<16> Var63;
	bool bVar79;
	int iVar80;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_53(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_54079[iVar0 /*120*/].f_86[iVar4];
	if (!Global_54079[iVar0 /*120*/].f_69[iVar4])
	{
		func_60(-1);
	}
	Global_54079[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_48466[iVar2 /*46*/].f_32[iVar3];
		Var7 = { func_32(Global_45141[iVar6 /*12*/]) };
		Var23 = { func_32(Global_45141[iVar6 /*12*/].f_1) };
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_9(func_59(Global_45141[iVar6 /*12*/].f_3));
		func_9(func_59(Global_45141[iVar6 /*12*/].f_2));
		func_9(&Var7);
		func_9(&Var23);
		func_9(func_42(Global_45141[iVar6 /*12*/].f_2));
		func_41(iVar6, Global_45141[iVar6 /*12*/].f_2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (Global_45141[iVar6 /*12*/].f_4 == 0)
		{
			func_78(0);
		}
		else if (bVar1 || !func_35(iVar0, iVar4))
		{
			func_78(0);
		}
		else
		{
			func_78(1);
		}
		if (Global_48466[iVar2 /*46*/].f_42 > 1)
		{
			iVar39 = iVar3;
			iVar40 = (iVar3 - 1);
			iVar41 = 0;
			iVar41 = 0;
			while (iVar41 < iVar39)
			{
				iVar6 = Global_48466[iVar2 /*46*/].f_32[iVar40];
				Var7 = { func_32(Global_45141[iVar6 /*12*/]) };
				Var23 = { func_32(Global_45141[iVar6 /*12*/].f_1) };
				iVar42 = func_58(iParam1, Global_45141[iVar6 /*12*/].f_3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar41 + 1);
				func_9(func_59(iVar42));
				func_9(func_59(Global_45141[iVar6 /*12*/].f_2));
				func_9(&Var7);
				func_9(&Var23);
				func_9(func_42(Global_45141[iVar6 /*12*/].f_2));
				func_41(iVar6, Global_45141[iVar6 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar40 = (iVar40 - 1);
				iVar41++;
			}
		}
	}
	else
	{
		iVar43 = -1;
		iVar44 = 0;
		iVar44 = 0;
		while (iVar44 < 7)
		{
			if (Global_54441[iVar44 /*203*/].f_1 == iVar2)
			{
				iVar43 = iVar44;
			}
			iVar44++;
		}
		if (iVar43 == -1)
		{
			return;
		}
		else
		{
			iVar45 = Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/];
			iVar46 = Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/];
			Var47 = { func_32(Global_45141[iVar45 /*12*/]) };
			Var63 = { func_32(Global_45141[iVar45 /*12*/].f_1) };
			if (Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var63, {Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_45141[iVar45 /*12*/].f_4 == 0)
			{
				func_78(0);
			}
			else if (bVar1)
			{
				func_78(0);
			}
			else
			{
				func_78(1);
			}
			bVar79 = false;
			bVar79 = func_57(iParam0, Global_54441[iVar43 /*203*/].f_1, iVar3, iVar46);
			if (!bVar79)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(func_59(Global_45141[iVar45 /*12*/].f_3));
				func_9(func_59(Global_45141[iVar45 /*12*/].f_2));
				func_9(&Var47);
				if (Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var63);
					iVar80 = 0;
					iVar80 = 0;
					while (iVar80 < Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_54441[iVar43 /*203*/].f_10[iVar3 /*48*/].f_7[iVar80 /*4*/]));
						iVar80++;
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_9(&Var63);
				}
				func_9(func_42(Global_45141[iVar45 /*12*/].f_2));
				func_41(iVar45, Global_45141[iVar45 /*12*/].f_2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_57(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x464E
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var19;
	int iVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var3 = { func_32(Global_45141[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var19, "PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */, 64);
			break;
		
		case 73:
			StringCopy(&Var19, "PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */, 64);
			break;
		
		case 74:
			StringCopy(&Var19, "PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */, 64);
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	func_9(func_59(Global_45141[iParam3 /*12*/].f_3));
	func_9(func_59(Global_45141[iParam3 /*12*/].f_2));
	func_9(&Var3);
	func_9(&Var19);
	func_9(func_42(Global_45141[iParam3 /*12*/].f_2));
	func_9("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar2++;
	iVar35 = 0;
	while (iVar35 < 16)
	{
		iVar36 = iVar35;
		bVar37 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_114372.f_24907[iVar36 /*4*/] == 0)
				{
					bVar37 = true;
				}
				break;
			
			case 73:
				if (Global_114372.f_24907[iVar36 /*4*/] == 1)
				{
					bVar37 = true;
				}
				break;
			
			case 74:
				if (Global_114372.f_24907[iVar36 /*4*/] == 2)
				{
					bVar37 = true;
				}
				break;
		}
		if (bVar37)
		{
			switch (iVar36)
			{
				case 0:
					sVar38 = "ACCNA_TOWING" /* GXT: Towing Impound */;
					break;
				
				case 1:
					sVar38 = "ACCNA_TAXI_LOT" /* GXT: Downtown Cab Co. */;
					break;
				
				case 2:
					sVar38 = "ACCNA_ARMS" /* GXT: McKenzie Field Hangar */;
					break;
				
				case 3:
					sVar38 = "ACCNA_SONAR" /* GXT: Sonar Collections Dock */;
					break;
				
				case 4:
					sVar38 = "ACCNA_CARMOD" /* GXT: Los Santos Customs */;
					break;
				
				case 5:
					sVar38 = "ACCNA_VCINEMA" /* GXT: Cinema Doppler */;
					break;
				
				case 6:
					sVar38 = "ACCNA_DCINEMA" /* GXT: Ten Cent Theater */;
					break;
				
				case 7:
					sVar38 = "ACCNA_MCINEMA" /* GXT: Tivoli Cinema */;
					break;
				
				case 8:
					sVar38 = "ACCNA_GOLF" /* GXT: Los Santos Golf Club */;
					break;
				
				case 9:
					sVar38 = "ACCNA_CSCRAP" /* GXT: Car Scrapyard */;
					break;
				
				case 10:
					sVar38 = "ACCNA_SMOKE" /* GXT: Smoke on the Water */;
					break;
				
				case 11:
					sVar38 = "ACCNA_TEQUILA" /* GXT: Tequi-la-la */;
					break;
				
				case 12:
					sVar38 = "ACCNA_PITCHERS" /* GXT: Pitchers */;
					break;
				
				case 13:
					sVar38 = "ACCNA_HEN" /* GXT: The Hen House */;
					break;
				
				case 14:
					sVar38 = "ACCNA_HOOKIES" /* GXT: Hookies */;
					break;
				
				case 15:
					sVar38 = "ACCNA_STRP" /* GXT: Vanilla Unicorn */;
					break;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PROPR_INCEMAIL4" /* GXT: ~a~: $~1~ */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sVar38);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114372.f_24907[iVar36 /*4*/].f_3);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar2++;
			iVar0 = 1;
		}
		iVar35++;
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)//Position - 0x48E7
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_59(int iParam0)//Position - 0x490E
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1" /* GXT: Mike@eyefind.info */;
		
		case 3:
			return "EMSTR_4" /* GXT: jimmy@eyefind.info */;
		
		case 1:
			return "EMSTR_7" /* GXT: Frankie@eyefind.info */;
		
		case 2:
			return "EMSTR_10" /* GXT: trev@eyefind.info */;
		
		case 4:
			return "EMSTR_13" /* GXT: Marnie@epsilonprogram.com */;
		
		case 5:
			return "EMSTR_30" /* GXT: noreply@epsilonprogram.com */;
		
		case 6:
			return "EMSTR_37" /* GXT: Maude@eyefind.info */;
		
		case 7:
			return "EMSTR_40" /* GXT: t34b4g99@eyefind.info */;
		
		case 8:
			return "EMSTR_53" /* GXT: services@maze-bank.com */;
		
		case 9:
			return "EMSTR_56" /* GXT: services@fleeca.com */;
		
		case 10:
			return "EMSTR_59" /* GXT: transactions@thebankofliberty.com */;
		
		case 11:
			return "EMSTR_79" /* GXT: sales@legendarymotorsport.net */;
		
		case 12:
			return "EMSTR_82" /* GXT: sales@elitastravel.com */;
		
		case 13:
			return "EMSTR_85" /* GXT: CnCsales@warstock-cache-and-carry.com */;
		
		case 14:
			return "EMSTR_88" /* GXT: sales@docktease.com */;
		
		case 15:
			return "EMSTR_107" /* GXT: MODS@lossantoscustoms.com */;
		
		case 16:
			return "EMSTR_115" /* GXT: GUNS@ammunation.net */;
		
		case 17:
			return "EMSTR_143" /* GXT: Feltz@eyefind.info */;
		
		case 18:
			return "EMSTR_146" /* GXT: Paige@eyefind.info */;
		
		case 19:
			return "EMSTR_153" /* GXT: info@LSTouristInfo.com */;
		
		case 20:
			return "EMSTR_158" /* GXT: Rickie@lifeinvader.com */;
		
		case 21:
			return "EMSTR_164" /* GXT: property@minotaurfinance.com */;
		
		case 22:
			return "EMSTR_183" /* GXT: SKadam@eyefind.info */;
		
		case 23:
			return "EMSTR_188" /* GXT: promotions@vanillaunicorn.xxx */;
		
		case 24:
			return "EMSTR_191" /* GXT: DrFriedlander@eyefind.info */;
		
		case 25:
			return "EMSTR_207" /* GXT: tracey@eyefind.info */;
		
		case 26:
			return "EMSTR_220" /* GXT: DaveNorton@eyefind.info */;
		
		case 27:
			return "EMSTR_227" /* GXT: AmandaDS@eyefind.info */;
		
		case 28:
			return "EMSTR_234" /* GXT: Don.Percival@merryweather.com */;
		
		case 29:
			return "EMSTR_243" /* GXT: BigBadRon@eyefind.info */;
		
		case 30:
			return "EMSTR_250" /* GXT: TanishaMarks@eyefind.info */;
		
		case 31:
			return "EMSTR_263" /* GXT: denise@eyefind.info */;
		
		case 32:
			return "EMSTR_270" /* GXT: LamDav@eyefind.info */;
		
		case 33:
			return "EMSTR_320" /* GXT: Bradley@eyefind.info */;
		
		case 34:
			return "EMSTR_341" /* GXT: PatriciaMadrazo@eyefind.info */;
		
		case 35:
			return "EMSTR_349" /* GXT: EileenHaworth@eyefind.info */;
		
		case 36:
			return "EMSTR_353" /* GXT: SaeedaKadam@eyefind.info */;
		
		case 37:
			return "EMSTR_358" /* GXT: GrayNicholson@eyefind.info */;
		
		case 38:
			return "EMSTR_361" /* GXT: Nigel@eyefind.info */;
		
		case 39:
			return "EMSTR_370" /* GXT: Hookies@eyefind.info */;
		
		case 40:
			return "EMSTR_377" /* GXT: TowingImpound@eyefind.info */;
		
		case 41:
			return "EMSTR_380" /* GXT: DowntownCabCo@eyefind.info */;
		
		case 42:
			return "EMSTR_383" /* GXT: McKenzieField@eyefind.info */;
		
		case 43:
			return "EMSTR_385" /* GXT: SonarCollections@eyefind.info */;
		
		case 44:
			return "EMSTR_388" /* GXT: LosSantosCustoms@eyefind.info */;
		
		case 45:
			return "EMSTR_391" /* GXT: CinemaDoppler@eyefind.info */;
		
		case 46:
			return "EMSTR_394" /* GXT: TenCentTheater@eyefind.info */;
		
		case 47:
			return "EMSTR_397" /* GXT: TivoliCinema@eyefind.info */;
		
		case 48:
			return "EMSTR_400" /* GXT: LosSantosGolfClub@eyefind.info */;
		
		case 49:
			return "EMSTR_403" /* GXT: CarScrapYard@eyefind.info */;
		
		case 50:
			return "EMSTR_406" /* GXT: SmokeOnTheWater@eyefind.info */;
		
		case 51:
			return "EMSTR_409" /* GXT: Tequi-la-la@eyefind.info */;
		
		case 52:
			return "EMSTR_412" /* GXT: Pitchers@eyefind.info */;
		
		case 53:
			return "EMSTR_415" /* GXT: TheHenHouse@eyefind.info */;
		
		case 54:
			return "EMSTR_466" /* GXT: sales@pandmcycles.com */;
		
		case 55:
			return "EMSTR_469" /* GXT: sales@southernsanandreassuperautos.com */;
		
		case 56:
			return "EMSTR_490" /* GXT: promotions@hushmush.com */;
		
		case 57:
			return "EMSTR_493" /* GXT: foxymama21@hushmush.com */;
		
		case 58:
			return "EMSTR_496" /* GXT: Altarego12@hushmush.com */;
		
		case 59:
			return "EMSTR_499" /* GXT: BadKitty11@hushmush.com */;
		
		case 60:
			return "EMSTR_502" /* GXT: 7yearbitch@hushmush.com */;
		
		case 61:
			return "EMSTR_505" /* GXT: Froggy69@hushmush.com */;
		
		case 62:
			return "EMSTR_508" /* GXT: Misscuddles@hushmush.com */;
		
		case 63:
			return "EMSTR_641" /* GXT: events@SouthernSanAndreasSuperAutos.com */;
		
		case 64:
			return "EMSTR_644" /* GXT: RaceOrganiser@docktease.com */;
		
		case 65:
			return "EMSTR_653" /* GXT: adrian@mydivinewithin.com */;
		
		default:
	}
	return "NULL";
}

void func_60(int iParam0)//Position - 0x4C79
{
	switch (func_79())
	{
		case 0:
			Global_45133 = (Global_45133 + iParam0);
			if (Global_45133 < 0)
			{
				Global_45133 = 0;
			}
			break;
		
		case 2:
			Global_45135 = (Global_45135 + iParam0);
			if (Global_45135 < 0)
			{
				Global_45135 = 0;
			}
			break;
		
		case 1:
			Global_45134 = (Global_45134 + iParam0);
			if (Global_45134 < 0)
			{
				Global_45134 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_61(int iParam0, int iParam1)//Position - 0x4CE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_54079[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_54079[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_54079[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_54079[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_48466[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_54441[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_54441[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_62(iVar5))
	{
		return;
	}
	if (Global_54440 != -1)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_16(Global_54440));
	}
	Global_54440 = iVar5;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_16(iVar5), false);
	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_16(iVar5)))
	{
		SYSTEM::WAIT(100);
	}
}

int func_62(int iParam0)//Position - 0x4E16
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		
		default:
	}
	return 0;
}

void func_63()//Position - 0x4EC6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_45136[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_45136[iVar0]);
			Global_45136[iVar0] = -1;
		}
		iVar0++;
	}
	Global_45140 = 0;
}

void func_64(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x4F05
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
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_65(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x4F68
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_66(int iParam0, int iParam1)//Position - 0x4FC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<16> Var18;
	
	func_67(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (Global_54079[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_54079[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_54079[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_54079[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_54079[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_54079[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_48466[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_54079[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_45141[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_54079[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_32(Global_45141[iVar6 /*12*/])}, 4);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_9(func_59(Global_45141[iVar6 /*12*/].f_2));
			func_9(&sVar8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			iVar12 = Global_54079[iVar0 /*120*/].f_18[iVar1];
			iVar13 = -1;
			iVar14 = 0;
			iVar14 = 0;
			while (iVar14 < 7)
			{
				if (Global_54441[iVar14 /*203*/].f_1 == iVar12)
				{
					iVar13 = iVar14;
				}
				iVar14++;
			}
			if (iVar13 == -1)
			{
				return 1;
			}
			else
			{
				iVar15 = Global_54079[iVar0 /*120*/].f_1[iVar1];
				iVar16 = 0;
				if (Global_54079[iVar0 /*120*/].f_69[iVar1])
				{
					iVar16 = 1;
				}
				iVar17 = Global_54441[iVar13 /*203*/].f_10[iVar15 /*48*/];
				if (iVar16 == 1)
				{
					if (Global_45141[iVar17 /*12*/].f_4 > 0)
					{
						if (Global_54079[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar16 = 2;
						}
					}
				}
				Var18 = { func_32(Global_45141[iVar17 /*12*/]) };
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_9(func_59(Global_45141[iVar17 /*12*/].f_2));
				func_9(&Var18);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_67(int iParam0)//Position - 0x5252
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54079[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_54079[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_54079[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar124 = 0;
	while (iVar124 < iVar2)
	{
		bVar125 = true;
		if (Global_54079[iVar0 /*120*/].f_103[iVar3])
		{
			bVar125 = false;
		}
		if (Global_54079[iVar0 /*120*/].f_86[iVar3])
		{
			iVar126 = Global_54079[iVar0 /*120*/].f_18[iVar3];
			iVar127 = -1;
			iVar128 = 0;
			iVar128 = 0;
			while (iVar128 < 7)
			{
				if (Global_54441[iVar128 /*203*/].f_1 == iVar126)
				{
					iVar127 = iVar128;
				}
				iVar128++;
			}
			if (iVar127 == -1)
			{
				bVar125 = false;
			}
		}
		if (bVar125)
		{
			iVar129 = Var4.f_0;
			Var4.f_1[iVar129] = Global_54079[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar129] = Global_54079[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar129] = Global_54079[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar129] = Global_54079[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar129] = Global_54079[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar129] = Global_54079[iVar0 /*120*/].f_86[iVar3];
			Var4.f_0++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar124++;
	}
	Global_54079[iVar0 /*120*/] = Var4.f_0;
	iVar124 = 0;
	while (iVar124 < 16)
	{
		Global_54079[iVar0 /*120*/].f_103[iVar124] = 0;
		Global_54079[iVar0 /*120*/].f_1[iVar124] = Var4.f_1[iVar124];
		Global_54079[iVar0 /*120*/].f_18[iVar124] = Var4.f_18[iVar124];
		Global_54079[iVar0 /*120*/].f_35[iVar124] = Var4.f_35[iVar124];
		Global_54079[iVar0 /*120*/].f_52[iVar124] = Var4.f_52[iVar124];
		Global_54079[iVar0 /*120*/].f_69[iVar124] = Var4.f_69[iVar124];
		Global_54079[iVar0 /*120*/].f_86[iVar124] = Var4.f_86[iVar124];
		iVar124++;
	}
}

void func_68()//Position - 0x54EE
{
	float fVar0;
	
	fVar0 = func_69(Local_48, Local_45, -90f, 0f, 90f, Global_20773, 350f, 0);
	if (Global_9487 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_23199 = 0;
		func_1(0);
		func_4();
		iLocal_16 = 0;
	}
}

float func_69(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x554C
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4543262 == 0)
	{
		if (BitTest(Global_8683, 14) && Global_20813.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_20766[Global_20758 /*3*/].f_1 == Var0.f_1)
			{
				Global_4543262 = 1;
			}
		}
	}
	if (func_72() && Global_4543262 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_71((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_20741 = { func_70(Param0, Param3, fVar4) };
		Global_20744 = { func_70(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20741 = { Param3 };
		Global_20744 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20744, 0);
	return fVar3;
}

Vector3 func_70(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x565B
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_71(float fParam0, float fParam1, float fParam2)//Position - 0x5675
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

int func_72()//Position - 0x569C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			if (Global_20756 == 0)
			{
				if (Global_7998 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22166 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919171))))
		{
			return 0;
		}
		if (Global_113420)
		{
			return 0;
		}
	}
	if (Global_79248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4543261 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114372.f_14054.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_73()//Position - 0x58E5
{
	float fVar0;
	
	fVar0 = func_69(Local_45, Local_48, Global_20773, -90f, 0f, 90f, 350f, 0);
	if (Global_9487 == 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			if (!func_74())
			{
				MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
			}
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_23200 = 0;
		iLocal_16 = 0;
	}
}

int func_74()//Position - 0x5961
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0)//Position - 0x5985
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || func_76())
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_76()//Position - 0x5A03
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_77(bool bParam0)//Position - 0x5A19
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || func_76())
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_78(bool bParam0)//Position - 0x5A93
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (MISC::IS_XBOX360_VERSION() || func_76())
	{
		HUD::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_SOFT_KEYS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_79()//Position - 0x5B0F
{
	func_80();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_80()//Position - 0x5B28
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_83(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_82(PLAYER::PLAYER_PED_ID());
			if (func_81(iVar0) && (!func_15(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_81(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_81(int iParam0)//Position - 0x5C25
{
	return iParam0 < 3;
}

int func_82(int iParam0)//Position - 0x5C31
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_83(int iParam0)//Position - 0x5C6E
{
	if (func_81(iParam0))
	{
		return func_84(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_84(int iParam0)//Position - 0x5C93
{
	return Global_2139[iParam0 /*29*/];
}

