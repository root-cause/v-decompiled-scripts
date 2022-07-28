#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_5))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_5) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
							if (INTERIOR::IS_VALID_INTERIOR(iVar0))
							{
								if (INTERIOR::IS_INTERIOR_READY(iVar0))
								{
									if (INTERIOR::IS_INTERIOR_SCENE())
									{
										STREAMING::REQUEST_PTFX_ASSET();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4))
								{
									iLocal_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), true, false, true);
								}
								if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
									{
										iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
										if (INTERIOR::IS_VALID_INTERIOR(iVar0))
										{
											if (INTERIOR::IS_INTERIOR_READY(iVar0))
											{
												if (INTERIOR::IS_INTERIOR_SCENE())
												{
													iLocal_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_obfoundry_cauldron_steam", iLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x135
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(char* sParam0)//Position - 0x167
{
	func_3(sParam0);
}

void func_3(char* sParam0)//Position - 0x175
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

