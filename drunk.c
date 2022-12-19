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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	struct<5> Local_56 = { 0, 0, 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
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
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_56 };
	func_177();
	func_176();
	func_171(iLocal_44, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_170();
	func_166();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_165(iLocal_44);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_44, 0, 0);
		func_177();
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
	if ((!func_4() && !func_3()) && Global_2684798)
	{
		Global_4718592.f_113724 = 0;
	}
}

bool func_3()//Position - 0x155
{
	return Global_2683862.f_691;
}

bool func_4()//Position - 0x164
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

void func_5()//Position - 0x17B
{
	Global_2683862.f_756 = 1;
}

var func_6()//Position - 0x18B
{
	return Global_2683862.f_735;
}

var func_7()//Position - 0x19A
{
	return BitTest(Global_2683862.f_2, 11);
}

bool func_8()//Position - 0x1AB
{
	return BitTest(Global_2684799.f_1.f_2810, 3);
}

void func_9()//Position - 0x1BE
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_52.f_0)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
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
	if (!Local_52.f_0 == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
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
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!BitTest(Global_1950108.f_3, 27))
	{
		PED::SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, true, true, false);
	}
	Global_1944403 = 1;
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
		func_105(&uVar0, 0, 0);
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
			func_178();
		}
		MISC::CLEAR_BIT(&(Global_1950108.f_3), 27);
		func_91(PLAYER::PLAYER_ID(), 0, 57344, 0);
		Global_2635559.f_2681 = 1;
		if (BitTest(Global_1950108, 15))
		{
			MISC::CLEAR_BIT(&Global_1950108, 15);
		}
		if (BitTest(Global_1950108.f_2, 6))
		{
			MISC::CLEAR_BIT(&(Global_1950108.f_2), 6);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2635559.f_2682 = 1;
		}
		else
		{
			Global_2635559.f_2682 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	if (bLocal_55)
	{
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2.f_0 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2.f_0 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2.f_0 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2.f_0 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2.f_0 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_43.f_1, Var2.f_5, true, false, false, true);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)//Position - 0x760
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, iVar0, true);
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
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	float fVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
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
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, PLAYER::PLAYER_PED_ID(), sVar12, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
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
			iVar15 = MISC::GET_GAME_TIMER();
			if (iVar15 >= (Global_43808 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
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
			iVar18 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar13)))
			{
				iVar19 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
				iVar20 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var23 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
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
							Var27 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							fVar28 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar29 = Var27.f_2;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar25, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar26);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(fVar25);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(fVar26);
						Var31 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var32 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var31, Var32, true);
						iVar34 = SYSTEM::ROUND((fVar33 * 1000f));
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
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar14)) || iVar18)
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
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar38 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar39 = Var37.f_2;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar35, 1f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar36);
								Var41 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								Var42 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar43 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var41, Var42, true);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar44, false, false, 0);
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
	bVar45 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	bVar46 = false;
	if (uParam1->f_32)
	{
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			SYSTEM::WAIT(0);
			bVar45 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
			bVar46 = false;
			if (uParam1->f_32)
			{
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
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

void func_13(var uParam0)//Position - 0x11F9
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)//Position - 0x1214
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

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x126C
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, true);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1285
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	
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
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var5 = { (-SYSTEM::SIN(Var3.f_2) * SYSTEM::COS(Var3.f_0)), (SYSTEM::COS(Var3.f_2) * SYSTEM::COS(Var3.f_0)), SYSTEM::SIN(Var3.f_0) };
				Var6 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.f_0)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.f_0)), SYSTEM::SIN(Var4.f_0) };
				fVar7 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(joaat("TIMED_SPLINE_CAMERA"), false);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var1, true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var2, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar7);
				uParam0->f_2 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var2, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), true);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var2, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar7);
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

void func_17()//Position - 0x1628
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_18();
}

void func_18()//Position - 0x1638
{
	Global_23131.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)//Position - 0x1646
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1658
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

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0x1690
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16B7
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x1705
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
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
		Global_21801 = { Global_21795 };
		func_35();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
			if (bParam2)
			{
				func_33();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
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
				if (!Global_78558)
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
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
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

void func_24()//Position - 0x19D3
{
	if (!func_25())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_25()//Position - 0x1A0A
{
	if (!Global_262145.f_28878 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78558)
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
	if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)//Position - 0x1A6D
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)//Position - 0x1A7D
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_28()//Position - 0x1A95
{
	return -1;
}

void func_29()//Position - 0x1A9E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
}

void func_30()//Position - 0x1ACE
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_31()//Position - 0x1B63
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()//Position - 0x1B8A
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
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

void func_33()//Position - 0x1C23
{
	if (func_34(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_67();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

bool func_34(int iParam0)//Position - 0x1CC5
{
	return Global_43257 == iParam0;
}

void func_35()//Position - 0x1CD3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)//Position - 0x1D29
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_37()//Position - 0x1D61
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1DB8
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_39(int iParam0)//Position - 0x1E0E
{
	Global_43808 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_40(int iParam0)//Position - 0x1E20
{
	if (func_45())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		MISC::SET_BIT(&Global_8254, 2);
	}
}

void func_41(int iParam0)//Position - 0x1E53
{
	if (func_45())
	{
		return;
	}
	if (Global_20584)
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
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8254, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8253, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 30);
	}
	if (!func_31())
	{
		Global_20383.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)//Position - 0x1EDD
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
}

bool func_43()//Position - 0x1F51
{
	return BitTest(Global_1962996, 5);
}

int func_44(int iParam0)//Position - 0x1F5F
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_45()//Position - 0x1FB6
{
	return BitTest(Global_1962996, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1FC5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
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

void func_47(char* sParam0, int iParam1)//Position - 0x2060
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_48(int iParam0, var uParam1)//Position - 0x2077
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

bool func_49(var uParam0, int iParam1)//Position - 0x216E
{
	return (uParam0 && iParam1) != 0;
}

int func_50()//Position - 0x217D
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()//Position - 0x21BB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97614[iVar0 /*17*/] && !Global_97614[iVar0 /*17*/].f_1)
		{
			if (Global_97614[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97614[iVar0 /*17*/].f_5 != 88 && Global_97614[iVar0 /*17*/].f_5 != 89) && Global_97614[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)//Position - 0x2242
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x2280
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_54()//Position - 0x22C7
{
	func_55();
	func_73(1);
}

void func_55()//Position - 0x22D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_44206[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)//Position - 0x2338
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44206[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44444 = 0;
		}
	}
	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = (Global_44204 - 1);
	if (Global_44204 < 0)
	{
		Global_44204 = 0;
	}
}

int func_57(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x23BB
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
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
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
				if (iParam3 == 1)
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
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), false, false);
			MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
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

bool func_58()//Position - 0x25DA
{
	return !Global_77348.f_553;
}

void func_59()//Position - 0x25EA
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
}

void func_60()//Position - 0x2602
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_77348[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)//Position - 0x2626
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100681.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_100681.f_20), 2);
			}
		}
		else if (BitTest(Global_100681.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
		}
	}
}

int func_62()//Position - 0x2677
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)//Position - 0x2695
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_64(int iParam0)//Position - 0x26AA
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_65()//Position - 0x26D7
{
	if (Global_40195[11] == 1)
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

int func_66(int iParam0)//Position - 0x2755
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_67()//Position - 0x2781
{
	func_68();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_68()//Position - 0x279A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_71(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_70(PLAYER::PLAYER_PED_ID());
			if (func_69(iVar0) && (!func_34(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_69(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_69(int iParam0)//Position - 0x2897
{
	return iParam0 < 3;
}

int func_70(int iParam0)//Position - 0x28A3
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

int func_71(int iParam0)//Position - 0x28E0
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

var func_72(int iParam0)//Position - 0x2905
{
	return Global_2028[iParam0 /*29*/];
}

void func_73(bool bParam0)//Position - 0x2914
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44424))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_44424))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_44424);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_44412))
	{
		if (CAM::IS_CAM_SHAKING(Global_44412))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44412, 0f);
			CAM::STOP_CAM_SHAKING(Global_44412, true);
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
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
	StringCopy(&Global_44424, "", 64);
	StringCopy(&Global_44440, "", 16);
	func_74();
}

void func_74()//Position - 0x29ED
{
	Global_44411 = 0;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
}

void func_75(int iParam0)//Position - 0x2A22
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18161 /* Tunable: -539038925 */;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18151 /* Tunable: BIKER_MC_POINTS_WIN_MINIGAME */;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18162 /* Tunable: 771289284 */;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18154 /* Tunable: BIKER_MC_POINTS_DESTROY_PRODUCT */;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18150 /* Tunable: BIKER_MC_POINTS_ROB_SHOP */;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18165 /* Tunable: BIKER_MC_POINTS_DESTROY_MEMBERS_PV */;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18166 /* Tunable: -555621765 */;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18169 /* Tunable: 45776395 */;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18170 /* Tunable: BIKER_MC_POINTS_DRIVE_CAR */;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18163 /* Tunable: 419613951 */;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19055 /* Tunable: 1684681813 */;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19054 /* Tunable: -1825390724 */;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)//Position - 0x2B47
{
	int iVar0;
	
	iVar0 = func_80(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_468 = iVar0;
	func_77(3971, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2B95
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_78(var uParam0)//Position - 0x2BC5
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_79()//Position - 0x2BF9
{
	return Global_1574918;
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x2C05
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)//Position - 0x2C42
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1894573[iVar0 /*608*/].f_10.f_467 = (Global_1894573[iVar0 /*608*/].f_10.f_467 + iParam0);
	if (Global_1894573[iVar0 /*608*/].f_10.f_467 < -9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
	else if (Global_1894573[iVar0 /*608*/].f_10.f_467 > 9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
}

int func_82()//Position - 0x2CBC
{
	if (Global_1947733.f_3 != 0)
	{
		return Global_1947733.f_3;
	}
	return -1;
}

int func_83()//Position - 0x2CD8
{
	if (Global_1947733.f_2 != 0)
	{
		return Global_1947733.f_2;
	}
	return -1;
}

int func_84(int iParam0)//Position - 0x2CF4
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_85(int iParam0)//Position - 0x2D19
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_86()//Position - 0x2D3E
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

bool func_87(bool bParam0)//Position - 0x2D53
{
	return func_88(PLAYER::PLAYER_ID(), bParam0);
}

int func_88(int iParam0, bool bParam1)//Position - 0x2D65
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)//Position - 0x2D76
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_28() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)//Position - 0x2DD2
{
	if (iParam0 != func_28())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_28())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2E21
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
	if (func_104())
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
		if (!func_102())
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
				else if (bVar14 || (!func_100(PLAYER::PLAYER_ID(), 0) && !func_99()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_96(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_95(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_94();
					func_93();
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
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_95(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_92(Global_4718592.f_166301))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575035)
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

bool func_92(int iParam0)//Position - 0x32AF
{
	return iParam0 == 17;
}

void func_93()//Position - 0x32BC
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_94()//Position - 0x3309
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_95(int iParam0)//Position - 0x3347
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

void func_96(bool bParam0, int iParam1, int iParam2)//Position - 0x3378
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
				func_98();
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
		if (func_100(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_97(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)//Position - 0x3448
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_98()//Position - 0x3464
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

bool func_99()//Position - 0x34BC
{
	return BitTest(Global_2621446, 3);
}

bool func_100(int iParam0, int iParam1)//Position - 0x34CA
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_101(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
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

int func_101(int iParam0, bool bParam1)//Position - 0x3515
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_102()//Position - 0x3556
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()//Position - 0x356B
{
	return Global_1574632.f_18;
}

int func_104()//Position - 0x3579
{
	if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)//Position - 0x35AA
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

void func_106()//Position - 0x35EF
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_44232[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	Local_52.f_0 = 5;
	Local_51.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_107(int iParam0)//Position - 0x3632
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0) && Global_44232[iLocal_54 /*5*/].f_3 > Global_44232[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44232[iLocal_54 /*5*/].f_4 < 9 && Global_44232[iLocal_54 /*5*/].f_4 != 0) && Global_44232[iLocal_54 /*5*/].f_4 > Global_44232[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_113(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_110(Local_43.f_1))
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
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				TASK::TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0f, false, false, false);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, sVar1, "idle", 2f, true);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
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
			if (PED::IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, true);
	return 1;
}

bool func_108()//Position - 0x38F4
{
	return func_109(PLAYER::PLAYER_ID());
}

int func_109(int iParam0)//Position - 0x3904
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x3923
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
	if (Global_75693)
	{
		return 0;
	}
	if (func_112())
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
		if (func_111())
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

bool func_111()//Position - 0x3A24
{
	return Global_100733.f_388 > 0;
}

bool func_112()//Position - 0x3A35
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

char* func_113(int iParam0)//Position - 0x3A4A
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

bool func_114(int iParam0)//Position - 0x3A8B
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_52.f_2))
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
	return MISC::ARE_STRINGS_EQUAL(Local_52.f_2, sVar1);
}

int func_115(int iParam0)//Position - 0x3ACC
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
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44232[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)//Position - 0x3B0F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)//Position - 0x3B3F
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
		if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
		{
			return Global_44232[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()//Position - 0x3B80
{
	int iVar0;
	
	if (Local_51.f_0 == -2)
	{
		return -2;
	}
	if (Local_51.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
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

void func_119()//Position - 0x3BC6
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.f_0 = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	Local_52.f_0 = 6;
}

bool func_120()//Position - 0x3BF2
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_4, false))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	return fVar2 < 7f;
}

void func_121()//Position - 0x3C43
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_44232[iLocal_54 /*5*/].f_2 == 0 || Global_44232[iLocal_54 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_43.f_1, false, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_43.f_1))
		{
			PED::SET_PED_DUCKING(Local_43.f_1, false);
		}
	}
	if (Local_51.f_0 != -2)
	{
		if (Local_51.f_0 == -1)
		{
			if (Global_44232[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_44232[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44232[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44232[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_44232[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44232[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44232[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_44232[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44232[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				TASK::STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_44232[iLocal_54 /*5*/].f_3 >= 10 || Global_44232[iLocal_54 /*5*/].f_4 >= 15) || BitTest(Global_44449, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_43.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !BitTest(Global_1950108.f_3, 27))
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, true))
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_136(PLAYER::PLAYER_ID())) && Global_262145.f_24351 /* Tunable: -748730308 */)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_135())
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_134())
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_133())
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(PLAYER::PLAYER_ID()))
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_129(PLAYER::PLAYER_ID())) && Global_262145.f_27034 /* Tunable: VC_CASINO_DISABLE_PASSOUT */)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_126(PLAYER::PLAYER_ID())) && Global_262145.f_27067 /* Tunable: VC_PENTHOUSE_DISABLE_PASSOUT */)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_122(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && Global_75693) && !Global_44205)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)//Position - 0x417C
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)//Position - 0x4199
{
	if (func_124(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)//Position - 0x41BC
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x41F7
{
	if (func_124(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_126(int iParam0)//Position - 0x421A
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x4261
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

int func_128(int iParam0, bool bParam1, bool bParam2)//Position - 0x4715
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x4775
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0)//Position - 0x47BC
{
	return func_131(func_132(iParam0));
}

int func_131(int iParam0)//Position - 0x47CE
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

int func_132(int iParam0)//Position - 0x4800
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()//Position - 0x481E
{
	return Global_2683862.f_24;
}

var func_134()//Position - 0x482C
{
	return Global_2683862.f_21;
}

var func_135()//Position - 0x483A
{
	return Global_2764615;
}

int func_136(int iParam0)//Position - 0x4846
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_137()//Position - 0x488D
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.f_0 = 7;
	return 1;
}

void func_138()//Position - 0x48E1
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
}

void func_139()//Position - 0x48FC
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_46)
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
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var3, Var4) && !PED::IS_COP_PED_IN_AREA_3D(Var3, Var4))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	func_11(73, 1);
}

void func_140()//Position - 0x49CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)//Position - 0x4B6D
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

void func_142(int iParam0, float fParam1)//Position - 0x4C01
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

void func_143()//Position - 0x4C4C
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_44232[iLocal_54 /*5*/].f_3 >= 10 || Global_44232[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		Local_52.f_0 = 11;
		return;
	}
}

void func_144()//Position - 0x4CF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));
	if (!iVar0 == 7)
	{
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, false);
	Local_52.f_0 = 9;
	Local_51.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_145()//Position - 0x4D8B
{
	if (Local_52.f_0 == 10)
	{
		return;
	}
	Local_52.f_0 = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_171(iLocal_44, 2, 5);
	Local_51.f_4 = SYSTEM::TIMERA();
	fLocal_49 = 0f;
}

void func_146()//Position - 0x4DBD
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_3)
	{
		return;
	}
	Local_52.f_0 = 4;
	Local_51.f_3 = -2;
}

void func_147()//Position - 0x4DEF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				Local_52.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, false);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, false);
		Local_52.f_0 = 9;
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_120())
	{
		TASK::CLEAR_PED_TASKS(Local_43.f_1);
		Local_52.f_0 = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_43.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
			{
				TASK::CLEAR_PED_TASKS(Local_43.f_1);
				Local_52.f_0 = 4;
				return;
			}
		}
	}
}

void func_148()//Position - 0x4F0B
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.f_0 = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_43.f_4, false))
	{
		Local_43.f_4 = 0;
		Local_52.f_0 = 4;
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_44232[iLocal_54 /*5*/].f_2))
		{
			Local_52.f_0 = 12;
			return;
		}
		Local_52.f_0 = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar4, false))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_52.f_0 = 4;
			return;
		}
	}
	func_149();
	TASK::TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	Local_52.f_0 = 7;
}

void func_149()//Position - 0x500E
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 0.25f);
		PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
		Local_52.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, false);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()//Position - 0x50A3
{
	if (SYSTEM::TIMERA() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.f_0 = 12;
}

int func_151()//Position - 0x50CD
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2793044.f_4637 = 1;
	return 1;
}

void func_152(int iParam0)//Position - 0x5106
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 0.25f);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, false);
}

void func_153()//Position - 0x5147
{
	int iVar0;
	
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.f_0 = 12;
		return;
	}
	if (Local_51.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_44232[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.f_0 = 12;
}

void func_154()//Position - 0x521D
{
}

void func_155()//Position - 0x5225
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44313[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44313[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_44313[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_44313[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)//Position - 0x529D
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
}

void func_157(int iParam0)//Position - 0x52EA
{
	int iVar0;
	
	iVar0 = Global_44313[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_44313[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_44313[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()//Position - 0x536C
{
	Local_52.f_1 = 2;
}

void func_159()//Position - 0x5379
{
	int iVar0;
	
	Global_44232[iLocal_54 /*5*/].f_4++;
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_4 < 9 && Global_44232[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44232[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)//Position - 0x5439
{
	int iVar0;
	
	Global_44232[iLocal_54 /*5*/].f_3 = (Global_44232[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44232[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)//Position - 0x54F9
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51.f_0 = (Local_51.f_0 + iParam0);
}

void func_162()//Position - 0x5529
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_163();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_163()//Position - 0x5573
{
}

void func_164()//Position - 0x557B
{
	if (!Local_51.f_0 == -1)
	{
		if (!Local_51.f_0 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_51.f_0)
			{
				func_149();
				Local_51.f_0 = -2;
				Local_52.f_0 = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)//Position - 0x55BA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44313[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()//Position - 0x55EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_52.f_0 = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			Local_52.f_0 = 10;
		}
	}
	if (bLocal_46)
	{
		func_169();
		func_11(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_80(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1, 0);
			bLocal_55 = true;
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
				func_167(iVar6);
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
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51.f_0 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)//Position - 0x579A
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2645068[iVar0 /*83*/] = 81;
	Global_2645068[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)//Position - 0x57D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()//Position - 0x581E
{
}

void func_170()//Position - 0x5826
{
	Local_51.f_0 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)//Position - 0x584A
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x585F
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
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44313[iVar0 /*6*/] = iParam0;
	Global_44313[iVar0 /*6*/].f_1 = iParam1;
	Global_44313[iVar0 /*6*/].f_2 = iParam2;
	Global_44313[iVar0 /*6*/].f_3 = iParam3;
	Global_44313[iVar0 /*6*/].f_4 = iParam4;
	Global_44313[iVar0 /*6*/].f_5 = iParam5;
}

int func_173()//Position - 0x58E1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44313[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, int iParam2)//Position - 0x5912
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)//Position - 0x592D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44313[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44313[iVar0 /*6*/])
			{
				if (iParam1 == Global_44313[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176()//Position - 0x5979
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_46 = true;
		Global_44445 = 1;
		Global_44447++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()//Position - 0x59E6
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_178()//Position - 0x5A14
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_44232[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_44445 = 0;
	}
	func_179();
	STREAMING::REMOVE_ANIM_DICT(func_113(0));
	STREAMING::REMOVE_ANIM_DICT(func_113(2));
	STREAMING::REMOVE_ANIM_DICT(func_113(1));
	Global_1944403 = 0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_179()//Position - 0x5B18
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(iVar0, 0f);
}

void func_180(int iParam0, char* sParam1, int iParam2)//Position - 0x5B92
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_181(iParam2), 1);
}

int func_181(int iParam0)//Position - 0x5BA9
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

