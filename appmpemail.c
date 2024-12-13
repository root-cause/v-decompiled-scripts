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
	int iLocal_17[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<16> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_60[60];
	struct<16> Local_421[60];
	int iLocal_1382 = 0;
	struct<3> Local_1383 = { 0, 0, 0 } ;
	struct<3> Local_1386 = { 0, 0, 0 } ;
	int iLocal_1389 = 0;
	int iLocal_1390 = 0;
	bool bLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	struct<379> Local_1394 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_68();
	}
	func_67();
	Global_23491 = 0;
	Global_114135.f_14055[Global_21066 /*20*/].f_18 = 0;
	Global_21283 = 0;
	func_66();
	func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61();
	func_59();
	if (Global_21066.f_1 > 3)
	{
		Global_21066.f_1 = 7;
	}
	iLocal_41 = MISC::GET_GAME_TIMER();
	Global_21070 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Local_1386);
	Local_1383 = { Local_1386 };
	Local_1383.f_0 = (Local_1383.f_0 - 10f);
	Local_1383.f_1 = (Local_1383.f_1 + 20f);
	Global_23458 = 0;
	Global_23459 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_23459 == 0 && Global_23458 == 1)
		{
			func_58();
		}
		if (Global_23459 == 1 && Global_23458 == 0)
		{
			func_53();
		}
		if (iLocal_40 == 0)
		{
			iLocal_42 = MISC::GET_GAME_TIMER();
			if ((iLocal_42 - iLocal_41) > 500)
			{
				iLocal_40 = 1;
			}
		}
		if ((Global_21066.f_1 != 9 && Global_23459 == 0) && Global_23458 == 0)
		{
			switch (Global_21066.f_1)
			{
				case 7:
					if (Global_23491 == 0)
					{
						if (Global_2750847 == 0)
						{
							func_52();
							func_45();
						}
					}
					break;
				
				case 8:
					if (Global_23491 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_23491 == 0)
			{
				if (func_4())
				{
					Global_23458 = 1;
				}
			}
			else if (func_3(2, Global_21034, 0) || BitTest(Global_8920, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_8920, 12);
					func_2();
					Global_21044 = 1;
					Global_23491 = 0;
					if (Global_21066.f_1 > 3)
					{
						Global_21066.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_68();
					}
					func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_61();
					func_59();
					if (Global_4542454[iLocal_34 /*296*/].f_29 > 0)
					{
						if (Global_4542454[iLocal_34 /*296*/].f_31 == 1)
						{
							Global_4542454[iLocal_34 /*296*/].f_29 = 4;
							Global_4542454[iLocal_34 /*296*/].f_24 = 1;
						}
						else
						{
							Global_4542454[iLocal_34 /*296*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_68();
		}
		if (func_1())
		{
			func_68();
		}
	}
}

int func_1()//Position - 0x29F
{
	if (((Global_21066.f_1 == 1 || Global_21066.f_1 == 3) || Global_21066.f_1 == 0) || Global_21010 == 1)
	{
		Global_21053 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2E2
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21055, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x303
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x375
{
	if (Global_9542 == 1 || Global_21066.f_1 < 7)
	{
		Global_21053 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x39E
{
	if (iLocal_37)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_37 == 0)
	{
		if (func_3(2, Global_21042, 0))
		{
			func_9();
			iLocal_37 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_21043, 0))
		{
			func_6();
			iLocal_37 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()//Position - 0x413
{
	func_65(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_7();
}

void func_7()//Position - 0x44E
{
	if (func_8())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

int func_8()//Position - 0x471
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79539)
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
	if (Global_4546301 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()//Position - 0x4B8
{
	func_65(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_10();
}

void func_10()//Position - 0x4F3
{
	if (func_8())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_11()//Position - 0x516
{
	func_12();
}

void func_12()//Position - 0x522
{
	if (Global_4542454[iLocal_34 /*296*/].f_24 == 1)
	{
		if (Global_21044 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_21037))
			{
				func_2();
				Global_21044 = 1;
				func_38();
				if (Global_4542454[iLocal_34 /*296*/].f_27 == 1)
				{
					Global_4542454[iLocal_34 /*296*/].f_291[0] = 0;
					Global_4542454[iLocal_34 /*296*/].f_291[1] = 0;
					Global_4542454[iLocal_34 /*296*/].f_291[2] = 0;
				}
				else
				{
					Global_4542454[iLocal_34 /*296*/].f_291[Global_21066] = 0;
				}
				if (func_37(iLocal_34))
				{
				}
				else
				{
					Global_4542454[iLocal_34 /*296*/].f_24 = 0;
					Global_4542454[iLocal_34 /*296*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_4542454[iLocal_34 /*296*/].f_16);
				func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_61();
				if (iLocal_32 > 0)
				{
					iLocal_32 = (iLocal_32 - 1);
				}
				func_59();
				if (Global_21066.f_1 > 3)
				{
					Global_21066.f_1 = 7;
					Global_23491 = 0;
				}
			}
		}
	}
	else if (Global_21044 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_21038))
		{
			if (iLocal_36 == 1)
			{
				if (Global_21066.f_1 > 3)
				{
					StringCopy(&Global_76623, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_23466), 64);
					if (MISC::ARE_STRINGS_EQUAL(&Global_76623, "HARDCODED_4207156"))
					{
						Global_21066.f_1 = 3;
						Global_1963021 = 1;
					}
					else
					{
						Global_76754 = 7;
						MISC::SET_BIT(&Global_8920, 10);
						Global_21066.f_1 = 6;
					}
				}
				func_68();
			}
		}
	}
	if (Global_4542454[iLocal_34 /*296*/].f_31 == 1)
	{
		if (Global_21044 == 0)
		{
			if (func_3(2, Global_21038, 0))
			{
				func_35();
				Global_21044 = 1;
				Global_4542454[iLocal_34 /*296*/].f_29 = 2;
				Global_4542454[iLocal_34 /*296*/].f_24 = 1;
				Global_4542454[iLocal_34 /*296*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_8919, 17);
				Global_23491 = 0;
				if (Global_21066.f_1 > 3)
				{
					Global_21066.f_1 = 7;
				}
				func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_61();
				func_59();
			}
		}
	}
	if (Global_21044 == 0 && iLocal_40 == 1)
	{
		if (func_3(2, Global_21035, 0))
		{
			Global_21044 = 1;
			if (Global_4542454[iLocal_34 /*296*/].f_29 > 0)
			{
				func_35();
				Global_4542454[iLocal_34 /*296*/].f_29 = 3;
				Global_4542454[iLocal_34 /*296*/].f_24 = 1;
				Global_23491 = 0;
				if (Global_21066.f_1 > 3)
				{
					Global_21066.f_1 = 7;
				}
				func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_61();
				func_59();
			}
			else if (Global_4542454[iLocal_34 /*296*/].f_30 == 1)
			{
				func_35();
				Global_8234 = 144;
				if (Global_21066.f_1 > 3)
				{
					Global_21066.f_1 = 10;
					func_33();
				}
				func_32("appContacts");
				Global_21064 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_8234 = Global_4542454[iLocal_34 /*296*/].f_17;
				if (func_31(Global_8234, Global_21066) == 0)
				{
					func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_211" /* GXT: DIALING... */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_211" /* GXT: DIALING... */, &(Global_2201[Global_8234 /*29*/].f_3), 0);
				}
				func_13();
				func_68();
			}
		}
	}
}

void func_13()//Position - 0x886
{
	char cVar0[24];
	
	if (Global_21049 == 1)
	{
		return;
	}
	if (Global_21066.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (Global_79539)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21066.f_1)
	{
		case 6:
			func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(Global_9541);
			if (Global_9541 == 1)
			{
				func_65(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21070;
			}
			else
			{
				func_65(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21071), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21071;
			}
			if (Global_21054)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21286 == 0)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else if (Global_79539)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else
			{
				if (Global_21285 == 1)
				{
					if (Global_21054)
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21054)
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8919, 17);
			}
			if (Global_79539)
			{
				Global_21046 = Global_21070;
				if (func_23() && BitTest(Global_8921, 9))
				{
					func_18(0);
				}
				func_65(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				func_65(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_65(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_30(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21065 == 1)
			{
				func_17();
				func_65(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_16("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_16("CELL_217" /* GXT: INCOMING CALL */);
					func_16("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_31(Global_8234, Global_21066) == 0)
				{
					func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2201[Global_8234 /*29*/].f_3), 0);
				}
				func_65(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22425 == 4 || Global_22425 == 3)
			{
				func_65(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_16("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_16("CELL_219" /* GXT: CONNECTED */);
					func_16("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22683)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_31(Global_8234, Global_21066) == 0)
					{
						func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), &cVar0, &(Global_2201[Global_8234 /*29*/].f_3), 0);
					}
				}
				func_65(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()//Position - 0xE6F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		func_15();
		if (Global_21065 == 1)
		{
			if (Global_21054)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22472)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8919, 20))
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			func_30(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()//Position - 0xFED
{
	if (Global_79539)
	{
		func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
}

void func_16(char* sParam0)//Position - 0x101D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_17()//Position - 0x102F
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066 == 0)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
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
		if (Global_21066 == 1)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
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
		if (Global_21066 == 2)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
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
		if (Global_21066 == 3)
		{
			switch (Global_4546299)
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

void func_18(bool bParam0)//Position - 0x12A6
{
	int iVar0;
	
	MISC::SET_BIT(&Global_8921, 9);
	if (bParam0)
	{
		func_65(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_22();
	func_21();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9467[iVar0] = 0;
		Global_9504[iVar0] = 0;
		iVar0++;
	}
	func_19(10, "CELL_16" /* GXT: Settings */, 0, "appSettings", 24);
	if (bParam0)
	{
		func_65(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		func_65(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x135D
{
	func_20(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_9504[iParam2] = 1;
	Global_9467[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_16(&(Global_8926[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_20(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x13CC
{
	StringCopy(&(Global_8926[iParam0 /*15*/]), sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = uParam2;
	StringCopy(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = uParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8926[iParam0 /*15*/].f_12 == 0)
	{
		Global_8926[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_13 == 0)
	{
		Global_8926[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_14 == 0)
	{
		Global_8926[iParam0 /*15*/].f_14 = 0;
	}
}

void func_21()//Position - 0x1482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9504[iVar0] = 0;
		iVar0++;
	}
}

void func_22()//Position - 0x14A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_16(&(Global_8926[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_65(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_65(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

int func_23()//Position - 0x1534
{
	if (func_24())
	{
		return 1;
	}
	return 0;
}

bool func_24()//Position - 0x1548
{
	return (func_25() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_25()//Position - 0x155E
{
	return func_26(9539, -1);
}

bool func_26(int iParam0, int iParam1)//Position - 0x156E
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_27()//Position - 0x158A
{
	return Global_1574926;
}

void func_28(int iParam0)//Position - 0x1596
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
	
	Global_23493 = 0;
	Global_9541 = iParam0;
	func_21();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_29(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar2 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696411)
							{
								if (iVar1 == 14)
								{
									func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114135.f_14145[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114135.f_14145[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114135.f_14145[iVar3 /*104*/].f_99[Global_21066] == 1)
											{
												Global_23493++;
											}
										}
									}
									iVar3++;
								}
								func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23493), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79539)
								{
									iVar4 = 0;
									iVar4 = Global_4542452;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4542454[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4542454[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4542454[iVar5 /*296*/].f_291[Global_21066] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case 0:
											iVar6 = Global_45403;
											break;
										
										case 1:
											iVar6 = Global_45404;
											break;
										
										case 2:
											iVar6 = Global_45405;
											break;
										
										default:
											break;
									}
									func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8920, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar8 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_8926[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_16(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882240.f_1;
								func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_30(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_29(int iParam0)//Position - 0x1B10
{
	return Global_44181 == iParam0;
}

void func_30(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1B1E
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
		func_16(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_16(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_16(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_16(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_16(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_31(int iParam0, int iParam1)//Position - 0x1BD1
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

void func_32(char* sParam0)//Position - 0x1BFB
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_33()//Position - 0x1C1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_79539)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_21009)
			{
				if (Global_8234 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_79539)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_8919, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_34()//Position - 0x1D3F
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

void func_35()//Position - 0x1D63
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21055, true);
		func_36();
	}
}

void func_36()//Position - 0x1D89
{
	if (func_8())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_37(int iParam0)//Position - 0x1D9D
{
	if ((Global_114135.f_14145[iParam0 /*104*/].f_99[0] == 1 || Global_114135.f_14145[iParam0 /*104*/].f_99[1] == 1) || Global_114135.f_14145[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_38()//Position - 0x1DF2
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_39();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

var func_39()//Position - 0x1E94
{
	func_40();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_40()//Position - 0x1EAD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_29(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_41(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_41(int iParam0)//Position - 0x1FAA
{
	return iParam0 < 3;
}

int func_42(int iParam0)//Position - 0x1FB6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)//Position - 0x1FF3
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)//Position - 0x2018
{
	return Global_2201[iParam0 /*29*/];
}

void func_45()//Position - 0x2027
{
	struct<16> Var0;
	
	if (Global_21044 == 0)
	{
		if ((func_3(2, Global_21035, 0) || Global_4546008 == 1) || Global_23485 == 1)
		{
			if (Global_4546008 == 0 && Global_23485 == 0)
			{
				func_35();
			}
			Global_21044 = 1;
			iLocal_40 = 0;
			func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			iLocal_34 = iLocal_17[iLocal_32];
			if (iLocal_32 == iLocal_31 || iLocal_32 > iLocal_31)
			{
				if (Global_21066.f_1 > 3)
				{
					Global_21066.f_1 = 8;
					Global_23491 = 1;
					iLocal_33 = iLocal_32;
					SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(iLocal_17[iLocal_32], &Local_1394);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_38 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
				iLocal_43 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_43) && iLocal_38 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_38 = 1;
					}
				}
				func_50();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_16("CELL_1" /* GXT: Texts */);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD" /* GXT: To: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD" /* GXT: From: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON" /* GXT: ~a~~a~~a~~a~~a~~a~~a~~a~~a~~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[1 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[2 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[3 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[4 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[5 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[6 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[7 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[8 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_56[9 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				switch (Local_1394.f_377)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Dock_Tease");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 3:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 4:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Legendary_Motorsport");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 5:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Customs");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 6:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Elitas_Travel");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 7:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_LS_Tourist_Info");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 8:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_dynasty8");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 9:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_bennys");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 10:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ammunation");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 11:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_SSSA");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 12:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 13:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_shark");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 14:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_RP");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
					
					case 15:
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_rockstar");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_65(Global_21047, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (Local_1394.f_378 != -141697331)
				{
					SOCIALCLUB::_SC_EMAIL_MARKETING_EMAIL_OPENED(iLocal_17[iLocal_32], joaat("OPENED"));
				}
				if (iLocal_32 == iLocal_31)
				{
					if (BitTest(Global_4546023, 25))
					{
						MISC::CLEAR_BIT(&Global_4546023, 25);
					}
					if (Global_4542452 > 0)
					{
						func_47(13522, iLocal_1389, -1, 1);
						if (Global_4542452 > 0)
						{
							Global_4542452 = 0;
						}
					}
				}
				return;
			}
			if (Global_4542454[iLocal_34 /*296*/].f_24 != 0)
			{
				if (Global_21066.f_1 > 3)
				{
					Global_21066.f_1 = 8;
				}
				if (Global_4546008 == 1 || Global_23485 == 1)
				{
					iLocal_34 = iLocal_17[0];
					iLocal_33 = 0;
					if (Global_4546008 == 1)
					{
					}
					Global_23485 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_38 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
					iLocal_43 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_43) && iLocal_38 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_38 = 1;
						}
					}
					if (iLocal_38 == 1)
					{
						iLocal_39 = 0;
					}
					else
					{
						iLocal_39 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_43);
					}
					if (iLocal_39 < 0)
					{
						iLocal_39 = 0;
					}
					iLocal_34 = iLocal_17[iLocal_32];
					iLocal_33 = iLocal_32;
				}
				Global_4542454[iLocal_34 /*296*/].f_28 = 1;
				iLocal_36 = 0;
				StringCopy(&Global_23466, "NO_HYPERLINK", 64);
				Var0 = { Global_4542454[iLocal_34 /*296*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_23466 = { Var0 };
					iLocal_36 = 1;
					if (Global_21054)
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267" /* GXT: LINK */, 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_8919, 17);
					Global_4542454[iLocal_34 /*296*/].f_26 = 1;
					Global_4542454[iLocal_34 /*296*/].f_24 = 2;
				}
				if (Global_4542454[iLocal_34 /*296*/].f_26 == 0)
				{
					Global_4542454[iLocal_34 /*296*/].f_24 = 1;
				}
				func_50();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_16("CELL_1" /* GXT: Texts */);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD" /* GXT: To: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD" /* GXT: From: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD" /* GXT: From: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2201[Global_4542454[iLocal_34 /*296*/].f_17 /*29*/].f_3));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				switch (Global_4542454[iLocal_34 /*296*/].f_32)
				{
					case 0:
						func_16(&(Global_4542454[iLocal_34 /*296*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542454[iLocal_34 /*296*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_33));
						if (Global_4542454[iLocal_34 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_67));
						}
						if ((Global_4542454[iLocal_34 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4542454[iLocal_34 /*296*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542454[iLocal_34 /*296*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4542454[iLocal_34 /*296*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542454[iLocal_34 /*296*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542454[iLocal_34 /*296*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542454[iLocal_34 /*296*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542454[iLocal_34 /*296*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542454[iLocal_34 /*296*/].f_49);
						if (Global_4542454[iLocal_34 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_67));
						}
						if ((Global_4542454[iLocal_34 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4542454[iLocal_34 /*296*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542454[iLocal_34 /*296*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4542454[iLocal_34 /*296*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542454[iLocal_34 /*296*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_46(iLocal_34);
						break;
					
					case 5:
						func_46(iLocal_34);
						break;
					
					case 6:
						func_46(iLocal_34);
						break;
					
					case 7:
						func_46(iLocal_34);
						break;
					
					case 8:
						func_46(iLocal_34);
						break;
					
					case 9:
						func_46(iLocal_34);
						break;
					
					case 10:
						func_46(iLocal_34);
						break;
					
					case 11:
						func_46(iLocal_34);
						break;
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iLocal_34 /*296*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_16(&(Global_2201[Global_4542454[iLocal_34 /*296*/].f_17 /*29*/].f_3));
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 149)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_maze_bank");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 140)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("EmailAds_Warstock");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 155)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_arena");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 160)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_diamond");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 174)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ls_car_meet");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 185)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("SUM2_EMAIL_LUXURY_AUTOS");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 186)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("SUM2_EMAIL_PREMIUM_DELUXE");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_17 == 191)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("emailads_ghost_exposed");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_23491 = 1;
				func_65(Global_21047, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				HUD::THEFEED_REMOVE_ITEM(Global_4542454[iLocal_34 /*296*/].f_16);
				if (Global_4542454[iLocal_34 /*296*/].f_29 > 0)
				{
					if (Global_21054)
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4542454[iLocal_34 /*296*/].f_30 == 1)
				{
					if (Global_21054)
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/]), "CELL_FINV"))
					{
						if (Global_21054)
						{
							func_30(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
						}
						else
						{
							func_30(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_21054)
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21054)
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
				}
				else
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4542454[iLocal_34 /*296*/].f_24 == 2)
				{
					if (Global_4542454[iLocal_34 /*296*/].f_31 == 1)
					{
						iLocal_36 = 0;
						if (Global_21054)
						{
							func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264" /* GXT: BARTER */, 0, 0, 0, 0);
						}
						else
						{
							func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_8919, 17);
					}
					else if (iLocal_36 == 0)
					{
						func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8919, 17);
					}
				}
				else if (Global_21054)
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216" /* GXT: DELETE */, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8919, 17);
				}
				else
				{
					func_30(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8919, 17);
				}
				Global_114135.f_14055[Global_21066 /*20*/].f_18 = 0;
				Global_4546008 = 0;
			}
			else
			{
				Global_114135.f_14055[Global_21066 /*20*/].f_18 = 0;
				Global_4546008 = 0;
			}
		}
		if (Global_2750847 == 0)
		{
			if (Global_79539)
			{
			}
		}
	}
}

void func_46(int iParam0)//Position - 0x2CC5
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_114135.f_14145[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01" /* GXT: ~a~ ~a~. */);
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114135.f_14145[iParam0 /*104*/]));
	while (iVar0 < Global_114135.f_14145[iParam0 /*104*/].f_49)
	{
		switch (Global_114135.f_14145[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2739811.f_1793[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928811[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928852[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928873[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928890[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928903[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928916[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928929[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_47(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E66
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_48(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_48(int iParam0, var uParam1)//Position - 0x2E94
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_49(uParam1));
}

int func_49(var uParam0)//Position - 0x2EA9
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2751934 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2751934 = 1;
		}
	}
	return iVar0;
}

void func_50()//Position - 0x2EDD
{
	int iVar0;
	
	if (iLocal_1382)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_44);
	}
	iLocal_1382 = 0;
	if (Global_4542454[iLocal_34 /*296*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 60)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_4542454[iLocal_34 /*296*/]), &(Local_60[iVar0 /*6*/])))
			{
				if (func_51(&(Local_60[iVar0 /*6*/])))
				{
					StringCopy(&Local_44, "BAT_CASE_", 64);
					StringIntConCat(&Local_44, Global_1963013, 64);
				}
				else
				{
					Local_44 = { Local_421[iVar0 /*16*/] };
				}
				iLocal_1382 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_44, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_44))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_51(char* sParam0)//Position - 0x2F7A
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case joaat("BONEPIC1_TXT"):
		case joaat("BONEPIC2_TXT"):
		case joaat("BONEPIC3_TXT"):
		case joaat("BONEPIC4_TXT"):
		case joaat("BONEPIC5_TXT"):
		case joaat("BONEPIC6_TXT"):
		case joaat("BONEPIC7_TXT"):
		case joaat("BONEPIC8_TXT"):
		case joaat("BONEPIC9_TXT"):
		case joaat("BONEPIC10_TXT"):
		case joaat("BONEPIC11_TXT"):
		case joaat("BONEPIC12_TXT"):
		case joaat("BONEPIC13_TXT"):
		case joaat("BONEPIC14_TXT"):
		case joaat("BONEPIC15_TXT"):
		case joaat("BONEPIC16_TXT"):
		case joaat("BONEPIC17_TXT"):
		case joaat("BONEPIC18_TXT"):
		case joaat("BONEPIC19_TXT"):
		case joaat("BONEPIC20_TXT"):
			return 1;
		
		default:
	}
	return 0;
}

void func_52()//Position - 0x300A
{
	if (iLocal_37)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_30)
			{
				iLocal_32 = 0;
			}
			func_6();
		}
	}
	if (iLocal_37 == 0)
	{
		if (func_3(2, Global_21042, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
				func_9();
			}
			iLocal_37 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_21043, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_30)
			{
				iLocal_32 = 0;
			}
			func_6();
			iLocal_37 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_53()//Position - 0x30B7
{
	float fVar0;
	
	fVar0 = func_54(Local_1386, Local_1383, Global_21026, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_23459 = 0;
		iLocal_16 = 0;
	}
}

float func_54(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x3105
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4546302 == 0)
	{
		if (BitTest(Global_8919, 14) && Global_21066.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_21019[Global_21011 /*3*/].f_1 == Var0.f_1)
			{
				Global_4546302 = 1;
			}
		}
	}
	if (func_57() && Global_4546302 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_56((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
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
		Global_20994 = { func_55(Param0, Param3, fVar4) };
		Global_20997 = { func_55(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20994 = { Param3 };
		Global_20997 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20997, 0);
	return fVar3;
}

Vector3 func_55(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x3214
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_56(float fParam0, float fParam1, float fParam2)//Position - 0x322E
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

int func_57()//Position - 0x3255
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		{
			if (Global_21009 == 0)
			{
				if (Global_8234 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22425 != 2)
						{
						}
					}
				}
			}
		}
		if (func_29(14))
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254))))
		{
			return 0;
		}
		if (Global_113183)
		{
			return 0;
		}
	}
	if (Global_79539)
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
	if (Global_4546301 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114135.f_14055.f_89)
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

void func_58()//Position - 0x349E
{
	float fVar0;
	
	fVar0 = func_54(Local_1383, Local_1386, -90f, 0f, 90f, Global_21026, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_23458 = 0;
		func_68();
		iLocal_16 = 0;
	}
}

void func_59()//Position - 0x34F2
{
	if (Global_4546008 == 0)
	{
		if (iLocal_33 < 0)
		{
			iLocal_33 = 0;
		}
		func_60(Global_21047, "SET_HEADER", "CELL_INBOX" /* GXT: Inbox */, 0, 0, 0, 0);
		func_65(Global_21047, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_33), -1082130432, -1082130432, -1082130432);
		if (Global_21054)
		{
			if (iLocal_30 > 0)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214" /* GXT: OPTIONS */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_30 > 0)
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_79539)
		{
			func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			func_30(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
	}
	else
	{
		iLocal_33 = 0;
	}
}

void func_60(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x3624
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_16(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_16(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_16(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_16(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_16(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_61()//Position - 0x367F
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<8> Var17;
	int iVar33;
	int iVar34[10];
	int iVar45;
	
	iLocal_30 = 0;
	iLocal_31 = 0;
	func_38();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_68();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4542454[iVar16 /*296*/].f_18 = -1;
		Global_4542454[iVar16 /*296*/].f_18.f_1 = 0;
		Global_4542454[iVar16 /*296*/].f_18.f_2 = 0;
		Global_4542454[iVar16 /*296*/].f_18.f_3 = 0;
		Global_4542454[iVar16 /*296*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_68();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4542454[iVar15 /*296*/].f_24 != 0)
				{
					if (Global_4542454[iVar15 /*296*/].f_291[Global_21066] == 1)
					{
						if (func_64(Global_4542454[iVar15 /*296*/].f_18, Global_4542454[iVar16 /*296*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4542454[iVar16 /*296*/].f_28 == 0)
							{
								iLocal_35 = 0;
							}
							else
							{
								iLocal_35 = 1;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_17[iVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_4542454[iVar16 /*296*/].f_24 != 0)
		{
			if (Global_4542454[iVar16 /*296*/].f_291[Global_21066] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_35);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				if (Global_4542454[iVar16 /*296*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542454[iVar16 /*296*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_16(&(Global_2201[Global_4542454[iVar16 /*296*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_4542454[iVar16 /*296*/] };
				if (func_51(&(Global_4542454[iVar16 /*296*/])))
				{
					iVar33 = func_63(7315, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&Var17, "BONEMAIL_TXT_SUB" /* GXT: First Bounty Target */, 64);
							break;
						
						case 1:
							StringCopy(&Var17, "BONEMAIL2_TXT_SUB" /* GXT: Second Bounty Target */, 64);
							break;
						
						case 2:
							StringCopy(&Var17, "BONEMAIL3_TXT_SUB" /* GXT: Third Bounty Target */, 64);
							break;
						
						case 3:
							StringCopy(&Var17, "BONEMAIL4_TXT_SUB" /* GXT: Fourth Bounty Target */, 64);
							break;
						
						case 4:
							StringCopy(&Var17, "BONEMAIL5_TXT_SUB" /* GXT: Final Bounty Target */, 64);
							break;
					}
				}
				else if (func_62(&(Global_4542454[iVar16 /*296*/])))
				{
					StringCopy(&Var17, "HK24_FLW_SUB" /* GXT: Darnell Bros */, 64);
				}
				else
				{
					StringConCat(&Var17, "_SUB", 64);
				}
				func_16(&Var17);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_30++;
				iLocal_31++;
			}
		}
		iVar13++;
	}
	if (Global_262145.f_36147 /* Tunable: 975063215 */)
	{
		return;
	}
	iVar13 = iLocal_30;
	iVar45 = 0;
	while (iVar13 < (iLocal_1393 + iLocal_30))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1393 && iVar45 == 0)
		{
			SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(iVar14, &Local_1394);
			if (iVar34[iVar14] == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4542452 == 0)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					}
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ" /* GXT: ~a~~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_23[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1394.f_23[1 /*16*/]));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar34[iVar14] = 1;
				iLocal_17[iVar13] = iVar14;
				iVar45 = 1;
				iLocal_30++;
				if (iVar14 == 0)
				{
					iLocal_1389 = Local_1394.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

int func_62(char* sParam0)//Position - 0x39F9
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case joaat("HK24_FLW_T0"):
		case joaat("HK24_FLW_T1"):
		case joaat("HK24_FLW_T2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_63(int iParam0, int iParam1)//Position - 0x3A23
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_64(struct<6> Param0, struct<6> Param6)//Position - 0x3A3F
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_65(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3B2A
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

void func_66()//Position - 0x3B8D
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case -1:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
			break;
		
		case 0:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
			break;
		
		case 1:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
			break;
		
		case 2:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
			break;
		
		case 3:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
			break;
		
		case 4:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
			break;
		
		case 5:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
			break;
		
		case 6:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
			break;
		
		case 7:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
			break;
		
		case 8:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
			break;
		
		case 9:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
			break;
		
		case 10:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
			break;
		
		case 11:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
			break;
		
		case 12:
			SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
			break;
	}
	SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 6);
	SYSTEM::WAIT(0);
	iLocal_1390 = 1;
	bLocal_1391 = false;
	while (iLocal_1390 && Global_21066.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_1392 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
		if (func_4())
		{
			Global_21066.f_1 = 3;
			iLocal_1390 = 0;
			bLocal_1391 = false;
		}
		switch (iLocal_1392)
		{
			case 3:
				iLocal_1390 = 0;
				bLocal_1391 = true;
				break;
			
			case 0:
				iLocal_1390 = 0;
				bLocal_1391 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_1390 = 0;
				bLocal_1391 = false;
				break;
			
			case 2:
				iLocal_1390 = 0;
				bLocal_1391 = false;
				break;
		}
	}
	if (bLocal_1391)
	{
		iLocal_1393 = SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS();
	}
	else
	{
		iLocal_1393 = 0;
	}
}

void func_67()//Position - 0x3D4C
{
	StringCopy(&(Local_60[0 /*6*/]), "SXT_JUL_1ST" /* GXT: I can't wait until you cum again! ~nrt~ <img src='img://05_a_sext_stripperJuliet/05_a_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[1 /*6*/]), "SXT_JUL_2ND" /* GXT: Just when I thought that it couldn't get any better! ~nrt~ <img src='img://05_b_sext_stripperJuliet/05_b_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[2 /*6*/]), "SXT_JUL_NEED" /* GXT: Missing you badly! I want you inside me. ~nrt~ <img src='img://05_c_sext_stripperJuliet/05_c_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[3 /*6*/]), "MAPEMAIL_TXT" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_19/NHP_PHOTO_19' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_60[4 /*6*/]), "SXT_NIK_2ND" /* GXT: You're the man that I've been looking for my entire life! ~nrt~ <img src='img://06_b_sext_stripperNikki/06_b_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_60[5 /*6*/]), "SXT_NIK_NEED" /* GXT: Maybe this will get your attention! ~nrt~ <img src='img://06_c_sext_stripperNikki/06_c_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_60[6 /*6*/]), "SXT_SAP_1ST" /* GXT: That was deliciously yummy. Next time, I want to be on top. What do you think of this position? ~nrt~ <img src='img://08_a_sext_stripperSapphire/08_a_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[7 /*6*/]), "SXT_SAP_2ND" /* GXT: Here don't show this to anyone else. ~nrt~ <img src='img://08_b_sext_stripperSapphire/08_b_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[8 /*6*/]), "SXT_SAP_NEED" /* GXT: My body aches for you! ~nrt~ <img src='img://08_c_sext_stripperSapphire/08_c_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[9 /*6*/]), "SXT_INF_1ST" /* GXT: This body is all yours and only yours baby! ~nrt~ <img src='img://04_a_sext_stripperInfernus/04_a_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[10 /*6*/]), "SXT_INF_2ND" /* GXT: I can hardly walk, that was amazing! ~nrt~ <img src='img://04_b_sext_stripperInfernus/04_b_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[11 /*6*/]), "SXT_INF_NEED" /* GXT: My loins quiver with the thought of you! ~nrt~ <img src='img://04_c_sext_stripperInfernus/04_c_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[12 /*6*/]), "SXT_TXI_1ST" /* GXT: I can't stop thinking about the last time. ~nrt~ <img src='img://11_a_sext_taxiLiz/11_a_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_60[13 /*6*/]), "SXT_TXI_2ND" /* GXT: You're so amazing! I've been missing out. ~nrt~ <img src='img://11_b_sext_taxiLiz/11_b_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_60[14 /*6*/]), "SXT_TXI_NEED" /* GXT: Hey babe, I need a study break... ~nrt~ <img src='img://11_c_sext_taxiLiz/11_c_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_60[15 /*6*/]), "SXT_HCH_1ST" /* GXT: You always know how to give a good ride ;) ~nrt~ <img src='img://10_a_sext_hitcherGirl/10_a_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[16 /*6*/]), "SXT_HCH_2ND" /* GXT: Can't wait to meet again honey. ~nrt~ <img src='img://10_b_sext_hitcherGirl/10_b_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[17 /*6*/]), "SXT_HCH_NEED" /* GXT: I've been thinking... you should let me ride you. ~nrt~ <img src='img://10_c_sext_hitcherGirl/10_c_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[18 /*6*/]), "SOL2_PASS" /* GXT: Michael I have put your name in the credits for the film. ~nrt~ <img src='img://ExecutiveProducer/executiveproducer' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_60[19 /*6*/]), "MAPEMAIL_TXT1" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_18/NHP_PHOTO_18' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_60[20 /*6*/]), "MAPEMAIL_TXT2" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_11/NHP_PHOTO_11' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_60[21 /*6*/]), "MAPEMAIL_TXT3" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_13/NHP_PHOTO_13' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_60[22 /*6*/]), "MAPEMAIL_TXT4" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_5/NHP_PHOTO_5' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_60[23 /*6*/]), "MAPEMAIL_TXT5" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_12/NHP_PHOTO_12' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_60[24 /*6*/]), "MAPEMAIL_TXT6" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_3/NHP_PHOTO_3' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_60[25 /*6*/]), "MAPEMAIL_TXT7" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_1/NHP_PHOTO_1' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_60[26 /*6*/]), "MAPEMAIL_TXT8" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_10/NHP_PHOTO_10' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_60[27 /*6*/]), "MAPEMAIL_TXT9" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_6/NHP_PHOTO_6' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_60[28 /*6*/]), "MAPEMAIL_TXT10" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_20/NHP_PHOTO_20' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_60[29 /*6*/]), "MAPEMAIL_TXT11" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_7/NHP_PHOTO_7' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_60[30 /*6*/]), "MAPEMAIL_TXT12" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_14/NHP_PHOTO_14' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_60[31 /*6*/]), "MAPEMAIL_TXT13" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_4/NHP_PHOTO_4' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_60[32 /*6*/]), "MAPEMAIL_TXT14" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_17/NHP_PHOTO_17' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_60[33 /*6*/]), "MAPEMAIL_TXT15" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_2/NHP_PHOTO_2' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_60[34 /*6*/]), "MAPEMAIL_TXT16" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_15/NHP_PHOTO_15' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_60[35 /*6*/]), "MAPEMAIL_TXT17" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_8/NHP_PHOTO_8' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_60[36 /*6*/]), "MAPEMAIL_TXT18" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_9/NHP_PHOTO_9' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_60[37 /*6*/]), "MAPEMAIL_TXT19" /* GXT: Use the photograph in this email to identify the location of the treasure. ~nrt~ <img src='img://NHP_PHOTO_16/NHP_PHOTO_16' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_60[38 /*6*/]), "MC_EMAIL_0" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_mines/NHP_prep_mines' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_60[39 /*6*/]), "BONEPIC1_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_0/BAT_CASE_0'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[39 /*16*/]), "", 64);
	StringCopy(&(Local_60[40 /*6*/]), "BONEPIC2_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_1/BAT_CASE_1'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[40 /*16*/]), "", 64);
	StringCopy(&(Local_60[41 /*6*/]), "BONEPIC3_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_2/BAT_CASE_2'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[41 /*16*/]), "", 64);
	StringCopy(&(Local_60[42 /*6*/]), "BONEPIC4_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_3/BAT_CASE_3'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[42 /*16*/]), "", 64);
	StringCopy(&(Local_60[43 /*6*/]), "BONEPIC5_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_4/BAT_CASE_4'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[43 /*16*/]), "", 64);
	StringCopy(&(Local_60[44 /*6*/]), "BONEPIC6_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_5/BAT_CASE_5'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[44 /*16*/]), "", 64);
	StringCopy(&(Local_60[45 /*6*/]), "BONEPIC7_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_6/BAT_CASE_6'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[45 /*16*/]), "", 64);
	StringCopy(&(Local_60[46 /*6*/]), "BONEPIC8_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_7/BAT_CASE_7'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[46 /*16*/]), "", 64);
	StringCopy(&(Local_60[47 /*6*/]), "BONEPIC9_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_8/BAT_CASE_8'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[47 /*16*/]), "", 64);
	StringCopy(&(Local_60[48 /*6*/]), "BONEPIC10_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_9/BAT_CASE_9'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[48 /*16*/]), "", 64);
	StringCopy(&(Local_60[49 /*6*/]), "BONEPIC11_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_10/BAT_CASE_10'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[49 /*16*/]), "", 64);
	StringCopy(&(Local_60[50 /*6*/]), "BONEPIC12_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_11/BAT_CASE_11'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[50 /*16*/]), "", 64);
	StringCopy(&(Local_60[51 /*6*/]), "BONEPIC13_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_12/BAT_CASE_12'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[51 /*16*/]), "", 64);
	StringCopy(&(Local_60[52 /*6*/]), "BONEPIC14_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_13/BAT_CASE_13'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[52 /*16*/]), "", 64);
	StringCopy(&(Local_60[53 /*6*/]), "BONEPIC15_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_14/BAT_CASE_14'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[53 /*16*/]), "", 64);
	StringCopy(&(Local_60[54 /*6*/]), "BONEPIC16_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_15/BAT_CASE_15'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[54 /*16*/]), "", 64);
	StringCopy(&(Local_60[55 /*6*/]), "BONEPIC17_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_16/BAT_CASE_16'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[55 /*16*/]), "", 64);
	StringCopy(&(Local_60[56 /*6*/]), "BONEPIC18_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_17/BAT_CASE_17'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[56 /*16*/]), "", 64);
	StringCopy(&(Local_60[57 /*6*/]), "BONEPIC19_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_18/BAT_CASE_18'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[57 /*16*/]), "", 64);
	StringCopy(&(Local_60[58 /*6*/]), "BONEPIC20_TXT" /* GXT: ~a~~a~~a~~nrt~ <img src='img://BAT_CASE_19/BAT_CASE_19'  vspace='0' width='252' height='300'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[58 /*16*/]), "", 64);
	StringCopy(&(Local_60[58 /*6*/]), "HK24_FLW_T2" /* GXT: I have a bottomless margarita in one hand and a receipt of sale for the old factory in the other. I should have guessed it would end up in your hands - just about everything else in the city has. Nothing beats retirement though. ~n~P.S. Georgina says hi. ~nrt~ <img src='img://UPDT2_24_TEXT_LESTER/UPDT2_24_TEXT_LESTER' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
	StringCopy(&(Local_421[58 /*16*/]), "UPDT2_24_TEXT_LESTER", 64);
}

void func_68()//Position - 0x4323
{
	if (func_57() == 0)
	{
		MOBILE::SET_MOBILE_PHONE_POSITION(Global_21019[Global_21011 /*3*/]);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_69(0);
	}
	if (iLocal_1382)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_44);
	}
	Global_23459 = 0;
	Global_23458 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_69(int iParam0)//Position - 0x436B
{
	if (func_74())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_73())
		{
			func_71(1, 1);
		}
		else
		{
			func_71(0, 0);
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
	if (!func_70())
	{
		Global_21066.f_1 = 3;
	}
}

int func_70()//Position - 0x43F5
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0, bool bParam1)//Position - 0x441C
{
	if (bParam0)
	{
		if (func_72(0))
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

int func_72(int iParam0)//Position - 0x4490
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

bool func_73()//Position - 0x44E7
{
	return BitTest(Global_1957675, 5);
}

bool func_74()//Position - 0x44F5
{
	return BitTest(Global_1957675, 19);
}

