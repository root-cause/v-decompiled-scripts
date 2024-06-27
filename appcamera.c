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
	char* sLocal_17[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_31[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_45 = 0;
	char* sLocal_46[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	float fLocal_112 = 0f;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	char cLocal_143[16] = "";
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
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
	iLocal_57 = 1;
	bLocal_60 = true;
	bLocal_61 = true;
	fLocal_71 = 0f;
	fLocal_72 = 172f;
	fLocal_75 = 0.7f;
	iLocal_135 = 1200;
	iLocal_136 = 1200;
	iLocal_137 = 166;
	fLocal_155 = 0.5f;
	fLocal_156 = 0.85f;
	fLocal_157 = 0.5f;
	fLocal_158 = -0.25f;
	fLocal_159 = 0.25f;
	fLocal_160 = 0.3f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		fLocal_75 = 1f;
	}
	else
	{
		fLocal_75 = 0.7f;
	}
	if (!func_179())
	{
		Global_4541808 = 99;
		Global_4541809 = 99;
		iLocal_55 = 99;
	}
	else
	{
		Global_4541808 = 0;
		Global_4541809 = 0;
	}
	sLocal_17[0] = "No_Filter" /* GXT: No Filter */;
	sLocal_17[1] = "phone_cam1";
	sLocal_17[2] = "phone_cam2";
	sLocal_17[3] = "phone_cam3";
	sLocal_17[4] = "phone_cam4";
	sLocal_17[5] = "phone_cam5";
	sLocal_17[6] = "phone_cam6";
	sLocal_17[7] = "phone_cam7";
	sLocal_17[8] = "phone_cam8";
	sLocal_17[9] = "phone_cam9";
	sLocal_17[10] = "phone_cam10";
	sLocal_17[11] = "phone_cam11";
	sLocal_17[12] = "phone_cam12";
	sLocal_31[0] = "No_Border";
	sLocal_31[1] = "frame1";
	sLocal_31[2] = "frame2";
	sLocal_31[3] = "frame3";
	sLocal_31[4] = "frame4";
	sLocal_31[5] = "frame5";
	sLocal_31[6] = "frame6";
	sLocal_31[7] = "frame7";
	sLocal_31[8] = "frame8";
	sLocal_31[9] = "frame9";
	sLocal_31[10] = "frame10";
	sLocal_31[11] = "frame11";
	sLocal_31[12] = "frame12";
	sLocal_46[0] = "No_Expression";
	sLocal_46[1] = "mood_Aiming_1";
	sLocal_46[2] = "mood_Happy_1";
	sLocal_46[3] = "mood_smug_1";
	sLocal_46[4] = "mood_Injured_1";
	sLocal_46[5] = "mood_sulk_1";
	sLocal_46[6] = "mood_Angry_1";
	func_178();
	if (func_177(1, 1, !iLocal_62, 1))
	{
		iLocal_62 = 1;
	}
	func_176();
	iLocal_110 = AUDIO::GET_SOUND_ID();
	if (Global_20875 == 0)
	{
		fLocal_94 = 0.207f;
		fLocal_95 = 0.158f;
		fLocal_96 = 0.207f;
		fLocal_97 = 0.335f;
	}
	else
	{
		fLocal_94 = 0.24f;
		fLocal_95 = 0.258f;
		fLocal_96 = 0.24f;
		fLocal_97 = 0.435f;
	}
	Global_23319 = 0;
	Global_23320 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_23319 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_23319 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			Global_23319 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			Global_23319 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_23319 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_129 == 1)
			{
				Global_23319 = 1;
			}
			iLocal_147 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(iLocal_147) == joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_147, func_175(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_23319 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_147, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_147) > 0f)
				{
					if (!Global_79389)
					{
						if (!func_174(0))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_147, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_79389)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
	}
	MISC::CLEAR_BIT(&Global_8800, 21);
	func_173(0);
	MISC::SET_BIT(&Global_8800, 17);
	if (Global_20872 == 0)
	{
		func_172();
	}
	else
	{
		iLocal_138 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
		iLocal_139 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_139))
		{
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		}
		if (Global_79389)
		{
			iLocal_142 = 2;
		}
		else
		{
			switch (func_171())
			{
				case 0:
					iLocal_142 = 2;
					break;
				
				case 2:
					iLocal_142 = 2;
					break;
				
				case 3:
					iLocal_142 = 2;
					break;
				}
		}
		func_170(iLocal_138, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_142), -1082130432, -1082130432, -1082130432, -1082130432);
		func_169(iLocal_138, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_76 = { Global_20890 };
	Local_79 = { Global_20883[Global_20875 /*3*/] };
	Global_23320 = 1;
	iLocal_116 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 0;
	iLocal_123 = 0;
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 8;
	}
	if (iLocal_129 == 0)
	{
		MISC::CLEAR_BIT(&Global_8802, 3);
	}
	func_167();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV())
	{
	}
	if (Global_4718592.f_178913)
	{
	}
	if (Global_4718592.f_178915 == 1)
	{
		iLocal_154 = 1;
	}
	if (iLocal_154 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20899);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 186 /*INPUT_CELLPHONE_CAMERA_EXPRESSION*/);
		RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		if (func_166())
		{
			if (!BitTest(Global_4543084, 2))
			{
				MISC::SET_BIT(&Global_4543084, 2);
				func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113969.f_14054.f_81)
		{
			if (!BitTest(Global_4543084, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!BitTest(Global_8801, 28))
					{
						if ((iLocal_126 && iLocal_129 == 0) && !func_166())
						{
							MISC::SET_BIT(&Global_4543084, 13);
							Global_113969.f_14054.f_81 = 1;
							func_165("CELL_FOC_HLP" /* GXT: Hold ~INPUT_CELLPHONE_CAMERA_FOCUS_LOCK~ to initiate Focus Lock. This will lock the viewfinder's focus distance and allow you to recompose your shot. */, -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4718592.f_178912 == 0 && Global_4718592.f_178913 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_164();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			if (iLocal_148 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20903);
			}
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20900);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_166())
			{
				iLocal_128 = 1;
				Global_20930.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_20930.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (BitTest(Global_8801, 3))
			{
				Global_20930.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_156())
				{
					Global_20930.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					Global_20930.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_155())
					{
					}
					else
					{
						Global_20930.f_1 = 3;
						MISC::SET_GAME_PAUSED(false);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79389 == 1)
					{
						Global_20930.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_20930.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_154();
					iLocal_147 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_147) < 0f)
					{
						func_151(0);
					}
					if (iLocal_113 == 1)
					{
						if (iLocal_114 == 1)
						{
							if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
							{
								func_151(0);
							}
						}
						else if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
						{
							iLocal_114 = 1;
							SYSTEM::WAIT(0);
							RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_79389 == 0)
				{
					if (BitTest(Global_8800, 18))
					{
						func_150();
						if ((Global_20930 == 0 || Global_20930 == 1) || Global_20930 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_20930.f_1 = 3;
									MISC::SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_140)
			{
				func_149();
			}
			if (Global_20930.f_1 < 4)
			{
			}
			if (iLocal_151 == 0)
			{
				if (iLocal_101 == 0)
				{
					if (iLocal_102 == 0)
					{
						if (iLocal_109 == 0)
						{
							if (Global_20930.f_1 > 3)
							{
								if (iLocal_148)
								{
									func_147();
									if (Global_23324 == 0 && Global_23321 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, true);
										HUD::BUSYSPINNER_OFF();
										iLocal_148 = 0;
										func_146();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_145();
										iLocal_107++;
										if (func_179())
										{
											func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
										}
										iLocal_130 = 0;
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_125 = 0;
										func_131();
									}
									if (Global_23321 == 0)
									{
										iLocal_148 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_130();
										iLocal_130 = 0;
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_125 = 0;
										func_131();
										if (func_179())
										{
											if (Global_4541809 == 0)
											{
												if (!BitTest(Global_4543084, 2))
												{
													func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4543084, 2))
										{
											func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_129();
										func_128(1);
									}
								}
								else if (Global_20930.f_1 != 9)
								{
									if (Global_23320 == 1)
									{
										if (Global_23319 == 0)
										{
											func_127();
										}
									}
									else if ((Global_9408 - Global_9407) > Global_9409)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_126())
										{
											if (func_125() && iLocal_125)
											{
											}
											else if (iLocal_125 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_110);
												iLocal_141 = 0;
												if (Global_23319 == 0)
												{
													func_145();
													Global_23319 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_126 = 0;
													iLocal_116 = 1;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													func_124(0, 0);
													func_128(0);
													iLocal_113 = 0;
													func_119(1);
													iLocal_140 = 0;
													func_117(0, 1);
													func_170(Global_20911, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_115(1);
												}
											}
										}
										if (func_114(2, Global_20898, 0))
										{
											if (func_166())
											{
												if (((Global_1928440 || Global_1574972) || Global_23322) || BitTest(Global_8800, 21))
												{
												}
												else if (func_125() && iLocal_125)
												{
												}
												else if (!func_126())
												{
													if (iLocal_125 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														iLocal_141 = 0;
														func_117(1, 1);
														func_113(1);
													}
												}
											}
											else if (func_125() && iLocal_125)
											{
											}
											else if (iLocal_125 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_110);
												iLocal_141 = 0;
												if (Global_23319 == 0)
												{
													func_145();
													Global_23319 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_126 = 0;
													iLocal_116 = 1;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													func_124(0, 0);
													func_128(0);
													iLocal_113 = 0;
													func_119(1);
													iLocal_140 = 0;
													func_117(0, 1);
													func_170(Global_20911, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_99 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_112();
											iLocal_99 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_112();
										iLocal_99 = 0;
									}
									if (iLocal_100 == 0)
									{
										if (BitTest(Global_8800, 28))
										{
											func_112();
											iLocal_100 = 1;
										}
									}
									else if (!BitTest(Global_8800, 28))
									{
										func_112();
										iLocal_100 = 0;
									}
									if (Global_23319 == 1)
									{
										func_102();
									}
									else if (Global_20930.f_1 > 4)
									{
										if (iLocal_122 == 1 && iLocal_123 == 0)
										{
											func_95();
										}
										if (iLocal_122 == 0 && iLocal_123 == 1)
										{
											func_130();
											if (iLocal_134 == 1 || iLocal_134 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
													{
														func_169(iLocal_138, "CLOSE_SHUTTER");
														iLocal_133 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_135) && Global_20930.f_1 > 3)
														{
															func_164();
															func_149();
															func_94();
															RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_179())
												{
													if (Global_4541809 == 0)
													{
														if (!BitTest(Global_4543084, 2))
														{
															func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4543084, 2))
												{
													func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_149();
												func_164();
												iLocal_130 = 0;
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_125 = 0;
												func_131();
												iLocal_134 = 0;
												func_169(iLocal_138, "OPEN_SHUTTER");
											}
											func_129();
											func_128(1);
											func_93();
										}
									}
									if (iLocal_141 == 1)
									{
										func_90();
									}
									if (iLocal_127)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_126 = 1;
											iLocal_127 = 0;
											MISC::SET_BIT(&Global_8800, 18);
											if (Global_23319 == 0)
											{
												func_117(1, 1);
											}
										}
									}
									if (iLocal_125 == 0)
									{
										if (iLocal_126 && Global_23319 == 0)
										{
											if ((iLocal_128 == 0 && iLocal_123 == 0) && Global_23322 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_94();
										}
									}
									else if (iLocal_122 == 0)
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
					if (Global_20930.f_1 > 3)
					{
						if (Global_23320 == 1)
						{
							if (Global_23319 == 0)
							{
								func_127();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_153 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_FW_1" /* GXT: Camera storage device full. */, iLocal_150, "CELL_CAM_FW_2" /* GXT: Access the Gallery from the Pause Menu to delete some photos. */, false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "ERROR_NO_SC_CAMERAPHONE" /* GXT: Unable to save your Snapmatic photo as you are not signed up or logged in to ~HUD_COLOUR_SOCIAL_CLUB~Rockstar Games~s~. */, iLocal_150, "", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "SC_ERROR_BANNED" /* GXT: You have been banned from using Rockstar Games Online Services. */, iLocal_150, "", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "ERROR_UPDATE_SC_CAMERAPHONE" /* GXT: Accept the latest Online Policies to save your Snapmatic photos to the Gallery. Log in or visit ~HUD_COLOUR_SOCIAL_CLUB~Rockstar Games~s~ for more information. */, iLocal_150, "", false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || func_5())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_3X" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in to Xbox LIVE */, iLocal_150, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PS3_VERSION() || func_4())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_3P" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in to PSN℠ */, iLocal_150, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_30" /* GXT: To save Snapmatic phone app photos to the Gallery you must be logged in. */, iLocal_150, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_153 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_CCW_1" /* GXT: Unable to save photos as the cloud connection is unavailable. */, iLocal_150, "CELL_CAM_CCW_2" /* GXT: Please try again later. */, false, -1, "", "", true, 0);
				}
				if (iLocal_153 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_I" /* GXT: Snapmatic features are unavailable. An error occurred while validating your account's eligibility. */, iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_P" /* GXT: Snapmatic features are temporarily unavailable. Please try again later. */, iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_C" /* GXT: Snapmatic features are disabled on this account due to eligibility restrictions. */, iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_T" /* GXT: Snapmatic features are currently disabled on this account due to eligibility restrictions. */, iLocal_150, "", false, -1, "", "", true, 0);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_P" /* GXT: Snapmatic features are temporarily unavailable. Please try again later. */, iLocal_150, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_153 == 0)
				{
				}
				if (iLocal_153 == 2 || iLocal_153 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_151 = 0;
						iLocal_153 = 0;
						func_117(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						iLocal_152 = 1;
					}
					if (iLocal_152 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							iLocal_151 = 0;
							iLocal_153 = 0;
							func_117(0, 1);
							iLocal_152 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU(joaat("Gallery"));
						}
					}
				}
				else if (iLocal_153 == 7)
				{
					if (func_4())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							iLocal_151 = 0;
							iLocal_153 = 0;
							func_117(0, 1);
							iLocal_109 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_151 = 0;
						iLocal_153 = 0;
						func_117(0, 1);
						iLocal_109 = 0;
					}
					if (!func_4())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20902))
						{
							iLocal_151 = 0;
							iLocal_153 = 0;
							func_117(0, 1);
							if (BitTest(Global_8801, 28))
							{
								iLocal_109 = 0;
							}
							else
							{
								iLocal_109 = 2;
							}
							iLocal_105 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iLocal_151 = 0;
					iLocal_153 = 0;
					func_117(0, 1);
				}
			}
		}
		iLocal_106 = MISC::GET_GAME_TIMER();
		if (func_166())
		{
			if (!BitTest(Global_4543084, 2))
			{
				MISC::SET_BIT(&Global_4543084, 2);
				func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_128)
		{
			func_1(0);
			func_124(0, 0);
			func_128(0);
			iLocal_113 = 0;
			func_119(1);
			Global_23319 = 0;
			Global_23320 = 0;
			Global_23322 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_138);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_139);
			MISC::SET_GAME_PAUSED(false);
			if (Global_21147 == 1)
			{
				MISC::SET_BIT(&Global_8800, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, true);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			MISC::CLEAR_BIT(&Global_8802, 3);
			MISC::CLEAR_BIT(&Global_4543084, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23323 = 1;
			AUDIO::STOP_SOUND(iLocal_110);
			AUDIO::RELEASE_SOUND_ID(iLocal_110);
			HUD::BUSYSPINNER_OFF();
			func_119(1);
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4541809 > 0 && Global_4541809 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_31[Global_4541809]);
			}
			MISC::CLEAR_BIT(&Global_8800, 18);
			if (func_166())
			{
				func_117(1, 1);
			}
			else
			{
				func_117(0, 1);
			}
			if (func_177(0, 1, iLocal_62, 1))
			{
				iLocal_62 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)//Position - 0x1228
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(true);
		}
		else if (Global_20930.f_1 > 3)
		{
			MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(false);
		}
	}
}

int func_2()//Position - 0x1253
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
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
	if (Global_4543362 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()//Position - 0x129A
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

bool func_4()//Position - 0x12DD
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_5()//Position - 0x12F3
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_6()//Position - 0x1309
{
	iLocal_104 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_104)
	{
		case 0:
			iLocal_101 = 0;
			iLocal_107 = GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
			iLocal_108 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_102 == 1)
			{
				if (iLocal_125 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
					{
						if (func_179())
						{
							if (Global_4541809 == 0)
							{
								if (!BitTest(Global_4543084, 2))
								{
									func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4543084, 2))
							{
								func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
				{
					func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
				}
				iLocal_102 = 0;
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
			if (BitTest(Global_8801, 28))
			{
				iLocal_101 = 0;
				iLocal_107 = 0;
				iLocal_108 = 0;
			}
			else
			{
				Global_20930.f_1 = 3;
				Global_23323 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_7()//Position - 0x149B
{
	if (func_114(2, Global_20899, 0))
	{
		func_1(0);
		if (BitTest(Global_8801, 28))
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			func_146();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_145();
			iLocal_134 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8801, 14))
			{
				func_165("CELL_299" /* GXT: Cannot save as last picture failed. */, -1);
			}
			else
			{
				func_145();
				func_10();
			}
		}
		else
		{
			iLocal_151 = 1;
			func_117(1, 1);
		}
	}
	if (BitTest(Global_8800, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_164();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_94();
			func_154();
			func_149();
		}
		MISC::SET_GAME_PAUSED(false);
		func_146();
		SYSTEM::SETTIMERB(0);
		iLocal_125 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_131();
		func_145();
	}
	if (func_114(2, Global_20903, 0))
	{
		func_1(0);
		if (func_125() || BitTest(Global_8801, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			iLocal_134 = 1;
			func_146();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_145();
		}
	}
	if (BitTest(Global_8800, 28))
	{
		if (func_114(2, Global_20902, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(false);
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_164();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_164();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_23323 = 1;
			iLocal_141 = 0;
			iLocal_124 = 0;
			func_117(0, 1);
			Global_23319 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_126 = 0;
			iLocal_116 = 1;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			func_8();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_124(0, 0);
			func_128(0);
			iLocal_113 = 0;
			func_119(1);
			if (!Global_2738934.f_6812)
			{
				MISC::SET_BIT(&Global_8800, 9);
			}
			iLocal_140 = 0;
			func_170(Global_20911, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()//Position - 0x16C7
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_9();
	}
}

void func_9()//Position - 0x16ED
{
	if (func_2())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_10()//Position - 0x1701
{
	iLocal_148 = 1;
	Global_23324 = 1;
	HUD::CLEAR_FLOATING_HELP(0, true);
}

int func_11()//Position - 0x1716
{
	if (iLocal_105 == iLocal_106)
	{
		if (iLocal_103)
		{
			iLocal_103 = 1;
		}
	}
	if (Global_20930.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_107 == iLocal_108 || iLocal_107 > iLocal_108)
	{
		iLocal_153 = 1;
		iLocal_150 = 2;
		return 0;
	}
	return 1;
}

void func_12()//Position - 0x175E
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
	if (iLocal_129)
	{
		func_85();
		func_81();
		func_80();
		fLocal_71 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_72 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_131 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
			{
				iLocal_131 = 1;
				func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8800, 28))
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_66());
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_CAM_SELFIE_2" /* GXT: Reset Camera */);
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_CAM_SELFIE_2" /* GXT: Reset Camera */);
				}
				func_65();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
		{
			iLocal_131 = 0;
			func_131();
		}
		if (iLocal_132 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
			{
				iLocal_132 = 1;
				func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8800, 28))
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_66());
				}
				else if (!func_166())
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
				}
				func_64();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
		{
			iLocal_132 = 0;
			func_131();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		func_131();
	}
	func_154();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (func_166())
	{
		if (!BitTest(Global_4543084, 2))
		{
			MISC::SET_BIT(&Global_4543084, 2);
			func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/) && iLocal_154 == 0) && !func_166())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (BitTest(Global_4543084, 2))
				{
					MISC::CLEAR_BIT(&Global_4543084, 2);
					if (!BitTest(Global_4543084, 2))
					{
						func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_4543084, 2);
					func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_129)
	{
		if (iLocal_130 == 1)
		{
			iLocal_130 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_63("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_62(14))
		{
			if (BitTest(Global_4543084, 10))
			{
				if ((Global_79389 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /* GXT: Action: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4544069));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_4543084, 10);
				}
			}
		}
		else if (BitTest(Global_4543084, 10))
		{
			MISC::CLEAR_BIT(&Global_4543084, 10);
		}
		iLocal_64 = MISC::GET_GAME_TIMER();
		if ((iLocal_64 - iLocal_63) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_68 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68, Local_65, true) > 5f)
				{
					Global_20930.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				iLocal_63 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_130)
	{
		if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/) && !func_166())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
			iLocal_130 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			func_63("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/) && !func_166())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
		iLocal_130 = 1;
		if (!func_62(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			func_63("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_179())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 186 /*INPUT_CELLPHONE_CAMERA_EXPRESSION*/) && iLocal_154 == 0) && !func_166())
		{
			if (iLocal_129)
			{
				iLocal_55++;
				if (iLocal_55 > 0 && iLocal_55 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_20930 == 0)
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
								if ((((iLocal_55 == 2 || iLocal_55 == 3) || iLocal_55 == 4) || iLocal_55 == 8) || iLocal_55 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_55 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_46[iLocal_55], 0);
						}
					}
				}
				if (iLocal_55 == 7 || iLocal_55 > 7)
				{
					iLocal_55 = 0;
				}
				if (iLocal_55 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
					}
				}
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/) && iLocal_154 == 0) && !func_166())
		{
			if (iLocal_129)
			{
				if (bLocal_60 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
					if (iLocal_59 == 0)
					{
						iLocal_59 = 1;
						iLocal_58 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_17[Global_4541808], "phone_cam12DUMMY"))
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
						iLocal_59 = 0;
						iLocal_58 = 0;
						MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
						MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
					}
				}
			}
			else if (bLocal_61 == 1)
			{
				if (iLocal_58 == 0)
				{
					iLocal_58 = 1;
					iLocal_59 = 1;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
				}
				else
				{
					iLocal_58 = 0;
					iLocal_59 = 0;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
				}
			}
		}
	}
	if (iLocal_57 == 1 && !func_166())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) && iLocal_154 == 0)
		{
			if (func_179())
			{
				Global_4541809++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
			}
			if (Global_4541809 == 13)
			{
				func_128(0);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_31[(Global_4541809 - 1)]);
				Global_4541809 = 0;
				func_60();
				if (iLocal_45 == 1)
				{
					MISC::CLEAR_BIT(&Global_4543084, 2);
					iLocal_45 = 0;
					func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4541809 > 0 && Global_4541809 < 13)
			{
				iLocal_57 = 0;
				iLocal_56 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_31[Global_4541809], false);
			}
		}
	}
	if (Global_4541809 > 0)
	{
		if (iLocal_57 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_31[Global_4541809]))
			{
				iLocal_56 = 1;
				iLocal_57 = 1;
				if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
				{
					func_128(1);
				}
				if (iLocal_45 == 0)
				{
					if (!BitTest(Global_4543084, 2))
					{
						iLocal_45 = 1;
					}
				}
				MISC::SET_BIT(&Global_4543084, 2);
				func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_31[Global_4541809], false);
			}
		}
		if (iLocal_56 == 1)
		{
			if (Global_4541809 == 1 || Global_4541809 == 3)
			{
			}
			if (Global_4541809 == 2 || Global_4541809 == 4)
			{
			}
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) && iLocal_154 == 0) && !func_166())
	{
		if (func_179())
		{
			func_119(0);
			Global_4541808++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
		}
		if (Global_4541808 == 13)
		{
			Global_4541808 = 0;
		}
		if (Global_4541808 == 0)
		{
			if (func_179())
			{
				func_119(0);
			}
		}
		else
		{
			func_129();
		}
		func_59();
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/) && iLocal_154 == 0) && !func_166())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
				func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_169(iLocal_138, "CLOSE_SHUTTER");
				iLocal_133 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_137) && Global_20930.f_1 > 3)
				{
					func_164();
					func_149();
					func_94();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_129 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_110);
					iLocal_129 = 1;
					func_58(1);
					func_57();
					MISC::SET_BIT(&Global_8802, 3);
					iLocal_63 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_131 = 0;
					iLocal_132 = 0;
					func_58(0);
					iLocal_129 = 0;
					MISC::CLEAR_BIT(&Global_8802, 3);
				}
				iLocal_133 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_135) && Global_20930.f_1 > 3)
				{
					func_164();
					func_149();
					func_94();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_169(iLocal_138, "OPEN_SHUTTER");
				if (func_179())
				{
					if (Global_4541809 == 0)
					{
						if (!BitTest(Global_4543084, 2))
						{
							func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4543084, 2))
				{
					func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_149();
				func_164();
				if (BitTest(Global_8800, 28))
				{
					StringCopy(&cLocal_143, "CELL_296", 16);
					func_55();
				}
				else
				{
					StringCopy(&cLocal_143, "CELL_295", 16);
					func_29();
				}
			}
		}
	}
	if (iLocal_129 == 0)
	{
		if (iLocal_111 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
			{
				fLocal_112 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_112 > 1f && fLocal_112 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_110))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_110, "Camera_Zoom", &Global_20919, true);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_110);
				}
				iLocal_111 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
		{
			fLocal_112 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_112 > 1f && fLocal_112 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_110))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_110, "Camera_Zoom", &Global_20919, true);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_110);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_110);
		}
	}
	if ((func_114(2, Global_20899, 0) && !func_126()) && !func_114(2, Global_20898, 0))
	{
		fLocal_73 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_74 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
		MISC::SET_BIT(&Global_8800, 21);
		AUDIO::STOP_SOUND(iLocal_110);
		iLocal_125 = 1;
		func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_170(iLocal_138, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20919, true);
		func_169(iLocal_138, "CLOSE_SHUTTER");
		Local_82 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_82, 0);
		if (!func_179())
		{
			func_119(1);
		}
		Global_23322 = 1;
		HUD::CLEAR_FLOATING_HELP(0, true);
		while (Global_23321 < 6 && Global_20930.f_1 > 3)
		{
			func_164();
			func_149();
			func_94();
			func_154();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(false, false);
		if (Global_20872)
		{
			func_1(1);
		}
		iLocal_133 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_133 + iLocal_136) && Global_20930.f_1 > 3)
		{
			func_164();
			func_149();
			func_94();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_169(iLocal_138, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_8800, 21);
		func_131();
		if (Global_20930.f_1 > 3)
		{
			if (Global_79389)
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
			func_128(0);
		}
		func_149();
	}
	if (BitTest(Global_8800, 28))
	{
		if (func_114(2, Global_20902, 0))
		{
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_164();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_164();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_23323 = 1;
			iLocal_141 = 0;
			iLocal_124 = 1;
			Global_23319 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_126 = 0;
			iLocal_116 = 1;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			func_8();
			iLocal_125 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_124(0, 0);
			func_128(0);
			iLocal_113 = 0;
			func_119(1);
			if (!Global_2738934.f_6812)
			{
				MISC::SET_BIT(&Global_8800, 9);
			}
			MISC::SET_GAME_PAUSED(false);
			iLocal_140 = 0;
			func_170(Global_20911, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()//Position - 0x2667
{
	func_14();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_14()//Position - 0x2680
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_62(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_15(Global_113969.f_2366.f_539.f_4321))
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

bool func_15(int iParam0)//Position - 0x277D
{
	return iParam0 < 3;
}

int func_16(int iParam0)//Position - 0x2789
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

int func_17(int iParam0)//Position - 0x27C6
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

var func_18(int iParam0)//Position - 0x27EB
{
	return Global_2169[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)//Position - 0x27FA
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_20()//Position - 0x2827
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_21(int iParam0, var uParam1)//Position - 0x285C
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_22()//Position - 0x28E2
{
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	Global_20867 = { Global_20883[Global_20875 /*3*/] };
	func_117(0, 1);
	func_124(0, 0);
	func_128(0);
	iLocal_113 = 0;
	func_119(1);
	if (!BitTest(Global_8801, 28))
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_115 == 0)
				{
					iLocal_115 = 1;
				}
			}
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)//Position - 0x2943
{
	int iVar0;
	
	iVar0 = func_26(iParam0, func_27(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_24(iParam0, iVar0, iParam2, 1);
}

void func_24(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x296B
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_25(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_25(int iParam0, var uParam1)//Position - 0x2999
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_27(uParam1));
}

int func_26(int iParam0, var uParam1)//Position - 0x29AE
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_25(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_27(var uParam0)//Position - 0x29DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

var func_28()//Position - 0x2A11
{
	return Global_1574926;
}

void func_29()//Position - 0x2A1D
{
	if (iLocal_154 == 1)
	{
		func_54();
		return;
	}
	if (iLocal_131 == 0 && iLocal_132 == 0)
	{
		func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_166())
		{
			func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
			func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
		}
		else
		{
			func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
			func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
		}
		if (iLocal_129)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
				}
				else if ((Global_79389 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
				{
					func_52();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_179())
					{
						func_51(5f);
						func_50(6f);
						if (func_31(1))
						{
							func_30(7f);
							if (bLocal_60)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
							}
						}
						else if (bLocal_60)
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
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
					if (!func_166())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
						func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "CELL_284" /* GXT: Zoom */);
						}
						else
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true), "CELL_284" /* GXT: Zoom */);
						}
					}
					if (!func_166())
					{
						if (func_179())
						{
							func_51(6f);
							func_50(7f);
							if (bLocal_61)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
							}
							func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_179())
					{
						func_51(3f);
						func_50(4f);
						func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
			else
			{
				if (!func_166())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_166())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
						func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "CELL_284" /* GXT: Zoom */);
						}
						else
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true), "CELL_284" /* GXT: Zoom */);
						}
					}
					if (!func_166())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					}
					if (!func_166())
					{
						if (func_179())
						{
							func_51(7f);
							func_50(8f);
							if (bLocal_61)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
							}
							func_78(iLocal_139, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_179())
					{
						func_51(3f);
						func_50(4f);
						func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_30(float fParam0)//Position - 0x2F8F
{
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true), "CELL_ACTION" /* GXT: Play Action */);
}

int func_31(int iParam0)//Position - 0x2FAF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_49(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_32(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_32(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2FEF
{
	return func_33(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3009
{
	var uVar0;
	var uVar9;
	var uVar18;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	
	if (func_48())
	{
		return 0;
	}
	uVar0 = 8;
	uVar9 = 8;
	uVar18 = 8;
	if (iParam1 == 0)
	{
		iVar30 = 3;
	}
	else if (bParam3)
	{
		iVar30 = 1;
	}
	else if (bParam4)
	{
		iVar30 = 2;
	}
	else
	{
		iVar30 = 0;
	}
	func_41(iParam1, iParam2, &uVar0, &uVar9, &uVar18, iVar30, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar27 = func_40(iParam0);
			if (!iVar27 == -1)
			{
				if (func_39(&uVar0, iVar27))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar28 = func_38(iParam0);
			if (!iVar28 == -1)
			{
				if (func_36(&uVar9, iVar28))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar29 = func_35(iParam0);
			if (!iVar29 == 0)
			{
				if (func_34(&uVar18, iVar29))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_34(var uParam0, int iParam1)//Position - 0x30E6
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

int func_35(int iParam0)//Position - 0x3124
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_36(var uParam0, int iParam1)//Position - 0x3137
{
	return func_37(uParam0, iParam1);
}

int func_37(var uParam0, int iParam1)//Position - 0x3147
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

int func_38(int iParam0)//Position - 0x3185
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
	return iVar0;
}

bool func_39(var uParam0, int iParam1)//Position - 0x3199
{
	return func_37(uParam0, iParam1);
}

int func_40(int iParam0)//Position - 0x31A9
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
	return iVar0;
}

void func_41(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x31BD
{
	func_47(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_46(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 4, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 39, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 38, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 62, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_47(uParam4, 136, 1);
							func_47(uParam4, 138, 1);
							func_47(uParam4, 139, 1);
							func_47(uParam4, 143, 1);
							func_47(uParam4, 144, 1);
							func_47(uParam4, 145, 1);
							func_47(uParam4, 147, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_47(uParam4, 136, 1);
							func_47(uParam4, 138, 1);
							func_47(uParam4, 139, 1);
							func_47(uParam4, 143, 1);
							func_47(uParam4, 144, 1);
							func_47(uParam4, 145, 1);
							func_47(uParam4, 147, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 64:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 66, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 65:
				case 68:
					func_45(uParam3, 67, 1);
					func_45(uParam3, 68, 1);
					func_45(uParam3, 69, 1);
					func_45(uParam3, 70, 1);
					func_45(uParam3, 71, 1);
					func_45(uParam3, 72, 1);
					func_45(uParam3, 73, 1);
					func_45(uParam3, 74, 1);
					func_45(uParam3, 78, 1);
					func_45(uParam3, 79, 1);
					func_45(uParam3, 80, 1);
					func_45(uParam3, 81, 1);
					func_45(uParam3, 82, 1);
					func_45(uParam3, 91, 1);
					func_45(uParam3, 92, 1);
					func_43(uParam2, 66, 1);
					func_43(uParam2, 67, 1);
					func_43(uParam2, 68, 1);
					func_43(uParam2, 69, 1);
					func_43(uParam2, 70, 1);
					func_43(uParam2, 71, 1);
					func_43(uParam2, 72, 1);
					func_43(uParam2, 73, 1);
					func_43(uParam2, 77, 1);
					func_43(uParam2, 78, 1);
					func_43(uParam2, 79, 1);
					func_43(uParam2, 80, 1);
					func_43(uParam2, 81, 1);
					func_43(uParam2, 90, 1);
					func_43(uParam2, 91, 1);
					func_45(uParam3, 38, 1);
					func_45(uParam3, 47, 1);
					func_45(uParam3, 111, 1);
					func_43(uParam2, 37, 1);
					func_43(uParam2, 46, 1);
					func_43(uParam2, 110, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_42(uParam2, uParam3, uParam4);
					break;
				
				case 66:
					func_45(uParam3, 67, 1);
					func_45(uParam3, 68, 1);
					func_45(uParam3, 69, 1);
					func_45(uParam3, 70, 1);
					func_45(uParam3, 71, 1);
					func_45(uParam3, 72, 1);
					func_45(uParam3, 73, 1);
					func_45(uParam3, 74, 1);
					func_45(uParam3, 78, 1);
					func_45(uParam3, 79, 1);
					func_45(uParam3, 80, 1);
					func_45(uParam3, 81, 1);
					func_45(uParam3, 82, 1);
					func_45(uParam3, 91, 1);
					func_45(uParam3, 92, 1);
					func_43(uParam2, 66, 1);
					func_43(uParam2, 67, 1);
					func_43(uParam2, 68, 1);
					func_43(uParam2, 69, 1);
					func_43(uParam2, 70, 1);
					func_43(uParam2, 71, 1);
					func_43(uParam2, 72, 1);
					func_43(uParam2, 73, 1);
					func_43(uParam2, 77, 1);
					func_43(uParam2, 78, 1);
					func_43(uParam2, 79, 1);
					func_43(uParam2, 80, 1);
					func_43(uParam2, 81, 1);
					func_43(uParam2, 90, 1);
					func_43(uParam2, 91, 1);
					func_45(uParam3, 38, 1);
					func_45(uParam3, 47, 1);
					func_45(uParam3, 111, 1);
					func_43(uParam2, 37, 1);
					func_43(uParam2, 46, 1);
					func_43(uParam2, 110, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_42(uParam2, uParam3, uParam4);
					break;
				
				case 67:
					func_45(uParam3, 67, 1);
					func_45(uParam3, 68, 1);
					func_45(uParam3, 69, 1);
					func_45(uParam3, 70, 1);
					func_45(uParam3, 71, 1);
					func_45(uParam3, 72, 1);
					func_45(uParam3, 73, 1);
					func_45(uParam3, 74, 1);
					func_45(uParam3, 78, 1);
					func_45(uParam3, 79, 1);
					func_45(uParam3, 80, 1);
					func_45(uParam3, 81, 1);
					func_45(uParam3, 82, 1);
					func_45(uParam3, 91, 1);
					func_45(uParam3, 92, 1);
					func_43(uParam2, 66, 1);
					func_43(uParam2, 67, 1);
					func_43(uParam2, 68, 1);
					func_43(uParam2, 69, 1);
					func_43(uParam2, 70, 1);
					func_43(uParam2, 71, 1);
					func_43(uParam2, 72, 1);
					func_43(uParam2, 73, 1);
					func_43(uParam2, 77, 1);
					func_43(uParam2, 78, 1);
					func_43(uParam2, 79, 1);
					func_43(uParam2, 80, 1);
					func_43(uParam2, 81, 1);
					func_43(uParam2, 90, 1);
					func_43(uParam2, 91, 1);
					func_45(uParam3, 38, 1);
					func_45(uParam3, 47, 1);
					func_45(uParam3, 111, 1);
					func_43(uParam2, 37, 1);
					func_43(uParam2, 46, 1);
					func_43(uParam2, 110, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_42(uParam2, uParam3, uParam4);
					break;
				
				case 69:
				case 70:
				case 71:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 4, 1);
							func_45(uParam3, 6, 1);
							func_45(uParam3, 10, 1);
							func_45(uParam3, 54, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 56, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 37, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 106, 1);
							func_45(uParam3, 114, 1);
							func_45(uParam3, 116, 1);
							func_45(uParam3, 117, 1);
							func_45(uParam3, 118, 1);
							func_45(uParam3, 119, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 9, 1);
							func_43(uParam2, 10, 1);
							func_43(uParam2, 53, 1);
							func_43(uParam2, 56, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 36, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 105, 1);
							func_43(uParam2, 113, 1);
							func_43(uParam2, 114, 1);
							func_43(uParam2, 115, 1);
							func_43(uParam2, 116, 1);
							func_43(uParam2, 117, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 4, 1);
							func_45(uParam3, 6, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 19, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 37, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 106, 1);
							func_45(uParam3, 114, 1);
							func_45(uParam3, 116, 1);
							func_45(uParam3, 117, 1);
							func_45(uParam3, 118, 1);
							func_45(uParam3, 119, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 9, 1);
							func_43(uParam2, 10, 1);
							func_43(uParam2, 53, 1);
							func_43(uParam2, 56, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 30, 1);
							func_43(uParam2, 31, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 36, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 105, 1);
							func_43(uParam2, 113, 1);
							func_43(uParam2, 114, 1);
							func_43(uParam2, 115, 1);
							func_43(uParam2, 116, 1);
							func_43(uParam2, 117, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 106, 1);
							func_45(uParam3, 114, 1);
							func_45(uParam3, 116, 1);
							func_45(uParam3, 117, 1);
							func_45(uParam3, 118, 1);
							func_45(uParam3, 119, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 105, 1);
							func_43(uParam2, 113, 1);
							func_43(uParam2, 114, 1);
							func_43(uParam2, 115, 1);
							func_43(uParam2, 116, 1);
							func_43(uParam2, 117, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_42(uParam2, uParam3, uParam4);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_47(uParam4, 115, 1);
							func_47(uParam4, 116, 1);
							func_42(uParam2, uParam3, uParam4);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 4, 1);
							break;
						
						case 1:
							func_47(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_47(uParam4, 110, 1);
							func_47(uParam4, 112, 1);
							func_42(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 5, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 7, 1);
							func_45(uParam3, 0, 1);
							func_45(uParam3, 12, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 15, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 17, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 21, 1);
							func_45(uParam3, 25, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 30, 1);
							func_45(uParam3, 31, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 39, 1);
							func_45(uParam3, 37, 1);
							func_43(uParam2, 0, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 7, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 15, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 17, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 24, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 30, 1);
							func_43(uParam2, 31, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 36, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 1:
							func_45(uParam3, 3, 1);
							func_45(uParam3, 7, 1);
							func_45(uParam3, 0, 1);
							func_45(uParam3, 12, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 15, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 17, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 21, 1);
							func_45(uParam3, 25, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 30, 1);
							func_45(uParam3, 31, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 39, 1);
							func_43(uParam2, 0, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 7, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 15, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 17, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 24, 1);
							func_43(uParam2, 38, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 7, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 43, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
						
						case 2:
							func_45(uParam3, 1, 1);
							func_45(uParam3, 3, 1);
							func_45(uParam3, 4, 1);
							func_45(uParam3, 5, 1);
							func_45(uParam3, 7, 1);
							func_45(uParam3, 10, 1);
							func_45(uParam3, 54, 1);
							func_45(uParam3, 55, 1);
							func_45(uParam3, 56, 1);
							func_45(uParam3, 0, 1);
							func_45(uParam3, 12, 1);
							func_45(uParam3, 13, 1);
							func_45(uParam3, 15, 1);
							func_45(uParam3, 16, 1);
							func_45(uParam3, 48, 1);
							func_45(uParam3, 49, 1);
							func_45(uParam3, 17, 1);
							func_45(uParam3, 18, 1);
							func_45(uParam3, 50, 1);
							func_45(uParam3, 51, 1);
							func_45(uParam3, 52, 1);
							func_45(uParam3, 53, 1);
							func_45(uParam3, 62, 1);
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_45(uParam3, 20, 1);
							func_45(uParam3, 21, 1);
							func_45(uParam3, 25, 1);
							func_45(uParam3, 26, 1);
							func_45(uParam3, 27, 1);
							func_45(uParam3, 30, 1);
							func_45(uParam3, 31, 1);
							func_45(uParam3, 32, 1);
							func_45(uParam3, 33, 1);
							func_45(uParam3, 37, 1);
							func_45(uParam3, 39, 1);
							func_43(uParam2, 0, 1);
							func_43(uParam2, 1, 1);
							func_43(uParam2, 2, 1);
							func_43(uParam2, 3, 1);
							func_43(uParam2, 4, 1);
							func_43(uParam2, 5, 1);
							func_43(uParam2, 6, 1);
							func_43(uParam2, 7, 1);
							func_43(uParam2, 8, 1);
							func_43(uParam2, 9, 1);
							func_43(uParam2, 10, 1);
							func_43(uParam2, 53, 1);
							func_43(uParam2, 56, 1);
							func_43(uParam2, 55, 1);
							func_43(uParam2, 11, 1);
							func_43(uParam2, 12, 1);
							func_43(uParam2, 13, 1);
							func_43(uParam2, 14, 1);
							func_43(uParam2, 15, 1);
							func_43(uParam2, 16, 1);
							func_43(uParam2, 47, 1);
							func_43(uParam2, 48, 1);
							func_43(uParam2, 17, 1);
							func_43(uParam2, 18, 1);
							func_43(uParam2, 49, 1);
							func_43(uParam2, 50, 1);
							func_43(uParam2, 51, 1);
							func_43(uParam2, 52, 1);
							func_43(uParam2, 62, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							func_43(uParam2, 19, 1);
							func_43(uParam2, 20, 1);
							func_43(uParam2, 21, 1);
							func_43(uParam2, 22, 1);
							func_43(uParam2, 54, 1);
							func_43(uParam2, 23, 1);
							func_43(uParam2, 24, 1);
							func_43(uParam2, 26, 1);
							func_43(uParam2, 27, 1);
							func_43(uParam2, 28, 1);
							func_43(uParam2, 29, 1);
							func_43(uParam2, 30, 1);
							func_43(uParam2, 31, 1);
							func_43(uParam2, 32, 1);
							func_43(uParam2, 33, 1);
							func_43(uParam2, 36, 1);
							func_43(uParam2, 38, 1);
							func_43(uParam2, 55, 1);
							func_47(uParam4, 1, 1);
							func_47(uParam4, 2, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 3, 1);
							func_47(uParam4, 4, 1);
							func_47(uParam4, 14, 1);
							func_47(uParam4, 15, 1);
							func_47(uParam4, 16, 1);
							func_47(uParam4, 6, 1);
							func_47(uParam4, 8, 1);
							func_47(uParam4, 9, 1);
							func_47(uParam4, 10, 1);
							func_47(uParam4, 12, 1);
							func_47(uParam4, 13, 1);
							func_47(uParam4, 17, 1);
							func_47(uParam4, 18, 1);
							func_47(uParam4, 19, 1);
							func_47(uParam4, 20, 1);
							func_47(uParam4, 59, 1);
							func_47(uParam4, 60, 1);
							func_47(uParam4, 61, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 62, 1);
							func_47(uParam4, 63, 1);
							func_47(uParam4, 64, 1);
							func_47(uParam4, 65, 1);
							func_47(uParam4, 66, 1);
							func_47(uParam4, 67, 1);
							func_47(uParam4, 68, 1);
							func_47(uParam4, 69, 1);
							func_47(uParam4, 70, 1);
							func_47(uParam4, 71, 1);
							func_47(uParam4, 72, 1);
							func_47(uParam4, 21, 1);
							func_47(uParam4, 22, 1);
							func_47(uParam4, 23, 1);
							func_47(uParam4, 24, 1);
							func_47(uParam4, 25, 1);
							func_47(uParam4, 26, 1);
							func_47(uParam4, 36, 1);
							func_47(uParam4, 46, 1);
							func_47(uParam4, 38, 1);
							func_47(uParam4, 29, 1);
							func_47(uParam4, 28, 1);
							func_47(uParam4, 31, 1);
							func_47(uParam4, 33, 1);
							func_47(uParam4, 34, 1);
							func_47(uParam4, 32, 1);
							func_47(uParam4, 92, 1);
							func_47(uParam4, 93, 1);
							func_47(uParam4, 94, 1);
							func_47(uParam4, 96, 1);
							func_47(uParam4, 97, 1);
							func_47(uParam4, 98, 1);
							func_47(uParam4, 100, 1);
							func_47(uParam4, 103, 1);
							func_47(uParam4, 104, 1);
							func_47(uParam4, 105, 1);
							func_47(uParam4, 106, 1);
							func_47(uParam4, 107, 1);
							func_47(uParam4, 108, 1);
							func_45(uParam3, 65, 1);
							func_45(uParam3, 67, 1);
							func_45(uParam3, 68, 1);
							func_45(uParam3, 69, 1);
							func_45(uParam3, 70, 1);
							func_45(uParam3, 71, 1);
							func_45(uParam3, 72, 1);
							func_45(uParam3, 73, 1);
							func_45(uParam3, 74, 1);
							func_45(uParam3, 75, 1);
							func_45(uParam3, 76, 1);
							func_45(uParam3, 77, 1);
							func_45(uParam3, 78, 1);
							func_45(uParam3, 79, 1);
							func_45(uParam3, 80, 1);
							func_45(uParam3, 81, 1);
							func_45(uParam3, 82, 1);
							func_45(uParam3, 91, 1);
							func_45(uParam3, 92, 1);
							func_43(uParam2, 64, 1);
							func_43(uParam2, 65, 1);
							func_43(uParam2, 66, 1);
							func_43(uParam2, 67, 1);
							func_43(uParam2, 68, 1);
							func_43(uParam2, 69, 1);
							func_43(uParam2, 70, 1);
							func_43(uParam2, 71, 1);
							func_43(uParam2, 72, 1);
							func_43(uParam2, 73, 1);
							func_43(uParam2, 74, 1);
							func_43(uParam2, 75, 1);
							func_43(uParam2, 77, 1);
							func_43(uParam2, 78, 1);
							func_43(uParam2, 79, 1);
							func_43(uParam2, 80, 1);
							func_43(uParam2, 81, 1);
							func_43(uParam2, 90, 1);
							func_43(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_43(uParam2, 2, 1);
							func_43(uParam2, 20, 1);
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
					func_41(2, 64, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_41(2, 65, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_42(var uParam0, var uParam1, var uParam2)//Position - 0x93DC
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_47(uParam2, 124, 1);
	func_47(uParam2, 125, 1);
	func_47(uParam2, 126, 1);
	func_47(uParam2, 127, 1);
	func_47(uParam2, 128, 1);
	func_47(uParam2, 129, 1);
	func_47(uParam2, 130, 1);
	func_47(uParam2, 131, 1);
	func_47(uParam2, 132, 1);
	func_47(uParam2, 133, 1);
	func_47(uParam2, 136, 1);
	func_47(uParam2, 138, 1);
	func_47(uParam2, 139, 1);
	func_47(uParam2, 143, 1);
	func_47(uParam2, 144, 1);
	func_47(uParam2, 145, 1);
	func_47(uParam2, 147, 1);
}

void func_43(var uParam0, int iParam1, bool bParam2)//Position - 0x9494
{
	func_44(uParam0, iParam1, bParam2);
}

void func_44(var uParam0, int iParam1, bool bParam2)//Position - 0x94A6
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

void func_45(var uParam0, int iParam1, bool bParam2)//Position - 0x94F7
{
	func_44(uParam0, iParam1, bParam2);
}

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x9509
{
	func_47(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							break;
						
						case 1:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
							break;
						
						case 2:
							func_45(uParam3, 38, 1);
							func_45(uParam3, 47, 1);
							func_45(uParam3, 111, 1);
							func_43(uParam2, 37, 1);
							func_43(uParam2, 46, 1);
							func_43(uParam2, 110, 1);
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
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 16, 1);
						func_43(uParam2, 47, 1);
						func_43(uParam2, 48, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
					}
					func_47(uParam4, 3, 1);
					func_47(uParam4, 4, 1);
					func_47(uParam4, 5, 1);
					func_47(uParam4, 6, 1);
					func_47(uParam4, 7, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 14, 1);
					func_47(uParam4, 15, 1);
					func_47(uParam4, 16, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_47(uParam4, 110, 1);
					func_47(uParam4, 112, 1);
					func_47(uParam4, 115, 1);
					func_47(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
					}
					func_47(uParam4, 9, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					break;
				
				case 10:
					func_47(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_45(uParam3, 3, 1);
						func_45(uParam3, 4, 1);
						func_45(uParam3, 6, 1);
						func_45(uParam3, 10, 1);
						func_45(uParam3, 54, 1);
						func_45(uParam3, 55, 1);
						func_45(uParam3, 56, 1);
						func_45(uParam3, 13, 1);
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_45(uParam3, 20, 1);
						func_45(uParam3, 26, 1);
						func_45(uParam3, 27, 1);
						func_45(uParam3, 32, 1);
						func_45(uParam3, 33, 1);
						func_45(uParam3, 37, 1);
						func_45(uParam3, 39, 1);
						func_45(uParam3, 106, 1);
						func_45(uParam3, 114, 1);
						func_45(uParam3, 116, 1);
						func_45(uParam3, 117, 1);
						func_45(uParam3, 118, 1);
						func_45(uParam3, 119, 1);
						func_43(uParam2, 3, 1);
						func_43(uParam2, 4, 1);
						func_43(uParam2, 6, 1);
						func_43(uParam2, 8, 1);
						func_43(uParam2, 9, 1);
						func_43(uParam2, 10, 1);
						func_43(uParam2, 53, 1);
						func_43(uParam2, 56, 1);
						func_43(uParam2, 55, 1);
						func_43(uParam2, 13, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
						func_43(uParam2, 21, 1);
						func_43(uParam2, 26, 1);
						func_43(uParam2, 27, 1);
						func_43(uParam2, 28, 1);
						func_43(uParam2, 32, 1);
						func_43(uParam2, 36, 1);
						func_43(uParam2, 38, 1);
						func_43(uParam2, 55, 1);
						func_43(uParam2, 14, 1);
						func_43(uParam2, 105, 1);
						func_43(uParam2, 113, 1);
						func_43(uParam2, 114, 1);
						func_43(uParam2, 115, 1);
						func_43(uParam2, 116, 1);
						func_43(uParam2, 117, 1);
					}
					func_47(uParam4, 2, 1);
					func_47(uParam4, 3, 1);
					func_47(uParam4, 4, 1);
					func_47(uParam4, 14, 1);
					func_47(uParam4, 15, 1);
					func_47(uParam4, 16, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 32, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_47(uParam4, 110, 1);
					func_47(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
						func_43(uParam2, 19, 1);
					}
					func_47(uParam4, 3, 1);
					func_47(uParam4, 6, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 32, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					func_47(uParam4, 110, 1);
					func_47(uParam4, 112, 1);
					func_47(uParam4, 115, 1);
					func_47(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_45(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_47(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_43(uParam2, 16, 1);
						func_43(uParam2, 47, 1);
						func_43(uParam2, 48, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
					}
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_45(uParam3, 3, 1);
						func_45(uParam3, 7, 1);
						func_45(uParam3, 0, 1);
						func_45(uParam3, 12, 1);
						func_45(uParam3, 13, 1);
						func_45(uParam3, 15, 1);
						func_45(uParam3, 16, 1);
						func_45(uParam3, 48, 1);
						func_45(uParam3, 49, 1);
						func_45(uParam3, 17, 1);
						func_45(uParam3, 18, 1);
						func_45(uParam3, 50, 1);
						func_45(uParam3, 51, 1);
						func_45(uParam3, 52, 1);
						func_45(uParam3, 53, 1);
						func_45(uParam3, 38, 1);
						func_45(uParam3, 47, 1);
						func_45(uParam3, 111, 1);
						func_45(uParam3, 62, 1);
						func_45(uParam3, 20, 1);
						func_45(uParam3, 21, 1);
						func_45(uParam3, 25, 1);
						func_45(uParam3, 26, 1);
						func_45(uParam3, 27, 1);
						func_45(uParam3, 30, 1);
						func_45(uParam3, 31, 1);
						func_45(uParam3, 32, 1);
						func_45(uParam3, 33, 1);
						func_45(uParam3, 39, 1);
						func_45(uParam3, 37, 1);
						func_45(uParam3, 55, 1);
						func_43(uParam2, 0, 1);
						func_43(uParam2, 2, 1);
						func_43(uParam2, 3, 1);
						func_43(uParam2, 4, 1);
						func_43(uParam2, 6, 1);
						func_43(uParam2, 7, 1);
						func_43(uParam2, 8, 1);
						func_43(uParam2, 11, 1);
						func_43(uParam2, 13, 1);
						func_43(uParam2, 15, 1);
						func_43(uParam2, 16, 1);
						func_43(uParam2, 47, 1);
						func_43(uParam2, 48, 1);
						func_43(uParam2, 17, 1);
						func_43(uParam2, 18, 1);
						func_43(uParam2, 49, 1);
						func_43(uParam2, 50, 1);
						func_43(uParam2, 51, 1);
						func_43(uParam2, 52, 1);
						func_43(uParam2, 62, 1);
						func_43(uParam2, 37, 1);
						func_43(uParam2, 46, 1);
						func_43(uParam2, 110, 1);
						func_43(uParam2, 19, 1);
						func_43(uParam2, 20, 1);
						func_43(uParam2, 21, 1);
						func_43(uParam2, 22, 1);
						func_43(uParam2, 54, 1);
						func_43(uParam2, 24, 1);
						func_43(uParam2, 26, 1);
						func_43(uParam2, 27, 1);
						func_43(uParam2, 28, 1);
						func_43(uParam2, 30, 1);
						func_43(uParam2, 31, 1);
						func_43(uParam2, 32, 1);
						func_43(uParam2, 38, 1);
						func_43(uParam2, 36, 1);
					}
					func_47(uParam4, 3, 1);
					func_47(uParam4, 3, 1);
					func_47(uParam4, 4, 1);
					func_47(uParam4, 14, 1);
					func_47(uParam4, 15, 1);
					func_47(uParam4, 16, 1);
					func_47(uParam4, 8, 1);
					func_47(uParam4, 9, 1);
					func_47(uParam4, 10, 1);
					func_47(uParam4, 12, 1);
					func_47(uParam4, 13, 1);
					func_47(uParam4, 17, 1);
					func_47(uParam4, 18, 1);
					func_47(uParam4, 19, 1);
					func_47(uParam4, 20, 1);
					func_47(uParam4, 59, 1);
					func_47(uParam4, 60, 1);
					func_47(uParam4, 61, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 62, 1);
					func_47(uParam4, 63, 1);
					func_47(uParam4, 64, 1);
					func_47(uParam4, 65, 1);
					func_47(uParam4, 66, 1);
					func_47(uParam4, 67, 1);
					func_47(uParam4, 68, 1);
					func_47(uParam4, 69, 1);
					func_47(uParam4, 70, 1);
					func_47(uParam4, 71, 1);
					func_47(uParam4, 72, 1);
					func_47(uParam4, 21, 1);
					func_47(uParam4, 22, 1);
					func_47(uParam4, 23, 1);
					func_47(uParam4, 24, 1);
					func_47(uParam4, 25, 1);
					func_47(uParam4, 26, 1);
					func_47(uParam4, 36, 1);
					func_47(uParam4, 46, 1);
					func_47(uParam4, 38, 1);
					func_47(uParam4, 29, 1);
					func_47(uParam4, 28, 1);
					func_47(uParam4, 31, 1);
					func_47(uParam4, 33, 1);
					func_47(uParam4, 34, 1);
					func_47(uParam4, 92, 1);
					func_47(uParam4, 93, 1);
					func_47(uParam4, 94, 1);
					func_47(uParam4, 96, 1);
					func_47(uParam4, 97, 1);
					func_47(uParam4, 98, 1);
					func_47(uParam4, 100, 1);
					func_47(uParam4, 103, 1);
					func_47(uParam4, 104, 1);
					func_47(uParam4, 105, 1);
					func_47(uParam4, 106, 1);
					func_47(uParam4, 107, 1);
					func_47(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)//Position - 0xA9D3
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

int func_48()//Position - 0xAA25
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0xAA3D
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

void func_50(float fParam0)//Position - 0xAB7C
{
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true), "CELL_BORDER" /* GXT: Border */);
}

void func_51(float fParam0)//Position - 0xAB9C
{
	if (Global_1938776)
	{
		fParam0 = -1f;
	}
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/, true), "CELL_FILTER" /* GXT: Filter */);
}

void func_52()//Position - 0xABC6
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
	func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_51(5f);
	func_50(6f);
	func_53(7f);
	func_30(8f);
	if (bLocal_60)
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
	}
	if (!func_62(14))
	{
		if ((Global_79389 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_138, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /* GXT: Action: ~a~ */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4544069));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_53(float fParam0)//Position - 0xACD3
{
	func_78(iLocal_139, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true), "CELL_ACCYC" /* GXT: Cycle Action */);
}

void func_54()//Position - 0xACF3
{
	func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
	func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
	func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_55()//Position - 0xADCC
{
	if (iLocal_154 == 1)
	{
		func_56();
		return;
	}
	if (iLocal_131 == 0 && iLocal_132 == 0)
	{
		func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_66());
		if (iLocal_129)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					if (func_179())
					{
						func_51(3f);
						func_50(4f);
					}
				}
				else if ((Global_79389 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61())
				{
					func_52();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_179())
					{
						func_51(5f);
						func_50(6f);
						if (func_31(1))
						{
							func_30(7f);
							if (bLocal_60)
							{
								func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
							}
						}
						else if (bLocal_60)
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
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
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					if (func_179())
					{
						func_51(6f);
						func_50(7f);
						func_78(iLocal_139, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
				else
				{
					func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_179())
					{
						func_51(3f);
						func_50(4f);
						func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!func_166())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
					else
					{
						func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
				}
				func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
				func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
				func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
				if (func_179())
				{
					if (!func_166())
					{
						func_51(7f);
						func_50(8f);
						if (bLocal_61)
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
						}
						func_78(iLocal_139, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
				else
				{
					if (!func_166())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
						}
						else
						{
							func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
						}
					}
					func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_179())
					{
						if (!func_166())
						{
							func_51(4f);
							func_50(5f);
							func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_56()//Position - 0xB283
{
	func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
	func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_66());
	func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_57()//Position - 0xB35C
{
	if (iLocal_129)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_71, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_72);
	}
}

void func_58(bool bParam0)//Position - 0xB37A
{
	if (iLocal_154 == 1)
	{
		return;
	}
	if (Global_4718592.f_178912 == 1)
	{
	}
	else if (Global_4718592.f_178913 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(bParam0);
	}
}

void func_59()//Position - 0xB3B3
{
	if (iLocal_59 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_17[Global_4541808], "phone_cam12DUMMY"))
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

void func_60()//Position - 0xB3EB
{
	func_170(iLocal_138, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_179())
	{
		if (!Global_1938776)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_61()//Position - 0xB42A
{
	if (func_62(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
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

bool func_62(int iParam0)//Position - 0xB4A6
{
	return Global_44042 == iParam0;
}

void func_63(char* sParam0)//Position - 0xB4B4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_64()//Position - 0xB4C6
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_RT_RSTICK" /* GXT: Tilt Head */);
		func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 1, true), "CELL_RT_LSTICK" /* GXT: Rotate Head */);
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true), "CELL_RT_RSTICK" /* GXT: Tilt Head */);
		func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 0, true), "CELL_RT_LSTICK" /* GXT: Rotate Head */);
	}
}

void func_65()//Position - 0xB575
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || func_4())
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	func_78(iLocal_139, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_LT_RSTICK" /* GXT: Pan Camera */);
	if (func_62(14))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_LT_LSTICK" /* GXT: Rotate Camera */);
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_LT_LSTICKZ" /* GXT: Zoom Camera */);
		func_78(iLocal_139, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_LT_LSTICK" /* GXT: Rotate Camera */);
	}
}

char* func_66()//Position - 0xB627
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1963197))
	{
		return func_77(&Global_1963197);
	}
	if (func_76())
	{
		return "FHHUD_SENDLES" /* GXT: Send to Lester */;
	}
	if (func_74())
	{
		return "CSH_PHONEC" /* GXT: Send to Pavel */;
	}
	if (func_73(PLAYER::PLAYER_ID(), 275) && Global_1963190)
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
	switch (func_67(PLAYER::PLAYER_ID()))
	{
		case 3:
			return "FXR_FRAN_PHTO" /* GXT: Send to Franklin */;
		
		case 2:
			return "FXR_IMAN_PHTO" /* GXT: Send to Imani */;
		
		default:
	}
	if (BitTest(Global_2708057.f_536, 3))
	{
		return "ANIMAPHOCELL_1" /* GXT: Send to LS Tourist Board */;
	}
	return "CELL_287" /* GXT: Send Photo(s) */;
}

int func_67(int iParam0)//Position - 0xB6FC
{
	if (func_71(iParam0) == 264)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_68(int iParam0)//Position - 0xB71A
{
	if (func_69(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)//Position - 0xB73D
{
	if (func_70(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(var uParam0)//Position - 0xB781
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

int func_71(int iParam0)//Position - 0xB7A3
{
	if (func_70(iParam0))
	{
		if (func_69(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_72(int iParam0)//Position - 0xB7CF
{
	if (func_71(iParam0) == 271)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_73(int iParam0, int iParam1)//Position - 0xB7ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1882553)
	{
		if (Global_1882553[iVar1] == iParam1)
		{
			if (Global_1882632[iVar0 /*146*/].f_82.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()//Position - 0xB83E
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

int func_75(int iParam0)//Position - 0xB880
{
	if (func_71(iParam0) == 256)
	{
		return func_68(iParam0);
	}
	return -1;
}

int func_76()//Position - 0xB89E
{
	switch (Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_33)
	{
		case 233:
			switch (Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1971390)
	{
		return 1;
	}
	return 0;
}

var func_77(var uParam0)//Position - 0xB920
{
	return uParam0;
}

void func_78(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)//Position - 0xB92A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_79(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_63(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_79(char* sParam0)//Position - 0xB969
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_80()//Position - 0xB977
{
	if (Global_79389)
	{
		switch (Global_23403)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					func_165("CELL_CAM_SELFIE_0_KM" /* GXT: Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode. */, -1);
				}
				else
				{
					func_165("CELL_CAM_SELFIE_0" /* GXT: Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode. */, -1);
				}
				Global_23403++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						func_165("CELL_CAM_SELFIE_1_KM" /* GXT: Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode. */, -1);
					}
					else
					{
						func_165("CELL_CAM_SELFIE_1" /* GXT: Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression. */, -1);
					}
					Global_23403++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_23402)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					func_165("CELL_CAM_SELFIE_0_KM" /* GXT: Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode. */, -1);
				}
				else
				{
					func_165("CELL_CAM_SELFIE_0" /* GXT: Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode. */, -1);
				}
				Global_23402++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						func_165("CELL_CAM_SELFIE_1_KM" /* GXT: Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode. */, -1);
					}
					else
					{
						func_165("CELL_CAM_SELFIE_1" /* GXT: Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression. */, -1);
					}
					Global_23402++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_81()//Position - 0xBA73
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
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
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
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
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

void func_82(float fParam0)//Position - 0xBBF2
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < -1f)
	{
		fLocal_159 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_159);
}

void func_83(float fParam0)//Position - 0xBC1E
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_160);
}

void func_84(float fParam0)//Position - 0xBC4A
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_161);
}

void func_85()//Position - 0xBC76
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
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/) && !func_166())
			{
				MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
				fLocal_155 = 0.5f;
				fLocal_156 = 0.85f;
				fLocal_157 = 0.5f;
				fLocal_158 = -0.25f;
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
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/) && !func_166())
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
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
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_89(fVar6);
		func_88(fVar7);
		func_87(fVar4);
		if (!func_62(14))
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
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!func_62(14))
		{
			func_86(fVar5);
		}
	}
}

void func_86(float fParam0)//Position - 0xBFB5
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1f)
	{
		fLocal_157 = 1f;
	}
	else if (fLocal_157 < 0f)
	{
		fLocal_157 = 0f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_157);
}

void func_87(float fParam0)//Position - 0xBFE1
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < -1f)
	{
		fLocal_158 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_158);
}

void func_88(float fParam0)//Position - 0xC00F
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 1.5f)
	{
		fLocal_156 = 1.5f;
	}
	else if (fLocal_156 < 0.5f)
	{
		fLocal_156 = 0.5f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_156);
}

void func_89(float fParam0)//Position - 0xC04B
{
	fLocal_155 = (fLocal_155 + fParam0);
	if (fLocal_155 > 2f)
	{
		fLocal_155 = 2f;
	}
	else if (fLocal_155 < -1.7f)
	{
		fLocal_155 = -1.7f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_155);
}

void func_90()//Position - 0xC07F
{
	if (Global_79650 || Global_79651)
	{
		return;
	}
	if (iLocal_122 == 0)
	{
		if (!iLocal_148)
		{
			if (Global_4718592.f_178912 == 0 && Global_4718592.f_178913 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_139, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_125 == 0)
	{
		if (Global_20872)
		{
			if (Global_21145)
			{
				if (iLocal_148 == 0)
				{
					if (Global_20930.f_1 > 3)
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
	else if (Global_20872)
	{
	}
	else
	{
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.75f, func_66(), 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.79f, "CELL_286" /* GXT: Continue */, 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.83f, "CELL_281" /* GXT: Exit */, 0);
	}
}

void func_91(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xC1CE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC1E6
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_93()//Position - 0xC225
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_73, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_74);
}

void func_94()//Position - 0xC23E
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

void func_95()//Position - 0xC298
{
	Local_85 = { Global_20883[Global_20875 /*3*/] };
	if (Global_20872)
	{
		if (func_101())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_91);
			Local_85 = { Local_91 };
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
		}
		func_1(1);
		if (iLocal_119)
		{
			Local_79.f_0 = (Local_79.f_0 + 12f);
		}
		if (Local_79.f_0 > Local_85.f_0 || Local_79.f_0 == Local_85.f_0)
		{
			Local_79.f_0 = Local_85.f_0;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_79.f_1 = (Local_79.f_1 - 6f);
		}
		if (BitTest(Global_8802, 4))
		{
			if (Local_79.f_1 < (Local_85.f_1 + 15f) || Local_79.f_1 == (Local_85.f_1 + 15f))
			{
				Local_79.f_1 = (Local_85.f_1 + 15f);
				iLocal_120 = 0;
			}
		}
		else if (Local_79.f_1 < (Local_85.f_1 + 10f) || Local_79.f_1 == (Local_85.f_1 + 10f))
		{
			Local_79.f_1 = (Local_85.f_1 + 10f);
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_79.f_2 = (Local_79.f_2 - 10f);
		}
		if (Local_79.f_2 < Local_85.f_2 || Local_79.f_2 == Local_85.f_2)
		{
			Local_79.f_2 = Local_85.f_2;
			iLocal_121 = 0;
		}
		if (func_101() == 0)
		{
			if (BitTest(Global_8802, 4))
			{
				Local_85.f_1 = (Local_85.f_1 + 15f);
			}
			else
			{
				Local_85.f_1 = (Local_85.f_1 + 10f);
			}
			Local_85.f_0 = (Local_85.f_0 - 14f);
		}
		else
		{
			Local_85 = { Global_20876[Global_20875 /*3*/] };
		}
		Local_79 = { Local_85 };
		iLocal_121 = 0;
		iLocal_120 = 0;
		iLocal_119 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
		if ((iLocal_119 == 0 && iLocal_120 == 0) && iLocal_121 == 0)
		{
			iLocal_122 = 0;
			Local_82 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_82, 0);
			if (!BitTest(Global_8800, 22))
			{
				if (BitTest(Global_8800, 28))
				{
					StringCopy(&cLocal_143, "CELL_294", 16);
					func_100();
				}
				else
				{
					StringCopy(&cLocal_143, "CELL_293", 16);
					func_96();
				}
				iLocal_98 = 2;
			}
		}
	}
}

void func_96()//Position - 0xC48B
{
	func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8801, 28))
	{
		if (Global_4718592.f_178916 && func_97())
		{
			func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "BH_SEND" /* GXT: Send to Jenette */);
		}
		else
		{
			func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_286" /* GXT: Continue */);
		}
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_277" /* GXT: Delete */);
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_GALSAVE" /* GXT: Save to Gallery */);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_97()//Position - 0xC58A
{
	return func_98(Global_4718592.f_127178);
}

int func_98(int iParam0)//Position - 0xC5A0
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_99(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)//Position - 0xC5D4
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

void func_100()//Position - 0xC5F3
{
	func_170(iLocal_139, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_170(iLocal_139, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8801, 28))
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_66());
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_286" /* GXT: Continue */);
	}
	else
	{
		func_78(iLocal_139, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_66());
		func_78(iLocal_139, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_277" /* GXT: Delete */);
		func_78(iLocal_139, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_GALSAVE" /* GXT: Save to Gallery */);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_139, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_75);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_170(iLocal_139, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_101()//Position - 0xC6F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			if (Global_20873 == 0)
			{
				if (Global_8115 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22286 != 2)
						{
						}
					}
				}
			}
		}
		if (func_62(14))
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919896))))
		{
			return 0;
		}
		if (Global_113017)
		{
			return 0;
		}
	}
	if (Global_79389)
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
	if (Global_4543362 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113969.f_14054.f_89)
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

void func_102()//Position - 0xC939
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20900);
	Local_82 = { Global_20890 };
	Local_85 = { Global_20883[Global_20875 /*3*/] };
	if (func_101())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_88, 0);
		Local_82 = { Local_88 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Local_91);
		Local_85 = { Local_91 };
		iLocal_116 = 0;
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
	}
	if (Global_20872)
	{
		func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_58(0);
		iLocal_129 = 0;
		if (BitTest(Global_8800, 30))
		{
			iLocal_116 = 0;
			iLocal_117 = 0;
			iLocal_118 = 0;
			func_103();
		}
		if (iLocal_119)
		{
			if (BitTest(Global_8800, 9))
			{
				Local_79.f_0 = (Local_79.f_0 + 2f);
			}
			else
			{
				Local_79.f_0 = (Local_79.f_0 + 12f);
			}
		}
		if (Local_79.f_0 > Local_85.f_0 || Local_79.f_0 == Local_85.f_0)
		{
			Local_79.f_0 = Local_85.f_0;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_79.f_1 = (Local_79.f_1 - 6f);
		}
		if (Local_79.f_1 < Local_85.f_1 || Local_79.f_1 == Local_85.f_1)
		{
			Local_79.f_1 = Local_85.f_1;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_79.f_2 = (Local_79.f_2 - 10f);
		}
		if (Local_79.f_2 < Local_85.f_2 || Local_79.f_2 == Local_85.f_2)
		{
			Local_79.f_2 = Local_85.f_2;
			iLocal_121 = 0;
		}
		if (iLocal_121 == 0)
		{
			if (iLocal_116)
			{
				Local_76.f_0 = (Local_76.f_0 + 1f);
			}
			if (Local_76.f_0 > Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
			{
				Local_76.f_0 = Local_82.f_0;
				iLocal_116 = 0;
			}
			if (iLocal_117)
			{
				Local_76.f_1 = (Local_76.f_1 - 2f);
			}
			if (Local_76.f_1 < Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
			{
				Local_76.f_1 = Local_82.f_1;
				iLocal_117 = 0;
			}
			if (iLocal_118)
			{
				Local_76.f_2 = (Local_76.f_2 - 14f);
			}
			if (Local_76.f_2 < Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
			{
				Local_76.f_2 = Local_82.f_2;
				iLocal_118 = 0;
			}
		}
		if (iLocal_124)
		{
			Local_76 = { Local_82 };
			Local_79 = { Local_85 };
			iLocal_116 = 0;
			iLocal_117 = 0;
			iLocal_118 = 0;
			if (func_101() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
			}
			func_117(0, 1);
		}
		else if (func_101() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
		}
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			func_103();
		}
	}
	else
	{
		if (iLocal_116)
		{
			Local_76.f_0 = (Local_76.f_0 + 1f);
		}
		if (Local_76.f_0 > Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
		{
			iLocal_116 = 0;
		}
		if (iLocal_117)
		{
			Local_76.f_1 = (Local_76.f_1 - 2f);
		}
		if (Local_76.f_1 < Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_76.f_2 = (Local_76.f_2 - 7f);
		}
		if (Local_76.f_2 < Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
		{
			iLocal_118 = 0;
		}
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			func_103();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
}

void func_103()//Position - 0xCC3D
{
	func_1(0);
	if (func_101() == 0)
	{
		if (BitTest(Global_8800, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20876[Global_20875 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20883[Global_20875 /*3*/]);
		}
		Local_76 = { Local_82 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
	}
	Global_23319 = 0;
	func_124(0, 0);
	func_128(0);
	iLocal_113 = 0;
	func_119(1);
	Global_20917 = 1;
	Global_23322 = 0;
	if (Global_20930.f_1 > 4)
	{
		Global_20930.f_1 = 6;
		Global_20908 = 1;
		func_104();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
	{
		func_169(iLocal_138, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_139);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_138);
	if (Global_21147 == 1)
	{
		MISC::SET_BIT(&Global_8800, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
	MISC::CLEAR_BIT(&Global_8800, 18);
	MISC::CLEAR_BIT(&Global_8800, 21);
	HUD::CLEAR_FLOATING_HELP(0, true);
	MISC::CLEAR_BIT(&Global_8802, 3);
	MISC::CLEAR_BIT(&Global_4543084, 3);
	MISC::SET_GAME_PAUSED(false);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_23323 = 1;
	AUDIO::STOP_SOUND(iLocal_110);
	AUDIO::RELEASE_SOUND_ID(iLocal_110);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_119(1);
	MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
	MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
	if (Global_4541809 > 0 && Global_4541809 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_31[Global_4541809]);
	}
	func_117(0, 1);
	if (func_177(0, 1, iLocal_62, 1))
	{
		iLocal_62 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_104()//Position - 0xCDC6
{
	int iVar0;
	char cVar1[24];
	
	if (Global_20913 == 1)
	{
		return;
	}
	if (Global_20930.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		if (Global_79389)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20930.f_1)
	{
		case 6:
			func_170(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_110(Global_9405);
			if (Global_9405 == 1)
			{
				func_170(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_170(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_109(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_109(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_109(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_109(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_170(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
				func_170(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_170(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_109(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_109(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_108();
				func_170(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_63("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_63("CELL_217" /* GXT: INCOMING CALL */);
					func_63("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_107(Global_8115, Global_20930) == 0)
				{
					func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_170(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_170(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_108();
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_63("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_63("CELL_219" /* GXT: CONNECTED */);
					func_63("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22544)
					{
						StringCopy(&cVar1, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar1, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_107(Global_8115, Global_20930) == 0)
					{
						func_170(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar1, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_170(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_170(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_105();
			break;
		
		default:
			break;
	}
}

void func_105()//Position - 0xD3CC
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		func_106();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_109(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_109(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_109(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_109(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_106()//Position - 0xD55A
{
	if (Global_79389)
	{
		func_109(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
}

int func_107(int iParam0, int iParam1)//Position - 0xD58B
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_108()//Position - 0xD5B5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930 == 0)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
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
		if (Global_20930 == 1)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
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
		if (Global_20930 == 2)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
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
		if (Global_20930 == 3)
		{
			switch (Global_4543360)
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

void func_109(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xD82C
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
		func_63(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_63(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_63(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_63(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_63(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_110(int iParam0)//Position - 0xD8DF
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_111();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_62(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
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
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_63(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_109(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_111()//Position - 0xDE62
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_112()//Position - 0xDE85
{
	switch (iLocal_98)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, true);
			if (BitTest(Global_8800, 28))
			{
				StringCopy(&cLocal_143, "CELL_296", 16);
				func_55();
			}
			else
			{
				StringCopy(&cLocal_143, "CELL_295", 16);
				func_29();
			}
			break;
		
		case 2:
			if (!BitTest(Global_8800, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, true);
				if (BitTest(Global_8800, 28))
				{
					StringCopy(&cLocal_143, "CELL_294", 16);
					func_100();
				}
				else
				{
					StringCopy(&cLocal_143, "CELL_293", 16);
					func_96();
				}
				iLocal_98 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_113(bool bParam0)//Position - 0xDF0A
{
	if (bParam0)
	{
		if (!func_126())
		{
			MISC::SET_BIT(&Global_1956920, 17);
		}
	}
	else if (func_126())
	{
		MISC::CLEAR_BIT(&Global_1956920, 17);
	}
}

int func_114(int iParam0, int iParam1, int iParam2)//Position - 0xDF3D
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

void func_115(bool bParam0)//Position - 0xDFAF
{
	if (bParam0)
	{
		if (!func_116())
		{
			MISC::SET_BIT(&Global_1956920, 18);
		}
	}
	else if (func_116())
	{
		MISC::CLEAR_BIT(&Global_1956920, 18);
	}
}

bool func_116()//Position - 0xDFE2
{
	return BitTest(Global_1956920, 18);
}

void func_117(bool bParam0, bool bParam1)//Position - 0xDFF1
{
	if (bParam0)
	{
		if (func_118(0))
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

int func_118(int iParam0)//Position - 0xE065
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

void func_119(int iParam0)//Position - 0xE0BC
{
	if ((Global_4718592.f_178912 == 0 && Global_4718592.f_178913 == 0) && !Global_1938776)
	{
		if (func_120(PLAYER::PLAYER_ID()) && iParam0)
		{
			Global_1971463 = 1;
		}
		else
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

int func_120(int iParam0)//Position - 0xE10C
{
	if (iParam0 != func_123())
	{
		if (func_122(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_121(Global_2657971[iParam0 /*465*/].f_322.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)//Position - 0xE153
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
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_122(int iParam0, bool bParam1, bool bParam2)//Position - 0xE653
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_123()//Position - 0xE6B3
{
	return -1;
}

void func_124(bool bParam0, bool bParam1)//Position - 0xE6BC
{
	if (Global_4718592.f_178912 == 1)
	{
	}
	else if (Global_4718592.f_178913 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(bParam0, bParam1);
	}
}

int func_125()//Position - 0xE6EE
{
	if (BitTest(Global_8800, 15))
	{
		return 1;
	}
	return 0;
}

bool func_126()//Position - 0xE707
{
	return BitTest(Global_1956920, 17);
}

void func_127()//Position - 0xE716
{
	if (Global_20872)
	{
		Local_82 = { -90.3f, 0f, 90f };
		Local_85 = { 1.5f, 0f, -17f };
		if (func_101())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_88, 0);
			Local_82 = { Local_88 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_91);
			Local_85 = { Local_91 };
			iLocal_116 = 0;
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
		}
		if (iLocal_118 == 0)
		{
			if (iLocal_119)
			{
				Local_79.f_0 = (Local_79.f_0 - 14f);
			}
			if (Local_79.f_0 < Local_85.f_0 || Local_79.f_0 == Local_85.f_0)
			{
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_79.f_1 = (Local_79.f_1 + 7f);
			}
			if (Local_79.f_1 > Local_85.f_1 || Local_79.f_1 == Local_85.f_1)
			{
				iLocal_120 = 0;
			}
			if (iLocal_121)
			{
				Local_79.f_2 = (Local_79.f_2 + 12f);
			}
			if (Local_79.f_2 > Local_85.f_2 || Local_79.f_2 == Local_85.f_2)
			{
				iLocal_121 = 0;
			}
		}
		if (iLocal_116)
		{
			Local_76.f_0 = (Local_76.f_0 - 1f);
		}
		if (Local_76.f_0 < Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
		{
			Local_76.f_0 = Local_82.f_0;
			iLocal_116 = 0;
		}
		if (iLocal_117)
		{
			Local_76.f_1 = (Local_76.f_1 - 0.5f);
		}
		if (Local_76.f_1 < Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
		{
			Local_76.f_1 = Local_82.f_1;
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_76.f_2 = (Local_76.f_2 + 11f);
		}
		if (Local_76.f_2 > Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
		{
			Local_76.f_2 = Local_82.f_2;
			iLocal_118 = 0;
		}
		if (func_101() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
		}
	}
	else
	{
		Local_82 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_116)
		{
			Local_76.f_0 = (Local_76.f_0 - 1f);
		}
		if (Local_76.f_0 < Local_82.f_0 || Local_76.f_0 == Local_82.f_0)
		{
			iLocal_116 = 0;
		}
		if (iLocal_117)
		{
			Local_76.f_1 = (Local_76.f_1 + 2f);
		}
		if (Local_76.f_1 > Local_82.f_1 || Local_76.f_1 == Local_82.f_1)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_76.f_2 = (Local_76.f_2 + 7f);
		}
		if (Local_76.f_2 > Local_82.f_2 || Local_76.f_2 == Local_82.f_2)
		{
			iLocal_118 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
	}
	if (Global_20872)
	{
		if (((((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0)
		{
			if (func_101())
			{
			}
			else
			{
				Local_76 = { Local_82 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
				Local_79 = { Local_85 };
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_79);
			}
			if (iLocal_101 == 0)
			{
				Global_23320 = 0;
				func_124(1, 1);
				iLocal_113 = 1;
				func_128(1);
				func_60();
				func_129();
				func_58(0);
				SYSTEM::SETTIMERA(0);
				iLocal_140 = 1;
				iLocal_141 = 1;
				func_149();
				func_170(iLocal_138, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_142), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4543084, 2))
				{
					func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
				func_172();
			}
		}
	}
	else if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
	{
		Local_76 = { Local_82 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_76, 0);
		Global_23320 = 0;
	}
}

void func_128(bool bParam0)//Position - 0xEA8B
{
	if (func_179())
	{
		if (bParam0)
		{
			if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
			{
				GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(true);
				if (Global_4541809 > 0 && Global_4541809 < 99)
				{
					GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_31[Global_4541809], false);
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

void func_129()//Position - 0xEAE9
{
	if (Global_4541808 > 0 && Global_4541808 < 99)
	{
		if (!Global_1938776)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_17[Global_4541808]);
		}
	}
}

void func_130()//Position - 0xEB1A
{
	if (Global_20872)
	{
		iLocal_123 = 0;
		func_60();
		func_117(1, 1);
		func_124(1, 1);
		iLocal_113 = 1;
		Global_23323 = 1;
	}
}

void func_131()//Position - 0xEB42
{
	if (Global_4718592.f_178912 == 1 && func_132())
	{
		return;
	}
	if (iLocal_125 == 0)
	{
		if (BitTest(Global_8800, 28))
		{
			StringCopy(&cLocal_143, "CELL_296", 16);
			func_55();
		}
		else
		{
			StringCopy(&cLocal_143, "CELL_295", 16);
			func_29();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_143, "DUMMYCOMPARISON"))
		{
			fLocal_96 = fLocal_97;
			fLocal_94 = fLocal_95;
			fLocal_97 = fLocal_96;
			fLocal_95 = fLocal_94;
		}
		iLocal_98 = 1;
	}
}

int func_132()//Position - 0xEBAF
{
	if ((((((((func_144() || func_143()) || func_142()) || func_141()) || func_140()) || func_138()) || func_136()) || func_133()) || func_97())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_133()//Position - 0xEC2B
{
	return func_134(Global_4718592.f_127178);
}

int func_134(int iParam0)//Position - 0xEC41
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_135(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0)//Position - 0xEC75
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_136()//Position - 0xEC94
{
	return func_137(Global_4718592.f_127178);
}

int func_137(int iParam0)//Position - 0xECAA
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_138()//Position - 0xECE3
{
	return func_139(Global_4718592.f_127178);
}

int func_139(int iParam0)//Position - 0xECF9
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_140()//Position - 0xED33
{
	return Global_2684504.f_24;
}

var func_141()//Position - 0xED41
{
	return Global_2684504.f_21;
}

var func_142()//Position - 0xED4F
{
	return Global_2684504.f_19;
}

var func_143()//Position - 0xED5D
{
	return Global_2684504.f_18;
}

var func_144()//Position - 0xED6B
{
	return Global_2684504.f_17;
}

void func_145()//Position - 0xED79
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);
	}
}

void func_146()//Position - 0xED9B
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 0;
	iLocal_123 = 1;
}

void func_147()//Position - 0xEDB8
{
	func_148();
}

void func_148()//Position - 0xEDC4
{
	if (iLocal_149)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_149 = 0;
		}
	}
	if (iLocal_149 == 0)
	{
	}
}

void func_149()//Position - 0xEDE3
{
	if (Global_20930.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_138, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_150()//Position - 0xEE15
{
	if (func_62(14))
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
		Global_20930 = func_13();
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

void func_151(int iParam0)//Position - 0xEEB7
{
	if (func_153())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_166())
		{
			func_117(1, 1);
		}
		else
		{
			func_117(0, 0);
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
	if (!func_152())
	{
		Global_20930.f_1 = 3;
	}
}

int func_152()//Position - 0xEF41
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_153()//Position - 0xEF68
{
	return BitTest(Global_1956920, 19);
}

void func_154()//Position - 0xEF77
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 56 /*INPUT_DROP_WEAPON*/, true);
	if (iLocal_148 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20903);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20900);
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

int func_155()//Position - 0xF156
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

int func_156()//Position - 0xF1A9
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_163())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	if (func_161(159))
	{
		if (!func_160())
		{
			return 1;
		}
	}
	if (func_161(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_157() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_157()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_157()//Position - 0xF22D
{
	switch (func_159())
	{
		case 0:
			return func_158();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_158()//Position - 0xF260
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_159()//Position - 0xF284
{
	return Global_32948;
}

bool func_160()//Position - 0xF28F
{
	return Global_2684504.f_700;
}

int func_161(int iParam0)//Position - 0xF29E
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_162()//Position - 0xF2B5
{
	return Global_2696172;
}

bool func_163()//Position - 0xF2C1
{
	return Global_2684504.f_695;
}

void func_164()//Position - 0xF2D0
{
	if (iLocal_154 == 1)
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

void func_165(char* sParam0, int iParam1)//Position - 0xF30F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_166()//Position - 0xF326
{
	return BitTest(Global_1956920, 5);
}

void func_167()//Position - 0xF334
{
	if (func_168())
	{
		GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
		if (GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0))
		{
			iLocal_101 = 1;
			iLocal_109 = 0;
		}
		else
		{
			Global_23323 = 1;
			Global_20930.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_107 = 0;
		iLocal_108 = 0;
		if (iLocal_102 == 1)
		{
			if (iLocal_125 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
				{
					if (func_179())
					{
						if (Global_4541809 == 0)
						{
							if (!BitTest(Global_4543084, 2))
							{
								func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4543084, 2))
						{
							func_170(iLocal_138, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_138))
			{
				func_170(iLocal_138, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_170(iLocal_138, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432, -1082130432, -1082130432);
			}
			iLocal_102 = 0;
		}
		iLocal_109 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_168()//Position - 0xF48C
{
	if (Global_4718592.f_178912 == 1)
	{
		if (Global_79389)
		{
			return 0;
		}
	}
	if (Global_4718592.f_178913 == 1)
	{
		if (Global_79389)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (BitTest(Global_8801, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_169(int iParam0, char* sParam1)//Position - 0xF4E5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_170(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xF4FA
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

int func_171()//Position - 0xF55D
{
	if (Global_79389)
	{
		Global_20930 = 3;
	}
	else
	{
		Global_20930 = func_13();
	}
	if (Global_20930 > 3)
	{
		Global_20930 = 3;
	}
	return Global_113969.f_14054[Global_20930 /*20*/].f_7;
}

void func_172()//Position - 0xF593
{
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 8;
	}
	Global_23322 = 0;
	iLocal_125 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (Global_20872)
	{
		while (SYSTEM::TIMERA() < iLocal_135)
		{
			SYSTEM::WAIT(0);
			func_149();
			func_94();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		}
		func_169(iLocal_138, "OPEN_SHUTTER");
		func_164();
		func_131();
		iLocal_127 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_124(1, 1);
		func_128(1);
		func_60();
		func_129();
		func_58(0);
		iLocal_113 = 1;
	}
}

void func_173(int iParam0)//Position - 0xF627
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 15);
	}
}

bool func_174(bool bParam0)//Position - 0xF64A
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_175(int iParam0, bool bParam1)//Position - 0xF65B
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

void func_176()//Position - 0xF6E0
{
}

int func_177(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xF6E8
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

void func_178()//Position - 0xF71B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_155);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_156);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_157);
		}
		else
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_155);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_156);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_157);
		}
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_158);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_159);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_160);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_161);
	func_57();
}

int func_179()//Position - 0xF788
{
	if (iLocal_54 == 0)
	{
		iLocal_54 = 1;
	}
	return 1;
}

