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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55[4] = { 0, 0, 0, 0 };
	int iLocal_60 = 0;
	struct<3> Local_61[4];
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	bool bLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_78 = true;
	iLocal_84 = joaat("S_M_M_Pilot_01");
	iLocal_99 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	iLocal_97 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_97, false))
		{
			iLocal_98 = 5;
		}
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
			
			case 4:
				if (Global_97609)
				{
					iLocal_98 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_99);
	}
}

void func_1()//Position - 0x11A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar0], false) && !ENTITY::IS_ENTITY_VISIBLE(iLocal_49[iVar0])))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_49[iVar0]));
				PED::DELETE_PED(&(iLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_55[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_49[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_54))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_54);
			PED::DELETE_PED(&iLocal_60);
		}
		else
		{
			func_2(&iLocal_54, &iLocal_60);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
		}
	}
	if (bLocal_82)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)//Position - 0x233
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *iParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 1.4E-43f, 7E-44f, true);
				}
			}
		}
	}
}

void func_3(bool bParam0)//Position - 0x2B4
{
	if (bLocal_78)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iLocal_49[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_55[0], iLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_55[0], iLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], false))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iLocal_49[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[2], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_55[2], iLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_55[2], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_55[2], iLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0x493
{
	int iVar0;
	
	switch (iLocal_88)
	{
		case 0:
			Local_61[0 /*3*/] = { -1542.1127f, -3023.8025f, 23.2538f };
			Local_61[1 /*3*/] = { -3089.888f, -1960.0751f, 313.559f };
			Local_61[2 /*3*/] = { -1037.6381f, -3316.1196f, 23.2475f };
			Local_61[3 /*3*/] = { 451.174f, -4009.4602f, 135.1171f };
			Local_74 = { -1612.1736f, -2688.442f, 12.9444f };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_78 = false;
				}
				else
				{
					bLocal_78 = true;
				}
			}
			iLocal_88 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_84);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		
		case 2:
			if (!bLocal_82)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_84);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
			if (bLocal_82)
			{
				if (!CAM::IS_SPHERE_VISIBLE(Local_61[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Local_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_61[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(Local_74, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_61[0 /*3*/], 0f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_49[0], 240.3179f);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_49[0], false);
			iLocal_49[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_61[1 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_49[1], false);
			iLocal_49[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_61[2 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_49[2], false);
			iLocal_49[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_61[3 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_49[3], false);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
				{
					iLocal_55[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_49[iVar0], 4, iLocal_84, -1, true, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_49[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_49[iVar0], true, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_55[1]));
			func_8(&(iLocal_49[2]), &(iLocal_55[2]));
			func_8(&(iLocal_49[3]), &(iLocal_55[3]));
			if (bLocal_78)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_77 = 1;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		
		case 4:
			if (iLocal_81)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[3], false))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[3]))
					{
						if (!iLocal_79)
						{
							func_8(&(iLocal_49[3]), &(iLocal_55[3]));
							iLocal_79 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_87)
			{
				case 0:
					if (!iLocal_77)
					{
						if (bLocal_78)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]) && !CAM::IS_SPHERE_VISIBLE(Local_61[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_77 = 1;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_77)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[0]))
							{
								fLocal_85 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
					{
						if (bLocal_78)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]))
							{
								if (iLocal_81)
								{
									if (iLocal_79)
									{
										func_6(&(iLocal_49[1]), &(iLocal_55[1]));
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_80 = 0;
											iLocal_87 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_55[1]));
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_80 = 0;
										iLocal_87 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], false))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_61[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_55[2]));
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_49[2], 101, "AirportNew", true);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[2], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[2]))
						{
							fLocal_86 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_49[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_55[1]));
								iLocal_80 = 1;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[3], false))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_61[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[3]) && iLocal_80)
									{
										func_6(&(iLocal_49[3]), &(iLocal_55[3]));
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_49[3], 104, "AirplaneLandingRedux", true);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[3], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()//Position - 0xBB3
{
	fLocal_85 = 0f;
	iLocal_77 = 0;
	iLocal_81 = 1;
	iLocal_79 = 0;
}

void func_6(var uParam0, var uParam1)//Position - 0xBC7
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, true, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
}

void func_7()//Position - 0xBF2
{
	struct<3> Var0;
	
	switch (iLocal_83)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, true, true, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_54, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_54, true, true, false);
				VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_54, false);
				iLocal_60 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_54, 4, iLocal_84, -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, true);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_54))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_54))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_54) && !CAM::IS_SPHERE_VISIBLE(-1602.0862f, -2674.0386f, 12.9444f, 50f)) && SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_54, true)) > 62500f)
					{
						iLocal_83 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)//Position - 0xD31
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
}

void func_9()//Position - 0xD5C
{
}

int func_10()//Position - 0xD64
{
	return 1;
}

void func_11()//Position - 0xD6D
{
}

void func_12()//Position - 0xD75
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13()//Position - 0xD89
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_89))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_89);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_89, false) && !PED::IS_PED_INJURED(iLocal_90))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_89);
			PED::SET_PED_KEEP_TASK(iLocal_90, true);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_89, true) };
			fVar9 = ENTITY::GET_ENTITY_HEADING(iLocal_89);
			Var3 = { 0f, 500f, 50f };
			Var6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar9, Var3) };
			TASK::TASK_HELI_MISSION(iLocal_90, iLocal_89, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_95)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
	}
}

