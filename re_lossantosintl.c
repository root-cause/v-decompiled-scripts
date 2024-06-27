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
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53[4] = { 0, 0, 0, 0 };
	int iLocal_58 = 0;
	struct<3> Local_59[4];
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	bLocal_76 = true;
	iLocal_82 = joaat("S_M_M_Pilot_01");
	iLocal_97 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	iLocal_95 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_95, false))
		{
			iLocal_96 = 5;
		}
		switch (iLocal_96)
		{
			case 0:
				iLocal_96 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_96 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_96 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_96 = 4;
				break;
			
			case 4:
				if (Global_98441)
				{
					iLocal_96 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_97);
	}
}

void func_1()//Position - 0x11A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_47[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(iLocal_47[iVar0], false) && !ENTITY::IS_ENTITY_VISIBLE(iLocal_47[iVar0])))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_47[iVar0]));
				PED::DELETE_PED(&(iLocal_53[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_47[iVar0]), &(iLocal_53[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_47[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_53[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_52))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_52);
			PED::DELETE_PED(&iLocal_58);
		}
		else
		{
			func_2(&iLocal_52, &iLocal_58);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_52);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_58);
		}
	}
	if (bLocal_80)
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
	if (bLocal_76)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[0], false))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iLocal_47[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_53[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[0], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_53[0], iLocal_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_53[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[0], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_53[0], iLocal_47[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[2], false))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iLocal_47[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_53[2], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[2], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_53[2], iLocal_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_53[2], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[2], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_53[2], iLocal_47[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.4E-43f, 7E-44f, true);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0x493
{
	int iVar0;
	
	switch (iLocal_86)
	{
		case 0:
			Local_59[0 /*3*/] = { -1542.1127f, -3023.8025f, 23.2538f };
			Local_59[1 /*3*/] = { -3089.888f, -1960.0751f, 313.559f };
			Local_59[2 /*3*/] = { -1037.6381f, -3316.1196f, 23.2475f };
			Local_59[3 /*3*/] = { 451.174f, -4009.4602f, 135.1171f };
			Local_72 = { -1612.1736f, -2688.442f, 12.9444f };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_76 = false;
				}
				else
				{
					bLocal_76 = true;
				}
			}
			iLocal_86 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_82);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_86 = 2;
			break;
		
		case 2:
			if (!bLocal_80)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_82)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_80 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_82);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
			if (bLocal_80)
			{
				if (!CAM::IS_SPHERE_VISIBLE(Local_59[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Local_72, 50f))
				{
					iLocal_86 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_59[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(Local_72, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_47[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_59[0 /*3*/], 0f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_47[0], 240.3179f);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_47[0], false);
			iLocal_47[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_59[1 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_47[1], false);
			iLocal_47[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_59[2 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_47[2], false);
			iLocal_47[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_59[3 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_47[3], false);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[iVar0]))
				{
					iLocal_53[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_47[iVar0], 4, iLocal_82, -1, true, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_47[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_47[iVar0], true, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_47[1]), &(iLocal_53[1]));
			func_8(&(iLocal_47[2]), &(iLocal_53[2]));
			func_8(&(iLocal_47[3]), &(iLocal_53[3]));
			if (bLocal_76)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_75 = 1;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_86 = 4;
			break;
		
		case 4:
			if (iLocal_79)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[3], false))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_47[3]))
					{
						if (!iLocal_77)
						{
							func_8(&(iLocal_47[3]), &(iLocal_53[3]));
							iLocal_77 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_85)
			{
				case 0:
					if (!iLocal_75)
					{
						if (bLocal_76)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[0], false))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_47[0]) && !CAM::IS_SPHERE_VISIBLE(Local_59[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_47[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_75 = 1;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_75)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[0]))
							{
								fLocal_83 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_47[0]);
							}
						}
						if (fLocal_83 > 1100f)
						{
							iLocal_85 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[1], false))
					{
						if (bLocal_76)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_47[1]))
							{
								if (iLocal_79)
								{
									if (iLocal_77)
									{
										func_6(&(iLocal_47[1]), &(iLocal_53[1]));
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_78 = 0;
											iLocal_85 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_47[1]), &(iLocal_53[1]));
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_47[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_78 = 0;
										iLocal_85 = 2;
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
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[1]))
						{
							iLocal_85 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[2], false))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_59[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[2]))
								{
									func_6(&(iLocal_47[2]), &(iLocal_53[2]));
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_47[2], 101, "AirportNew", true);
									iLocal_85 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[2], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[2]))
						{
							fLocal_84 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_47[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_47[1]))
							{
								func_8(&(iLocal_47[1]), &(iLocal_53[1]));
								iLocal_78 = 1;
							}
						}
					}
					if (fLocal_84 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[3], false))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_59[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[3]) && iLocal_78)
									{
										func_6(&(iLocal_47[3]), &(iLocal_53[3]));
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_47[3], 104, "AirplaneLandingRedux", true);
										iLocal_85 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_47[3], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_47[3]))
						{
							func_5();
							iLocal_85 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()//Position - 0xBB3
{
	fLocal_83 = 0f;
	iLocal_75 = 0;
	iLocal_79 = 1;
	iLocal_77 = 0;
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
	
	switch (iLocal_81)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52))
			{
				iLocal_52 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, true, true, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_52, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_52, true, true, false);
				VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_52, false);
				iLocal_58 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_52, 4, iLocal_82, -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
				iLocal_81 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_52))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_52, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_81 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_52))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_52) && !CAM::IS_SPHERE_VISIBLE(-1602.0862f, -2674.0386f, 12.9444f, 50f)) && SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) > 62500f)
					{
						iLocal_81 = 1;
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
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_87))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_87))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_87);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_87, false) && !PED::IS_PED_INJURED(iLocal_88))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_87);
			PED::SET_PED_KEEP_TASK(iLocal_88, true);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_87, true) };
			fVar9 = ENTITY::GET_ENTITY_HEADING(iLocal_87);
			Var3 = { 0f, 500f, 50f };
			Var6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar9, Var3) };
			TASK::TASK_HELI_MISSION(iLocal_88, iLocal_87, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_93)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
	}
}

