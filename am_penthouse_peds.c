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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	struct<3> Local_39 = { 0, 0, -1 } ;
	struct<47> Local_40[50];
	int iLocal_41 = 0;
	var uLocal_42 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	Global_1579058 = 1;
	func_47();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		while (Local_39.f_0 == 0)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_39.f_1 = func_46(iScriptParam_41);
				Local_39.f_2 = func_45();
				Local_39.f_0 = 1;
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	func_38(1);
	while (true)
	{
		func_37();
		if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_29()) || Global_1579058 == 0) || func_28())
		{
			func_25();
		}
		func_3();
		func_1();
	}
}

void func_1()//Position - 0xE4
{
	int iVar0;
	float fVar1;
	
	if (iLocal_38 == 0)
	{
		if (AUDIO::LOAD_STREAM("Party_Walla_Stream", "DLC_Vinewood_Casino_Penthouse_Party_Sounds"))
		{
			iLocal_38++;
		}
	}
	if (iLocal_38 == 1)
	{
		iVar0 = func_2();
		if (iVar0 > -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40[iVar0 /*47*/]) && !ENTITY::IS_ENTITY_DEAD(Local_40[iVar0 /*47*/], false))
			{
				AUDIO::PLAY_STREAM_FROM_PED(Local_40[iVar0 /*47*/]);
				iLocal_38++;
			}
		}
	}
	if (iLocal_38 == 2)
	{
		if (AUDIO::IS_STREAM_PLAYING())
		{
			fVar1 = (SYSTEM::TO_FLOAT(Local_39.f_1) / 5f);
			AUDIO::SET_VARIABLE_ON_STREAM("Crowd_Size", fVar1);
			iLocal_38++;
		}
	}
}

int func_2()//Position - 0x16F
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 50)
	{
		if (Local_40[iVar3 /*47*/].f_46 <= Local_39.f_1)
		{
			fVar1 = SYSTEM::VDIST(Local_40[iVar3 /*47*/].f_40, 945f, 15f, 117f);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_3()//Position - 0x1D4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_22(&(Local_40[iVar0 /*47*/])))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_40[iVar0 /*47*/]))
			{
				func_12(&(Local_40[iVar0 /*47*/]));
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_40[iVar0 /*47*/], false))
			{
				func_11(&(Local_40[iVar0 /*47*/]));
			}
			func_4(&(Local_40[iVar0 /*47*/]));
		}
		iVar0++;
	}
	iLocal_37 = 0;
}

void func_4(var uParam0)//Position - 0x23C
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		func_5(uParam0);
	}
}

void func_5(var uParam0)//Position - 0x262
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5[4];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	sVar0 = func_10(uParam0);
	sVar1 = func_8(uParam0);
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.7f);
	iVar3 = TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503);
	if (iVar3 != 0 && iVar3 != 1)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if (!func_7(uParam0))
			{
				if (func_6(uParam0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sVar0, sVar1, uParam0->f_40, 0f, 0f, uParam0->f_43, 8f, -8f, -1, 790529, fVar2, 2, 3);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, sVar0, sVar1, 8f, -8f, -1, 1, fVar2, false, false, false);
				}
			}
			else
			{
				iVar5[0] = 0;
				iVar5[1] = 1;
				iVar5[2] = 2;
				iVar5[3] = 3;
				iVar8 = 0;
				while (iVar8 < 10)
				{
					iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					iVar9 = iVar5[iVar6];
					iVar5[iVar6] = iVar5[iVar7];
					iVar5[iVar7] = iVar9;
					iVar8++;
				}
				iVar8 = 0;
				while (iVar8 < 4)
				{
					switch (iVar5[iVar8])
					{
						case 0:
							TASK::TASK_PLAY_ANIM(0, sVar0, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM(0, sVar0, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
							break;
						
						case 2:
							TASK::TASK_PLAY_ANIM(0, sVar0, "IDLE_C", 8f, -8f, -1, 0, 0f, false, false, false);
							break;
						
						case 3:
							TASK::TASK_PLAY_ANIM(0, sVar0, "IDLE_D", 8f, -8f, -1, 0, 0f, false, false, false);
							break;
					}
					iVar8++;
				}
			}
			TASK::SET_SEQUENCE_TO_REPEAT(iVar4, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
		}
	}
}

int func_6(var uParam0)//Position - 0x42F
{
	switch (uParam0->f_44)
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_7(var uParam0)//Position - 0x44B
{
	switch (uParam0->f_44)
	{
		case 0:
		case 1:
		case 2:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
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
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
			return 0;
		
		default:
	}
	return 1;
}

char* func_8(var uParam0)//Position - 0x51B
{
	if (func_9(uParam0))
	{
		switch (uParam0->f_44)
		{
			case 0:
				return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
			
			case 1:
				return "amb_world_human_partying_female_partying_beer_base";
			
			case 2:
				return "amb_prop_human_seat_chair_drink_beer_female_idle_a";
			
			default:
		}
	}
	else
	{
		switch (uParam0->f_44)
		{
			case 0:
				return "amb_world_human_hang_out_street_male_c_base";
			
			case 1:
				return "amb_world_human_partying_male_partying_beer_base";
			
			case 2:
				return "amb_prop_human_seat_chair_drink_beer_male_idle_a";
			}
		
		default:
	}
	switch (uParam0->f_44)
	{
		case 35:
			return "amb_world_human_drinking_beer_female_base";
		
		case 36:
			return "mi_loop_f02";
		
		case 37:
			return "mi_idle_c_f02";
		
		case 38:
			return "mi_to_li_f02";
		
		case 39:
			return "hi_dance_prop_13_v2_male^1";
		
		case 40:
			return "hi_dance_prop_09_v1_male^1";
		
		case 41:
			return "hi_dance_prop_17_v1_male^1";
		
		case 42:
			return "hi_dance_crowd_15_v1_male^1";
		
		case 43:
			return "hi_dance_crowd_09_v1_male^1";
		
		case 44:
			return "hi_dance_crowd_13_v2_male^1";
		
		case 45:
			return "trans_dance_crowd_li_to_mi_11_v1_male^1";
		
		case 46:
			return "mi_dance_crowd_17_v2_female^1";
		
		case 47:
			return "hi_dance_crowd_17_v1_female^1";
		
		case 48:
			return "ti_loop_m01";
		
		case 49:
			return "ti_loop_f02";
		
		case 50:
			return "ti_idle_d_f02";
		
		case 51:
			return "ti_idle_a_m03";
		
		case 52:
			return "ti_idle_b_f02";
		
		case 53:
			return "ti_idle_a_f02";
		
		case 54:
			return "ti_loop_f01";
		
		case 55:
			return "ti_idle_b_m02";
		
		case 56:
			return "ti_idle_b_f01";
		
		case 57:
			return "ti_idle_c_m03";
		
		case 58:
			return "ti_idle_c_f03";
		
		case 59:
			return "ti_loop_m02";
		
		case 60:
			return "ti_idle_c_m02";
		
		case 61:
			return "ti_idle_b_f03";
		
		case 62:
			return "ti_idle_c_f02";
		
		default:
	}
	return "amb_world_human_hang_out_street_female_hold_arm_idle_b";
}

int func_9(var uParam0)//Position - 0x704
{
	switch (uParam0->f_2)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		default:
	}
	return 0;
}

char* func_10(var uParam0)//Position - 0x82E
{
	switch (uParam0->f_44)
	{
		case 0:
			return "ANIM@AMB@CASINO@PEDS@";
		
		case 1:
			return "ANIM@AMB@CASINO@PEDS@";
		
		case 2:
			return "ANIM@AMB@CASINO@PEDS@";
		
		case 3:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@IDLES";
		
		case 4:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@IDLES";
		
		case 5:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@IDLES";
		
		case 6:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@IDLES";
		
		case 7:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@IDLES";
		
		case 8:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@IDLES";
		
		case 9:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@IDLES_CONVO";
		
		case 10:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@IDLES_CONVO";
		
		case 11:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@IDLES_CONVO";
		
		case 12:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@IDLES_CONVO";
		
		case 13:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@IDLES_CONVO";
		
		case 14:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@IDLES_CONVO";
		
		case 15:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@IDLES";
		
		case 16:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@IDLES";
		
		case 17:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@IDLES_CONVO";
		
		case 18:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@IDLES_CONVO";
		
		case 19:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@IDLES";
		
		case 20:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@IDLES";
		
		case 21:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@IDLES";
		
		case 22:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@IDLES";
		
		case 23:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@IDLES";
		
		case 24:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@IDLES";
		
		case 25:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@IDLES_CONVO";
		
		case 26:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@IDLES_CONVO";
		
		case 27:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@IDLES_CONVO";
		
		case 28:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@IDLES_CONVO";
		
		case 29:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@IDLES_CONVO";
		
		case 30:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@IDLES_CONVO";
		
		case 31:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@IDLES";
		
		case 32:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@IDLES";
		
		case 33:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@IDLES_CONVO";
		
		case 34:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@IDLES_CONVO";
		
		case 35:
			return "anim@amb@nightclub@peds@";
		
		case 36:
			return "anim@amb@nightclub_island@dancers@beachdanceprop@";
		
		case 37:
			return "anim@amb@nightclub_island@dancers@beachdanceprop@";
		
		case 38:
			return "anim@amb@nightclub_island@dancers@beachdanceprop@";
		
		case 39:
			return "anim@amb@nightclub_island@dancers@crowddance_single_props@";
		
		case 40:
			return "anim@amb@nightclub_island@dancers@crowddance_single_props@";
		
		case 41:
			return "anim@amb@nightclub_island@dancers@crowddance_single_props@";
		
		case 42:
			return "anim@amb@nightclub_island@dancers@crowddance_groups@groupe@";
		
		case 43:
			return "anim@amb@nightclub_island@dancers@crowddance_groups@groupe@";
		
		case 44:
			return "anim@amb@nightclub_island@dancers@crowddance_groups@groupe@";
		
		case 45:
			return "anim@amb@nightclub_island@dancers@crowddance_groups@groupe@";
		
		case 46:
			return "anim@amb@nightclub_island@dancers@crowddance_groups@groupe@";
		
		case 47:
			return "anim@amb@nightclub_island@dancers@crowddance_groups@groupe@";
		
		case 48:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 49:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 50:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 51:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 52:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 53:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 54:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 55:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 56:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 57:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 58:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 59:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 60:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 61:
			return "anim@amb@nightclub_island@dancers@club@";
		
		case 62:
			return "anim@amb@nightclub_island@dancers@club@";
		
		default:
	}
	return "ANIM@AMB@CASINO@PEDS@";
}

void func_11(int* iParam0)//Position - 0xB76
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		PED::DELETE_PED(iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1));
	}
}

void func_12(var uParam0)//Position - 0xBA1
{
	int iVar0;
	
	if (iLocal_37 < 2)
	{
		func_21(uParam0);
		if (func_20(uParam0))
		{
			*uParam0 = PED::CREATE_PED(26, func_19(uParam0), uParam0->f_40, uParam0->f_43, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				iVar0 = 0;
				while (iVar0 < 12)
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, uParam0->f_3[iVar0 /*2*/], uParam0->f_3[iVar0 /*2*/].f_1, 0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (uParam0->f_28[iVar0])
					{
						PED::SET_PED_PROP_INDEX(*uParam0, uParam0->f_32[iVar0], 0, uParam0->f_36[iVar0], false);
					}
					iVar0++;
				}
				func_18(uParam0);
				if (func_17(uParam0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = OBJECT::CREATE_OBJECT(func_16(uParam0), PED::GET_PED_BONE_COORDS(*uParam0, func_15(uParam0), 0f, 0f, 0f), false, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, func_15(uParam0)), func_14(uParam0), 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					}
				}
				if (func_7(uParam0))
				{
					PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(*uParam0, 0, func_13(uParam0), "BASE", 8f, true);
				}
				iLocal_37++;
			}
		}
	}
}

char* func_13(var uParam0)//Position - 0xCD6
{
	switch (uParam0->f_44)
	{
		case 3:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@BASE";
		
		case 4:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@BASE";
		
		case 5:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@BASE";
		
		case 6:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@BASE";
		
		case 7:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@BASE";
		
		case 8:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@BASE";
		
		case 9:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01A@BASE";
		
		case 10:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@01B@BASE";
		
		case 11:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02A@BASE";
		
		case 12:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@02B@BASE";
		
		case 13:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03A@BASE";
		
		case 14:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND@03B@BASE";
		
		case 15:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@BASE";
		
		case 16:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@BASE";
		
		case 17:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01A@BASE";
		
		case 18:
			return "ANIM@AMB@CASINO@HANGOUT@PED_MALE@STAND_WITHDRINK@01B@BASE";
		
		case 19:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@BASE";
		
		case 20:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@BASE";
		
		case 21:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@BASE";
		
		case 22:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@BASE";
		
		case 23:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@BASE";
		
		case 24:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@BASE";
		
		case 25:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01A@BASE";
		
		case 26:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@01B@BASE";
		
		case 27:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02A@BASE";
		
		case 28:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@02B@BASE";
		
		case 29:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03A@BASE";
		
		case 30:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND@03B@BASE";
		
		case 31:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@BASE";
		
		case 32:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@BASE";
		
		case 33:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01A@BASE";
		
		case 34:
			return "ANIM@AMB@CASINO@HANGOUT@PED_FEMALE@STAND_WITHDRINK@01B@BASE";
		
		default:
	}
	return "ANIM@AMB@CASINO@PEDS@";
}

Vector3 func_14(var uParam0)//Position - 0xE8B
{
	switch (uParam0->f_44)
	{
		case 1:
		case 2:
			return 0f, 0f, 0.01f;
			break;
		
		case 41:
		case 39:
		case 40:
			return 0f, 0f, 0.11f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_15(var uParam0)//Position - 0xED7
{
	switch (uParam0->f_44)
	{
		case 1:
		case 16:
		case 18:
		case 32:
		case 34:
		case 35:
		case 41:
		case 39:
		case 40:
			return 28422;
			break;
		
		case 33:
		case 31:
		case 15:
		case 17:
			return 60309;
			break;
		
		case 2:
			return 28422;
			break;
	}
	return 28422;
}

int func_16(var uParam0)//Position - 0xF5B
{
	switch (uParam0->f_44)
	{
		case 1:
		case 2:
		case 15:
		case 16:
		case 17:
		case 18:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 41:
		case 39:
		case 40:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_amb_beer_bottle");
}

int func_17(var uParam0)//Position - 0xFCD
{
	switch (uParam0->f_44)
	{
		case 1:
		case 2:
		case 15:
		case 16:
		case 17:
		case 18:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 41:
		case 39:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_18(var uParam0)//Position - 0x1037
{
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam0, false);
	PED::SET_PED_AS_ENEMY(*uParam0, false);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	PED::SET_PED_RESET_FLAG(*uParam0, 249, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 185, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 108, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 106, true);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, false);
	PED::_0x2F3C3D9F50681DE4(*uParam0, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 208, true);
	TASK::CLEAR_PED_TASKS(*uParam0);
}

int func_19(var uParam0)//Position - 0x10BD
{
	switch (uParam0->f_2)
	{
		case 0:
			return joaat("a_f_y_smartcaspat_01");
		
		case 1:
			return joaat("a_f_y_clubcust_01");
		
		case 2:
			return joaat("a_f_y_clubcust_03");
		
		case 3:
			return joaat("a_f_y_genhot_01");
		
		case 4:
			return joaat("a_f_y_bevhills_02");
		
		case 5:
			return joaat("a_m_y_smartcaspat_01");
		
		case 6:
			return joaat("a_m_y_carclub_01");
		
		case 7:
			return joaat("g_m_y_ballaorig_01");
		
		case 8:
			return joaat("a_m_m_soucent_01");
		
		case 9:
			return joaat("g_m_y_famfor_01");
		
		case 10:
			return joaat("a_m_y_clubcust_01");
		
		case 11:
			return joaat("a_m_y_clubcust_02");
		
		case 12:
			return joaat("a_m_y_studioparty_01");
		
		case 13:
			return joaat("g_m_y_ballasout_01");
		
		case 14:
			return joaat("g_m_y_famca_01");
		
		case 15:
			return joaat("g_m_y_famdnf_01");
		
		case 16:
			return joaat("g_m_y_mexgoon_03");
		
		case 17:
			return joaat("a_m_m_studioparty_01");
		
		case 18:
			return joaat("a_m_y_soucent_02");
		
		case 19:
			return joaat("a_m_y_vinewood_01");
		
		case 20:
			return joaat("a_m_y_vinewood_02");
		
		case 21:
			return joaat("a_m_y_eastsa_02");
		
		case 22:
			return joaat("a_m_y_indian_01");
		
		case 23:
			return joaat("a_f_y_carclub_01");
		
		case 24:
			return joaat("a_f_y_studioparty_01");
		
		case 25:
			return joaat("g_f_y_ballas_01");
		
		case 26:
			return joaat("a_f_y_studioparty_02");
		
		case 27:
			return joaat("g_f_y_vagos_01");
		
		default:
	}
	return joaat("a_f_y_smartcaspat_01");
}

int func_20(var uParam0)//Position - 0x125A
{
	if (func_22(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_19(uParam0)) && STREAMING::HAS_ANIM_DICT_LOADED(func_10(uParam0)))
		{
			if (func_7(uParam0))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_13(uParam0)))
				{
					return 0;
				}
			}
			if (func_17(uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(func_16(uParam0)))
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
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_21(var uParam0)//Position - 0x12D2
{
	if (func_22(uParam0))
	{
		STREAMING::REQUEST_MODEL(func_19(uParam0));
		STREAMING::REQUEST_ANIM_DICT(func_10(uParam0));
		if (func_7(uParam0))
		{
			STREAMING::REQUEST_ANIM_DICT(func_13(uParam0));
		}
		if (func_17(uParam0))
		{
			STREAMING::REQUEST_MODEL(func_16(uParam0));
		}
	}
}

int func_22(var uParam0)//Position - 0x131D
{
	if (func_24(uParam0->f_40))
	{
		return 0;
	}
	if (uParam0->f_46 <= func_23())
	{
		return 1;
	}
	return 0;
}

int func_23()//Position - 0x1346
{
	var uVar0;
	
	uVar0 = Local_39.f_1;
	return uVar0;
}

int func_24(struct<3> Param0)//Position - 0x1356
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_25()//Position - 0x1380
{
	if (AUDIO::IS_STREAM_PLAYING())
	{
		AUDIO::STOP_STREAM();
	}
	func_27();
	func_26();
}

void func_26()//Position - 0x139B
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_27()//Position - 0x13A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_11(&(Local_40[iVar0 /*47*/]));
		iVar0++;
	}
}

bool func_28()//Position - 0x13CC
{
	return (!Global_1579054 && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

int func_29()//Position - 0x13E2
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_36())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	if (func_34(159))
	{
		if (!func_33())
		{
			return 1;
		}
	}
	if (func_34(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_30() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_30()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()//Position - 0x1466
{
	switch (func_32())
	{
		case 0:
			return func_31();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_31()//Position - 0x1499
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_32()//Position - 0x14BD
{
	return Global_31959;
}

bool func_33()//Position - 0x14C8
{
	return Global_2714762.f_698;
}

int func_34(int iParam0)//Position - 0x14D7
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_35()//Position - 0x14EE
{
	return Global_2725403;
}

bool func_36()//Position - 0x14FA
{
	return Global_2714762.f_693;
}

void func_37()//Position - 0x1509
{
	SYSTEM::WAIT(0);
}

void func_38(bool bParam0)//Position - 0x1516
{
	func_27();
	if (bParam0)
	{
		func_40();
	}
	func_39();
}

void func_39()//Position - 0x152F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_21(&(Local_40[iVar0 /*47*/]));
		iVar0++;
	}
}

void func_40()//Position - 0x1554
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_41(&(Local_40[iVar0 /*47*/]), iVar0);
		iVar0++;
	}
}

void func_41(var uParam0, int iParam1)//Position - 0x157B
{
	switch (func_44())
	{
		case 0:
			func_43(uParam0, iParam1);
			break;
		
		case 1:
			func_42(uParam0, iParam1);
			break;
	}
}

void func_42(var uParam0, int iParam1)//Position - 0x15AE
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_40 = { 943.8861f, 2.1137f, 115.2597f };
			uParam0->f_43 = 315.1f;
			uParam0->f_2 = 22;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 39;
			uParam0->f_46 = 4;
			break;
		
		case 1:
			uParam0->f_40 = { 944.6894f, 2.5794f, 115.2448f };
			uParam0->f_43 = 105.1996f;
			uParam0->f_2 = 26;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 1;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 1;
			uParam0->f_36[0] = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 4;
			break;
		
		case 2:
			uParam0->f_40 = { 940.9675f, 3.5673f, 115.2448f };
			uParam0->f_43 = 22.1992f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 5;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 3;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 1;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 3:
			uParam0->f_40 = { 940.5815f, 4.3308f, 115.1948f };
			uParam0->f_43 = 215.599f;
			uParam0->f_2 = 26;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 1;
			uParam0->f_3[11 /*2*/] = 1;
			uParam0->f_3[11 /*2*/].f_1 = 2;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 1;
			uParam0->f_36[0] = 1;
			uParam0->f_44 = 36;
			uParam0->f_46 = 3;
			break;
		
		case 4:
			uParam0->f_40 = { 940.3752f, 13.0853f, 115.2448f };
			uParam0->f_43 = 167.7982f;
			uParam0->f_2 = 4;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 5:
			uParam0->f_40 = { 940.6506f, 12.1791f, 115.2448f };
			uParam0->f_43 = 76.1981f;
			uParam0->f_2 = 3;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 61;
			uParam0->f_46 = 5;
			break;
		
		case 6:
			uParam0->f_40 = { 939.6988f, 11.7404f, 115.2448f };
			uParam0->f_43 = 336.723f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 6;
			uParam0->f_3[5 /*2*/] = 3;
			uParam0->f_3[5 /*2*/].f_1 = 2;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 1;
			uParam0->f_36[0] = 1;
			uParam0->f_28[1] = 1;
			uParam0->f_32[1] = 0;
			uParam0->f_36[1] = 2;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 7:
			uParam0->f_40 = { 939.3912f, 12.8663f, 115.2448f };
			uParam0->f_43 = 237.698f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 8;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 2;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 2;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 42;
			uParam0->f_46 = 5;
			break;
		
		case 8:
			uParam0->f_40 = { 942.5348f, 12.4426f, 115.2448f };
			uParam0->f_43 = 221.9481f;
			uParam0->f_2 = 26;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 1;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 2;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 9:
			uParam0->f_40 = { 945.7389f, 18.4156f, 115.2448f };
			uParam0->f_43 = 333.72f;
			uParam0->f_2 = 23;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 5;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 5;
			uParam0->f_3[5 /*2*/].f_1 = 3;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 1;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[1] = 1;
			uParam0->f_32[1] = 1;
			uParam0->f_36[1] = 0;
			uParam0->f_44 = 61;
			uParam0->f_46 = 3;
			break;
		
		case 10:
			uParam0->f_40 = { 941.0665f, 15.6101f, 115.6673f };
			uParam0->f_43 = 304.1979f;
			uParam0->f_2 = 3;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 4;
			break;
		
		case 11:
			uParam0->f_40 = { 940.8412f, 16.994f, 115.6373f };
			uParam0->f_43 = 233.9977f;
			uParam0->f_2 = 26;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 1;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 2;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 4;
			break;
		
		case 12:
			uParam0->f_40 = { 943.2703f, 19.0311f, 115.2f };
			uParam0->f_43 = 221.2227f;
			uParam0->f_2 = 9;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 1;
			uParam0->f_36[0] = 0;
			uParam0->f_44 = 55;
			uParam0->f_46 = 1;
			break;
		
		case 13:
			uParam0->f_40 = { 943.7043f, 18.2618f, 115.2448f };
			uParam0->f_43 = 7.92f;
			uParam0->f_2 = 23;
			uParam0->f_3[0 /*2*/] = 5;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 6;
			uParam0->f_3[5 /*2*/] = 1;
			uParam0->f_3[5 /*2*/].f_1 = 2;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 2;
			break;
		
		case 14:
			uParam0->f_40 = { 946.0826f, 24.4982f, 115.6673f };
			uParam0->f_43 = 304.897f;
			uParam0->f_2 = 25;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 1;
			break;
		
		case 15:
			uParam0->f_40 = { 939.1f, 3.173f, 115.2f };
			uParam0->f_43 = 355.047f;
			uParam0->f_2 = 3;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 3;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 3;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 52;
			uParam0->f_46 = 1;
			break;
		
		case 16:
			uParam0->f_40 = { 949.3113f, 25.9423f, 115.3098f };
			uParam0->f_43 = 134.1968f;
			uParam0->f_2 = 23;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 9;
			uParam0->f_3[5 /*2*/] = 2;
			uParam0->f_3[5 /*2*/].f_1 = 1;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 2;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 57;
			uParam0->f_46 = 3;
			break;
		
		case 17:
			uParam0->f_40 = { 949.0017f, 26.6102f, 115.6823f };
			uParam0->f_43 = 123.1967f;
			uParam0->f_2 = 19;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 3;
			break;
		
		case 18:
			uParam0->f_40 = { 946.515f, 21.902f, 115.2398f };
			uParam0->f_43 = 307.44f;
			uParam0->f_2 = 26;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 1;
			uParam0->f_3[11 /*2*/] = 1;
			uParam0->f_3[11 /*2*/].f_1 = 2;
			uParam0->f_44 = 61;
			uParam0->f_46 = 5;
			break;
		
		case 19:
			uParam0->f_40 = { 947.325f, 22.57f, 115.2448f };
			uParam0->f_43 = 135.9463f;
			uParam0->f_2 = 23;
			uParam0->f_3[0 /*2*/] = 5;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 6;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 2;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 2;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 20:
			uParam0->f_40 = { 938.418f, 3.57f, 115.2223f };
			uParam0->f_43 = 291.7f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 5;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 3;
			uParam0->f_3[5 /*2*/].f_1 = 1;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 2;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 4;
			break;
		
		case 21:
			uParam0->f_40 = { 956.7952f, 21.6827f, 115.2448f };
			uParam0->f_43 = 4.7f;
			uParam0->f_2 = 10;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 5;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 2;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 4;
			break;
		
		case 22:
			uParam0->f_40 = { 957.3933f, 22.5142f, 115.2448f };
			uParam0->f_43 = 143.7959f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 3;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 1;
			uParam0->f_3[5 /*2*/].f_1 = 3;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 2;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 0;
			uParam0->f_36[0] = 0;
			uParam0->f_44 = 42;
			uParam0->f_46 = 5;
			break;
		
		case 23:
			uParam0->f_40 = { 951.354f, 21.7047f, 115.2448f };
			uParam0->f_43 = 223.1959f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 2;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 1;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 1;
			uParam0->f_36[0] = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 24:
			uParam0->f_40 = { 951.9577f, 21.07f, 115.2248f };
			uParam0->f_43 = 38.7955f;
			uParam0->f_2 = 11;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 6;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 45;
			uParam0->f_46 = 3;
			break;
		
		case 25:
			uParam0->f_40 = { 949.3122f, 19.3779f, 115.2448f };
			uParam0->f_43 = 37.3705f;
			uParam0->f_2 = 23;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 2;
			uParam0->f_3[4 /*2*/].f_1 = 5;
			uParam0->f_3[5 /*2*/] = 3;
			uParam0->f_3[5 /*2*/].f_1 = 1;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 26:
			uParam0->f_40 = { 949.5209f, 20.174f, 115.2448f };
			uParam0->f_43 = 129.0955f;
			uParam0->f_2 = 22;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 59;
			uParam0->f_46 = 1;
			break;
		
		case 27:
			uParam0->f_40 = { 942.5f, 0f, 115.2448f };
			uParam0->f_43 = 338.8953f;
			uParam0->f_2 = 17;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 45;
			uParam0->f_46 = 1;
			break;
		
		case 28:
			uParam0->f_40 = { 943.1325f, 13.1574f, 115.9348f };
			uParam0->f_43 = 190f;
			uParam0->f_2 = 12;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 3;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[0] = 1;
			uParam0->f_32[0] = 1;
			uParam0->f_36[0] = 0;
			uParam0->f_28[1] = 1;
			uParam0->f_32[1] = 0;
			uParam0->f_36[1] = 1;
			uParam0->f_44 = 2;
			uParam0->f_46 = 5;
			break;
		
		case 29:
			uParam0->f_40 = { 946.2049f, 19.0668f, 115.2448f };
			uParam0->f_43 = 156.095f;
			uParam0->f_2 = 9;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 30:
			uParam0->f_40 = { 935.6234f, 4.0235f, 115.2648f };
			uParam0->f_43 = 300f;
			uParam0->f_2 = 12;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 3;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 31:
			uParam0->f_40 = { 935.292f, 4.9361f, 115.4248f };
			uParam0->f_43 = 275.6f;
			uParam0->f_2 = 23;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 8;
			uParam0->f_3[5 /*2*/] = 1;
			uParam0->f_3[5 /*2*/].f_1 = 3;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 2;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 3;
			uParam0->f_46 = 4;
			break;
		
		case 32:
			uParam0->f_40 = { 937.6f, 9.5f, 115.2448f };
			uParam0->f_43 = 270.72f;
			uParam0->f_2 = 17;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_28[1] = 1;
			uParam0->f_32[1] = 1;
			uParam0->f_36[1] = 1;
			uParam0->f_44 = 30;
			uParam0->f_46 = 2;
			break;
		
		case 33:
			uParam0->f_40 = { 954.2008f, 24.0593f, 115.2448f };
			uParam0->f_43 = 29.9939f;
			uParam0->f_2 = 15;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 34:
			uParam0->f_40 = { 953.2839f, 24.6954f, 115.2448f };
			uParam0->f_43 = 263.36f;
			uParam0->f_2 = 10;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 3;
			uParam0->f_46 = 2;
			break;
		
		case 35:
			uParam0->f_40 = { 961.0172f, 28.1687f, 115.2448f };
			uParam0->f_43 = 121.2183f;
			uParam0->f_2 = 3;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 5;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 3;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 0;
			uParam0->f_46 = 5;
			break;
		
		case 36:
			uParam0->f_40 = { 960.3821f, 27.442f, 115.2448f };
			uParam0->f_43 = 328.0932f;
			uParam0->f_2 = 4;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 21;
			uParam0->f_46 = 5;
			break;
		
		case 37:
			uParam0->f_40 = { 946.99f, 23.97f, 115.65f };
			uParam0->f_43 = 332f;
			uParam0->f_2 = 18;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 4;
			break;
		
		case 38:
			uParam0->f_40 = { 937.6f, 10.8f, 115.2448f };
			uParam0->f_43 = 236.5f;
			uParam0->f_2 = 19;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 52;
			uParam0->f_46 = 4;
			break;
		
		case 39:
			uParam0->f_40 = { 943.33f, -0.15f, 115.2448f };
			uParam0->f_43 = 10f;
			uParam0->f_2 = 9;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 17;
			uParam0->f_46 = 5;
			break;
		
		case 40:
			uParam0->f_40 = { 958.58f, 45.04f, 115.67f };
			uParam0->f_43 = 231.3f;
			uParam0->f_2 = 16;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 1;
			break;
		
		case 41:
			uParam0->f_40 = { 958.79f, 43.38f, 115.65f };
			uParam0->f_43 = 329.1f;
			uParam0->f_2 = 4;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 1;
			break;
		
		case 42:
			uParam0->f_40 = { 962.3f, 47.3f, 116.2f };
			uParam0->f_43 = 0.3f;
			uParam0->f_2 = 6;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 5;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 3;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 1;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 14;
			uParam0->f_46 = 1;
			break;
		
		case 43:
			uParam0->f_40 = { 962.26f, 48.19f, 116.2f };
			uParam0->f_43 = 182f;
			uParam0->f_2 = 27;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 28;
			uParam0->f_46 = 1;
			break;
		
		case 44:
			uParam0->f_40 = { 954.08f, 25.21f, 115.2f };
			uParam0->f_43 = 154.8f;
			uParam0->f_2 = 3;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 4;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 1;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 59;
			uParam0->f_46 = 1;
			break;
		
		case 45:
			uParam0->f_40 = { 957.7f, 21.6f, 115.2f };
			uParam0->f_43 = 42.8f;
			uParam0->f_2 = 27;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 2;
			uParam0->f_3[11 /*2*/].f_1 = 1;
			uParam0->f_44 = 56;
			uParam0->f_46 = 1;
			break;
		
		case 46:
			uParam0->f_40 = { 945.7f, 23.6f, 115.2f };
			uParam0->f_43 = 157.4f;
			uParam0->f_2 = 25;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 2;
			uParam0->f_3[11 /*2*/] = 1;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 58;
			uParam0->f_46 = 1;
			break;
		
		case 47:
			uParam0->f_40 = { 944.93f, 22.76f, 115.2f };
			uParam0->f_43 = 300f;
			uParam0->f_2 = 13;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 2;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 7;
			uParam0->f_46 = 1;
			break;
		
		case 48:
			uParam0->f_40 = { 945.71f, 17.1f, 115.2f };
			uParam0->f_43 = 150.9f;
			uParam0->f_2 = 15;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 17;
			uParam0->f_46 = 1;
			break;
		
		case 49:
			uParam0->f_40 = { 945.27f, 16.27f, 115.2f };
			uParam0->f_43 = 333.3f;
			uParam0->f_2 = 11;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 18;
			uParam0->f_46 = 1;
			break;
	}
}

void func_43(var uParam0, int iParam1)//Position - 0x4D4C
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_40 = { 949.1602f, 0.9533f, 115.6748f };
			uParam0->f_43 = 33.9501f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 5;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 3;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 2;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 5;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 3;
			break;
		
		case 1:
			uParam0->f_40 = { 948.5114f, 2.207f, 115.2448f };
			uParam0->f_43 = 203.6001f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 5;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 2;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 32;
			uParam0->f_46 = 3;
			break;
		
		case 2:
			uParam0->f_40 = { 943.7761f, 2.3737f, 115.2597f };
			uParam0->f_43 = 287f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 3;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 4;
			break;
		
		case 3:
			uParam0->f_40 = { 944.6894f, 2.5794f, 115.2448f };
			uParam0->f_43 = 105.1996f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 4;
			break;
		
		case 4:
			uParam0->f_40 = { 946.3756f, 5.3382f, 115.2448f };
			uParam0->f_43 = 133.7994f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 7;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 5;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 2;
			break;
		
		case 5:
			uParam0->f_40 = { 945.341f, 5.1376f, 115.2448f };
			uParam0->f_43 = 260.1493f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 6;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 5;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 2;
			break;
		
		case 6:
			uParam0->f_40 = { 946.093f, 4.461f, 115.2448f };
			uParam0->f_43 = 1.199f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 4;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 2;
			break;
		
		case 7:
			uParam0->f_40 = { 941.0575f, 4.1073f, 115.2448f };
			uParam0->f_43 = 22.1992f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 8:
			uParam0->f_40 = { 940.3315f, 4.5308f, 115.2448f };
			uParam0->f_43 = 234.599f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 9:
			uParam0->f_40 = { 945.2953f, 9.2744f, 115.2448f };
			uParam0->f_43 = 130.5238f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 3;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 10:
			uParam0->f_40 = { 944.7067f, 8.6226f, 115.2448f };
			uParam0->f_43 = 328.325f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 11:
			uParam0->f_40 = { 936.2474f, 7.5443f, 115.2448f };
			uParam0->f_43 = 314.1984f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 24;
			uParam0->f_46 = 2;
			break;
		
		case 12:
			uParam0->f_40 = { 936.5831f, 8.3338f, 115.2448f };
			uParam0->f_43 = 168.2732f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 7;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 7;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 17;
			uParam0->f_46 = 2;
			break;
		
		case 13:
			uParam0->f_40 = { 940.6352f, 12.9253f, 115.2448f };
			uParam0->f_43 = 167.7982f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 6;
			uParam0->f_3[2 /*2*/].f_1 = 2;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 5;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 14:
			uParam0->f_40 = { 940.7306f, 11.9791f, 115.2448f };
			uParam0->f_43 = 79.7981f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 5;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 6;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 15:
			uParam0->f_40 = { 939.7188f, 11.7404f, 115.2448f };
			uParam0->f_43 = 336.723f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 1;
			break;
		
		case 16:
			uParam0->f_40 = { 939.5512f, 12.9063f, 115.2448f };
			uParam0->f_43 = 259.398f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 6;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 17:
			uParam0->f_40 = { 942.5848f, 13.0726f, 115.2448f };
			uParam0->f_43 = 192.9481f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 6;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 3;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 2;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 5;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 21;
			uParam0->f_46 = 5;
			break;
		
		case 18:
			uParam0->f_40 = { 945.7389f, 18.4156f, 115.2448f };
			uParam0->f_43 = 333.72f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 5;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 2;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 21;
			uParam0->f_46 = 3;
			break;
		
		case 19:
			uParam0->f_40 = { 941.1565f, 15.6501f, 115.6673f };
			uParam0->f_43 = 304.1979f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 4;
			break;
		
		case 20:
			uParam0->f_40 = { 940.9312f, 16.954f, 115.6373f };
			uParam0->f_43 = 233.9977f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 6;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 4;
			break;
		
		case 21:
			uParam0->f_40 = { 942.7503f, 18.7311f, 115.6673f };
			uParam0->f_43 = 221.2227f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 6;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 1;
			break;
		
		case 22:
			uParam0->f_40 = { 943.7043f, 18.2618f, 115.2448f };
			uParam0->f_43 = 86.8474f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 34;
			uParam0->f_46 = 2;
			break;
		
		case 23:
			uParam0->f_40 = { 944.0376f, 3.3225f, 115.2523f };
			uParam0->f_43 = 189.1973f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 7;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 7;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 24:
			uParam0->f_40 = { 946.0226f, 24.4982f, 115.6473f };
			uParam0->f_43 = 318.997f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 7;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 6;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 1;
			break;
		
		case 25:
			uParam0->f_40 = { 946.7876f, 24.0731f, 115.6798f };
			uParam0->f_43 = 326.047f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 7;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 1;
			break;
		
		case 26:
			uParam0->f_40 = { 949.3113f, 25.9423f, 115.3098f };
			uParam0->f_43 = 109.2968f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 5;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 6;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 32;
			uParam0->f_46 = 3;
			break;
		
		case 27:
			uParam0->f_40 = { 949.0017f, 26.6102f, 115.6823f };
			uParam0->f_43 = 123.1967f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 2;
			uParam0->f_46 = 3;
			break;
		
		case 28:
			uParam0->f_40 = { 947.7147f, 22.5621f, 115.2398f };
			uParam0->f_43 = 307.44f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 6;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 5;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 6;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 33;
			uParam0->f_46 = 5;
			break;
		
		case 29:
			uParam0->f_40 = { 948.3247f, 23.0696f, 115.2448f };
			uParam0->f_43 = 135.9463f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 30:
			uParam0->f_40 = { 957.8384f, 22.234f, 115.2223f };
			uParam0->f_43 = 113.7962f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 11;
			uParam0->f_46 = 4;
			break;
		
		case 31:
			uParam0->f_40 = { 957.2652f, 21.5127f, 115.2448f };
			uParam0->f_43 = 337.3962f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 4;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 4;
			break;
		
		case 32:
			uParam0->f_40 = { 957.1033f, 22.4842f, 115.2448f };
			uParam0->f_43 = 223.1959f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 3;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 5;
			break;
		
		case 33:
			uParam0->f_40 = { 951.934f, 22.3747f, 115.2448f };
			uParam0->f_43 = 223.1959f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 1;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 34:
			uParam0->f_40 = { 952.5277f, 21.74f, 115.2448f };
			uParam0->f_43 = 63.3955f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 2;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 3;
			break;
		
		case 35:
			uParam0->f_40 = { 949.3122f, 19.3779f, 115.2448f };
			uParam0->f_43 = 37.3705f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 6;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 4;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 3;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 5;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 32;
			uParam0->f_46 = 1;
			break;
		
		case 36:
			uParam0->f_40 = { 949.5209f, 20.174f, 115.2448f };
			uParam0->f_43 = 129.0955f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 7;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 7;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 10;
			uParam0->f_46 = 1;
			break;
		
		case 37:
			uParam0->f_40 = { 948.5744f, 19.8094f, 115.2448f };
			uParam0->f_43 = 261.7953f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 4;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 24;
			uParam0->f_46 = 1;
			break;
		
		case 38:
			uParam0->f_40 = { 942.6625f, 12.3174f, 115.2448f };
			uParam0->f_43 = 0f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 15;
			uParam0->f_46 = 5;
			break;
		
		case 39:
			uParam0->f_40 = { 946.2049f, 19.0668f, 115.2448f };
			uParam0->f_43 = 156.095f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 17;
			uParam0->f_46 = 3;
			break;
		
		case 40:
			uParam0->f_40 = { 935.8634f, 3.8235f, 115.2448f };
			uParam0->f_43 = 103.7946f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 1;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 1;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 34;
			uParam0->f_46 = 3;
			break;
		
		case 41:
			uParam0->f_40 = { 935.442f, 4.6561f, 115.2448f };
			uParam0->f_43 = 129.794f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 1;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 17;
			uParam0->f_46 = 4;
			break;
		
		case 42:
			uParam0->f_40 = { 954.5865f, 25.1964f, 115.2448f };
			uParam0->f_43 = 131.7939f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 1;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 2;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 0;
			uParam0->f_46 = 2;
			break;
		
		case 43:
			uParam0->f_40 = { 954.5208f, 24.2893f, 115.2448f };
			uParam0->f_43 = 16.7939f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 2;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 0;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 2;
			break;
		
		case 44:
			uParam0->f_40 = { 953.5839f, 24.6154f, 115.2448f };
			uParam0->f_43 = 286.5938f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 6;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 3;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 7;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 1;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 6;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 1;
			uParam0->f_46 = 2;
			break;
		
		case 45:
			uParam0->f_40 = { 961.0172f, 28.1687f, 115.2448f };
			uParam0->f_43 = 121.2183f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 4;
			uParam0->f_3[0 /*2*/].f_1 = 2;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 0;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 5;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 4;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 6;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 26;
			uParam0->f_46 = 5;
			break;
		
		case 46:
			uParam0->f_40 = { 960.3821f, 27.442f, 115.2448f };
			uParam0->f_43 = 328.0932f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 3;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 7;
			uParam0->f_3[2 /*2*/].f_1 = 1;
			uParam0->f_3[3 /*2*/] = 3;
			uParam0->f_3[3 /*2*/].f_1 = 2;
			uParam0->f_3[4 /*2*/] = 2;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 5;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 21;
			uParam0->f_46 = 5;
			break;
		
		case 47:
			uParam0->f_40 = { 956.9514f, 27.2328f, 115.2448f };
			uParam0->f_43 = 301.0679f;
			uParam0->f_2 = 0;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 1;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 2;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 19;
			uParam0->f_46 = 4;
			break;
		
		case 48:
			uParam0->f_40 = { 957.5153f, 28.0321f, 115.2448f };
			uParam0->f_43 = 167.5676f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 0;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 2;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 2;
			uParam0->f_3[3 /*2*/].f_1 = 0;
			uParam0->f_3[4 /*2*/] = 0;
			uParam0->f_3[4 /*2*/].f_1 = 0;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 0;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 15;
			uParam0->f_46 = 4;
			break;
		
		case 49:
			uParam0->f_40 = { 960.1348f, 28.1884f, 115.2448f };
			uParam0->f_43 = 242.4169f;
			uParam0->f_2 = 5;
			uParam0->f_3[0 /*2*/] = 0;
			uParam0->f_3[0 /*2*/].f_1 = 1;
			uParam0->f_3[1 /*2*/] = 0;
			uParam0->f_3[1 /*2*/].f_1 = 0;
			uParam0->f_3[2 /*2*/] = 4;
			uParam0->f_3[2 /*2*/].f_1 = 0;
			uParam0->f_3[3 /*2*/] = 3;
			uParam0->f_3[3 /*2*/].f_1 = 1;
			uParam0->f_3[4 /*2*/] = 6;
			uParam0->f_3[4 /*2*/].f_1 = 2;
			uParam0->f_3[5 /*2*/] = 0;
			uParam0->f_3[5 /*2*/].f_1 = 0;
			uParam0->f_3[6 /*2*/] = 3;
			uParam0->f_3[6 /*2*/].f_1 = 0;
			uParam0->f_3[7 /*2*/] = 0;
			uParam0->f_3[7 /*2*/].f_1 = 0;
			uParam0->f_3[8 /*2*/] = 0;
			uParam0->f_3[8 /*2*/].f_1 = 0;
			uParam0->f_3[9 /*2*/] = 0;
			uParam0->f_3[9 /*2*/].f_1 = 0;
			uParam0->f_3[10 /*2*/] = 0;
			uParam0->f_3[10 /*2*/].f_1 = 0;
			uParam0->f_3[11 /*2*/] = 0;
			uParam0->f_3[11 /*2*/].f_1 = 0;
			uParam0->f_44 = 17;
			uParam0->f_46 = 5;
			break;
	}
}

int func_44()//Position - 0x83BA
{
	var uVar0;
	
	uVar0 = Local_39.f_2;
	return uVar0;
}

int func_45()//Position - 0x83CA
{
	if (Global_1579054)
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x83DE
{
	if (iParam0 >= Global_262145.f_27042)
	{
		return 5;
	}
	else if (iParam0 >= Global_262145.f_27041)
	{
		return 4;
	}
	else if (iParam0 >= Global_262145.f_27040)
	{
		return 3;
	}
	else if (iParam0 >= Global_262145.f_27039)
	{
		return 2;
	}
	return 1;
}

void func_47()//Position - 0x8430
{
	while (!NETWORK::_NETWORK_IS_THIS_SCRIPT_MARKED(32, false, Global_1579073))
	{
		SYSTEM::WAIT(0);
	}
	Global_1579073++;
	func_48(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_39, 3, 0);
}

int func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x8469
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_26();
			}
			else
			{
				return 0;
			}
		}
		if (!func_49(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_26();
					}
					else
					{
						return 0;
					}
				}
				if (func_36())
				{
					if (!bParam2)
					{
						func_26();
					}
					else
					{
						return 0;
					}
				}
				if (func_34(157))
				{
					if (!bParam2)
					{
						func_26();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_26();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_26();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_26();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_49(bool bParam0)//Position - 0x857F
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

