#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	iLocal_0 = -1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	STREAMING::REQUEST_IPL("prologue06_int");
	STREAMING::REQUEST_IPL("prologue01");
	STREAMING::REQUEST_IPL("prologue02");
	STREAMING::REQUEST_IPL("prologue03");
	STREAMING::REQUEST_IPL("prologue04");
	STREAMING::REQUEST_IPL("prologue05");
	STREAMING::REQUEST_IPL("prologue06");
	STREAMING::REQUEST_IPL("prologuerd");
	STREAMING::REQUEST_IPL("Prologue01c");
	STREAMING::REQUEST_IPL("Prologue01d");
	STREAMING::REQUEST_IPL("Prologue01e");
	STREAMING::REQUEST_IPL("Prologue01f");
	STREAMING::REQUEST_IPL("Prologue01g");
	STREAMING::REQUEST_IPL("prologue01h");
	STREAMING::REQUEST_IPL("prologue01i");
	STREAMING::REQUEST_IPL("prologue01j");
	STREAMING::REQUEST_IPL("prologue01k");
	STREAMING::REQUEST_IPL("prologue01z");
	STREAMING::REQUEST_IPL("prologue03b");
	STREAMING::REQUEST_IPL("prologue04b");
	STREAMING::REQUEST_IPL("prologue05b");
	STREAMING::REQUEST_IPL("prologue06b");
	STREAMING::REQUEST_IPL("prologuerdb");
	STREAMING::REQUEST_IPL("prologue_occl");
	STREAMING::REQUEST_IPL("DES_ProTree_start");
	STREAMING::REQUEST_IPL("DES_ProTree_start_lod");
	STREAMING::REQUEST_IPL("prologue04_cover");
	STREAMING::REQUEST_IPL("prologue03_grv_fun");
	STREAMING::REMOVE_IPL("prologue03_grv_dug");
	STREAMING::REMOVE_IPL("prologue_grv_torch");
	STREAMING::SET_MAPDATACULLBOX_ENABLED("prologue", true);
	STREAMING::REQUEST_MODEL(joaat("csb_prolsec"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("csb_prolsec")))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), joaat("csb_prolsec"));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 5313.8f, -5207.2f, 83.5f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 169.2f);
	}
	HUD::DISPLAY_RADAR(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	SCRIPT::SHUTDOWN_LOADING_SCREEN();
	AUDIO::START_AUDIO_SCENE("MISSION_FAILED_SCENE");
	CAM::DO_SCREEN_FADE_IN(2500);
	STREAMING::NEW_LOAD_SCENE_STOP();
	HUD::REQUEST_ADDITIONAL_TEXT("NG_INSTALL", 0);
	while (true)
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, false);
		HUD::SET_TEXT_SCALE(0.5f, 0.5f);
		HUD::SET_TEXT_CENTRE(true);
		if (SYSTEM::TIMERA() > 10000 && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			iLocal_0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				SYSTEM::SETTIMERA(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		if (MISC::_HAS_ASYNC_INSTALL_FINISHED())
		{
			MISC::_CLEANUP_ASYNC_INSTALL();
			return;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x2F8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

