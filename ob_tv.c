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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int* iLocal_26 = NULL;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_68();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_67();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_69, 0))
			{
				func_68();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_69))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_62();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_69) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_41 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									iLocal_39 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_39))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_39, 9);
									}
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_32020[iLocal_41 /*11*/].f_2 = 0;
								Global_32020[iLocal_41 /*11*/].f_6 = 1;
								Global_32020[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_32020[iLocal_41 /*11*/].f_1 = 0;
								Global_32020[iLocal_41 /*11*/].f_4 = 0;
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								Global_32020[iLocal_41 /*11*/].f_8 = 0;
								Global_32020[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&iLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_35) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_35, 90f))
							{
								if (func_44() || Global_32020[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_40);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_41))
							{
								func_43(&iLocal_40);
								if (func_42("TV_HLP1"))
								{
									HUD::CLEAR_HELP(true);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_35))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_35, true, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_37))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_36, false, false);
								}
							}
							if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
							{
								AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, false);
							}
							GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
							SYSTEM::WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
							{
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_32020[iLocal_41 /*11*/] == 3 || Global_32020[iLocal_41 /*11*/] == 2) || Global_32020[iLocal_41 /*11*/] == -1)
								{
									Global_32020[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_32020[iLocal_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_32020[iLocal_41 /*11*/];
								iLocal_43 = Global_32020[iLocal_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_42, func_41(iLocal_43), Global_32020[iLocal_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_42);
								if (Global_32020[iLocal_41 /*11*/].f_7)
								{
									Global_32020[iLocal_41 /*11*/].f_5 = 0;
									Global_32020[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_32020[iLocal_41 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_32020[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_32020[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_43(&iLocal_40);
							}
							Global_32020[iLocal_41 /*11*/].f_5 = 0;
							Global_32020[iLocal_41 /*11*/].f_4 = 0;
							Global_32020[iLocal_41 /*11*/].f_1 = 0;
							Global_32020[iLocal_41 /*11*/].f_2 = 0;
							Global_32020[iLocal_41 /*11*/].f_7 = 0;
							Global_32020[iLocal_41 /*11*/].f_8 = 0;
							Global_32020[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_68();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x4E6
{
	if (iLocal_41 != -1)
	{
		Global_32020[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_30 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, true);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_3();
	func_52();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, false);
		}
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	func_2();
}

void func_2()//Position - 0x590
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_67 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_67 = 0;
		}
	}
}

void func_3()//Position - 0x5AC
{
	if (!iLocal_33 == -1)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_33);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, false);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
				}
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
	}
}

void func_4()//Position - 0x643
{
	if (iLocal_65)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(iLocal_62))
		{
			CAM::SET_CAM_ACTIVE(iLocal_62, false);
		}
		CAM::DESTROY_CAM(iLocal_62, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_31, 1, 0, 2);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_53, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, false);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x70F
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_14(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_13())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_12(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_14(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_12(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_10(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_6()//Position - 0x852
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)//Position - 0x86C
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)//Position - 0x8B7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()//Position - 0x8F8
{
	return Global_1574918;
}

int func_10(int iParam0)//Position - 0x904
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()//Position - 0x943
{
	return BitTest(Global_2621446, 3);
}

int func_12(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x951
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()//Position - 0x984
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)//Position - 0x9AB
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

int func_15()//Position - 0x9CE
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&iLocal_26) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_68, 1f, 1f, 1.5f, false, true, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !func_30(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_31, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_40 == -1)
			{
				func_29();
				func_28(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_40, 1))
			{
				func_43(&iLocal_40);
				func_55(&iLocal_26);
				Global_32020[iLocal_41 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_2();
			func_43(&iLocal_40);
		}
	}
	return 0;
}

void func_16()//Position - 0xADA
{
	if (iLocal_65 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (bLocal_34)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
		func_23(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		func_17(0);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)))
		{
			func_43(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)//Position - 0xB94
{
	if (func_22())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_18(int iParam0)//Position - 0xBC7
{
	if (func_22())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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
	if (!func_13())
	{
		Global_20266.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)//Position - 0xC51
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()//Position - 0xCC5
{
	return BitTest(Global_1958711, 5);
}

int func_21(int iParam0)//Position - 0xCD3
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

bool func_22()//Position - 0xD2A
{
	return BitTest(Global_1958711, 19);
}

void func_23(bool bParam0, bool bParam1)//Position - 0xD39
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_24 = MISC::GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_24 = MISC::GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)//Position - 0xE80
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_25()//Position - 0xECC
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_63, Local_64, fVar0, false, 2);
		CAM::SET_CAM_FAR_CLIP(iLocal_62, 100f);
		CAM::SET_CAM_ACTIVE(iLocal_62, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_34 = true;
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_31, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_53, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		iLocal_65 = 1;
	}
}

int func_26(int iParam0, bool bParam1)//Position - 0xFA3
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x105B
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

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1096
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()//Position - 0x11C1
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_67 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)//Position - 0x11E1
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

float func_31(int* iParam0)//Position - 0x1219
{
	if (func_34(iParam0))
	{
		if (func_33(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_32(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_32(bool bParam0)//Position - 0x1255
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_33(var uParam0)//Position - 0x12AD
{
	return BitTest(*uParam0, 2);
}

bool func_34(var uParam0)//Position - 0x12BA
{
	return BitTest(*uParam0, 1);
}

void func_35()//Position - 0x12C7
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_36(float fParam0)//Position - 0x1308
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()//Position - 0x1345
{
	Global_32020[iLocal_41 /*11*/].f_7 = 0;
	Global_32020[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_30 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_43(&iLocal_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_52();
}

int func_38(int iParam0)//Position - 0x13C5
{
	struct<3> Var0;
	
	Var0 = { func_39(PLAYER::PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)//Position - 0x143A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_40(int iParam0, int iParam1)//Position - 0x144D
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

char* func_41(int iParam0)//Position - 0x14AA
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)//Position - 0x1589
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_43(int iParam0)//Position - 0x159C
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_44()//Position - 0x15F3
{
	if (func_31(&iLocal_26) < 1f)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_68, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_31, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_97369)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_32020[iLocal_41 /*11*/].f_8)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_28(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_40, 1))
	{
		func_43(&iLocal_40);
		func_55(&iLocal_26);
		Global_32020[iLocal_41 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)//Position - 0x1722
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
		func_51((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_46();
	}
}

void func_46()//Position - 0x1808
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
		func_50(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_49() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()//Position - 0x1CC6
{
	if (func_48(0))
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

int func_48(bool bParam0)//Position - 0x1D11
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_49()//Position - 0x1D39
{
	return Global_31959;
}

int func_50(int iParam0, int iParam1)//Position - 0x1D44
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

void func_51(int iParam0, bool bParam1, int iParam2)//Position - 0x1D95
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_52()//Position - 0x1DB3
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_53()//Position - 0x1DDF
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		func_68();
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_35);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
	HUD::LINK_NAMED_RENDERTARGET(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_41 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				func_68();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_35))
			{
				func_68();
			}
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
			}
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_33 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_54()//Position - 0x1E9D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), Local_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_35, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_35, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, false);
	iLocal_37 = 0;
	iLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), Local_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_37, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_37, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
}

void func_55(int* iParam0)//Position - 0x1F1A
{
	func_56(iParam0, 0f);
}

void func_56(int* iParam0, float fParam1)//Position - 0x1F29
{
	iParam0->f_1 = (func_32(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_57()//Position - 0x1F54
{
}

int func_58(int iParam0)//Position - 0x1F5C
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_59()//Position - 0x1F88
{
	Local_31 = { ENTITY::GET_ENTITY_COORDS(iLocal_35, true) };
	fLocal_32 = ENTITY::GET_ENTITY_HEADING(iLocal_35);
	func_61();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			Local_63 = { -9.8135f, -1440.913f, 31.3654f };
			Local_64 = { 0f, 0f, -134.3211f };
			Local_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			Local_63 = { 1978.23f, 3819.65f, 34.2724f };
			Local_64 = { 0f, 0f, -105.15f };
			Local_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			Local_63 = { 2.5724f, 527.9989f, 176.1619f };
			Local_64 = { 0f, 0f, -29.9488f };
			Local_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			Local_63 = { -1160.502f, -1520.76f, 10.7393f };
			Local_64 = { 0f, 0f, 60.061f };
			Local_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			Local_63 = { -802.8972f, 172.537f, 74.5801f };
			Local_64 = { 0f, 0f, -69.0273f };
			Local_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			Local_63 = { -808.3051f, 171.2623f, 77.2822f };
			Local_64 = { 1.8886f, 0f, 110.9232f };
			Local_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()//Position - 0x2277
{
	iLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), Local_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_36, fLocal_32);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, true);
}

void func_61()//Position - 0x22A8
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_41(1), false);
	if (func_58(22))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_41(12), false);
	}
	else
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_41(2), false);
	}
}

void func_62()//Position - 0x22DE
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_32020[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_63(int iParam0)//Position - 0x2391
{
	return Global_43052 == iParam0;
}

int func_64(int iParam0)//Position - 0x239F
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()//Position - 0x23BE
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

int func_66()//Position - 0x23DB
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()//Position - 0x23FE
{
}

void func_68()//Position - 0x2406
{
	if (iLocal_41 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_32020[iLocal_41 /*11*/].f_6 = 0;
		Global_32020[iLocal_41 /*11*/].f_7 = 0;
		Global_32020[iLocal_41 /*11*/].f_8 = 0;
		Global_32020[iLocal_41 /*11*/].f_4 = 0;
		Global_32020[iLocal_41 /*11*/].f_5 = 0;
		Global_32020[iLocal_41 /*11*/].f_2 = 0;
		Global_32020[iLocal_41 /*11*/] = -1;
		Global_32020[iLocal_41 /*11*/].f_1 = 0;
		Global_32020[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		HUD::CLEAR_HELP(true);
	}
	SYSTEM::WAIT(0);
	func_69();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
	}
	AUDIO::_0x19AF7ED9B9D23058();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_69()//Position - 0x24CD
{
	func_52();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&iLocal_35);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		OBJECT::DELETE_OBJECT(&iLocal_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		OBJECT::DELETE_OBJECT(&iLocal_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

