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
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<3> Local_34 = { 0, 0, 0 } ;
	struct<3> Local_35 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
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
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_174())
	{
		Global_4541021 = 99;
		Global_4541022 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4541021 = 0;
		Global_4541022 = 0;
	}
	sLocal_19[0] = "No_Filter" /* GXT: No Filter */;
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_173();
	if (func_172(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_171();
	iLocal_63 = AUDIO::GET_SOUND_ID();
	if (Global_20328 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_22758 = 0;
	Global_22759 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_22758 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_22758 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			Global_22758 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			Global_22758 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_22758 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_82 == 1)
			{
				Global_22758 = 1;
			}
			iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_99, func_170(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_22758 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_99, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) > 0f)
				{
					if (!Global_78558)
					{
						if (!func_169(0))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_78558)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
	}
	MISC::CLEAR_BIT(&Global_8253, 21);
	func_168(0);
	MISC::SET_BIT(&Global_8253, 17);
	if (Global_20325 == 0)
	{
		func_167();
	}
	else
	{
		iLocal_91 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
		iLocal_92 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_92))
		{
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		}
		if (Global_78558)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_166())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_165(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(iLocal_91, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_41 = { Global_20343 };
	Local_42 = { Global_20336[Global_20328 /*3*/] };
	Global_22759 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		MISC::CLEAR_BIT(&Global_8255, 3);
	}
	func_162();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV())
	{
	}
	if (Global_4718592.f_160554)
	{
	}
	if (Global_4718592.f_160556 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20352);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 186 /*INPUT_CELLPHONE_CAMERA_EXPRESSION*/);
		RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		if (func_161())
		{
			if (!BitTest(Global_4542297, 2))
			{
				MISC::SET_BIT(&Global_4542297, 2);
				func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113648.f_14053.f_81)
		{
			if (!BitTest(Global_4542297, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!BitTest(Global_8254, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_161())
						{
							MISC::SET_BIT(&Global_4542297, 13);
							Global_113648.f_14053.f_81 = 1;
							func_160("CELL_FOC_HLP" /* GXT: Hold ~INPUT_CELLPHONE_CAMERA_FOCUS_LOCK~ to initiate Focus Lock. This will lock the viewfinder's focus distance and allow you to recompose your shot. */, -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_159();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			if (iLocal_100 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20356);
			}
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20353);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_161())
			{
				iLocal_81 = 1;
				Global_20383.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_20383.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (BitTest(Global_8254, 3))
			{
				Global_20383.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_151())
				{
					Global_20383.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					Global_20383.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_150())
					{
					}
					else
					{
						Global_20383.f_1 = 3;
						MISC::SET_GAME_PAUSED(false);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_78558 == 1)
					{
						Global_20383.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_20383.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_149();
					iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) < 0f)
					{
						func_146(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
							{
								func_146(0);
							}
						}
						else if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
						{
							iLocal_67 = 1;
							SYSTEM::WAIT(0);
							RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_78558 == 0)
				{
					if (BitTest(Global_8253, 18))
					{
						func_145();
						if ((Global_20383 == 0 || Global_20383 == 1) || Global_20383 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_20383.f_1 = 3;
									MISC::SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_144();
			}
			if (Global_20383.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_20383.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_142();
									if (Global_22763 == 0 && Global_22760 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, true);
										HUD::BUSYSPINNER_OFF();
										iLocal_100 = 0;
										func_141();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_140();
										iLocal_60++;
										if (func_174())
										{
											func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_129();
									}
									if (Global_22760 == 0)
									{
										iLocal_100 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_128();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_129();
										if (func_174())
										{
											if (Global_4541022 == 0)
											{
												if (!BitTest(Global_4542297, 2))
												{
													func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4542297, 2))
										{
											func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_127();
										func_126(1);
									}
								}
								else if (Global_20383.f_1 != 9)
								{
									if (Global_22759 == 1)
									{
										if (Global_22758 == 0)
										{
											func_125();
										}
									}
									else if ((Global_8861 - Global_8860) > Global_8862)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_124())
										{
											if (func_123() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_22758 == 0)
												{
													func_140();
													Global_22758 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_66 = 0;
													func_117(1);
													iLocal_93 = 0;
													func_115(0, 1);
													func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_113(1);
												}
											}
										}
										if (func_112(2, Global_20351, 0))
										{
											if (func_161())
											{
												if (((Global_1935176 || Global_1574964) || Global_22761) || BitTest(Global_8253, 21))
												{
												}
												else if (func_123() && iLocal_78)
												{
												}
												else if (!func_124())
												{
													if (iLocal_78 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														iLocal_94 = 0;
														func_115(1, 1);
														func_111(1);
													}
												}
											}
											else if (func_123() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_22758 == 0)
												{
													func_140();
													Global_22758 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_66 = 0;
													func_117(1);
													iLocal_93 = 0;
													func_115(0, 1);
													func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_110();
											iLocal_52 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_110();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (BitTest(Global_8253, 28))
										{
											func_110();
											iLocal_53 = 1;
										}
									}
									else if (!BitTest(Global_8253, 28))
									{
										func_110();
										iLocal_53 = 0;
									}
									if (Global_22758 == 1)
									{
										func_99();
									}
									else if (Global_20383.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_95();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_128();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
													{
														func_164(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_20383.f_1 > 3)
														{
															func_159();
															func_144();
															func_94();
															RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_174())
												{
													if (Global_4541022 == 0)
													{
														if (!BitTest(Global_4542297, 2))
														{
															func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4542297, 2))
												{
													func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_144();
												func_159();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_129();
												iLocal_87 = 0;
												func_164(iLocal_91, "OPEN_SHUTTER");
											}
											func_127();
											func_126(1);
											func_93();
										}
									}
									if (iLocal_94 == 1)
									{
										func_90();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											MISC::SET_BIT(&Global_8253, 18);
											if (Global_22758 == 0)
											{
												func_115(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22758 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22761 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_94();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_7();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_20383.f_1 > 3)
					{
						if (Global_22759 == 1)
						{
							if (Global_22758 == 0)
							{
								func_125();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_FW_1" /* GXT: Camera storage device full. */, iLocal_102, "CELL_CAM_FW_2" /* GXT: Access the Gallery from the Pause Menu to delete some photos. */, false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "ERROR_NO_SC_CAMERAPHONE" /* GXT: Unable to save your Snapmatic photo as you are not signed up or in to ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~. */, iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "SC_ERROR_BANNED" /* GXT: You have been banned from using Social Club services. */, iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "ERROR_UPDATE_SC_CAMERAPHONE" /* GXT: Accept the latest ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ Online Policies to save your Snapmatic photos to the Gallery. Sign in or visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information. */, iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || func_5())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_3X" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in to Xbox LIVE */, iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PS3_VERSION() || func_4())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_3P" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in to PSN℠ */, iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_30" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in. */, iLocal_102, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_CCW_1" /* GXT: Unable to save photos as the cloud connection is unavailable. */, iLocal_102, "CELL_CAM_CCW_2" /* GXT: Please try again later. */, false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_I" /* GXT: Snapmatic features are unavailable. An error occurred whilst validating your account's eligibility. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_P" /* GXT: Snapmatic features are temporarily unavailable. Please try again later. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_C" /* GXT: Snapmatic features are disabled on this account due to eligibility restrictions. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_T" /* GXT: Snapmatic features are currently disabled on this account due to eligibility restrictions. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_P" /* GXT: Snapmatic features are temporarily unavailable. Please try again later. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_115(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_115(0, 1);
							iLocal_104 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (func_4())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_115(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_115(0, 1);
						iLocal_62 = 0;
					}
					if (!func_4())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20355))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_115(0, 1);
							if (BitTest(Global_8254, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_115(0, 1);
				}
			}
		}
		iLocal_59 = MISC::GET_GAME_TIMER();
		if (func_161())
		{
			if (!BitTest(Global_4542297, 2))
			{
				MISC::SET_BIT(&Global_4542297, 2);
				func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_122(0, 0);
			func_126(0);
			iLocal_66 = 0;
			func_117(1);
			Global_22758 = 0;
			Global_22759 = 0;
			Global_22761 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
			MISC::SET_GAME_PAUSED(false);
			if (Global_20586 == 1)
			{
				MISC::SET_BIT(&Global_8253, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, true);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			MISC::CLEAR_BIT(&Global_8255, 3);
			MISC::CLEAR_BIT(&Global_4542297, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22762 = 1;
			AUDIO::STOP_SOUND(iLocal_63);
			AUDIO::RELEASE_SOUND_ID(iLocal_63);
			HUD::BUSYSPINNER_OFF();
			func_117(1);
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4541022 > 0 && Global_4541022 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4541022]);
			}
			MISC::CLEAR_BIT(&Global_8253, 18);
			if (func_161())
			{
				func_115(1, 1);
			}
			else
			{
				func_115(0, 1);
			}
			if (func_172(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)//Position - 0x1223
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
		}
		else if (Global_20383.f_1 > 3)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);
		}
	}
}

int func_2()//Position - 0x124E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
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
	if (Global_4542575 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()//Position - 0x1295
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

bool func_4()//Position - 0x12D8
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_5()//Position - 0x12EE
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_6()//Position - 0x1304
{
	iLocal_57 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
			iLocal_61 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
					{
						if (func_174())
						{
							if (Global_4541022 == 0)
							{
								if (!BitTest(Global_4542297, 2))
								{
									func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4542297, 2))
							{
								func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		
		case 1:
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2" /* GXT: Scanning System Storage */);
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		
		case 2:
			if (BitTest(Global_8254, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_20383.f_1 = 3;
				Global_22762 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_7()//Position - 0x1496
{
	if (func_112(2, Global_20352, 0))
	{
		func_1(0);
		if (BitTest(Global_8254, 28))
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			func_141();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_140();
			iLocal_87 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8254, 14))
			{
				func_160("CELL_299" /* GXT: Cannot save as last picture failed. */, -1);
			}
			else
			{
				func_140();
				func_10();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_115(1, 1);
		}
	}
	if (BitTest(Global_8253, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_159();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_94();
			func_149();
			func_144();
		}
		MISC::SET_GAME_PAUSED(false);
		func_141();
		SYSTEM::SETTIMERB(0);
		iLocal_78 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_129();
		func_140();
	}
	if (func_112(2, Global_20356, 0))
	{
		func_1(0);
		if (func_123() || BitTest(Global_8254, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			iLocal_87 = 1;
			func_141();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_140();
		}
	}
	if (BitTest(Global_8253, 28))
	{
		if (func_112(2, Global_20355, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(false);
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_159();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_159();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_22762 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_115(0, 1);
			Global_22758 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_8();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_66 = 0;
			func_117(1);
			if (!Global_2793044.f_6749)
			{
				MISC::SET_BIT(&Global_8253, 9);
			}
			iLocal_93 = 0;
			func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()//Position - 0x16C2
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, true);
		func_9();
	}
}

void func_9()//Position - 0x16E8
{
	if (func_2())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_10()//Position - 0x16FC
{
	iLocal_100 = 1;
	Global_22763 = 1;
	HUD::CLEAR_FLOATING_HELP(0, true);
}

int func_11()//Position - 0x1711
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_20383.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_12()//Position - 0x1759
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_85();
		func_81();
		func_80();
		fLocal_36 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_37 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_84 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
			{
				iLocal_84 = 1;
				func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8253, 28))
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
					func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_CAM_SELFIE_2" /* GXT: Reset Camera */);
				}
				else
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_CAM_SELFIE_2" /* GXT: Reset Camera */);
				}
				func_66();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
		{
			iLocal_84 = 0;
			func_129();
		}
		if (iLocal_85 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
			{
				iLocal_85 = 1;
				func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8253, 28))
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
				}
				else if (!func_161())
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
				}
				else
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
				}
				func_65();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
		{
			iLocal_85 = 0;
			func_129();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		func_129();
	}
	func_149();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (func_161())
	{
		if (!BitTest(Global_4542297, 2))
		{
			MISC::SET_BIT(&Global_4542297, 2);
			func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/) && iLocal_106 == 0) && !func_161())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (BitTest(Global_4542297, 2))
				{
					MISC::CLEAR_BIT(&Global_4542297, 2);
					if (!BitTest(Global_4542297, 2))
					{
						func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_4542297, 2);
					func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_64("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_63(14))
		{
			if (BitTest(Global_4542297, 10))
			{
				if ((Global_78558 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /* GXT: Action: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543282));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_4542297, 10);
				}
			}
		}
		else if (BitTest(Global_4542297, 10))
		{
			MISC::CLEAR_BIT(&Global_4542297, 10);
		}
		iLocal_33 = MISC::GET_GAME_TIMER();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_35 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_35, Local_34, true) > 5f)
				{
					Global_20383.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				iLocal_32 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/) && !func_161())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_64("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/) && !func_161())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
		iLocal_83 = 1;
		if (!func_63(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			func_64("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_174())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 186 /*INPUT_CELLPHONE_CAMERA_EXPRESSION*/) && iLocal_106 == 0) && !func_161())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_20383 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
					}
				}
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/) && iLocal_106 == 0) && !func_161())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4541021], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
							MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
						MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_161())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) && iLocal_106 == 0)
		{
			if (func_174())
			{
				Global_4541022++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
			}
			if (Global_4541022 == 13)
			{
				func_126(0);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[(Global_4541022 - 1)]);
				Global_4541022 = 0;
				func_61();
				if (iLocal_21 == 1)
				{
					MISC::CLEAR_BIT(&Global_4542297, 2);
					iLocal_21 = 0;
					func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4541022 > 0 && Global_4541022 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_20[Global_4541022], false);
			}
		}
	}
	if (Global_4541022 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_20[Global_4541022]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
				{
					func_126(1);
				}
				if (iLocal_21 == 0)
				{
					if (!BitTest(Global_4542297, 2))
					{
						iLocal_21 = 1;
					}
				}
				MISC::SET_BIT(&Global_4542297, 2);
				func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_20[Global_4541022], false);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4541022 == 1 || Global_4541022 == 3)
			{
			}
			if (Global_4541022 == 2 || Global_4541022 == 4)
			{
			}
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) && iLocal_106 == 0) && !func_161())
	{
		if (func_174())
		{
			func_117(0);
			Global_4541021++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
		}
		if (Global_4541021 == 13)
		{
			Global_4541021 = 0;
		}
		if (Global_4541021 == 0)
		{
			if (func_174())
			{
				func_117(0);
			}
		}
		else
		{
			func_127();
		}
		func_60();
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/) && iLocal_106 == 0) && !func_161())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, true);
				func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_90) && Global_20383.f_1 > 3)
				{
					func_159();
					func_144();
					func_94();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_82 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_63);
					iLocal_82 = 1;
					func_59(1);
					func_58();
					MISC::SET_BIT(&Global_8255, 3);
					iLocal_32 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_59(0);
					iLocal_82 = 0;
					MISC::CLEAR_BIT(&Global_8255, 3);
				}
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_20383.f_1 > 3)
				{
					func_159();
					func_144();
					func_94();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_164(iLocal_91, "OPEN_SHUTTER");
				if (func_174())
				{
					if (Global_4541022 == 0)
					{
						if (!BitTest(Global_4542297, 2))
						{
							func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4542297, 2))
				{
					func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_144();
				func_159();
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_56();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_30();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
			{
				fLocal_65 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_20372, true);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
		{
			fLocal_65 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_20372, true);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_63);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_63);
		}
	}
	if ((func_112(2, Global_20352, 0) && !func_124()) && !func_112(2, Global_20351, 0))
	{
		fLocal_38 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_39 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
		MISC::SET_BIT(&Global_8253, 21);
		AUDIO::STOP_SOUND(iLocal_63);
		iLocal_78 = 1;
		func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20372, true);
		func_164(iLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_43, 0);
		if (!func_174())
		{
			func_117(1);
		}
		Global_22761 = 1;
		HUD::CLEAR_FLOATING_HELP(0, true);
		while (Global_22760 < 6 && Global_20383.f_1 > 3)
		{
			func_159();
			func_144();
			func_94();
			func_149();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(false, false);
		if (Global_20325)
		{
			func_1(1);
		}
		iLocal_86 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_89) && Global_20383.f_1 > 3)
		{
			func_159();
			func_144();
			func_94();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_164(iLocal_91, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_8253, 21);
		func_129();
		if (Global_20383.f_1 > 3)
		{
			if (Global_78558)
			{
				func_23(1087, 1, -1);
				func_22();
				func_19(-1492367786, 23, 0);
			}
			else
			{
				switch (func_13())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
						break;
				}
				func_22();
			}
			func_126(0);
		}
		func_144();
	}
	if (BitTest(Global_8253, 28))
	{
		if (func_112(2, Global_20355, 0))
		{
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_159();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_159();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_22762 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22758 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_8();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_66 = 0;
			func_117(1);
			if (!Global_2793044.f_6749)
			{
				MISC::SET_BIT(&Global_8253, 9);
			}
			MISC::SET_GAME_PAUSED(false);
			iLocal_93 = 0;
			func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()//Position - 0x2662
{
	func_14();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_14()//Position - 0x267B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_63(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_15(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_15(int iParam0)//Position - 0x2778
{
	return iParam0 < 3;
}

int func_16(int iParam0)//Position - 0x2784
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)//Position - 0x27C1
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)//Position - 0x27E6
{
	return Global_2028[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)//Position - 0x27F5
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_20()//Position - 0x2822
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_21(int iParam0, var uParam1)//Position - 0x2857
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_22()//Position - 0x28DD
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_20320 = { Global_20336[Global_20328 /*3*/] };
	func_115(0, 1);
	func_122(0, 0);
	func_126(0);
	iLocal_66 = 0;
	func_117(1);
	if (!BitTest(Global_8254, 28))
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)//Position - 0x293E
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_26(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_24(iParam0, iVar0, iParam2, 1);
	}
}

void func_24(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x2980
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_28(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_28(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_28(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_28(uParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_28(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_28(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_28(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_28(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_28(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_28(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_28(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_28(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_28(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_28(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_28(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_28(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_28(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_28(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_28(uParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_28(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_28(uParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_28(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_28(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_28(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_28(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_28(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_28(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_28(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_28(uParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_28(uParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_28(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_28(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_28(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_28(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_28(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_28(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_28(uParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_28(uParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_28(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_28(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_28(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_28(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_28(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_28(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_28(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_28(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_28(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_28(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_28(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_28(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_28(uParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_28(uParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_28(uParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_25(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x34B2
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_26(int iParam0)//Position - 0x34E2
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_27(int iParam0, var uParam1, int iParam2)//Position - 0x37B2
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_28(uParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(var uParam0)//Position - 0x37EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

var func_29()//Position - 0x3823
{
	return Global_1574918;
}

void func_30()//Position - 0x382F
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_161())
		{
			func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
			func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
		}
		else
		{
			func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
			func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
		}
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
				}
				else if ((Global_78558 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_174())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								func_78(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
							}
						}
						else if (bLocal_29)
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_161())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
						func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "CELL_284" /* GXT: Zoom */);
						}
						else
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true), "CELL_284" /* GXT: Zoom */);
						}
					}
					if (!func_161())
					{
						if (func_174())
						{
							func_52(6f);
							func_51(7f);
							if (bLocal_30)
							{
								func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
							}
							func_78(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
				else
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
			else
			{
				if (!func_161())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_161())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
						func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "CELL_284" /* GXT: Zoom */);
						}
						else
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true), "CELL_284" /* GXT: Zoom */);
						}
					}
					if (!func_161())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					}
					if (!func_161())
					{
						if (func_174())
						{
							func_52(7f);
							func_51(8f);
							if (bLocal_30)
							{
								func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
							}
							func_78(iLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
				else
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_31(float fParam0)//Position - 0x3DA1
{
	func_78(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true), "CELL_ACTION" /* GXT: Play Action */);
}

int func_32(int iParam0)//Position - 0x3DC1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_50(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_33(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3E01
{
	return func_34(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3E1B
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_49())
	{
		return 0;
	}
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_42(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar3 = func_41(iParam0);
			if (!iVar3 == -1)
			{
				if (func_40(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_39(iParam0);
			if (!iVar4 == -1)
			{
				if (func_37(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = func_36(iParam0);
			if (!iVar5 == 0)
			{
				if (func_35(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_35(var uParam0, int iParam1)//Position - 0x3EF5
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x3F33
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_37(var uParam0, int iParam1)//Position - 0x3F46
{
	return func_38(uParam0, iParam1);
}

int func_38(var uParam0, int iParam1)//Position - 0x3F56
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x3F94
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
	return iVar0;
}

bool func_40(var uParam0, int iParam1)//Position - 0x3FA8
{
	return func_38(uParam0, iParam1);
}

int func_41(int iParam0)//Position - 0x3FB8
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
	return iVar0;
}

void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x3FCC
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_47(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 4, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 62, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 59:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 66, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 60:
				case 63:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 62:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 19, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 4, 1);
							break;
						
						case 1:
							func_48(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 37, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 36, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 1, 1);
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 5, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 1, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 5, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 12, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 23, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 29, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 33, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_42(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_42(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_43(var uParam0, var uParam1, var uParam2)//Position - 0xA1EB
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_48(uParam2, 124, 1);
	func_48(uParam2, 125, 1);
	func_48(uParam2, 126, 1);
	func_48(uParam2, 127, 1);
	func_48(uParam2, 128, 1);
	func_48(uParam2, 129, 1);
	func_48(uParam2, 130, 1);
	func_48(uParam2, 131, 1);
	func_48(uParam2, 132, 1);
	func_48(uParam2, 133, 1);
	func_48(uParam2, 136, 1);
	func_48(uParam2, 138, 1);
	func_48(uParam2, 139, 1);
	func_48(uParam2, 143, 1);
	func_48(uParam2, 144, 1);
	func_48(uParam2, 145, 1);
	func_48(uParam2, 147, 1);
}

void func_44(var uParam0, int iParam1, bool bParam2)//Position - 0xA2A3
{
	func_45(uParam0, iParam1, bParam2);
}

void func_45(var uParam0, int iParam1, bool bParam2)//Position - 0xA2B5
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)//Position - 0xA306
{
	func_45(uParam0, iParam1, bParam2);
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xA318
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 5, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 7, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 10:
					func_48(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 4, 1);
						func_46(uParam3, 6, 1);
						func_46(uParam3, 10, 1);
						func_46(uParam3, 54, 1);
						func_46(uParam3, 55, 1);
						func_46(uParam3, 56, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 106, 1);
						func_46(uParam3, 114, 1);
						func_46(uParam3, 116, 1);
						func_46(uParam3, 117, 1);
						func_46(uParam3, 118, 1);
						func_46(uParam3, 119, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 9, 1);
						func_44(uParam2, 10, 1);
						func_44(uParam2, 53, 1);
						func_44(uParam2, 56, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 36, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 14, 1);
						func_44(uParam2, 105, 1);
						func_44(uParam2, 113, 1);
						func_44(uParam2, 114, 1);
						func_44(uParam2, 115, 1);
						func_44(uParam2, 116, 1);
						func_44(uParam2, 117, 1);
					}
					func_48(uParam4, 2, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_46(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_48(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 7, 1);
						func_46(uParam3, 0, 1);
						func_46(uParam3, 12, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 15, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 17, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 21, 1);
						func_46(uParam3, 25, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 30, 1);
						func_46(uParam3, 31, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 55, 1);
						func_44(uParam2, 0, 1);
						func_44(uParam2, 2, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 7, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 11, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 15, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 17, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
						func_44(uParam2, 20, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 22, 1);
						func_44(uParam2, 54, 1);
						func_44(uParam2, 24, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 30, 1);
						func_44(uParam2, 31, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 36, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_48(var uParam0, int iParam1, bool bParam2)//Position - 0xB7E2
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_49()//Position - 0xB834
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0xB84C
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_51(float fParam0)//Position - 0xB98B
{
	func_78(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true), "CELL_BORDER" /* GXT: Border */);
}

void func_52(float fParam0)//Position - 0xB9AB
{
	if (Global_1945396)
	{
		fParam0 = -1f;
	}
	func_78(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/, true), "CELL_FILTER" /* GXT: Filter */);
}

void func_53()//Position - 0xB9D5
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
	func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_52(5f);
	func_51(6f);
	func_54(7f);
	func_31(8f);
	if (bLocal_29)
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
	}
	if (!func_63(14))
	{
		if ((Global_78558 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /* GXT: Action: ~a~ */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543282));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_54(float fParam0)//Position - 0xBAE2
{
	func_78(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true), "CELL_ACCYC" /* GXT: Cycle Action */);
}

void func_55()//Position - 0xBB02
{
	func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
	func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
	func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()//Position - 0xBBDB
{
	if (iLocal_106 == 1)
	{
		func_57();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
		func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
					}
				}
				else if ((Global_78558 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_174())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								func_78(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
							}
						}
						else if (bLocal_29)
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					if (func_174())
					{
						func_52(6f);
						func_51(7f);
						func_78(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
				else
				{
					func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!func_161())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
					else
					{
						func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
				}
				func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
				func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
				func_78(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
				if (func_174())
				{
					if (!func_161())
					{
						func_52(7f);
						func_51(8f);
						if (bLocal_30)
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
						}
						func_78(iLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
				else
				{
					if (!func_161())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
						}
						else
						{
							func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
						}
					}
					func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_174())
					{
						if (!func_161())
						{
							func_52(4f);
							func_51(5f);
							func_78(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_57()//Position - 0xC094
{
	func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
	func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
	func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_58()//Position - 0xC16D
{
	if (iLocal_82)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_37);
	}
}

void func_59(bool bParam0)//Position - 0xC18B
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4718592.f_160553 == 1)
	{
	}
	else if (Global_4718592.f_160554 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(bParam0);
	}
}

void func_60()//Position - 0xC1C4
{
	if (iLocal_28 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4541021], "phone_cam12DUMMY"))
		{
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
		}
		else
		{
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
		}
	}
}

void func_61()//Position - 0xC1FC
{
	func_165(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_174())
	{
		if (!Global_1945396)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_62()//Position - 0xC23B
{
	if (func_63(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
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
	return 1;
}

bool func_63(int iParam0)//Position - 0xC2B7
{
	return Global_43257 == iParam0;
}

void func_64(char* sParam0)//Position - 0xC2C5
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_65()//Position - 0xC2D7
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_RT_RSTICK" /* GXT: Tilt Head */);
		func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 1, true), "CELL_RT_LSTICK" /* GXT: Rotate Head */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true), "CELL_RT_RSTICK" /* GXT: Tilt Head */);
		func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 0, true), "CELL_RT_LSTICK" /* GXT: Rotate Head */);
	}
}

void func_66()//Position - 0xC386
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	func_78(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_LT_RSTICK" /* GXT: Pan Camera */);
	if (func_63(14))
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_LT_LSTICK" /* GXT: Rotate Camera */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_LT_LSTICKZ" /* GXT: Zoom Camera */);
		func_78(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_LT_LSTICK" /* GXT: Rotate Camera */);
	}
}

char* func_67()//Position - 0xC438
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1969246))
	{
		return func_77(&Global_1969246);
	}
	if (func_76())
	{
		return "FHHUD_SENDLES" /* GXT: Send to Lester */;
	}
	if (func_74())
	{
		return "CSH_PHONEC" /* GXT: Send to Pavel */;
	}
	if (func_73(PLAYER::PLAYER_ID(), 275) && Global_1969239)
	{
		return "RE_SS_SNDOMG" /* GXT: Send to Omega */;
	}
	switch (func_72(PLAYER::PLAYER_ID()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO" /* GXT: Send to Sessanta */;
		
		default:
	}
	switch (func_68(PLAYER::PLAYER_ID()))
	{
		case 3:
			return "FXR_FRAN_PHTO" /* GXT: Send to Franklin */;
		
		case 2:
			return "FXR_IMAN_PHTO" /* GXT: Send to Imani */;
		
		default:
	}
	return "CELL_287" /* GXT: Send Photo(s) */;
}

int func_68(int iParam0)//Position - 0xC4FA
{
	if (func_71(iParam0) == 264)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_69(int iParam0)//Position - 0xC518
{
	if (func_70(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)//Position - 0xC53B
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0xC576
{
	if (func_70(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_72(int iParam0)//Position - 0xC599
{
	if (func_71(iParam0) == 271)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_73(int iParam0, int iParam1)//Position - 0xC5B7
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1890386)
	{
		if (Global_1890386[iVar1] == iParam1)
		{
			if (Global_1890444[iVar0 /*129*/].f_77.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()//Position - 0xC608
{
	switch (func_75(PLAYER::PLAYER_ID()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_75(int iParam0)//Position - 0xC64A
{
	if (func_71(iParam0) == 256)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_76()//Position - 0xC668
{
	switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_33)
	{
		case 233:
			switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1977436)
	{
		return 1;
	}
	return 0;
}

var func_77(var uParam0)//Position - 0xC6EA
{
	return uParam0;
}

void func_78(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)//Position - 0xC6F4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_79(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_64(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_79(char* sParam0)//Position - 0xC733
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_80()//Position - 0xC741
{
	if (Global_78558)
	{
		switch (Global_22842)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					func_160("CELL_CAM_SELFIE_0_KM" /* GXT: Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode. */, -1);
				}
				else
				{
					func_160("CELL_CAM_SELFIE_0" /* GXT: Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode. */, -1);
				}
				Global_22842++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						func_160("CELL_CAM_SELFIE_1_KM" /* GXT: Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode. */, -1);
					}
					else
					{
						func_160("CELL_CAM_SELFIE_1" /* GXT: Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression. */, -1);
					}
					Global_22842++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22841)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					func_160("CELL_CAM_SELFIE_0_KM" /* GXT: Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode. */, -1);
				}
				else
				{
					func_160("CELL_CAM_SELFIE_0" /* GXT: Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode. */, -1);
				}
				Global_22841++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						func_160("CELL_CAM_SELFIE_1_KM" /* GXT: Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode. */, -1);
					}
					else
					{
						func_160("CELL_CAM_SELFIE_1" /* GXT: Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression. */, -1);
					}
					Global_22841++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_81()//Position - 0xC83D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/)) * 127;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/);
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_84(fVar5);
		func_83(fVar6);
		func_82(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
}

void func_82(float fParam0)//Position - 0xC9BC
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_111);
}

void func_83(float fParam0)//Position - 0xC9E8
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_112);
}

void func_84(float fParam0)//Position - 0xCA14
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_113);
}

void func_85()//Position - 0xCA40
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/) && !func_161())
			{
				MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/) && !func_161())
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/)) * 127;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/);
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_89(fVar6);
		func_88(fVar7);
		func_87(fVar4);
		if (!func_63(14))
		{
			func_86(fVar5);
		}
	}
	else if (!PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 294 /*INPUT_SCALED_LOOK_LEFT_ONLY*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 295 /*INPUT_SCALED_LOOK_RIGHT_ONLY*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 292 /*INPUT_SCALED_LOOK_UP_ONLY*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 293 /*INPUT_SCALED_LOOK_DOWN_ONLY*/)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_63(14))
		{
			func_86(fVar5);
		}
	}
}

void func_86(float fParam0)//Position - 0xCD7F
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_109);
}

void func_87(float fParam0)//Position - 0xCDAB
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_110);
}

void func_88(float fParam0)//Position - 0xCDD7
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_108);
}

void func_89(float fParam0)//Position - 0xCE13
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_107);
}

void func_90()//Position - 0xCE47
{
	if (Global_78819 || Global_78820)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_20325)
		{
			if (Global_20584)
			{
				if (iLocal_100 == 0)
				{
					if (Global_20383.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_92(255, 255, 255, 255);
			func_91(0.059f, 0.644f, "CELL_284" /* GXT: Zoom */, 0);
			func_92(255, 255, 255, 255);
			func_91(0.165f, 0.644f, "CELL_285" /* GXT: Move */, 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.75f, "CELL_280" /* GXT: Take Photo */, 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.83f, "CELL_281" /* GXT: Exit */, 0);
		}
	}
	else if (Global_20325)
	{
	}
	else
	{
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.75f, func_67(), 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.79f, "CELL_286" /* GXT: Continue */, 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.83f, "CELL_281" /* GXT: Exit */, 0);
	}
}

void func_91(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xCF96
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCFAE
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_93()//Position - 0xCFED
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_38, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_39);
}

void func_94()//Position - 0xD006
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 56 /*INPUT_DROP_WEAPON*/, true);
}

void func_95()//Position - 0xD060
{
	Local_44 = { Global_20336[Global_20328 /*3*/] };
	if (Global_20325)
	{
		if (func_98())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_46);
			Local_44 = { Local_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			Local_42.f_0 = (Local_42.f_0 + 12f);
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (BitTest(Global_8255, 4))
		{
			if (Local_42.f_1 < (Local_44.f_1 + 15f) || Local_42.f_1 == (Local_44.f_1 + 15f))
			{
				Local_42.f_1 = (Local_44.f_1 + 15f);
				iLocal_73 = 0;
			}
		}
		else if (Local_42.f_1 < (Local_44.f_1 + 10f) || Local_42.f_1 == (Local_44.f_1 + 10f))
		{
			Local_42.f_1 = (Local_44.f_1 + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (func_98() == 0)
		{
			if (BitTest(Global_8255, 4))
			{
				Local_44.f_1 = (Local_44.f_1 + 15f);
			}
			else
			{
				Local_44.f_1 = (Local_44.f_1 + 10f);
			}
			Local_44.f_0 = (Local_44.f_0 - 14f);
		}
		else
		{
			Local_44 = { Global_20329[Global_20328 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_43, 0);
			if (!BitTest(Global_8253, 22))
			{
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_96();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_96()//Position - 0xD253
{
	func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8254, 28))
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_286" /* GXT: Continue */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_277" /* GXT: Delete */);
		func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_GALSAVE" /* GXT: Save to Gallery */);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_97()//Position - 0xD322
{
	func_165(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8254, 28))
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
		func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_286" /* GXT: Continue */);
	}
	else
	{
		func_78(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
		func_78(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_277" /* GXT: Delete */);
		func_78(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_GALSAVE" /* GXT: Save to Gallery */);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_165(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_98()//Position - 0xD41F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			if (Global_20326 == 0)
			{
				if (Global_7568 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_21725 != 2)
						{
						}
					}
				}
			}
		}
		if (func_63(14))
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632))))
		{
			return 0;
		}
		if (Global_112696)
		{
			return 0;
		}
	}
	if (Global_78558)
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
	if (Global_4542575 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)
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

void func_99()//Position - 0xD668
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20353);
	Local_43 = { Global_20343 };
	Local_44 = { Global_20336[Global_20328 /*3*/] };
	if (func_98())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_45, 0);
		Local_43 = { Local_45 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_20325)
	{
		func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(0);
		iLocal_82 = 0;
		if (BitTest(Global_8253, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_100();
		}
		if (iLocal_72)
		{
			if (BitTest(Global_8253, 9))
			{
				Local_42.f_0 = (Local_42.f_0 + 2f);
			}
			else
			{
				Local_42.f_0 = (Local_42.f_0 + 12f);
			}
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (Local_42.f_1 < Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
		{
			Local_42.f_1 = Local_44.f_1;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				Local_41.f_0 = (Local_41.f_0 + 1f);
			}
			if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
			{
				Local_41.f_0 = Local_43.f_0;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_41.f_1 = (Local_41.f_1 - 2f);
			}
			if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				Local_41.f_1 = Local_43.f_1;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				Local_41.f_2 = (Local_41.f_2 - 14f);
			}
			if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				Local_41.f_2 = Local_43.f_2;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			Local_41 = { Local_43 };
			Local_42 = { Local_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_98() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
			}
			func_115(0, 1);
		}
		else if (func_98() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_100();
		}
	}
	else
	{
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 + 1f);
		}
		if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 2f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 - 7f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_100();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
}

void func_100()//Position - 0xD96C
{
	func_1(0);
	if (func_98() == 0)
	{
		if (BitTest(Global_8253, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20329[Global_20328 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20336[Global_20328 /*3*/]);
		}
		Local_41 = { Local_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
	}
	Global_22758 = 0;
	func_122(0, 0);
	func_126(0);
	iLocal_66 = 0;
	func_117(1);
	Global_20370 = 1;
	Global_22761 = 0;
	if (Global_20383.f_1 > 4)
	{
		Global_20383.f_1 = 6;
		Global_20361 = 1;
		func_101();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
	{
		func_164(iLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
	if (Global_20586 == 1)
	{
		MISC::SET_BIT(&Global_8253, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 17);
	}
	MISC::CLEAR_BIT(&Global_8253, 18);
	MISC::CLEAR_BIT(&Global_8253, 21);
	HUD::CLEAR_FLOATING_HELP(0, true);
	MISC::CLEAR_BIT(&Global_8255, 3);
	MISC::CLEAR_BIT(&Global_4542297, 3);
	MISC::SET_GAME_PAUSED(false);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_22762 = 1;
	AUDIO::STOP_SOUND(iLocal_63);
	AUDIO::RELEASE_SOUND_ID(iLocal_63);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_117(1);
	MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
	MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
	if (Global_4541022 > 0 && Global_4541022 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4541022]);
	}
	func_115(0, 1);
	if (func_172(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_101()//Position - 0xDAF5
{
	char cVar0[24];
	
	if (Global_20366 == 1)
	{
		return;
	}
	if (Global_20383.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
	{
		if (Global_78558)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20383.f_1)
	{
		case 6:
			func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_109(Global_8858);
			if (Global_8858 == 1)
			{
				func_165(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_165(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_106();
				MISC::CLEAR_BIT(&Global_8255, 9);
				func_165(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20326)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_105();
				func_165(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21738)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_64("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_64("CELL_217" /* GXT: INCOMING CALL */);
					func_64("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_104(Global_7568, Global_20383) == 0)
				{
					func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_165(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_105();
				if (Global_21738)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_64("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_64("CELL_219" /* GXT: CONNECTED */);
					func_64("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21983)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_104(Global_7568, Global_20383) == 0)
					{
						func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &cVar0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_102();
			break;
		
		default:
			break;
	}
}

void func_102()//Position - 0xE0E3
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364))
	{
		func_103();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
		}
		else
		{
			func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20326)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_103()//Position - 0xE271
{
	if (Global_78558)
	{
		func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8253, 17);
	}
}

int func_104(int iParam0, int iParam1)//Position - 0xE2A2
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_105()//Position - 0xE2CC
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
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
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
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

void func_106()//Position - 0xE543
{
	if (Global_78558)
	{
		if (func_107() == 0)
		{
			return;
		}
		func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8253, 17);
	}
}

int func_107()//Position - 0xE57F
{
	return 0;
}

void func_108(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xE588
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
		func_64(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_64(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_64(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_64(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_64(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_109(int iParam0)//Position - 0xE63B
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
	
	Global_22793 = 0;
	Global_8858 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8822[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_63(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar2 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20588 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8822[iVar0] = 1;
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
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113648.f_14143[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113648.f_14143[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383] == 1)
											{
												Global_22793++;
											}
										}
									}
									iVar3++;
								}
								func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78558)
								{
									iVar4 = 0;
									iVar4 = Global_4541031;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541032[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541032[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541032[iVar5 /*104*/].f_99[Global_20383] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case 0:
											iVar6 = Global_44457;
											break;
										
										case 1:
											iVar6 = Global_44458;
											break;
										
										case 2:
											iVar6 = Global_44459;
											break;
										
										default:
											break;
									}
									func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8254, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar8 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20588 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8254, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8260[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_110()//Position - 0xEBD5
{
	switch (iLocal_51)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, true);
			if (BitTest(Global_8253, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_56();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_30();
			}
			break;
		
		case 2:
			if (!BitTest(Global_8253, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, true);
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_96();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_111(bool bParam0)//Position - 0xEC5A
{
	if (bParam0)
	{
		if (!func_124())
		{
			MISC::SET_BIT(&Global_1962996, 17);
		}
	}
	else if (func_124())
	{
		MISC::CLEAR_BIT(&Global_1962996, 17);
	}
}

int func_112(int iParam0, int iParam1, int iParam2)//Position - 0xEC8D
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

void func_113(bool bParam0)//Position - 0xECFF
{
	if (bParam0)
	{
		if (!func_114())
		{
			MISC::SET_BIT(&Global_1962996, 18);
		}
	}
	else if (func_114())
	{
		MISC::CLEAR_BIT(&Global_1962996, 18);
	}
}

bool func_114()//Position - 0xED32
{
	return BitTest(Global_1962996, 18);
}

void func_115(bool bParam0, bool bParam1)//Position - 0xED41
{
	if (bParam0)
	{
		if (func_116(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
}

int func_116(int iParam0)//Position - 0xEDB5
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_117(int iParam0)//Position - 0xEE0C
{
	if ((Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0) && !Global_1945396)
	{
		if (func_118(PLAYER::PLAYER_ID()) && iParam0)
		{
			Global_1977509 = 1;
		}
		else
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

int func_118(int iParam0)//Position - 0xEE5C
{
	if (iParam0 != func_121())
	{
		if (func_120(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_119(Global_2657589[iParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)//Position - 0xEEA3
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
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_120(int iParam0, bool bParam1, bool bParam2)//Position - 0xF357
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_121()//Position - 0xF3B7
{
	return -1;
}

void func_122(bool bParam0, bool bParam1)//Position - 0xF3C0
{
	if (Global_4718592.f_160553 == 1)
	{
	}
	else if (Global_4718592.f_160554 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(bParam0, bParam1);
	}
}

int func_123()//Position - 0xF3F2
{
	if (BitTest(Global_8253, 15))
	{
		return 1;
	}
	return 0;
}

bool func_124()//Position - 0xF40B
{
	return BitTest(Global_1962996, 17);
}

void func_125()//Position - 0xF41A
{
	if (Global_20325)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (func_98())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_45, 0);
			Local_43 = { Local_45 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_46);
			Local_44 = { Local_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				Local_42.f_0 = (Local_42.f_0 - 14f);
			}
			if (Local_42.f_0 < Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_42.f_1 = (Local_42.f_1 + 7f);
			}
			if (Local_42.f_1 > Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				Local_42.f_2 = (Local_42.f_2 + 12f);
			}
			if (Local_42.f_2 > Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			Local_41.f_0 = Local_43.f_0;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 0.5f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 11f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_71 = 0;
		}
		if (func_98() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
		}
	}
	else
	{
		Local_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 + 2f);
		}
		if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 7f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
	}
	if (Global_20325)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_98())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
				Local_42 = { Local_44 };
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22759 = 0;
				func_122(1, 1);
				iLocal_66 = 1;
				func_126(1);
				func_61();
				func_127();
				func_59(0);
				SYSTEM::SETTIMERA(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_144();
				func_165(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4542297, 2))
				{
					func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_167();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
		Global_22759 = 0;
	}
}

void func_126(bool bParam0)//Position - 0xF78F
{
	if (func_174())
	{
		if (bParam0)
		{
			if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
			{
				GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(true);
				if (Global_4541022 > 0 && Global_4541022 < 99)
				{
					GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_20[Global_4541022], false);
					MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				}
			}
		}
		else if (GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
		{
			GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(false);
		}
	}
}

void func_127()//Position - 0xF7ED
{
	if (Global_4541021 > 0 && Global_4541021 < 99)
	{
		if (!Global_1945396)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4541021]);
		}
	}
}

void func_128()//Position - 0xF81E
{
	if (Global_20325)
	{
		iLocal_76 = 0;
		func_61();
		func_115(1, 1);
		func_122(1, 1);
		iLocal_66 = 1;
		Global_22762 = 1;
	}
}

void func_129()//Position - 0xF846
{
	if (Global_4718592.f_160553 == 1 && func_130())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (BitTest(Global_8253, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_56();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_30();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_130()//Position - 0xF8B3
{
	if ((((((func_139() || func_138()) || func_137()) || func_136()) || func_135()) || func_133()) || func_131())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_131()//Position - 0xF91B
{
	return func_132(Global_4718592.f_113724);
}

int func_132(int iParam0)//Position - 0xF931
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133()//Position - 0xF960
{
	return func_134(Global_4718592.f_113724);
}

int func_134(int iParam0)//Position - 0xF976
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_135()//Position - 0xF9B0
{
	return Global_2683862.f_24;
}

var func_136()//Position - 0xF9BE
{
	return Global_2683862.f_21;
}

var func_137()//Position - 0xF9CC
{
	return Global_2683862.f_19;
}

var func_138()//Position - 0xF9DA
{
	return Global_2683862.f_18;
}

var func_139()//Position - 0xF9E8
{
	return Global_2683862.f_17;
}

void func_140()//Position - 0xF9F6
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, true);
	}
}

void func_141()//Position - 0xFA18
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_142()//Position - 0xFA35
{
	func_143();
}

void func_143()//Position - 0xFA41
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_144()//Position - 0xFA60
{
	if (Global_20383.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_145()//Position - 0xFA92
{
	if (func_63(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_13();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

void func_146(int iParam0)//Position - 0xFB34
{
	if (func_148())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_161())
		{
			func_115(1, 1);
		}
		else
		{
			func_115(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8254, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8253, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 30);
	}
	if (!func_147())
	{
		Global_20383.f_1 = 3;
	}
}

int func_147()//Position - 0xFBBE
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_148()//Position - 0xFBE5
{
	return BitTest(Global_1962996, 19);
}

void func_149()//Position - 0xFBF4
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 56 /*INPUT_DROP_WEAPON*/, true);
	if (iLocal_100 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20356);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20353);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 280 /*INPUT_VEH_MOVE_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 77 /*INPUT_VEH_HOTWIRE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 78 /*INPUT_VEH_HOTWIRE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 61 /*INPUT_VEH_MOVE_UP_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 62 /*INPUT_VEH_MOVE_DOWN_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 63 /*INPUT_VEH_MOVE_LEFT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 64 /*INPUT_VEH_MOVE_RIGHT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 90 /*INPUT_VEH_FLY_YAW_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 108 /*INPUT_VEH_FLY_ROLL_LEFT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 109 /*INPUT_VEH_FLY_ROLL_RIGHT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 111 /*INPUT_VEH_FLY_PITCH_UP_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 112 /*INPUT_VEH_FLY_PITCH_DOWN_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 137 /*INPUT_VEH_PUSHBIKE_SPRINT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 139 /*INPUT_VEH_PUSHBIKE_REAR_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
	}
}

int func_150()//Position - 0xFDD3
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()//Position - 0xFE26
{
	if (Global_1575035 == 0)
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
	if (Global_2696915)
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
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()//Position - 0xFEAA
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

int func_153()//Position - 0xFEDD
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()//Position - 0xFF01
{
	return Global_32163;
}

bool func_155()//Position - 0xFF0C
{
	return Global_2683862.f_698;
}

int func_156(int iParam0)//Position - 0xFF1B
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()//Position - 0xFF32
{
	return Global_2694524;
}

bool func_158()//Position - 0xFF3E
{
	return Global_2683862.f_693;
}

void func_159()//Position - 0xFF4D
{
	if (iLocal_106 == 1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_160(char* sParam0, int iParam1)//Position - 0xFF8C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_161()//Position - 0xFFA3
{
	return BitTest(Global_1962996, 5);
}

void func_162()//Position - 0xFFB1
{
	if (func_163())
	{
		GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
		if (GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22762 = 1;
			Global_20383.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					if (func_174())
					{
						if (Global_4541022 == 0)
						{
							if (!BitTest(Global_4542297, 2))
							{
								func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4542297, 2))
						{
							func_165(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
			{
				func_165(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_163()//Position - 0x1010B
{
	if (Global_4718592.f_160553 == 1)
	{
		if (Global_78558)
		{
			return 0;
		}
	}
	if (Global_4718592.f_160554 == 1)
	{
		if (Global_78558)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (BitTest(Global_8254, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_164(int iParam0, char* sParam1)//Position - 0x10164
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_165(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x10179
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

int func_166()//Position - 0x101DC
{
	if (Global_78558)
	{
		Global_20383 = 3;
	}
	else
	{
		Global_20383 = func_13();
	}
	if (Global_20383 > 3)
	{
		Global_20383 = 3;
	}
	return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}

void func_167()//Position - 0x10212
{
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 8;
	}
	Global_22761 = 0;
	iLocal_78 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (Global_20325)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0);
			func_144();
			func_94();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		}
		func_164(iLocal_91, "OPEN_SHUTTER");
		func_159();
		func_129();
		iLocal_80 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_122(1, 1);
		func_126(1);
		func_61();
		func_127();
		func_59(0);
		iLocal_66 = 1;
	}
}

void func_168(int iParam0)//Position - 0x102A6
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8253, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 15);
	}
}

bool func_169(bool bParam0)//Position - 0x102C9
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_170(int iParam0, bool bParam1)//Position - 0x102DA
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

void func_171()//Position - 0x1035F
{
}

int func_172(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x10367
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_173()//Position - 0x1039A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_107);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_108);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_109);
		}
		else
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_107);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_108);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_109);
		}
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_110);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_111);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_112);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_113);
	func_58();
}

int func_174()//Position - 0x10407
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

