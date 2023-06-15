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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	struct<5> Local_41 = { 0, 0, 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	char* sLocal_52 = NULL;
	struct<5> Local_53 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	sLocal_16 = "NULL";
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
	iLocal_46 = -1;
	iLocal_47 = -1;
	fLocal_50 = 1.7f;
	fLocal_51 = 0f;
	sLocal_52 = "";
	iLocal_61 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_181();
	}
	Local_41 = { ScriptParam_0 };
	func_180();
	func_179();
	func_174(iLocal_46, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_173();
	func_169();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_168(iLocal_46);
		func_167();
		func_165();
		func_158();
		func_174(iLocal_46, 0, 0);
		func_180();
		func_9();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()//Position - 0x127
{
	if ((!func_4() && !func_3()) && Global_2684819)
	{
		Global_4718592.f_117591 = 0;
	}
}

bool func_3()//Position - 0x155
{
	return Global_2683883.f_691;
}

bool func_4()//Position - 0x164
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

void func_5()//Position - 0x17B
{
	Global_2683883.f_756 = 1;
}

var func_6()//Position - 0x18B
{
	return Global_2683883.f_735;
}

var func_7()//Position - 0x19A
{
	return BitTest(Global_2683883.f_2, 11);
}

bool func_8()//Position - 0x1AB
{
	return BitTest(Global_2684820.f_1.f_2810, 3);
}

void func_9()//Position - 0x1BE
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_41.f_1, false))
	{
		func_181();
	}
	if (bLocal_48)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_181();
		}
	}
	func_157();
	bVar0 = true;
	switch (Local_58.f_0)
	{
		case 4:
			func_156();
			return;
		
		case 5:
			func_153();
			return;
		
		case 6:
			func_151();
			return;
		
		case 7:
			func_150();
			return;
		
		case 8:
			func_149();
			return;
		
		case 9:
			func_147();
			return;
		
		case 10:
			func_146();
			func_143();
			func_142();
			return;
		
		case 11:
			func_141();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_58.f_0 == 12)
	{
		return;
	}
	switch (Local_58.f_1)
	{
		case 1:
			if (!func_140())
			{
				func_124();
				func_143();
			}
			break;
		
		case 2:
			func_122();
			break;
		
		case 12:
			func_109();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()//Position - 0x2D9
{
	var uVar0;
	char* sVar2;
	struct<53> Var3;
	int iVar61;
	
	if (!BitTest(Global_1950844.f_3, 27))
	{
		PED::SET_PED_TO_RAGDOLL(Local_41.f_1, 3000, 3500, 0, true, true, false);
	}
	Global_1945110 = 1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_108(&uVar0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
		}
		while (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID())) && NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()))
		{
			func_181();
		}
		MISC::CLEAR_BIT(&(Global_1950844.f_3), 27);
		func_93(PLAYER::PLAYER_ID(), 0, 57344, 0);
		Global_2635560.f_2781 = 1;
		if (BitTest(Global_1950844, 15))
		{
			MISC::CLEAR_BIT(&Global_1950844, 15);
		}
		if (BitTest(Global_1950844.f_2, 6))
		{
			MISC::CLEAR_BIT(&(Global_1950844.f_2), 6);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2635560.f_2782 = 1;
		}
		else
		{
			Global_2635560.f_2782 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		}
		if (func_88(1))
		{
			func_75(0);
		}
		func_73(1);
		func_181();
	}
	if (bLocal_63)
	{
		func_181();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar61 = 4;
				}
				if (func_64(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_62())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3.f_0 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3.f_0 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3.f_0 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3.f_0 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3.f_0 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3.f_0 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3.f_0 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_41.f_1, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_41.f_1, Var3.f_5, true, false, false, true);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_181();
}

void func_11(int iParam0, int iParam1)//Position - 0x760
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)//Position - 0x7BD
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	struct<3> Var186;
	struct<3> Var189;
	float fVar192;
	float fVar193;
	float fVar194;
	struct<3> Var195;
	float fVar198;
	float fVar199;
	float fVar200;
	struct<3> Var201;
	struct<3> Var204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	struct<3> Var211;
	float fVar214;
	float fVar215;
	float fVar216;
	struct<3> Var217;
	struct<3> Var220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, true, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), true, false, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(false);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, true, false, false, false);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	func_51();
	while (func_50())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, false);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar4, false);
		iVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_48(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1000f, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		bVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0f, false, false, false);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = func_67();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, false);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_40(0);
			iVar179 = MISC::GET_GAME_TIMER();
			if (iVar179 >= (Global_43928 - 500))
			{
				func_39(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar177)))
			{
				iVar183 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
				iVar184 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var189 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var186, Var189, true);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							fVar198 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar199 = Var195.f_2;
							fVar200 = fVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar193, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar194);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(fVar193);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(fVar194);
						Var201 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var204 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar207 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var201, Var204, true);
						iVar208 = SYSTEM::ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar178)) || iVar182)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, false);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar214 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar215 = Var211.f_2;
									fVar216 = fVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar209, 1f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar210);
								Var217 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								Var220 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar223 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var217, Var220, true);
								iVar224 = SYSTEM::ROUND((fVar223 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar224, false, false, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar225 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	bVar226 = false;
	if (uParam1->f_32)
	{
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			SYSTEM::WAIT(0);
			bVar225 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
			bVar226 = false;
			if (uParam1->f_32)
			{
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(iVar5, false);
	func_13(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, bVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)//Position - 0x11FA
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)//Position - 0x1215
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, false);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x126D
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, true);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1286
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false))
			{
				func_14(uParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var15 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.f_0)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.f_0)), SYSTEM::SIN(Var9.f_0) };
				Var18 = { (-SYSTEM::SIN(Var12.f_2) * SYSTEM::COS(Var12.f_0)), (SYSTEM::COS(Var12.f_2) * SYSTEM::COS(Var12.f_0)), SYSTEM::SIN(Var12.f_0) };
				fVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(joaat("TIMED_SPLINE_CAMERA"), false);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var3, true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), true);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, false);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, false);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, false);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0x1629
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_18();
}

void func_18()//Position - 0x1639
{
	Global_23251.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)//Position - 0x1647
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1659
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0x1691
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16B8
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x1706
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_35();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_33();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_32())
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78689)
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
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
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
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()//Position - 0x19D4
{
	if (!func_25())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_25()//Position - 0x1A0B
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_28())
	{
		return 0;
	}
	if (func_26(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)//Position - 0x1A6E
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)//Position - 0x1A7E
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_28()//Position - 0x1A96
{
	return -1;
}

void func_29()//Position - 0x1A9F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_30()//Position - 0x1ACF
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_31()//Position - 0x1B64
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()//Position - 0x1B8B
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
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

void func_33()//Position - 0x1C24
{
	if (func_34(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_67();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

bool func_34(int iParam0)//Position - 0x1CC6
{
	return Global_43377 == iParam0;
}

void func_35()//Position - 0x1CD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)//Position - 0x1D2A
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

void func_37()//Position - 0x1D62
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1DB9
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = uParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

void func_39(int iParam0)//Position - 0x1E0F
{
	Global_43928 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_40(int iParam0)//Position - 0x1E21
{
	if (func_45())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_41(int iParam0)//Position - 0x1E54
{
	if (func_45())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_31())
	{
		Global_20500.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)//Position - 0x1EDE
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_43()//Position - 0x1F52
{
	return BitTest(Global_1963795, 5);
}

int func_44(int iParam0)//Position - 0x1F60
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_45()//Position - 0x1FB7
{
	return BitTest(Global_1963795, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1FC6
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
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

void func_47(char* sParam0, int iParam1)//Position - 0x2061
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_48(int iParam0, var uParam1)//Position - 0x2078
{
	if (func_49(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)//Position - 0x216F
{
	return (uParam0 && iParam1) != 0;
}

int func_50()//Position - 0x217E
{
	if (((Global_100833 == 13 || Global_100833 == 10) || Global_100833 == 11) || Global_100833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()//Position - 0x21BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97746[iVar0 /*17*/] && !Global_97746[iVar0 /*17*/].f_1)
		{
			if (Global_97746[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97746[iVar0 /*17*/].f_5 != 88 && Global_97746[iVar0 /*17*/].f_5 != 89) && Global_97746[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_97746[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)//Position - 0x2243
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94798[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94798[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x2281
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_54()//Position - 0x22C8
{
	func_55();
	func_73(1);
}

void func_55()//Position - 0x22D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_44355[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_174(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_44329[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)//Position - 0x2339
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44329[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44329[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44567 = 0;
		}
	}
	Global_44329[iParam0 /*5*/] = 13;
	Global_44329[iParam0 /*5*/].f_1 = 0;
	Global_44329[iParam0 /*5*/].f_2 = 0;
	Global_44329[iParam0 /*5*/].f_3 = 0;
	Global_44329[iParam0 /*5*/].f_4 = 0;
	Global_44327 = (Global_44327 - 1);
	if (Global_44327 < 0)
	{
		Global_44327 = 0;
	}
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x23BC
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_61(0);
		MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(false);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam5 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !func_58()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), false, false);
			MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()//Position - 0x25DB
{
	return !Global_77479.f_553;
}

void func_59()//Position - 0x25EB
{
	Global_77479.f_553 = 1;
	Global_77479.f_554 = 0;
}

void func_60()//Position - 0x2603
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_77479[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)//Position - 0x2627
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100833.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_100833.f_20), 2);
			}
		}
		else if (BitTest(Global_100833.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
		}
	}
}

int func_62()//Position - 0x2678
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)//Position - 0x2696
{
	return BitTest(Global_113810.f_7232[iParam0], 0);
}

int func_64(int iParam0)//Position - 0x26AB
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_99.f_58[iParam0];
}

int func_65()//Position - 0x26D8
{
	if (Global_40315[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)//Position - 0x2756
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_330[iParam0 /*6*/];
}

int func_67()//Position - 0x2782
{
	func_68();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_68()//Position - 0x279B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_71(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_70(PLAYER::PLAYER_PED_ID());
			if (func_69(iVar0) && (!func_34(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_69(Global_113810.f_2366.f_539.f_4321))
				{
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
				}
				Global_113810.f_2366.f_539.f_4323 = iVar0;
				Global_113810.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
			{
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113810.f_2366.f_539.f_4321 = 145;
}

bool func_69(int iParam0)//Position - 0x2898
{
	return iParam0 < 3;
}

int func_70(int iParam0)//Position - 0x28A4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)//Position - 0x28E1
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)//Position - 0x2906
{
	return Global_2058[iParam0 /*29*/];
}

void func_73(bool bParam0)//Position - 0x2915
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44547))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_44547))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_44547);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_44535))
	{
		if (CAM::IS_CAM_SHAKING(Global_44535))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44535, 0f);
			CAM::STOP_CAM_SHAKING(Global_44535, true);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_44542 = 0f;
	StringCopy(&Global_44543, "", 16);
	StringCopy(&Global_44547, "", 64);
	StringCopy(&Global_44563, "", 16);
	func_74();
}

void func_74()//Position - 0x29EE
{
	Global_44534 = 0;
	Global_44535 = 0;
	Global_44536 = 0;
	Global_44537 = 30000;
	Global_44538 = 0f;
	Global_44540 = 0f;
	Global_44539 = 0f;
	Global_44541 = 1f;
	Global_44542 = 0f;
	StringCopy(&Global_44543, "", 16);
}

void func_75(int iParam0)//Position - 0x2A23
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18341 /* Tunable: -539038925 */;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18331 /* Tunable: BIKER_MC_POINTS_WIN_MINIGAME */;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18342 /* Tunable: 771289284 */;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18334 /* Tunable: BIKER_MC_POINTS_DESTROY_PRODUCT */;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18330 /* Tunable: BIKER_MC_POINTS_ROB_SHOP */;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18345 /* Tunable: BIKER_MC_POINTS_DESTROY_MEMBERS_PV */;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18346 /* Tunable: -555621765 */;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18349 /* Tunable: 45776395 */;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18350 /* Tunable: BIKER_MC_POINTS_DRIVE_CAR */;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18343 /* Tunable: 419613951 */;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19235 /* Tunable: 1684681813 */;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19234 /* Tunable: -1825390724 */;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_86(func_87()), func_85(func_87()), func_84(), func_83(), iParam0, iVar0);
	}
	func_82(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)//Position - 0x2B48
{
	int iVar0;
	
	iVar0 = func_81(3971, -1);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_469 = iVar0;
	func_77(3971, iVar0, -1, 1);
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2B94
{
	int iVar0;
	
	iVar0 = func_78(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_78(int iParam0, var uParam1)//Position - 0x2BB7
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_79(uParam1));
}

int func_79(var uParam0)//Position - 0x2BCC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_80();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_80()//Position - 0x2C00
{
	return Global_1574918;
}

int func_81(int iParam0, int iParam1)//Position - 0x2C0C
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_78(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_82(int iParam0)//Position - 0x2C3B
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1895156[iVar0 /*609*/].f_10.f_468 = (Global_1895156[iVar0 /*609*/].f_10.f_468 + iParam0);
	if (Global_1895156[iVar0 /*609*/].f_10.f_468 < -9999)
	{
		Global_1895156[iVar0 /*609*/].f_10.f_468 = 9999;
	}
	else if (Global_1895156[iVar0 /*609*/].f_10.f_468 > 9999)
	{
		Global_1895156[iVar0 /*609*/].f_10.f_468 = 9999;
	}
}

int func_83()//Position - 0x2CB5
{
	if (Global_1948440.f_3 != 0)
	{
		return Global_1948440.f_3;
	}
	return -1;
}

int func_84()//Position - 0x2CD1
{
	if (Global_1948440.f_2 != 0)
	{
		return Global_1948440.f_2;
	}
	return -1;
}

int func_85(int iParam0)//Position - 0x2CED
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_8[1];
}

int func_86(int iParam0)//Position - 0x2D12
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_8[0];
}

int func_87()//Position - 0x2D37
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_88(bool bParam0)//Position - 0x2D4C
{
	return func_89(PLAYER::PLAYER_ID(), bParam0);
}

int func_89(int iParam0, bool bParam1)//Position - 0x2D5E
{
	return func_90(iParam0, bParam1, 1);
}

int func_90(int iParam0, bool bParam1, int iParam2)//Position - 0x2D6F
{
	int iVar0;
	
	if (!func_92(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_91(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_28() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, int iParam1)//Position - 0x2DCC
{
	if (func_92(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_28())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_92(var uParam0)//Position - 0x2E1B
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

void func_93(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2E3D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_107())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_105())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_103(PLAYER::PLAYER_ID(), 0) && !func_102()) && !func_101(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657704[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_98(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_97(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_96();
					func_95();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2657704[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635560.f_2781)
				{
					Global_2635560.f_2781 = 0;
				}
			}
			else
			{
				if (!func_97(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_94(Global_4718592.f_171044))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575038)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_94(int iParam0)//Position - 0x32D9
{
	return iParam0 == 17;
}

void func_95()//Position - 0x32E6
{
	struct<3> Var0;
	
	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { Var0 };
}

void func_96()//Position - 0x3333
{
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
}

int func_97(int iParam0)//Position - 0x3371
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_98(bool bParam0, int iParam1, int iParam2)//Position - 0x33A2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_100();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_103(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_99(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_99(int iParam0, bool bParam1)//Position - 0x3472
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_100()//Position - 0x348E
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_101(int iParam0)//Position - 0x34E6
{
	if (func_103(iParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()//Position - 0x3525
{
	return BitTest(Global_2621446, 3);
}

bool func_103(int iParam0, int iParam1)//Position - 0x3533
{
	bool bVar0;
	
	if (!func_92(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_104(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_104(int iParam0, bool bParam1)//Position - 0x358C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_80();
	}
	if (Global_1575043[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_105()//Position - 0x35CD
{
	if (func_106() == 0)
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0x35E2
{
	return Global_1574632.f_18;
}

int func_107()//Position - 0x35F0
{
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_108(var uParam0, bool bParam1, bool bParam2)//Position - 0x3621
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_109()//Position - 0x3666
{
	int iVar0;
	
	if (bLocal_48)
	{
		return;
	}
	Local_41.f_4 = 0;
	if (!func_110(Global_44355[iLocal_62 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	Local_58.f_0 = 5;
	Local_53.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_110(int iParam0)//Position - 0x36A9
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_121();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_41.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_41.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_41.f_1))
		{
			return 0;
		}
		if (func_117(Local_41.f_1))
		{
			return 0;
		}
	}
	if ((Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0) && Global_44355[iLocal_62 /*5*/].f_3 > Global_44355[iLocal_62 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44355[iLocal_62 /*5*/].f_4 < 9 && Global_44355[iLocal_62 /*5*/].f_4 != 0) && Global_44355[iLocal_62 /*5*/].f_4 > Global_44355[iLocal_62 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_116(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 0;
	}
	if (func_117(Local_41.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_113(Local_41.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_41.f_1))
			{
				TASK::TASK_PLAY_ANIM(Local_41.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0f, false, false, false);
				sLocal_52 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_41.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_41.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_41.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_41.f_1, 0, sVar1, "idle", 2f, true);
	Local_58.f_2 = sVar1;
	bLocal_49 = true;
	iVar4 = 0;
	switch (func_70(Local_41.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (PED::IS_PED_A_PLAYER(Local_41.f_1))
			{
				if (!func_111())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_41.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_41.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_41.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_41.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_41.f_1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_41.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_41.f_1, true);
	return 1;
}

bool func_111()//Position - 0x396B
{
	return func_112(PLAYER::PLAYER_ID());
}

int func_112(int iParam0)//Position - 0x397B
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x399A
{
	struct<3> Var0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 7)
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_75816)
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_114())
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_114()//Position - 0x3A9B
{
	return Global_100885.f_394 > 0;
}

bool func_115()//Position - 0x3AAC
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

char* func_116(int iParam0)//Position - 0x3AC1
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_117(int iParam0)//Position - 0x3B02
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_118(iParam0);
	sVar1 = func_116(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_58.f_2))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(Local_58.f_2, sVar1);
}

int func_118(int iParam0)//Position - 0x3B43
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_120(iParam0);
	iVar1 = func_119(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44355[iVar1 /*5*/].f_2;
}

int func_119(int iParam0)//Position - 0x3B86
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44355[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_120(int iParam0)//Position - 0x3BB6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44355[iVar0 /*5*/].f_1)
		{
			return Global_44355[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_121()//Position - 0x3BF7
{
	int iVar0;
	
	if (Local_53.f_0 == -2)
	{
		return -2;
	}
	if (Local_53.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_53.f_0 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_122()//Position - 0x3C3D
{
	if (bLocal_48)
	{
		return;
	}
	if (!func_123())
	{
		Local_58.f_0 = 5;
		Local_53.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	Local_58.f_0 = 6;
}

bool func_123()//Position - 0x3C69
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_41.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_41.f_4, false))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_41.f_1, true) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(Local_41.f_4, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true);
	return fVar6 < 7f;
}

void func_124()//Position - 0x3CBA
{
	int iVar0;
	char* sVar1;
	
	if (Local_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_41.f_1))
		{
			if (Global_44355[iLocal_62 /*5*/].f_2 == 0 || Global_44355[iLocal_62 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_41.f_1, false, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_41.f_1))
		{
			PED::SET_PED_DUCKING(Local_41.f_1, false);
		}
	}
	if (Local_53.f_0 != -2)
	{
		if (Local_53.f_0 == -1)
		{
			if (Global_44355[iLocal_62 /*5*/].f_2 != 0)
			{
				Global_44355[iLocal_62 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_53.f_0 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44355[iLocal_62 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44355[iLocal_62 /*5*/].f_2 = 2;
					if (!func_110(2))
					{
						Global_44355[iLocal_62 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44355[iLocal_62 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44355[iLocal_62 /*5*/].f_2 = 1;
					if (!func_110(2))
					{
						Global_44355[iLocal_62 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44355[iLocal_62 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_52))
	{
		if (!func_113(Local_41.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_41.f_1, sVar1, sLocal_52, 3))
			{
				TASK::STOP_ANIM_TASK(Local_41.f_1, sVar1, sLocal_52, -4f);
			}
			sLocal_52 = "";
			return;
		}
	}
	if ((Global_44355[iLocal_62 /*5*/].f_3 >= 10 || Global_44355[iLocal_62 /*5*/].f_4 >= 15) || BitTest(Global_44572, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_41.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !BitTest(Global_1950844.f_3, 27))
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_41.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, true))
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_41.f_1 == PLAYER::PLAYER_PED_ID()) && func_139(PLAYER::PLAYER_ID())) && Global_262145.f_24533 /* Tunable: -748730308 */)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_41.f_1 == PLAYER::PLAYER_PED_ID()) && func_138())
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_137())
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_136())
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_133(PLAYER::PLAYER_ID()))
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_41.f_1 == PLAYER::PLAYER_PED_ID()) && func_132(PLAYER::PLAYER_ID())) && Global_262145.f_27220 /* Tunable: VC_CASINO_DISABLE_PASSOUT */)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_41.f_1 == PLAYER::PLAYER_PED_ID()) && func_129(PLAYER::PLAYER_ID())) && Global_262145.f_27253 /* Tunable: VC_PENTHOUSE_DISABLE_PASSOUT */)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_41.f_1 == PLAYER::PLAYER_PED_ID()) && func_125(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_41.f_1 == PLAYER::PLAYER_PED_ID()) && Global_75816) && !Global_44328)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_58.f_1 = 3;
		return;
	}
	if (!bLocal_49)
	{
		return;
	}
	if (!func_117(Local_41.f_1))
	{
		return;
	}
}

int func_125(int iParam0)//Position - 0x41F3
{
	if (func_128(iParam0) == 243)
	{
		return func_126(iParam0);
	}
	return -1;
}

int func_126(int iParam0)//Position - 0x4210
{
	if (func_127(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_127(int iParam0, int iParam1)//Position - 0x4233
{
	if (func_92(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x4277
{
	if (func_92(iParam0))
	{
		if (func_127(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_129(int iParam0)//Position - 0x42A3
{
	if (iParam0 != func_28())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_130(Global_2657704[iParam0 /*463*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x42EA
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

int func_131(int iParam0, bool bParam1, bool bParam2)//Position - 0x479E
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x47FE
{
	if (iParam0 != func_28())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_130(Global_2657704[iParam0 /*463*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

bool func_133(int iParam0)//Position - 0x4845
{
	return func_134(func_135(iParam0));
}

int func_134(int iParam0)//Position - 0x4857
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x4889
{
	if (func_128(iParam0) == 256)
	{
		return func_126(iParam0);
	}
	return -1;
}

var func_136()//Position - 0x48A7
{
	return Global_2683883.f_24;
}

var func_137()//Position - 0x48B5
{
	return Global_2683883.f_21;
}

var func_138()//Position - 0x48C3
{
	return Global_2764793;
}

int func_139(int iParam0)//Position - 0x48CF
{
	if (iParam0 != func_28())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_130(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_140()//Position - 0x4916
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_41.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_41.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == Local_41.f_1)
	{
		return 0;
	}
	Local_41.f_4 = iVar0;
	Local_58.f_0 = 7;
	return 1;
}

void func_141()//Position - 0x496A
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
	{
		Local_58.f_0 = 4;
		return;
	}
}

void func_142()//Position - 0x4985
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (!bLocal_48)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var5, Var8) && !PED::IS_COP_PED_IN_AREA_3D(Var5, Var8))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	func_11(73, 1);
}

void func_143()//Position - 0x4A54
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_41.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_41.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!iVar2 == Local_41.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_41.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_51 = 0f;
		func_145(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_53.f_4)
	{
		func_145(iVar0, fLocal_51);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_53.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_53.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_51 = 0f;
		func_145(iVar0, 0f);
		return;
	}
	if (Local_53.f_1 == -1)
	{
		fLocal_51 = func_144(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_53.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_51 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_51 = func_144(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_51 = func_144(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_51 = func_144(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_51 = func_144(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_51 = func_144(iVar0, 0.13f, 0.06f);
		}
	}
	func_145(iVar0, fLocal_51);
}

float func_144(int iParam0, float fParam1, float fParam2)//Position - 0x4BF6
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_145(int iParam0, float fParam1)//Position - 0x4C8A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::SET_PED_STEER_BIAS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_146()//Position - 0x4CD5
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
	{
		Local_58.f_0 = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_44355[iLocal_62 /*5*/].f_3 >= 10 || Global_44355[iLocal_62 /*5*/].f_4 >= 15)
		{
			if (Global_44355[iLocal_62 /*5*/].f_3 >= 10)
			{
				Global_44355[iLocal_62 /*5*/].f_3 = 9;
			}
			if (Global_44355[iLocal_62 /*5*/].f_4 >= 15)
			{
				Global_44355[iLocal_62 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_48)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_41.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Local_41.f_1, 0, 0);
		Local_58.f_0 = 11;
		return;
	}
}

void func_147()//Position - 0x4D79
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_53.f_3)
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));
	if (!iVar0 == 7)
	{
		Local_53.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
	{
		Local_58.f_0 = 4;
		Local_53.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_41.f_1, false);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
	if (iVar2 == Local_41.f_1)
	{
		func_148();
		Local_53.f_3 = -2;
		return;
	}
	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_41.f_1, iVar1, false);
	Local_58.f_0 = 9;
	Local_53.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_148()//Position - 0x4E14
{
	if (Local_58.f_0 == 10)
	{
		return;
	}
	Local_58.f_0 = 10;
	if (iLocal_46 == -1)
	{
		return;
	}
	func_174(iLocal_46, 2, 5);
	Local_53.f_4 = SYSTEM::TIMERA();
	fLocal_51 = 0f;
}

void func_149()//Position - 0x4E46
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_41.f_1))
	{
		Local_58.f_0 = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_53.f_3)
	{
		return;
	}
	Local_58.f_0 = 4;
	Local_53.f_3 = -2;
}

void func_150()//Position - 0x4E78
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_48)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_41.f_1))
	{
		if (!bLocal_48)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_41.f_1, false);
		if (!iVar0 == Local_41.f_4)
		{
			if (!bLocal_48)
			{
			}
			if (!bLocal_48)
			{
				if (!bLocal_48)
				{
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_41.f_1, 0, 0);
				Local_58.f_0 = 11;
				return;
			}
			Local_41.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_48)
			{
			}
			func_148();
			return;
		}
		if (!bLocal_48)
		{
			if (!bLocal_48)
			{
			}
			func_148();
			return;
		}
		if (!bLocal_48)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_41.f_4, -1, false);
		if (iVar2 == Local_41.f_1)
		{
			func_148();
			return;
		}
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_41.f_1, iVar0, false);
		Local_58.f_0 = 9;
		Local_53.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_123())
	{
		TASK::CLEAR_PED_TASKS(Local_41.f_1);
		Local_58.f_0 = 4;
		return;
	}
	if (!bLocal_48)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_41.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
			{
				TASK::CLEAR_PED_TASKS(Local_41.f_1);
				Local_58.f_0 = 4;
				return;
			}
		}
	}
}

void func_151()//Position - 0x4F94
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_48)
	{
		return;
	}
	if (Local_41.f_4 == 0)
	{
		Local_58.f_0 = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_41.f_4, false))
	{
		Local_41.f_4 = 0;
		Local_58.f_0 = 4;
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_41.f_1, true) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(Local_41.f_4, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true);
	if (fVar6 > 3f)
	{
		if (!func_110(Global_44355[iLocal_62 /*5*/].f_2))
		{
			Local_58.f_0 = 12;
			return;
		}
		Local_58.f_0 = 5;
		Local_53.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar7 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_41.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_41.f_4, iVar8, false))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			Local_58.f_0 = 4;
			return;
		}
	}
	func_152();
	TASK::TASK_ENTER_VEHICLE(Local_41.f_1, Local_41.f_4, -1, iVar8, 2f, 1, 0);
	Local_58.f_0 = 7;
}

void func_152()//Position - 0x5097
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_41.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_41.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_41.f_1, 0.25f);
		PED::RESET_PED_STRAFE_CLIPSET(Local_41.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_41.f_1, 0, -8f);
		Local_58.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_41.f_1);
		PED::SET_PED_RESET_FLAG(Local_41.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_41.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_41.f_1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_41.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_41.f_1, false);
	}
	if (!bLocal_49)
	{
		return;
	}
	bLocal_49 = false;
}

void func_153()//Position - 0x512C
{
	if (SYSTEM::TIMERA() < Local_53.f_2)
	{
		func_124();
		return;
	}
	func_154();
	Local_53.f_2 = -2;
	Local_58.f_0 = 12;
}

int func_154()//Position - 0x5156
{
	if (!func_117(Local_41.f_1))
	{
		return 0;
	}
	if (!bLocal_49)
	{
		return 0;
	}
	func_155(Local_41.f_1);
	Local_58.f_2 = "";
	Global_2794162.f_4644 = 1;
	return 1;
}

void func_155(int iParam0)//Position - 0x518F
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 0.25f);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, false);
}

void func_156()//Position - 0x51D0
{
	int iVar0;
	
	if (Local_53.f_0 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_53.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
	{
		Local_58.f_0 = 10;
		return;
	}
	if (func_117(Local_41.f_1))
	{
		Local_58.f_0 = 12;
		return;
	}
	if (Local_53.f_0 == -2)
	{
		return;
	}
	if (!func_110(Global_44355[iLocal_62 /*5*/].f_2))
	{
		return;
	}
	Local_58.f_0 = 12;
}

void func_157()//Position - 0x52A6
{
}

void func_158()//Position - 0x52AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44436[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44436[iVar1 /*6*/].f_1 == iLocal_46)
			{
				func_160(iVar1);
				func_159(iVar1);
			}
			else if (Global_44436[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_47 == -1)
				{
					if (iLocal_47 == Global_44436[iVar1 /*6*/])
					{
						func_160(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_159(int iParam0)//Position - 0x5326
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44436[iParam0 /*6*/] = -1;
	Global_44436[iParam0 /*6*/].f_1 = -1;
	Global_44436[iParam0 /*6*/].f_2 = 6;
	Global_44436[iParam0 /*6*/].f_3 = 0;
	Global_44436[iParam0 /*6*/].f_4 = 0;
}

void func_160(int iParam0)//Position - 0x5373
{
	int iVar0;
	
	iVar0 = Global_44436[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_181();
			break;
		
		case 2:
			func_164(Global_44436[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_163(Global_44436[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_162();
			break;
		
		case 5:
			func_161();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_161()//Position - 0x53F5
{
	Local_58.f_1 = 2;
}

void func_162()//Position - 0x5402
{
	int iVar0;
	
	Global_44355[iLocal_62 /*5*/].f_4++;
	if (Local_53.f_0 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_4 < 9 && Global_44355[iLocal_62 /*5*/].f_4 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_53.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
		}
		if (!func_117(Local_41.f_1))
		{
			func_110(Global_44355[iLocal_62 /*5*/].f_2);
		}
	}
}

void func_163(int iParam0)//Position - 0x54C2
{
	int iVar0;
	
	Global_44355[iLocal_62 /*5*/].f_3 = (Global_44355[iLocal_62 /*5*/].f_3 + iParam0);
	if (Local_53.f_0 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_53.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
		}
		if (!func_117(Local_41.f_1))
		{
			func_110(Global_44355[iLocal_62 /*5*/].f_2);
		}
	}
}

void func_164(int iParam0)//Position - 0x5582
{
	Local_41.f_3 = (Local_41.f_3 + iParam0);
	Local_41.f_2 = (Local_41.f_2 + iParam0);
	Local_53.f_1 = (Local_53.f_1 + iParam0);
	Local_53.f_0 = (Local_53.f_0 + iParam0);
}

void func_165()//Position - 0x55B2
{
	int iVar0;
	
	if (!bLocal_48)
	{
		iLocal_61 = -1;
		return;
	}
	if (iLocal_61 < 0)
	{
		iLocal_61 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_61)
	{
		if (iVar0 > iLocal_61)
		{
			func_166();
		}
		iLocal_61 = iVar0;
		return;
	}
}

void func_166()//Position - 0x55FC
{
}

void func_167()//Position - 0x5604
{
	if (!Local_53.f_0 == -1)
	{
		if (!Local_53.f_0 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_53.f_0)
			{
				func_152();
				Local_53.f_0 = -2;
				Local_58.f_0 = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_53.f_1)
		{
			func_181();
		}
	}
}

void func_168(int iParam0)//Position - 0x5643
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44436[iVar0 /*6*/])
		{
			func_159(iVar0);
		}
		iVar0++;
	}
}

void func_169()//Position - 0x5673
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_58.f_0 = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_41.f_1, false))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_41.f_1))
		{
			Local_58.f_0 = 10;
		}
	}
	if (bLocal_48)
	{
		func_172();
		func_11(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_81(2059, -1);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_170(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1);
			bLocal_63 = true;
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_170(iVar6);
			}
			switch (func_67())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), iVar2 + 1, true);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), iVar3 + 1, true);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), iVar4 + 1, true);
					break;
				}
		}
		Local_58.f_1 = 1;
		return;
	}
	Local_58.f_1 = 12;
	if (Local_53.f_0 == -1)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
	}
	else if (Global_44355[iLocal_62 /*5*/].f_3 < 3 && Global_44355[iLocal_62 /*5*/].f_3 != 0)
	{
		Global_44355[iLocal_62 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_53.f_0 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44355[iLocal_62 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44355[iLocal_62 /*5*/].f_2 = 1;
		}
	}
}

void func_170(int iParam0)//Position - 0x5821
{
	int iVar0;
	
	iVar0 = func_171(81);
	Global_2645174[iVar0 /*83*/] = 81;
	Global_2645174[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_171(int iParam0)//Position - 0x5858
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645174[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645174[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_172()//Position - 0x58A5
{
}

void func_173()//Position - 0x58AD
{
	Local_53.f_0 = Local_41.f_2;
	Local_53.f_1 = Local_41.f_3;
	Local_53.f_2 = -2;
	Local_53.f_3 = -2;
}

void func_174(int iParam0, int iParam1, int iParam2)//Position - 0x58D1
{
	func_175(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x58E6
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_177(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_176();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44436[iVar0 /*6*/] = iParam0;
	Global_44436[iVar0 /*6*/].f_1 = iParam1;
	Global_44436[iVar0 /*6*/].f_2 = iParam2;
	Global_44436[iVar0 /*6*/].f_3 = iParam3;
	Global_44436[iVar0 /*6*/].f_4 = iParam4;
	Global_44436[iVar0 /*6*/].f_5 = iParam5;
}

int func_176()//Position - 0x5968
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44436[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0, int iParam1, int iParam2)//Position - 0x5999
{
	if (func_178(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_178(int iParam0, int iParam1, int iParam2)//Position - 0x59B4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44436[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44436[iVar0 /*6*/])
			{
				if (iParam1 == Global_44436[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_179()//Position - 0x5A00
{
	int iVar0;
	
	bLocal_48 = false;
	if (Local_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_48 = true;
		Global_44568 = 1;
		Global_44570++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_41.f_1, false))
	{
		iVar0 = func_70(Local_41.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_41.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_41.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_180()//Position - 0x5A6D
{
	if (!iLocal_46 == -1)
	{
		return;
	}
	iLocal_46 = func_120(Local_41.f_1);
	if (iLocal_46 == -1)
	{
		return;
	}
	iLocal_62 = func_119(iLocal_46);
}

void func_181()//Position - 0x5A9B
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_41.f_1, false))
		{
			iVar0 = func_70(Local_41.f_1);
			if (Global_44355[iLocal_62 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_183(Local_41.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_183(Local_41.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_183(Local_41.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_41.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_41.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_152();
	if (bLocal_48)
	{
		Global_44568 = 0;
	}
	func_182();
	STREAMING::REMOVE_ANIM_DICT(func_116(0));
	STREAMING::REMOVE_ANIM_DICT(func_116(2));
	STREAMING::REMOVE_ANIM_DICT(func_116(1));
	Global_1945110 = 0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_182()//Position - 0x5B9F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_41.f_1, false))
	{
		return;
	}
	iVar0 = Local_41.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_41.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_41.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!Local_41.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_41.f_1)
	{
		return;
	}
	fLocal_51 = 0f;
	func_145(iVar0, 0f);
}

void func_183(int iParam0, char* sParam1, int iParam2)//Position - 0x5C19
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_184(iParam2), 1);
}

int func_184(int iParam0)//Position - 0x5C30
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

