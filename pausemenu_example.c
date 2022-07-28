#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)//Position - 0xBA
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)//Position - 0xD6
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_3(char* sParam0)//Position - 0x136
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

