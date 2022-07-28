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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	char* sLocal_82 = NULL;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	struct<10> Local_93[16];
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	struct<18> Local_100 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_59 = 8000;
	iLocal_64 = -1;
	bLocal_79 = true;
	sLocal_84 = "NULL";
	fLocal_85 = -120f;
	fLocal_86 = 120f;
	fLocal_87 = 40f;
	fLocal_88 = 90f;
	bLocal_90 = true;
	sLocal_99 = "RANDOM@RESCUE_HOSTAGE";
	Local_46 = { ScriptParam_100.f_1[0 /*3*/] };
	fLocal_47 = ScriptParam_100.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_163();
	}
	if (Global_39990[0] == 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_121(Local_46, -1, 0, 0, 0))
	{
		func_118(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_117();
	func_116();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_115();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_112())
					{
						iLocal_91 = MISC::GET_GAME_TIMER();
						iLocal_45 = 1;
					}
					else if (func_111())
					{
						func_163();
					}
					break;
				
				case 1:
					if (iLocal_60 == 0)
					{
						iLocal_60 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101, -104.982f, 6408.737f, 30.4905f, 180000f);
					}
					func_110();
					if (!PED::IS_PED_INJURED(iLocal_49))
					{
						func_109();
					}
					else if (!PED::IS_PED_INJURED(iLocal_50))
					{
						func_105();
						func_104();
					}
					else
					{
						func_163();
					}
					if (bLocal_68)
					{
						func_102();
					}
					if (!PED::IS_PED_INJURED(iLocal_48))
					{
						if (!func_101())
						{
							if (func_89())
							{
								func_163();
							}
							func_74();
						}
						else if (!bLocal_68)
						{
							func_57();
						}
					}
					else
					{
						if (Local_93[1 /*10*/].f_7)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_53))
							{
								HUD::REMOVE_BLIP(&iLocal_53);
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_54))
							{
								HUD::REMOVE_BLIP(&iLocal_54);
							}
							func_56(&Local_93, 1);
							func_54();
						}
						if (!PED::IS_PED_INJURED(iLocal_49))
						{
							if (bLocal_68)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) == 1f)
									{
										if (!PED::IS_PED_INJURED(iLocal_49))
										{
											PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
											ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_53())
								{
									iLocal_45 = 3;
								}
								if (!PED::IS_PED_INJURED(iLocal_50))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					iLocal_52 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 35f, 0, 101383);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (!bLocal_92)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
						func_163();
					}
					if (!iLocal_78)
					{
						if (MISC::CREATE_INCIDENT(7, Local_46, 2, 0f, &uLocal_80, 0, 0))
						{
							iLocal_78 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_76)
					{
						if (SYSTEM::TIMERA() > 5000)
						{
							if (!PED::IS_PED_INJURED(iLocal_49))
							{
								PED::SET_PED_KEEP_TASK(iLocal_49, true);
								func_28();
							}
							func_163();
						}
					}
					else
					{
						if (func_53())
						{
							if (!bLocal_69)
							{
								if (bLocal_79)
								{
									if (func_5(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
									{
										bLocal_69 = true;
									}
								}
								else if (func_5(&Local_93, "RERHOAU", "RERHO_NOGUN", 4, iLocal_98, 0, 0))
								{
									bLocal_69 = true;
								}
							}
						}
						func_3();
						if (!PED::IS_PED_INJURED(iLocal_49))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_62 + 100)
							{
								func_1(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_62 = MISC::GET_GAME_TIMER();
							}
						}
						if (bLocal_69)
						{
							if (!iLocal_77)
							{
								if (!PED::IS_PED_INJURED(iLocal_50))
								{
									if (func_5(&Local_93, "RERHOAU", "RERHO_CONS", 4, iLocal_98, 0, 0))
									{
										iLocal_77 = 1;
									}
								}
							}
						}
						iLocal_52 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_46, 5f, joaat("ambulance"), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_76 = 1;
						}
						iLocal_51 = PED::GET_RANDOM_PED_AT_COORD(Local_46, 1.5f, 1.5f, 1.5f, -1);
						if (!PED::IS_PED_INJURED(iLocal_51))
						{
							SYSTEM::SETTIMERA(5000);
							iLocal_76 = 1;
						}
						if (!iLocal_78 && iLocal_77)
						{
							if (MISC::CREATE_INCIDENT(5, Local_46, 2, 0f, &uLocal_81, 0, 0))
							{
								iLocal_78 = 1;
							}
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_46) > 5625f && !CAM::IS_SPHERE_VISIBLE(Local_46, 10f))
						{
							func_28();
						}
					}
					break;
			}
		}
		else if (iLocal_45 == 3)
		{
			func_28();
		}
		else
		{
			func_163();
		}
	}
}

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x45A
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_2(iParam3), false);
}

int func_2(int iParam0)//Position - 0x473
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_3()//Position - 0x662
{
	if (func_4())
	{
		if (!PED::IS_PED_INJURED(iLocal_49))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_49, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
			func_54();
		}
		if (!PED::IS_PED_INJURED(iLocal_50))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_50, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
			func_54();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_49))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
			}
		}
		else if (PED::IS_PED_RAGDOLL(iLocal_49))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_49, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
			func_54();
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
				TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
				func_54();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_50))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
		TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_50, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
		func_54();
	}
	if (!PED::IS_PED_INJURED(iLocal_50))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_50))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_50, 0, 0);
			}
		}
		else if (PED::IS_PED_RAGDOLL(iLocal_50))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_50, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
			func_54();
			if (!PED::IS_PED_INJURED(iLocal_49))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
				TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_49, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
				func_54();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_49))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
		TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_49, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
		func_54();
	}
}

bool func_4()//Position - 0x86D
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 15f, 15f, 10f };
	Var2 = { -15f, -15f, -10f };
	if (!PED::IS_PED_INJURED(iLocal_49))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f), 15f, true))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("weapon_stickybomb"), true))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_90 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C5
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xA13
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_26();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_24();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				func_16();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}
	return 0;
}

void func_7()//Position - 0xCE1
{
	if (!func_8())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_8()//Position - 0xD18
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_11())
	{
		return 0;
	}
	if (func_9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)//Position - 0xD7B
{
	return func_10(iParam0, 20);
}

var func_10(int iParam0, int iParam1)//Position - 0xD8B
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_11()//Position - 0xDA3
{
	return -1;
}

void func_12()//Position - 0xDAC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21605 = 1;
}

void func_13()//Position - 0xDDE
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	MISC::CLEAR_BIT(&Global_8137, 16);
}

int func_14()//Position - 0xE73
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xE9A
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()//Position - 0xF33
{
	if (func_23(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_17();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

int func_17()//Position - 0xFD5
{
	func_18();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_18()//Position - 0xFEE
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_21(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_20(PLAYER::PLAYER_PED_ID());
			if (func_19(iVar0) && (!func_23(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_19(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_19(int iParam0)//Position - 0x10EB
{
	return iParam0 < 3;
}

int func_20(int iParam0)//Position - 0x10F7
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)//Position - 0x1134
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)//Position - 0x1159
{
	return Global_1998[iParam0 /*29*/];
}

bool func_23(int iParam0)//Position - 0x1168
{
	return Global_43052 == iParam0;
}

void func_24()//Position - 0x1176
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_25(int iParam0, int iParam1)//Position - 0x11CE
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

void func_26()//Position - 0x1206
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x125D
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

void func_28()//Position - 0x12B3
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_52();
	func_32(-1, 0);
	func_29();
	func_163();
}

void func_29()//Position - 0x12D6
{
	func_30();
}

int func_30()//Position - 0x12E3
{
	if (func_31(0))
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

int func_31(bool bParam0)//Position - 0x132E
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_32(int iParam0, int iParam1)//Position - 0x1356
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_49(iParam0))
	{
		func_48(iParam0, iParam1);
		if (!func_47(51))
		{
			func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
		if (func_41(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_33(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_33(7);
			}
			else
			{
				func_33(1);
			}
		}
	}
}

void func_33(int iParam0)//Position - 0x145A
{
	Global_113372 = iParam0;
}

void func_34(int iParam0, var uParam1, var uParam2)//Position - 0x1468
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
		func_38((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
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
		func_35();
	}
}

void func_35()//Position - 0x154E
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
		func_37(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_36() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_30();
				}
			}
		}
	}
}

int func_36()//Position - 0x1A0C
{
	return Global_31959;
}

int func_37(int iParam0, int iParam1)//Position - 0x1A17
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

void func_38(int iParam0, bool bParam1, int iParam2)//Position - 0x1A68
{
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_39()//Position - 0x1A86
{
	return Global_1574918;
}

int func_40(int iParam0, int iParam1)//Position - 0x1A92
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_41(int iParam0)//Position - 0x1E06
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_42(int iParam0)//Position - 0x1E35
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1E77
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1E99
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_45();
	}
}

void func_45()//Position - 0x206D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_46()//Position - 0x2184
{
	func_18();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x21CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)//Position - 0x220A
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_49(int iParam0)//Position - 0x2225
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_50()//Position - 0x22D6
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_51(Var0);
	return uVar1;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x22F3
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_52()//Position - 0x24CD
{
	return 1;
}

int func_53()//Position - 0x24D6
{
	if (!iLocal_73)
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_49))
		{
			if (iLocal_64 == -1)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_49, false);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(5, 0.5f);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(5, 1f);
				PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iLocal_49, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49, true);
				TASK::TASK_PLAY_ANIM(iLocal_49, sLocal_99, "girl_villian_shot", 8f, -2f, -1, 10, 0f, false, false, false);
				iLocal_64 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
				if (!PED::IS_PED_INJURED(iLocal_50))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_55);
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, false, true, 0))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50, iLocal_64, sLocal_99, "bystander_villian_shot", 1000f, -2f, 5, 0, 1000f, 0);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
					}
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_64, sLocal_99, "girl_villian_shot", 1000f, -2f, 5, 0, 1000f, 0);
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_64))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_64) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_70)
				{
					if (bLocal_79)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_64) > 0.5f)
						{
							if (func_5(&Local_93, "RERHOAU", "RERHO_SAINT", 4, iLocal_98, 0, 0))
							{
								iLocal_70 = 1;
							}
						}
					}
					else if (func_5(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
					{
						iLocal_70 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_64) == 1f)
				{
					iLocal_64 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
					func_1(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_64, true);
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						if (bLocal_79)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50, iLocal_64, sLocal_99, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1000f, 0);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_49, -1, 1024, 2);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_49, 20000, 3f, 1f, 2f, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_71);
						}
						PED::SET_PED_KEEP_TASK(iLocal_50, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_57);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_64, sLocal_99, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1000f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_49, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49, iLocal_57);
					PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					iLocal_73 = 1;
				}
			}
		}
	}
	return iLocal_73;
}

void func_54()//Position - 0x2732
{
	Global_20471 = 0;
	func_55();
}

void func_55()//Position - 0x2742
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_56(var uParam0, int iParam1)//Position - 0x2763
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_57()//Position - 0x2780
{
	if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, false, true, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID())) || (func_67(iLocal_48, &uLocal_58, &iLocal_59, 0, 0, 1077936128, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID()))) || (func_66(1) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID()))) || func_64()) || func_63()) || func_4()) || func_62()) || PED::IS_PED_RAGDOLL(iLocal_48)) || func_61()) || func_60()) || func_58(iLocal_48))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_48, joaat("weapon_stungun"), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_49))
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_48))
					{
						iLocal_63 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_63, false);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_63, sLocal_99, "girl_girl_shot", 4f, -4f, 5, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_63, sLocal_99, "villian_girl_shot", 4f, -4f, 5, 0, 1000f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_49, true);
						PED::SET_PED_CAN_RAGDOLL(iLocal_49, false);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_50, true);
				}
				bLocal_68 = true;
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_48, 50, 0);
			}
		}
	}
	else if (SYSTEM::TIMERA() > 6000)
	{
		if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_48) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID())) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_48) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID())))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_53))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, true);
			}
			if (!iLocal_72)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, false, true, 0))
				{
					if (func_5(&Local_93, "RERHOAU", sLocal_83, 4, 0, 0, 0))
					{
						iLocal_59 = 24000;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_72 = 1;
				}
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sLocal_84, "NULL"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_89)
					{
						sLocal_84 = "RERHO_HELP";
						iLocal_89 = 0;
					}
					else
					{
						sLocal_84 = "RERHO_RANT";
						iLocal_89 = 1;
					}
					break;
				
				case 2:
					sLocal_84 = "RERHO_SCREAM";
					break;
			}
		}
		else if (func_5(&Local_93, "RERHOAU", sLocal_84, 4, iLocal_98, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
		}
	}
	else
	{
		sLocal_84 = "NULL";
	}
}

int func_58(int iParam0)//Position - 0x2A59
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar0, joaat("component_at_ar_flsh")))
	{
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar0, joaat("component_at_pi_flsh")))
	{
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), func_59(PLAYER::PLAYER_ID())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)//Position - 0x2B1F
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_60()//Position - 0x2B32
{
	if (func_101())
	{
		if (MISC::GET_GAME_TIMER() > (iLocal_91 + 60000))
		{
			bLocal_92 = true;
			return 1;
		}
	}
	else if (MISC::GET_GAME_TIMER() > (iLocal_91 + 120000))
	{
		bLocal_92 = true;
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x2B6F
{
	float fVar0;
	var uVar1[32];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	fVar0 = 75f;
	iVar4 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_48, false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar4))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("s_f_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar5 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_48, false), fVar0, 0, 66561);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false))
	{
		return 1;
	}
	iVar3 = PED::GET_PED_NEARBY_VEHICLES(iLocal_48, &uVar1);
	if (iVar3 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1[iVar2], false))
			{
				if (((ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("police") || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("pranger")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("sheriff")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_62()//Position - 0x2C74
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 2f, 2f, 1.5f, false, true, 0))
	{
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_48))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63()//Position - 0x2CA5
{
	bool bVar0;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_50))
				{
					bVar0 = true;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_49))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_49))
				{
					bVar0 = true;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_48))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_48))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_64()//Position - 0x2D35
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	bVar1 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &uVar3, &Var4);
		fVar6 = Var4.f_1;
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar8))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar8), &uVar3, &Var4);
				fVar6 = (fVar6 + Var4.f_1);
				fVar6 = (fVar6 + 3f);
			}
		}
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_48, (fVar6 + 17f), (fVar6 + 17f), 6f, false, true, 0))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_48, (fVar6 + 12f), (fVar6 + 12f), 6f, false, true, 0))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_48, (fVar6 + 8f), (fVar6 + 8f), 6f, false, true, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Local_46 };
		fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
		if (func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar5, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_46 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
		if (func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar5, 15f))
		{
			bVar0 = true;
		}
	}
	iVar7 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar7, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, false, true, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_65(int iParam0, float fParam1, float fParam2)//Position - 0x2F07
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x2F8E
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

int func_67(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x2FE5
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!BitTest(iParam3, 3))
			{
				if (func_73(iParam0, iParam6))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_71(iParam0);
					return 1;
				}
			}
			if (!BitTest(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, true))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_71(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_71(iParam0);
					return 1;
				}
			}
			if (!BitTest(iParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_72("	aggro Ped knows player is pointing gun\n");
								func_68("		lockOnTimer = ", *iParam2);
								func_72("\n");
								func_68("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_2));
								func_72("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_2 + *iParam2))
								{
									func_72("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_71(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_71(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_68(char* sParam0, int iParam1)//Position - 0x3237
{
	func_70(sParam0);
	func_69(iParam1);
}

void func_69(int iParam0)//Position - 0x324B
{
	if (iParam0 > 0)
	{
	}
}

void func_70(char* sParam0)//Position - 0x3259
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_71(int iParam0)//Position - 0x326C
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}

void func_72(char* sParam0)//Position - 0x327A
{
	func_70(sParam0);
}

int func_73(int iParam0, int iParam1)//Position - 0x3288
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()//Position - 0x32D5
{
	if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, false, true, 0) || CAM::IS_SPHERE_VISIBLE(Local_46, 15f)) || bLocal_68) || func_4())
	{
		iLocal_53 = func_85(iLocal_48, 1, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_53))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, false);
		}
		func_75(1);
		iLocal_91 = MISC::GET_GAME_TIMER();
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	else
	{
		func_57();
	}
}

int func_75(int iParam0)//Position - 0x3365
{
	if (func_79())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_41(Global_113375))
		{
			func_76(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_41(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_76(int iParam0)//Position - 0x33B8
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_77(func_78(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_77(func_78(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_77(func_78(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_77(char* sParam0, int iParam1)//Position - 0x3493
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_78(int iParam0)//Position - 0x34AA
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_79()//Position - 0x34EE
{
	switch (func_80(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_80(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3524
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_84(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_82(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_81(uParam0, iParam4);
		}
	}
	return 2;
}

void func_81(var uParam0, int iParam1)//Position - 0x365B
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_82(int iParam0)//Position - 0x36AA
{
	return func_83(iParam0, Global_43052);
}

int func_83(int iParam0, int iParam1)//Position - 0x36BB
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x389C
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_82(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0, bool bParam1, int iParam2)//Position - 0x38BE
{
	iParam2 = iParam2;
	return func_86(iParam0, bParam1, 145);
}

int func_86(int iParam0, bool bParam1, int iParam2)//Position - 0x38D4
{
	int iVar0;
	
	iVar0 = func_87(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_87(int iParam0, bool bParam1, bool bParam2)//Position - 0x391E
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_88(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_88(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_88(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_88(bool bParam0, float fParam1, float fParam2)//Position - 0x39C2
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_89()//Position - 0x39D9
{
	if (!func_82(5))
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96())
		{
			return 0;
		}
	}
	if (func_90(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_90(float fParam0, bool bParam1)//Position - 0x3A3B
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_19(func_17()))
		{
			iVar5 = func_46();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_91(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_91(int iParam0, var uParam1)//Position - 0x3AEC
{
	switch (iParam0)
	{
		case 0:
			func_92(uParam1, "Abigail1", func_94(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 1:
			func_92(uParam1, "Abigail2", func_94(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 2:
			func_92(uParam1, "Barry1", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 3:
			func_92(uParam1, "Barry2", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 4:
			func_92(uParam1, "Barry3", func_94(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 5:
			func_92(uParam1, "Barry3A", func_94(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 6:
			func_92(uParam1, "Barry3C", func_94(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 7:
			func_92(uParam1, "Barry4", func_94(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_93(iParam0), 0, 0);
			break;
		
		case 8:
			func_92(uParam1, "Dreyfuss1", func_94(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 9:
			func_92(uParam1, "Epsilon1", func_94(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 10:
			func_92(uParam1, "Epsilon2", func_94(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 11:
			func_92(uParam1, "Epsilon3", func_94(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 12:
			func_92(uParam1, "Epsilon4", func_94(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 13:
			func_92(uParam1, "Epsilon5", func_94(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 14:
			func_92(uParam1, "Epsilon6", func_94(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 15:
			func_92(uParam1, "Epsilon7", func_94(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 16:
			func_92(uParam1, "Epsilon8", func_94(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 17:
			func_92(uParam1, "Extreme1", func_94(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 18:
			func_92(uParam1, "Extreme2", func_94(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 19:
			func_92(uParam1, "Extreme3", func_94(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 20:
			func_92(uParam1, "Extreme4", func_94(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 21:
			func_92(uParam1, "Fanatic1", func_94(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_93(iParam0), 1, 0);
			break;
		
		case 22:
			func_92(uParam1, "Fanatic2", func_94(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_93(iParam0), 1, 0);
			break;
		
		case 23:
			func_92(uParam1, "Fanatic3", func_94(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_93(iParam0), 0, 1);
			break;
		
		case 24:
			func_92(uParam1, "Hao1", func_94(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_93(iParam0), 0, 1);
			break;
		
		case 25:
			func_92(uParam1, "Hunting1", func_94(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 26:
			func_92(uParam1, "Hunting2", func_94(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 27:
			func_92(uParam1, "Josh1", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 28:
			func_92(uParam1, "Josh2", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 29:
			func_92(uParam1, "Josh3", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 30:
			func_92(uParam1, "Josh4", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 31:
			func_92(uParam1, "Maude1", func_94(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 32:
			func_92(uParam1, "Minute1", func_94(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 33:
			func_92(uParam1, "Minute2", func_94(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 34:
			func_92(uParam1, "Minute3", func_94(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 35:
			func_92(uParam1, "MrsPhilips1", func_94(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 36:
			func_92(uParam1, "MrsPhilips2", func_94(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 37:
			func_92(uParam1, "Nigel1", func_94(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 38:
			func_92(uParam1, "Nigel1A", func_94(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 39:
			func_92(uParam1, "Nigel1B", func_94(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 40:
			func_92(uParam1, "Nigel1C", func_94(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 41:
			func_92(uParam1, "Nigel1D", func_94(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 42:
			func_92(uParam1, "Nigel2", func_94(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 43:
			func_92(uParam1, "Nigel3", func_94(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 44:
			func_92(uParam1, "Omega1", func_94(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 45:
			func_92(uParam1, "Omega2", func_94(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 46:
			func_92(uParam1, "Paparazzo1", func_94(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 47:
			func_92(uParam1, "Paparazzo2", func_94(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 48:
			func_92(uParam1, "Paparazzo3", func_94(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 49:
			func_92(uParam1, "Paparazzo3A", func_94(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 50:
			func_92(uParam1, "Paparazzo3B", func_94(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 51:
			func_92(uParam1, "Paparazzo4", func_94(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 52:
			func_92(uParam1, "Rampage1", func_94(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 54:
			func_92(uParam1, "Rampage3", func_94(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 55:
			func_92(uParam1, "Rampage4", func_94(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 56:
			func_92(uParam1, "Rampage5", func_94(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 53:
			func_92(uParam1, "Rampage2", func_94(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 57:
			func_92(uParam1, "TheLastOne", func_94(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 58:
			func_92(uParam1, "Tonya1", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 59:
			func_92(uParam1, "Tonya2", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 60:
			func_92(uParam1, "Tonya3", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 61:
			func_92(uParam1, "Tonya4", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 62:
			func_92(uParam1, "Tonya5", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_92(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x4D38
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_93(int iParam0)//Position - 0x4DC9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_94(int iParam0)//Position - 0x510F
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_95(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_95(int iParam0)//Position - 0x5147
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_96()//Position - 0x5594
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

int func_97()//Position - 0x55B1
{
	if (func_100() && !func_96())
	{
		return 1;
	}
	if (func_99() && func_98())
	{
		return 1;
	}
	return 0;
}

bool func_98()//Position - 0x55E3
{
	return Global_113104 > 0;
}

int func_99()//Position - 0x55F1
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_100()//Position - 0x5606
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_101()//Position - 0x5629
{
	if ((Global_113375 == func_50() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_102()//Position - 0x5654
{
	if (HUD::DOES_BLIP_EXIST(iLocal_53))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_48))
	{
		PED::SET_PED_RESET_FLAG(iLocal_48, 156, true);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) > 0.1f)
			{
				if (!iLocal_74)
				{
					if (!PED::IS_PED_INJURED(iLocal_49))
					{
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_48, PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, -0.1f), false);
					}
					iLocal_74 = 1;
					iLocal_72 = 1;
					func_103();
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_49))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) > 0.6f)
			{
				func_103();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_49))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) == 1f)
			{
				if (!PED::IS_PED_INJURED(iLocal_49))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_49))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
			}
			func_103();
		}
	}
}

void func_103()//Position - 0x5769
{
	if (!iLocal_75)
	{
		if (!PED::IS_PED_INJURED(iLocal_48))
		{
			TASK::CLEAR_PED_TASKS(iLocal_48);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_56, iLocal_55);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_55, iLocal_56);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_57, iLocal_55);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_57, iLocal_56);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_56, iLocal_57);
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_48, 1);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_48, true);
			func_5(&Local_93, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_75 = 1;
		}
	}
}

void func_104()//Position - 0x5818
{
	if (bLocal_90)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
		TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_50, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
		func_54();
	}
}

void func_105()//Position - 0x584F
{
	if (Local_93[2 /*10*/].f_7)
	{
		func_56(&Local_93, 2);
	}
	func_108();
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_46, 1, 3f, 0f);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(1, 0.5f);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1, 1f);
	if (Local_93[1 /*10*/].f_7)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_53))
		{
			HUD::REMOVE_BLIP(&iLocal_53);
		}
		func_56(&Local_93, 1);
	}
	if (iLocal_72)
	{
		if (!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_50, joaat("weapon_pistol"), 0) && PED::IS_PED_INJURED(iLocal_48))
		{
			if (!bLocal_92)
			{
				iLocal_45 = 2;
			}
			else if (func_107(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
			{
				iLocal_45 = 2;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (!PED::IS_PED_INJURED(iLocal_48))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_50, iLocal_48, 100f, -1, false, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				}
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
				if (!bLocal_92)
				{
					if (func_107(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
					{
					}
					else
					{
						func_106(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_106(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
				}
				SYSTEM::WAIT(0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(true);
			iLocal_45 = 2;
		}
	}
	else
	{
		func_163();
	}
}

void func_106(int iParam0, char* sParam1, int iParam2)//Position - 0x5994
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_107(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x59AB
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_108()//Position - 0x59FF
{
	if (func_4())
	{
		bLocal_90 = true;
	}
	if (bLocal_90 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_50) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_72)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 5f, 2f, 2f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0f, false, false, false);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_71);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_46, 1f, 20000, 40000f, 0.5f);
				TASK::TASK_LOOK_AT_COORD(0, Local_46, -1, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_71);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
			}
		}
	}
}

void func_109()//Position - 0x5B11
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), true))
	{
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
		bLocal_68 = true;
		iLocal_72 = 1;
		func_103();
	}
	else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_49))
	{
		AUDIO::PLAY_PAIN(iLocal_49, 4, 0, 0);
	}
}

void func_110()//Position - 0x5B76
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_46, 50f, 50f, 25f, false, true, 0))
	{
		iLocal_98 = 0;
	}
	else
	{
		iLocal_98 = 1;
	}
}

int func_111()//Position - 0x5BAA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96())
		{
			return 0;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (func_90(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112()//Position - 0x5C30
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	Local_46 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_47 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_ANIM_DICT(sLocal_99);
	if (((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_99))
	{
		MISC::CLEAR_AREA(Local_46, 5f, true, true, false, false);
		iLocal_49 = PED::CREATE_PED(5, iVar2, Local_46, fLocal_47, true, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49, true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_49, sVar3);
		PED::SET_PED_CONFIG_FLAG(iLocal_49, 20, true);
		iLocal_48 = PED::CREATE_PED(22, iVar0, Local_46, fLocal_47, true, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_48, 125, 0);
		PED::SET_PED_MAX_HEALTH(iLocal_48, 125);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_48, 128, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_48, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_48, 42, true);
		PED::SET_PED_HEARING_RANGE(iLocal_48, 1.5f);
		AUDIO::STOP_PED_SPEAKING(iLocal_48, true);
		PED::SET_PED_SEEING_RANGE(iLocal_48, 40f);
		PED::SET_PED_CONFIG_FLAG(iLocal_48, 20, true);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iLocal_48, fLocal_85);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iLocal_48, fLocal_86);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iLocal_48, fLocal_87);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iLocal_48, fLocal_88);
		iLocal_50 = PED::CREATE_PED(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_47, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), false, false, true, false);
		iLocal_61 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), false, true, true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_50, false);
		AUDIO::STOP_PED_SPEAKING(iLocal_50, true);
		Local_46.f_2 = (Local_46.f_2 + 1f);
		Local_66 = { Local_46 };
		Local_67 = { 0f, 0f, fLocal_47 };
		iLocal_63 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_63, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_63, sLocal_99, "villian_struggle_loop", 1000f, -4f, 5, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_63, sLocal_99, "girl_struggle_loop", 1000f, -4f, 5, 0, 1000f, 0);
		iLocal_65 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_65, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50, iLocal_65, sLocal_99, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1000f, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_50, 185, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_48, joaat("weapon_pistol"), -1, true, true);
		PED::SET_PED_AS_ENEMY(iLocal_48, true);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relManager", &iLocal_57);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relBadGuy", &iLocal_56);
		iLocal_55 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_56, iLocal_55);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_55, iLocal_56);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_57);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_48, iLocal_56);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 11, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 5, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_50, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 11, true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_49, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 5, false);
		func_114(&Local_93, 0, PLAYER::PLAYER_PED_ID(), sLocal_82, 0, 1);
		func_114(&Local_93, 1, iLocal_48, "RHCriminal", 0, 1);
		func_114(&Local_93, 2, iLocal_49, "RHHostage", 0, 1);
		func_114(&Local_93, 3, iLocal_50, "RHBystander", 0, 1);
		PED::SET_CREATE_RANDOM_COPS(false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_113(1);
		MISC::CLEAR_AREA_OF_OBJECTS(-89f, 6392f, 32f, 3f, 2);
		SYSTEM::SETTIMERA(8000);
		return 1;
	}
	return 0;
}

void func_113(bool bParam0)//Position - 0x5FDA
{
	if (bParam0)
	{
		Global_32193 = 1;
	}
	else
	{
		Global_32193 = 0;
	}
}

void func_114(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5FF2
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_115()//Position - 0x608D
{
}

void func_116()//Position - 0x6095
{
}

void func_117()//Position - 0x609D
{
	switch (func_17())
	{
		case 0:
			sLocal_82 = "MICHAEL";
			sLocal_83 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_82 = "FRANKLIN";
			sLocal_83 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_82 = "TREVOR";
			sLocal_83 = "RERHO_TDOWN";
			break;
	}
}

void func_118(int iParam0)//Position - 0x60ED
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_120(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_119();
}

void func_119()//Position - 0x6123
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_120(int iParam0)//Position - 0x6160
{
	Global_113375 = iParam0;
}

int func_121(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x616E
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_31(0))
		{
			return 0;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_90(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_160(iParam1))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_159(func_17()) == 4 || func_159(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_158(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_157(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_156())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_82(5))
		{
			return 0;
		}
		if (func_146(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_146(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_160(30) && !func_146(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_145(iVar4))
				{
					if (func_123(iVar2))
					{
						if (!func_122(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (func_17() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_122(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x6508
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_123(int iParam0)//Position - 0x654F
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_124(iVar0);
}

int func_124(int iParam0)//Position - 0x6570
{
	return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1)//Position - 0x657F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_145(iParam0))
	{
		return 0;
	}
	func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x65D2
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x65F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136(iParam1);
		iVar1 = func_134(iParam0);
		iVar2 = (func_134(iParam0) - func_134(iParam1));
		iVar3 = (func_136(iParam0) - func_136(iParam1));
		iVar4 = (func_133(iParam0) - func_133(iParam1));
		iVar5 = (func_132(iParam0) - func_132(iParam1));
		iVar6 = (func_131(iParam0) - func_131(iParam1));
		iVar7 = (func_130(iParam0) - func_130(iParam1));
	}
	else
	{
		iVar0 = func_136(iParam0);
		iVar1 = func_134(iParam1);
		iVar2 = (func_134(iParam1) - func_134(iParam0));
		iVar3 = (func_136(iParam1) - func_136(iParam0));
		iVar4 = (func_133(iParam1) - func_133(iParam0));
		iVar5 = (func_132(iParam1) - func_132(iParam0));
		iVar6 = (func_131(iParam1) - func_131(iParam0));
		iVar7 = (func_130(iParam1) - func_130(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_129(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_128(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_128(float fParam0, float fParam1, float fParam2)//Position - 0x67F1
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_129(int iParam0, int iParam1)//Position - 0x6833
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_130(int iParam0)//Position - 0x68D5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_131(int iParam0)//Position - 0x68E8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_132(int iParam0)//Position - 0x68FB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_133(int iParam0)//Position - 0x690E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_134(int iParam0)//Position - 0x6920
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_135(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)//Position - 0x6942
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(int iParam0)//Position - 0x6959
{
	return iParam0 & 15;
}

int func_137(int iParam0, int iParam1)//Position - 0x6966
{
	int iVar0;
	int iVar1;
	
	if (!func_145(iParam1) || !func_145(iParam0))
	{
		return 1;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_138()//Position - 0x6A72
{
	var uVar0;
	
	func_144(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_143(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_142(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_141(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_140(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_139(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_139(var uParam0, int iParam1)//Position - 0x6AB8
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_140(var uParam0, int iParam1)//Position - 0x6B3E
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)//Position - 0x6B71
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_142(var uParam0, int iParam1)//Position - 0x6BC2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_143(var uParam0, int iParam1)//Position - 0x6BFC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_144(var uParam0, int iParam1)//Position - 0x6C37
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_145(int iParam0)//Position - 0x6C73
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_132(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_133(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_146(int iParam0, bool bParam1)//Position - 0x6D4F
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x6D6F
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_155()) || Global_112433) || Global_31962) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_155()) || Global_31962) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_155()) || Global_112433) || Global_31962) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_155()) || Global_112433) || Global_31962) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_150()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_25(8, -1)) || func_150()) || func_149()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_25(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_155()) || Global_31962) || func_154()) || func_25(8, -1)) || func_152()) || func_151()) || func_150()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_155()) || func_152()) || Global_112433) || Global_31962) || func_154()) || Global_44238) || func_25(8, -1)) || func_151()) || func_149()) || func_150()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_155()) || Global_112433) || Global_31962) || func_154()) || func_25(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_148()//Position - 0x748C
{
	return Global_100480.f_1;
}

int func_149()//Position - 0x749A
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()//Position - 0x74BD
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()//Position - 0x74D7
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_152()//Position - 0x7501
{
	return Global_100493.f_376 > 0;
}

bool func_153()//Position - 0x7512
{
	return Global_100493.f_375 > 0;
}

var func_154()//Position - 0x7523
{
	return Global_1575058;
}

int func_155()//Position - 0x752F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_156()//Position - 0x754B
{
	func_16();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_157(int iParam0)//Position - 0x7573
{
	return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2)//Position - 0x7585
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_159(int iParam0)//Position - 0x7669
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_160(int iParam0)//Position - 0x768D
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_161()//Position - 0x76E5
{
	int iVar0;
	
	if (Global_32110)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_162()//Position - 0x7729
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_163()//Position - 0x77E1
{
	if (func_101())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(true);
	}
	if (iLocal_45 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_56);
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_57);
		AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(20000);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_61, false);
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_60);
		func_113(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_48) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_48, true);
		SYSTEM::WAIT(0);
	}
	func_164(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_164(int iParam0)//Position - 0x7865
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_101())
	{
		func_168(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_167(30000);
		StringCopy(&cVar0, func_166(Global_113375, 1), 64);
		if (func_49(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	func_165(&Global_32019);
	Global_113376 = 0;
	func_120(-1);
}

void func_165(var uParam0)//Position - 0x7917
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_166(int iParam0, bool bParam1)//Position - 0x7954
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_167(int iParam0)//Position - 0x7B9D
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_168(int iParam0)//Position - 0x7BAF
{
	func_169(iParam0, 0, func_174(iParam0));
}

void func_169(int iParam0, int iParam1, int iParam2)//Position - 0x7BC4
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_138();
	func_172(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_171(iParam0, &uVar0);
	Var1 = { func_170(&uVar0) };
}

struct<16> func_170(var uParam0)//Position - 0x7BF3
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_132(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_131(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_130(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_133(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_136(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_134(*uParam0), 64);
	return Var0;
}

void func_171(int iParam0, var uParam1)//Position - 0x7CC4
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7CDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_133(*uParam0);
	iVar3 = func_132(*uParam0);
	iVar4 = func_131(*uParam0);
	iVar5 = func_130(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_129(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_173(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7E5E
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
	func_139(uParam0, iParam6);
}

int func_174(int iParam0)//Position - 0x7E96
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

