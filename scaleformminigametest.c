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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	bool bLocal_21 = 0;
	bool bLocal_22 = 0;
	float fLocal_23 = 0f;
	bool bLocal_24 = 0;
	bool bLocal_25 = 0;
	float fLocal_26 = 0f;
	bool bLocal_27 = 0;
	bool bLocal_28 = 0;
	float fLocal_29 = 0f;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	float fLocal_32 = 0f;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	float fLocal_35 = 0f;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	float fLocal_38 = 0f;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	float fLocal_41 = 0f;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	float fLocal_44 = 0f;
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
	iLocal_18 = HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	iLocal_20 = 1;
	fLocal_23 = 0f;
	fLocal_26 = 0f;
	fLocal_29 = 0f;
	fLocal_32 = 0f;
	fLocal_35 = 0f;
	fLocal_38 = 0f;
	fLocal_41 = 0f;
	fLocal_44 = 0f;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	iLocal_16 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_16))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (iLocal_19 == 1)
		{
		}
		if (iLocal_20 == 1)
		{
			iLocal_20 = 0;
			iLocal_17 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			if (CAM::DOES_CAM_EXIST(iLocal_17))
			{
				CAM::SET_CAM_PARAMS(iLocal_17, -160.6632f, -1072.1438f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(iLocal_17, 0.01f);
				CAM::SET_CAM_FAR_CLIP(iLocal_17, 0.02f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			HUD::SET_BLIP_SPRITE(iLocal_18, 66 /*RADAR_RANDOM_CHARACTER*/);
		}
		iLocal_19 = 1;
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_16);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x13F
{
	if (Global_20792 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			Global_20792 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20792 = 0;
	}
	if (Global_20792 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			bLocal_21 = true;
			fLocal_23 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			bLocal_21 = true;
			fLocal_23 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			bLocal_21 = false;
			fLocal_23 = 0f;
		}
		if (!bLocal_21 == bLocal_22)
		{
			bLocal_22 = bLocal_21;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_23);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			bLocal_24 = true;
			fLocal_26 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			bLocal_24 = true;
			fLocal_26 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			bLocal_24 = false;
			fLocal_26 = 0f;
		}
		if (!bLocal_24 == bLocal_25)
		{
			bLocal_25 = bLocal_24;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_26);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			bLocal_27 = true;
			fLocal_29 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			bLocal_27 = true;
			fLocal_29 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			bLocal_27 = false;
			fLocal_29 = 0f;
		}
		if (!bLocal_27 == bLocal_28)
		{
			bLocal_28 = bLocal_27;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_29);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			bLocal_30 = true;
			fLocal_32 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			bLocal_30 = true;
			fLocal_32 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			bLocal_30 = false;
			fLocal_32 = 0f;
		}
		if (!bLocal_30 == bLocal_31)
		{
			bLocal_31 = bLocal_30;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_32);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_33 = true;
			fLocal_35 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_33 = true;
			fLocal_35 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_33 = false;
			fLocal_35 = 0f;
		}
		if (!bLocal_33 == bLocal_34)
		{
			bLocal_34 = bLocal_33;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_35);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			bLocal_36 = true;
			fLocal_38 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			bLocal_36 = true;
			fLocal_38 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			bLocal_36 = false;
			fLocal_38 = 0f;
		}
		if (!bLocal_36 == bLocal_37)
		{
			bLocal_37 = bLocal_36;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			bLocal_39 = true;
			fLocal_41 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			bLocal_39 = true;
			fLocal_41 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			bLocal_39 = false;
			fLocal_41 = 0f;
		}
		if (!bLocal_39 == bLocal_40)
		{
			bLocal_40 = bLocal_39;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_41);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			bLocal_42 = true;
			fLocal_44 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			bLocal_42 = true;
			fLocal_44 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			bLocal_42 = false;
			fLocal_44 = 0f;
		}
		if (!bLocal_42 == bLocal_43)
		{
			bLocal_43 = bLocal_42;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_44);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2()//Position - 0x43D
{
	if (CAM::DOES_CAM_EXIST(iLocal_17))
	{
		CAM::DESTROY_CAM(iLocal_17, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_3(0);
	MISC::SET_GAME_PAUSED(false);
	HUD::CLEAR_HELP(true);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_16);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0)//Position - 0x47A
{
	if (bParam0)
	{
		func_10();
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8684, 16);
		}
		Global_20813.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_20813.f_1 == 1)
	{
		if (!Global_20813.f_1 == 0)
		{
			Global_20813.f_1 = 3;
		}
	}
}

void func_4(int iParam0)//Position - 0x4DD
{
	if (func_8())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_5())
	{
		Global_20813.f_1 = 3;
	}
}

int func_5()//Position - 0x567
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x58E
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

bool func_7()//Position - 0x602
{
	return BitTest(Global_1956030, 5);
}

bool func_8()//Position - 0x610
{
	return BitTest(Global_1956030, 19);
}

int func_9(int iParam0)//Position - 0x61F
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_10()//Position - 0x676
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = 0;
		Global_22215 = 1;
	}
}

