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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int* iLocal_24 = NULL;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	struct<3> Local_29 = { 0, 0, 0 } ;
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
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	char cLocal_60[64] = "";
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	iLocal_19 = 3;
	iLocal_23 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_60, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_69();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		iLocal_35 = iScriptParam_0;
		iLocal_38 = iScriptParam_0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_68();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if ((iLocal_41 != -1 && (func_67() && !func_66())) && !func_65(iLocal_41))
			{
				func_69();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_69();
			}
			if (func_64(13) || func_64(14))
			{
				func_69();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_0, 0))
			{
				func_69();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_63();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_0) < 950)
					{
						func_69();
					}
					switch (iLocal_27)
					{
						case 0:
							func_60();
							if (iLocal_41 == 5)
							{
								if (func_59(18) == 1 && func_59(20) == 0)
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
								func_69();
							}
							else
							{
								func_58();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_33009[iLocal_41 /*11*/].f_2 = 0;
								Global_33009[iLocal_41 /*11*/].f_6 = 1;
								Global_33009[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_33009[iLocal_41 /*11*/].f_1 = 0;
								Global_33009[iLocal_41 /*11*/].f_4 = 0;
								Global_33009[iLocal_41 /*11*/].f_7 = 0;
								Global_33009[iLocal_41 /*11*/].f_8 = 0;
								Global_33009[iLocal_41 /*11*/].f_10 = 0;
								fLocal_28 = -4f;
								func_56(&iLocal_24);
								func_54();
								func_53();
								SYSTEM::WAIT(0);
								iLocal_27 = 1;
							}
							break;
						
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_35) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_35, 90f))
							{
								if (func_45() || Global_33009[iLocal_41 /*11*/].f_5)
								{
									iLocal_27 = 2;
								}
							}
							else
							{
								func_44(&iLocal_40);
							}
							break;
						
						case 2:
							func_54();
							if (!func_65(iLocal_41))
							{
								func_44(&iLocal_40);
								if (func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */))
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
							if (!func_65(iLocal_41))
							{
								if ((Global_33009[iLocal_41 /*11*/] == 3 || Global_33009[iLocal_41 /*11*/] == 2) || Global_33009[iLocal_41 /*11*/] == -1)
								{
									Global_33009[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_33009[iLocal_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_28);
							}
							else
							{
								iLocal_42 = Global_33009[iLocal_41 /*11*/];
								iLocal_43 = Global_33009[iLocal_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_42, func_42(iLocal_43), Global_33009[iLocal_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_42);
								if (Global_33009[iLocal_41 /*11*/].f_7)
								{
									Global_33009[iLocal_41 /*11*/].f_5 = 0;
									Global_33009[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_33009[iLocal_41 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							iLocal_27 = 3;
							break;
						
						case 3:
							if (Global_33009[iLocal_41 /*11*/].f_4)
							{
								iLocal_27 = 6;
							}
							if (Global_33009[iLocal_41 /*11*/].f_7 && func_65(iLocal_41))
							{
								Global_33009[iLocal_41 /*11*/].f_7 = 0;
								iLocal_27 = 6;
							}
							if (!func_39(iLocal_41))
							{
								func_38();
								iLocal_27 = 5;
							}
							else
							{
								func_36();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_33009[iLocal_41 /*11*/]);
								}
								if (func_16())
								{
									iLocal_27 = 6;
								}
							}
							break;
						
						case 5:
							if (func_39(iLocal_41))
							{
								iLocal_27 = 2;
							}
							if (Global_33009[iLocal_41 /*11*/].f_4)
							{
								iLocal_27 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_44(&iLocal_40);
							}
							Global_33009[iLocal_41 /*11*/].f_5 = 0;
							Global_33009[iLocal_41 /*11*/].f_4 = 0;
							Global_33009[iLocal_41 /*11*/].f_1 = 0;
							Global_33009[iLocal_41 /*11*/].f_2 = 0;
							Global_33009[iLocal_41 /*11*/].f_7 = 0;
							Global_33009[iLocal_41 /*11*/].f_8 = 0;
							Global_33009[iLocal_41 /*11*/].f_10 = 0;
							iLocal_27 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_69();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_69();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x4E6
{
	if (iLocal_41 != -1)
	{
		Global_33009[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_28 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, true);
		}
	}
	if (((func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || func_43("TV_HLP2" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~ */)) || func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */)) || func_43("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	func_3();
	func_53();
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
		if (iLocal_85 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_85 = 0;
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
	if (iLocal_83)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(iLocal_76))
		{
			CAM::SET_CAM_ACTIVE(iLocal_76, false);
		}
		CAM::DESTROY_CAM(iLocal_76, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_29, 1, 0, 2);
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
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_60, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_60))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_60);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, false);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		iLocal_83 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x70F
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_15(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_14())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_13(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_15(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_13(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID(), 0)) && !func_6()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_6()//Position - 0x85C
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)//Position - 0x876
{
	bool bVar0;
	
	if (!func_10(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_8(int iParam0, bool bParam1)//Position - 0x8CF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()//Position - 0x910
{
	return Global_1574926;
}

int func_10(var uParam0)//Position - 0x91C
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

int func_11(int iParam0)//Position - 0x93E
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_12()//Position - 0x97D
{
	return BitTest(Global_2621446, 3);
}

int func_13(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x98B
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

int func_14()//Position - 0x9BE
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)//Position - 0x9E5
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 13);
	}
}

int func_16()//Position - 0xA08
{
	if (!func_65(iLocal_41))
	{
		if (((((((func_32(&iLocal_24) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 1f, 1f, 1.5f, false, true, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !func_31(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_29, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_40 == -1)
			{
				func_30();
				func_29(&iLocal_40, 3, "TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */, 0, 0, 0, 0);
			}
			else if (func_27(iLocal_40, 1))
			{
				func_44(&iLocal_40);
				func_56(&iLocal_24);
				Global_33009[iLocal_41 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_17();
		}
		else
		{
			if (func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_2();
			func_44(&iLocal_40);
		}
	}
	return 0;
}

void func_17()//Position - 0xB14
{
	if (iLocal_83 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/))
		{
			func_44(&iLocal_40);
			func_29(&iLocal_40, 3, "TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */, 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
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
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_24(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/);
		func_18(0);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/)))
		{
			func_44(&iLocal_40);
			func_4();
		}
	}
}

void func_18(int iParam0)//Position - 0xBCE
{
	if (func_23())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_22(0))
		{
			func_19(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_19(int iParam0)//Position - 0xC01
{
	if (func_23())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_21())
		{
			func_20(1, 1);
		}
		else
		{
			func_20(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_14())
	{
		Global_20930.f_1 = 3;
	}
}

void func_20(bool bParam0, bool bParam1)//Position - 0xC8B
{
	if (bParam0)
	{
		if (func_22(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_21()//Position - 0xCFF
{
	return BitTest(Global_1956920, 5);
}

int func_22(int iParam0)//Position - 0xD0D
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_23()//Position - 0xD64
{
	return BitTest(Global_1956920, 19);
}

void func_24(bool bParam0, bool bParam1)//Position - 0xD73
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_25(0))
		{
			if (!iLocal_20)
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
				iLocal_20 = 1;
			}
		}
		else if (iLocal_20)
		{
			iLocal_20 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) - 127);
		if (!iLocal_21)
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
				iLocal_22 = MISC::GET_GAME_TIMER();
				iLocal_21 = 1;
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
				iLocal_22 = MISC::GET_GAME_TIMER();
				iLocal_21 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_23 = 1;
			}
			else if (iLocal_23)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_23 = 0;
				}
			}
		}
		if (iLocal_21)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_22 + 24)
			{
				iLocal_21 = 0;
			}
		}
	}
}

int func_25(int iParam0)//Position - 0xEBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) - 127);
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

void func_26()//Position - 0xF06
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_83 == 0)
	{
		iLocal_76 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_77, Local_80, fVar0, false, 2);
		CAM::SET_CAM_FAR_CLIP(iLocal_76, 100f);
		CAM::SET_CAM_ACTIVE(iLocal_76, true);
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
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_29, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_60, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_60))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_60);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		iLocal_83 = 1;
	}
}

int func_27(int iParam0, bool bParam1)//Position - 0xFDD
{
	int iVar0;
	
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_22(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x1095
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
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x10D0
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_44(iParam0);
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
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_30()//Position - 0x11FB
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_85 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_85 = 1;
		}
	}
}

bool func_31(int iParam0, int iParam1)//Position - 0x121B
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

float func_32(int* iParam0)//Position - 0x1253
{
	if (func_35(iParam0))
	{
		if (func_34(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_33(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_33(bool bParam0)//Position - 0x128F
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

bool func_34(var uParam0)//Position - 0x12E7
{
	return BitTest(*uParam0, 2);
}

bool func_35(var uParam0)//Position - 0x12F4
{
	return BitTest(*uParam0, 1);
}

void func_36()//Position - 0x1301
{
	float fVar0;
	
	fVar0 = 1f;
	func_37(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_37(float fParam0)//Position - 0x1342
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_38()//Position - 0x137F
{
	Global_33009[iLocal_41 /*11*/].f_7 = 0;
	Global_33009[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_28 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_60))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_60);
	}
	if (((func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || func_43("TV_HLP2" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~ */)) || func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */)) || func_43("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	func_44(&iLocal_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_53();
}

int func_39(int iParam0)//Position - 0x13FF
{
	struct<3> Var0;
	
	Var0 = { func_40(PLAYER::PLAYER_ID()) };
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

Vector3 func_40(int iParam0)//Position - 0x1474
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_41(int iParam0, int iParam1)//Position - 0x1487
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, iVar0, true);
	}
}

char* func_42(int iParam0)//Position - 0x14E4
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

bool func_43(char* sParam0)//Position - 0x15C3
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_44(int iParam0)//Position - 0x15D6
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_28(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_45()//Position - 0x162D
{
	if (func_32(&iLocal_24) < 1f)
	{
		func_44(&iLocal_40);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_29, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&iLocal_40);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&iLocal_40);
		return 0;
	}
	if (func_31(8, -1))
	{
		func_44(&iLocal_40);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_44(&iLocal_40);
		return 0;
	}
	if (Global_98441)
	{
		func_44(&iLocal_40);
		return 0;
	}
	if (Global_33009[iLocal_41 /*11*/].f_8)
	{
		func_44(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_29(&iLocal_40, 3, "TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */, 0, 0, 0, 0);
		return 0;
	}
	if (func_27(iLocal_40, 1))
	{
		func_44(&iLocal_40);
		func_56(&iLocal_24);
		Global_33009[iLocal_41 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_46(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_46(int iParam0, int iParam1, int iParam2)//Position - 0x175C
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
		func_52((891 + iParam0), 1, -1);
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_47();
	}
}

void func_47()//Position - 0x1842
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
		func_51(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_50() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()//Position - 0x1D00
{
	if (func_49(0))
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

int func_49(bool bParam0)//Position - 0x1D4B
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_50()//Position - 0x1D73
{
	return Global_32948;
}

int func_51(int iParam0, int iParam1)//Position - 0x1D7E
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

void func_52(int iParam0, bool bParam1, int iParam2)//Position - 0x1DCF
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_53()//Position - 0x1DED
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_54()//Position - 0x1E19
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_55();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		func_69();
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
				func_69();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_35))
			{
				func_69();
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

void func_55()//Position - 0x1ED7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), Local_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_35, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_35, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, false);
	iLocal_37 = 0;
	iLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), Local_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_37, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_37, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
}

void func_56(int* iParam0)//Position - 0x1F56
{
	func_57(iParam0, 0f);
}

void func_57(int* iParam0, float fParam1)//Position - 0x1F65
{
	iParam0->f_1 = (func_33(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_58()//Position - 0x1F90
{
}

int func_59(int iParam0)//Position - 0x1F98
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_60()//Position - 0x1FC4
{
	Local_29 = { ENTITY::GET_ENTITY_COORDS(iLocal_35, true) };
	fLocal_32 = ENTITY::GET_ENTITY_HEADING(iLocal_35);
	func_62();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_29, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_41 = 0;
			Local_77 = { -9.8135f, -1440.9128f, 31.3654f };
			Local_80 = { 0f, 0f, -134.3211f };
			Local_86 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_60, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_29, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			Local_77 = { 1978.2303f, 3819.6504f, 34.2724f };
			Local_80 = { 0f, 0f, -105.15f };
			Local_86 = { 1978.3303f, 3819.717f, 32.4501f };
			func_61();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_60, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_29, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			Local_77 = { 2.5724f, 527.9989f, 176.1619f };
			Local_80 = { 0f, 0f, -29.9488f };
			Local_86 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_60, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_29, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			Local_77 = { -1160.5024f, -1520.7598f, 10.7393f };
			Local_80 = { 0f, 0f, 60.061f };
			Local_86 = { -1160.143f, -1520.4946f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_60, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_29, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			Local_77 = { -802.8972f, 172.537f, 74.5801f };
			Local_80 = { 0f, 0f, -69.0273f };
			Local_86 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_60, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_29, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			Local_77 = { -808.3051f, 171.2623f, 77.2822f };
			Local_80 = { 1.8886f, 0f, 110.9232f };
			Local_86 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_60, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_61()//Position - 0x22B3
{
	iLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), Local_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_36, fLocal_32);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, true);
}

void func_62()//Position - 0x22E5
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_42(1), false);
	if (func_59(22))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(12), false);
	}
	else
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(2), false);
	}
}

void func_63()//Position - 0x231B
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_33009[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_84 == 1)
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
			iLocal_84 = 0;
		}
	}
	else if (iLocal_84 == 0)
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
		iLocal_84 = 1;
	}
}

bool func_64(int iParam0)//Position - 0x23CE
{
	return Global_44042 == iParam0;
}

int func_65(int iParam0)//Position - 0x23DC
{
	if (iParam0 != -1)
	{
		if (Global_33009[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()//Position - 0x23FB
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

int func_67()//Position - 0x2418
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

void func_68()//Position - 0x243B
{
}

void func_69()//Position - 0x2443
{
	if (iLocal_41 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_44(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_33009[iLocal_41 /*11*/].f_6 = 0;
		Global_33009[iLocal_41 /*11*/].f_7 = 0;
		Global_33009[iLocal_41 /*11*/].f_8 = 0;
		Global_33009[iLocal_41 /*11*/].f_4 = 0;
		Global_33009[iLocal_41 /*11*/].f_5 = 0;
		Global_33009[iLocal_41 /*11*/].f_2 = 0;
		Global_33009[iLocal_41 /*11*/] = -1;
		Global_33009[iLocal_41 /*11*/].f_1 = 0;
		Global_33009[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */)) || func_43("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	SYSTEM::WAIT(0);
	func_70();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_60))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_60);
	}
	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_70()//Position - 0x250A
{
	func_53();
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

