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
	bool bLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	bool bLocal_572 = 0;
	int iLocal_573 = 0;
	bool bLocal_574 = 0;
	int iLocal_575 = 0;
	char* sLocal_576 = NULL;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	bool bLocal_580 = 0;
	int iLocal_581 = 0;
	struct<33> Local_582 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_615 = 1;
	int iLocal_616[3] = { 0, 0, 0 };
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int* iLocal_633 = NULL;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	int* iLocal_636 = NULL;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	
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
	Local_47 = { 500f, 500f, 500f };
	iLocal_628 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_322();
	}
	if (func_319(0))
	{
		bLocal_572 = true;
		iLocal_569 = PLAYER::GET_MAX_WANTED_LEVEL();
	}
	if (Global_4)
	{
		HUD::CLEAR_HELP(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_318(14))
	{
		HUD::CLEAR_HELP(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_317(&Local_582, 3);
	func_308(&uScriptParam_0);
	Var0 = { 24.088f, -1345.6227f, 29.5082f };
	Var3 = { 24.94562f, -1344.9545f, 29.49f };
	Var6 = { Var0 - Var3 };
	Var6 = { Var3 - Var0 };
	fVar12 = 147.297f;
	Var9 = { -1228.4434f, -905.3416f, 13.523f };
	Var6 = { Var9 - Vector(12.31f, -907.82336f, -1222.3306f) };
	Var6 = { func_307(Var6, fVar12) };
	if ((((func_306() && !func_305()) || Global_114314) || Global_32831) || Global_114359 != -1)
	{
		if (func_306() && !func_305())
		{
		}
		else if (Global_114314)
		{
		}
		else if (Global_32831)
		{
		}
		else if (Global_114359 != -1)
		{
		}
		if (!func_304())
		{
			func_302(&(Local_66.f_470), 64);
			func_300(1);
		}
		else
		{
			func_300(0);
		}
		func_322();
	}
	else if (Global_114370.f_20038[iLocal_566] > 0)
	{
		if (func_299())
		{
			func_297(iLocal_566, Local_66.f_486.f_9.f_2, &Var13, &Var16);
			MISC::CLEAR_AREA_OF_PEDS(Local_66.f_181, 15f, 0);
			iLocal_565 = PED::ADD_SCENARIO_BLOCKING_AREA(Var13, Var16, false, true, true, true, 1);
			if (!func_304())
			{
				func_300(1);
			}
			else
			{
				func_300(0);
				func_295(&(Local_66.f_470), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_300(0);
		}
		if (!func_294())
		{
			iLocal_62 = 10;
			iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar19 == 0)
			{
				Local_66.f_2.f_12 = 1;
			}
			else
			{
				Local_66.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_300(0);
	}
	while (true)
	{
		func_291(&Local_582);
		if (func_286())
		{
			func_322();
		}
		if (!bLocal_572)
		{
			if (func_319(0))
			{
				func_285();
				bLocal_572 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_256();
				break;
			
			case 1:
				func_6();
				break;
			
			case 2:
				if (func_304())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!func_4("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, func_5(iLocal_566)) && !func_3(PLAYER::PLAYER_ID()))
						{
							HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
							func_2("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, func_5(iLocal_566));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, func_5(iLocal_566)))
					{
						HUD::CLEAR_HELP(true);
					}
					if (func_1(Local_66.f_470, 512))
					{
						func_300(1);
						func_302(&(Local_66.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, int iParam1)//Position - 0x36D
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)//Position - 0x37C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_3(int iParam0)//Position - 0x398
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2707705;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
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
	return 0;
}

bool func_4(char* sParam0, char* sParam1)//Position - 0x404
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_5(int iParam0)//Position - 0x41D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS" /* GXT: LTD Gasoline */;
		
		case 5:
			return "SHR_LIQ1" /* GXT: Scoops Liquor Barn */;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2" /* GXT: Rob's Liquor */;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV" /* GXT: 24-7 */;
		
		case -2:
			return "SHR_ACE" /* GXT: Liquor Ace */;
		
		default:
	}
	return "";
}

void func_6()//Position - 0x4C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_253();
	func_250();
	func_245();
	func_239();
	func_221();
	func_199();
	func_193();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
	}
	else
	{
		return;
	}
	bLocal_574 = false;
	if (!PED::IS_PED_INJURED(Local_66.f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
		{
			if ((iVar1 != joaat("WEAPON_UNARMED") && iVar1 != joaat("OBJECT")) && iVar1 != joaat("WEAPON_FLARE"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 5f, 5f, 2f, false, true, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_66.f_2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_66.f_2))
				{
					if (!func_26() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						bLocal_574 = true;
					}
				}
			}
		}
	}
	if (bLocal_574)
	{
		if (!iLocal_575 && func_1(Local_66.f_470, 4))
		{
			iVar2 = func_25(PLAYER::PLAYER_PED_ID());
			iVar3 = WEAPON::GET_WEAPONTYPE_GROUP(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_576 = "hold_up_head_additive_pistol";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_576, 8f, -8f, -1, 305, 0f, false, false, false);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_576 = "hold_up_head_additive_rifle";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_576, 8f, -8f, -1, 305, 0f, false, false, false);
			}
			else
			{
				sLocal_576 = "";
			}
			iLocal_575 = 1;
		}
	}
	else if (iLocal_575)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_576))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_576, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_576, -8f);
			}
		}
		iLocal_575 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_304())
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_0, false))
						{
							if ((func_25(Local_66.f_0) == joaat("WEAPON_UNARMED") || func_25(Local_66.f_0) == joaat("OBJECT")) || func_25(Local_66.f_0) == joaat("WEAPON_BRIEFCASE"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!func_1(Local_66.f_470, 1))
							{
								if (iVar0 == joaat("WEAPON_BAT"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("WEAPON_CROWBAR") || iVar0 == joaat("WEAPON_HAMMER")) || iVar0 == joaat("WEAPON_BOTTLE"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("WEAPON_STICKYBOMB"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								func_295(&(Local_66.f_470), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_304() && func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
			{
				iLocal_62 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_66.f_470, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				func_295(&(Local_66.f_470), 2);
			}
			iLocal_62 = 5;
			break;
		
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (!func_304() && !func_1(Local_66.f_470, 1))
			{
				iLocal_62 = 0;
			}
			break;
		
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_12)
				{
					if (!func_20())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_66.f_470, 256))
			{
				func_19();
				MISC::CLEAR_BIT(&Global_97223, 3);
				iLocal_62 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_66.f_470, 16))
			{
				if (func_17())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
					{
						if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
						{
							if (func_304())
							{
								if (Local_66.f_486 >= 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
									{
										TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0f, false, false, false);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								iLocal_58 = 10;
							}
						}
					}
					MISC::CLEAR_BIT(&Global_97223, 3);
					iLocal_62 = 13;
				}
			}
			break;
		
		case 9:
			func_16(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		
		case 10:
			if (func_304())
			{
				iLocal_62 = 11;
			}
			break;
		
		case 11:
			if (!func_15(&(Local_66.f_477)))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				func_12(&(Local_66.f_477));
			}
			else if (func_9(&(Local_66.f_477)) > 5f)
			{
				func_16(1, 0);
				iLocal_62 = 13;
			}
			else if (func_9(&(Local_66.f_477)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_12)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_15(&(Local_66.f_477)))
			{
				func_7();
				iLocal_51 = 30;
				iLocal_58 = 12;
				func_12(&(Local_66.f_477));
			}
			else if (func_9(&(Local_66.f_477)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_7()//Position - 0xAA0
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_66.f_2.f_6, 2f, -1, 0.25f, 0, Local_66.f_2.f_9);
	TASK::TASK_COWER(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_295(&(Local_66.f_470), 128);
}

void func_8()//Position - 0xAFF
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_564);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_564);
		TASK::TASK_COWER(0, 5000);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_564);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, iLocal_564);
	}
}

float func_9(int* iParam0)//Position - 0xB4D
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)//Position - 0xB89
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_11(int* iParam0)//Position - 0xBE1
{
	return BitTest(*iParam0, 2);
}

void func_12(int* iParam0)//Position - 0xBEE
{
	if (!func_15(iParam0))
	{
		func_13(iParam0);
	}
}

void func_13(int* iParam0)//Position - 0xC06
{
	func_14(iParam0, 0f);
}

void func_14(int* iParam0, float fParam1)//Position - 0xC15
{
	iParam0->f_1 = (func_10(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_15(int* iParam0)//Position - 0xC40
{
	return BitTest(*iParam0, 1);
}

void func_16(int iParam0, bool bParam1)//Position - 0xC4D
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < iParam0 && (!bLocal_572 || (bLocal_572 && iParam0 < iLocal_569)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), iParam0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
		Local_66.f_158 = 1;
		if (bParam1)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	else if (bLocal_572 && iParam0 > iLocal_569)
	{
	}
}

int func_17()//Position - 0xCC0
{
	func_18();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_486 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66.f_486.f_6, Local_66.f_486.f_9, 2);
			if (!PED::IS_PED_DEAD_OR_DYING(Local_66.f_2, true))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
				{
					if (Local_66.f_486 >= 0)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_28, true, false);
						ENTITY::SET_ENTITY_DYNAMIC(Local_66.f_28, true);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_2, Local_66.f_486, Local_66.f_486.f_1, Local_66.f_486.f_3, 8f, -1.5f, 25, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_96.f_1, Local_66.f_486, Local_66.f_486.f_5, Local_66.f_486.f_1, 1000f, 8f, 137, 1000f);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.478f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1000f);
							Local_66.f_28.f_7 = { Local_66.f_28.f_7, Local_66.f_28.f_7.f_1, (Local_66.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.447f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
						{
							if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_28))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, true, false);
							}
						}
					}
					if (Local_66.f_467)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_RATE(Local_66.f_486) != 1.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_66.f_486, 1.45f);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
			{
				if (Local_66.f_486 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
					{
						if (iLocal_53 >= 4)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.871f)
							{
								iLocal_55 = 4;
							}
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, -16f, true);
							PHYSICS::ACTIVATE_PHYSICS(Local_66.f_28);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()//Position - 0xF65
{
	if (Local_66.f_486 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) >= 0f)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.117f)
				{
					iLocal_53 = 1;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.154f)
				{
					iLocal_53 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.477f)
				{
					iLocal_53 = 3;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.487f)
				{
					iLocal_53 = 4;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.809f)
				{
					iLocal_53 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.871f)
				{
					iLocal_53 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.894f)
				{
					iLocal_53 = 7;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_19()//Position - 0x106D
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_66.f_2, joaat("WEAPON_PUMPSHOTGUN"), 12, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_66.f_2, joaat("WEAPON_PUMPSHOTGUN"), false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_66.f_2, joaat("HATES_PLAYER"));
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_2.f_22));
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_66.f_0, 2000, false);
		TASK::TASK_SHOOT_AT_ENTITY(0, Local_66.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 25f, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_2.f_22);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, Local_66.f_2.f_22);
	}
}

int func_20()//Position - 0x10F5
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1117
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, true))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_22(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x1290
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_23(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x135E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_24()//Position - 0x13BC
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_0, false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_66.f_0, false);
			bVar0 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
			{
				return 1;
			}
			else if (Local_66.f_199 != -1f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x14A4
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_26()//Position - 0x14B8
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27()//Position - 0x14D5
{
	switch (iLocal_50)
	{
		case 0:
			break;
		
		case 2:
			if (!func_50())
			{
				if (func_304())
				{
					if (!func_1(Global_114370.f_20038.f_20, 1))
					{
						switch (func_36("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */))
						{
							case 2:
								func_34("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_295(&(Global_114370.f_20038.f_20), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (func_33("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */))
							{
								func_29("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
								iLocal_50 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (func_33("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */))
				{
					func_29("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
				}
			}
			break;
		
		case 1:
			if (!func_50())
			{
				if (func_304())
				{
					if (!func_1(Global_114370.f_20038.f_20, 2))
					{
						switch (func_36("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
						{
							case 2:
								func_34("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_295(&(Global_114370.f_20038.f_20), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (func_33("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
				{
					func_29("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
				}
			}
			break;
		
		case 3:
			if (func_28("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) || func_28("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_33("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */) && !func_1(Global_114370.f_20038.f_20, 2))
			{
				func_29("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
			}
			if (func_33("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) && !func_1(Global_114370.f_20038.f_20, 1))
			{
				func_29("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
			}
			iLocal_50 = 4;
			break;
		
		case 4:
			if ((!func_304() && func_33("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */)) && !func_1(Global_114370.f_20038.f_20, 1))
			{
				func_29("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
				iLocal_50 = 2;
			}
			if ((!func_304() && func_33("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */)) && !func_1(Global_114370.f_20038.f_20, 2))
			{
				func_29("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
				iLocal_50 = 2;
			}
			break;
	}
}

bool func_28(char* sParam0)//Position - 0x1702
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_29(char* sParam0, int iParam1)//Position - 0x1715
{
	int iVar0;
	int iVar1;
	
	if (Global_113009 && iParam1)
	{
		if (func_28(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114370.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_114370.f_20413.f_145 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_114370.f_20413.f_145 - 1));
			Global_114370.f_20413.f_145 = (Global_114370.f_20413.f_145 - 1);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()//Position - 0x17C2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114370.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[0])
			{
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[1])
			{
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[2])
			{
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_31(int iParam0)//Position - 0x18D9
{
	StringCopy(&(Global_114370.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_114370.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_114370.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_114370.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_114370.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_32(int iParam0, int iParam1)//Position - 0x1973
{
	Global_114370.f_20413[iParam0 /*16*/] = { Global_114370.f_20413[iParam1 /*16*/] };
	Global_114370.f_20413[iParam0 /*16*/].f_4 = { Global_114370.f_20413[iParam1 /*16*/].f_4 };
	Global_114370.f_20413[iParam0 /*16*/].f_8 = Global_114370.f_20413[iParam1 /*16*/].f_8;
	Global_114370.f_20413[iParam0 /*16*/].f_10 = Global_114370.f_20413[iParam1 /*16*/].f_10;
	Global_114370.f_20413[iParam0 /*16*/].f_9 = Global_114370.f_20413[iParam1 /*16*/].f_9;
	Global_114370.f_20413[iParam0 /*16*/].f_11 = Global_114370.f_20413[iParam1 /*16*/].f_11;
	Global_114370.f_20413[iParam0 /*16*/].f_12 = Global_114370.f_20413[iParam1 /*16*/].f_12;
	Global_114370.f_20413[iParam0 /*16*/].f_13 = Global_114370.f_20413[iParam1 /*16*/].f_13;
	Global_114370.f_20413[iParam0 /*16*/].f_14 = Global_114370.f_20413[iParam1 /*16*/].f_14;
	Global_114370.f_20413[iParam0 /*16*/].f_15 = Global_114370.f_20413[iParam1 /*16*/].f_15;
}

int func_33(char* sParam0)//Position - 0x1A83
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114370.f_20413[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1ABE
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1ADF
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
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114370.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114370.f_20413.f_145++;
		func_30();
	}
}

int func_36(char* sParam0)//Position - 0x1CB2
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113012))
	{
		return 1;
	}
	if (func_33(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_37()//Position - 0x1CD9
{
	if (func_304())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
		{
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, func_46(bLocal_580, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, func_46(bLocal_580, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, func_46(bLocal_580, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, func_46(bLocal_580, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, func_46(bLocal_580, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY" /* GXT: Friendly */, 3);
			}
			iLocal_51 = 14;
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY" /* GXT: Friendly */, 3);
			}
			iLocal_51 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_577)
					{
						iLocal_51 = 7;
						iLocal_577 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_578)
					{
						iLocal_51 = 8;
						iLocal_578 = 1;
					}
				}
				if (!func_15(&(Local_66.f_483)))
				{
					func_12(&(Local_66.f_483));
				}
				else if (func_11(&(Local_66.f_483)))
				{
					func_43(&(Local_66.f_483));
				}
				else if (func_9(&(Local_66.f_483)) > 10f)
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_295(&(Local_66.f_470), 32);
					}
				}
			}
			else if (func_15(&(Local_66.f_483)) && !func_11(&(Local_66.f_483)))
			{
				func_42(&(Local_66.f_483));
			}
			break;
		
		case 12:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					func_48(PLAYER::PLAYER_PED_ID(), "SHOP_HOLDUP", 8);
				}
				func_13(&(Local_66.f_471));
				if (Local_66.f_2.f_11)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 13:
			if (func_41(&(Local_66.f_471)) > 3f)
			{
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_458)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_459)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_460)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_461)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_462)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				func_40(&(Local_66.f_471));
			}
			break;
		
		case 16:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 17:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 18:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 20:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 21:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 22:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				func_295(&(Local_66.f_470), 256);
				iLocal_51 = 37;
			}
			break;
		
		case 23:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_66.f_28.f_14)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
					{
						func_48(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 24:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_66.f_46.f_4[0], false))
			{
				VEHICLE::SET_VEHICLE_SIREN(Local_66.f_46.f_4[0], false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[0], false))
			{
				func_48(Local_66.f_46[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		
		case 25:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_48(PLAYER::PLAYER_PED_ID(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 26:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				func_38();
			}
			break;
		
		case 28:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 29:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 30:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				func_48(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 31:
			if (!func_20())
			{
				iLocal_51 = 37;
			}
			break;
		
		case 33:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_66.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					func_48(PLAYER::PLAYER_PED_ID(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_66.f_471));
				iLocal_51 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_66.f_471)) > 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					func_48(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

void func_38()//Position - 0x2518
{
	Global_21032 = 0;
	func_39();
}

void func_39()//Position - 0x2528
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_40(int* iParam0)//Position - 0x2549
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_41(var uParam0)//Position - 0x255F
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(int* iParam0)//Position - 0x2598
{
	if (func_15(iParam0))
	{
		if (!func_11(iParam0))
		{
			iParam0->f_2 = (func_10(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_43(int* iParam0)//Position - 0x25CF
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			iParam0->f_1 = (func_10(BitTest(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

int func_44()//Position - 0x260A
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()//Position - 0x263E
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_214, Local_66.f_217, Local_66.f_220, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)//Position - 0x2672
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()//Position - 0x2689
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)//Position - 0x26A7
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_49(iParam2), 1);
}

int func_49(int iParam0)//Position - 0x26BE
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

bool func_50()//Position - 0x28B3
{
	return Global_23570;
}

void func_51()//Position - 0x28BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_304() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
			switch (iVar0)
			{
				case 142:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(PLAYER::PLAYER_PED_ID()))
							{
								func_295(&(Local_66.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_295(&(Local_66.f_470), 8);
						}
					}
					break;
				
				case 141:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(PLAYER::PLAYER_PED_ID()))
							{
								func_295(&(Local_66.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_295(&(Local_66.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)//Position - 0x29DC
{
	return iParam0;
}

int func_53(int iParam0)//Position - 0x29E6
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Local_66.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()//Position - 0x2AA3
{
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_304())
		{
			if (!BitTest(Local_66.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_66.f_162)
				{
					Local_66.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12)
				{
					if (iVar0 < Local_66.f_162)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar13]) && !PED::IS_PED_INJURED(uVar1[iVar13])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar13], false))
						{
							if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar13], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								Local_66.f_162[iVar0] = uVar1[iVar13];
								Local_66.f_162.f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar13], true) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				MISC::SET_BIT(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_66.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_66.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_162[iVar0], false))
				{
					if (BitTest(Local_66.f_162.f_18, 1))
					{
						if ((MISC::GET_GAME_TIMER() % 1500) < 50)
						{
						}
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], false, false);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], false, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], true, false);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (BitTest(Local_66.f_162.f_18, 0))
			{
				MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_66.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_66.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_162[iVar0], false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], true, false);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()//Position - 0x2D4B
{
	switch (iLocal_620)
	{
		case 0:
			if (func_304())
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
				STREAMING::REQUEST_ANIM_DICT("misscommon@response");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_64(iLocal_566), false);
				STREAMING::REQUEST_MODEL(joaat("prop_choc_ego"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_meto"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_pq"));
				if (!bLocal_572)
				{
					STREAMING::REQUEST_MODEL(Local_66.f_46.f_26);
					STREAMING::REQUEST_MODEL(Local_66.f_46.f_27);
				}
				iLocal_620 = 1;
			}
			break;
		
		case 1:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_572)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_46.f_26))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_46.f_27))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_566, 0))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 4))
			{
				if (!func_1(Local_66.f_470, 1024))
				{
					iLocal_616[0] = OBJECT::CREATE_OBJECT(func_61(0), func_60(0), true, true, false);
					iLocal_616[1] = OBJECT::CREATE_OBJECT(func_61(1), func_60(1), true, true, false);
					iLocal_616[2] = OBJECT::CREATE_OBJECT(func_61(2), func_60(2), true, true, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_616[0], false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_616[1], false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_616[2], false, false);
					func_295(&(Local_66.f_470), 1024);
				}
				func_295(&(Local_66.f_470), 4);
				iLocal_620 = 2;
			}
			break;
		
		case 2:
			if (!func_304())
			{
				func_56();
				func_302(&(Local_66.f_470), 4);
				iLocal_620 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 4))
			{
				func_56();
				func_302(&(Local_66.f_470), 4);
			}
			break;
	}
}

void func_56()//Position - 0x2F55
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@shop_robbery@rob_till");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_64(iLocal_566));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_ego"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_meto"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_pq"));
	func_57(1, iLocal_566);
	if (!bLocal_572)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_26);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_27);
	}
}

void func_57(bool bParam0, int iParam1)//Position - 0x2FBE
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23711.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23711.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23711.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23711.f_6231[iVar0] = 0;
	}
	if (Global_23711.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23711.f_6217[iVar0] = 0;
	}
	if (Global_23711.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23711.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_23711.f_6263[iVar0 /*10*/]));
		Global_23711.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23711.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_58(int* iParam0)//Position - 0x3084
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)//Position - 0x30B0
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23711.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23711.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23711.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

Vector3 func_60(int iParam0)//Position - 0x314D
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)//Position - 0x31B7
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)//Position - 0x31F5
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23711.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23711.f_6238[iVar0 /*4*/]), 9);
		Global_23711.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23711.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23711.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23711.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23711.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_23711.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)//Position - 0x3303
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_64(int iParam0)//Position - 0x33A5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()//Position - 0x3451
{
	switch (iLocal_621)
	{
		case 0:
			if (func_304())
			{
				STREAMING::REQUEST_ANIM_DICT(Local_66.f_486.f_1);
				iLocal_621 = 1;
			}
			break;
		
		case 1:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_66.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 16))
			{
				func_295(&(Local_66.f_470), 16);
				iLocal_621 = 2;
			}
			break;
		
		case 2:
			if (!func_304() && iLocal_63 != 1)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
				func_302(&(Local_66.f_470), 16);
				iLocal_621 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 16))
			{
				STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
				func_302(&(Local_66.f_470), 16);
			}
			break;
	}
}

void func_66()//Position - 0x351A
{
	switch (iLocal_640)
	{
		case 0:
			if (Local_66.f_158)
			{
				iLocal_640 = 1;
			}
			break;
		
		case 1:
			if (func_304())
			{
				if (func_15(&(Local_66.f_158.f_1)))
				{
					func_40(&(Local_66.f_158.f_1));
				}
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				func_13(&(Local_66.f_158.f_1));
				iLocal_640 = 2;
			}
			break;
		
		case 2:
			if (func_304())
			{
				iLocal_640 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_67()//Position - 0x35B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	char* sVar7;
	var uVar8;
	
	func_192();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && !PED::IS_PED_INJURED(Local_66.f_0)) && !func_191(-1082130432)) && !PED::IS_PED_INJURED(Local_66.f_2))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_304())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		iVar6 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (func_1(Local_66.f_470, 4) && func_25(Local_66.f_0) == joaat("WEAPON_UNARMED"))
				{
					if (func_190(iLocal_566, &(Local_66.f_486.f_6), Local_66.f_486.f_9.f_2, &(Local_66.f_102.f_26[0 /*3*/]), &(Local_66.f_102.f_26[1 /*3*/]), &(Local_66.f_102.f_33), &(Local_66.f_102.f_36)))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_66.f_102.f_33, true) < 5f)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_26[0 /*3*/], Local_66.f_102.f_26[1 /*3*/], Local_66.f_102.f_36, false, true, 0))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_33, 135f))
								{
									if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) && !func_28("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */)) && !func_50()) && func_189())
									{
										func_188("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */);
									}
									Local_66.f_469 = -1;
									func_187(&(Local_66.f_469), 4, "SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */, 0, 0, 0, 0);
									MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
									MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_33, 135f) || !func_25(Local_66.f_0) == joaat("WEAPON_UNARMED"))
				{
					if (func_28("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_66.f_102.f_22 = -1;
					func_186(&(Local_66.f_469));
					iLocal_64 = 0;
				}
				else if (((!func_28("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */) && !func_28("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */)) && func_189()) && !func_185(Local_66.f_469, 0))
				{
					func_188("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */);
				}
				if ((!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_183(Local_66.f_469, 1))
					{
						if (func_28("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
						{
							HUD::CLEAR_HELP(true);
						}
						MISC::SET_BIT(&(Local_66.f_162.f_18), 1);
						func_13(&(Local_66.f_102.f_53));
						func_186(&(Local_66.f_469));
						func_182(23, 1);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_66.f_2))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			
			case 2:
				if (!CAM::DOES_CAM_EXIST(iLocal_639))
				{
					iLocal_639 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				func_181(iLocal_566, Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, &(Local_66.f_102), &(Local_66.f_102.f_3), &uVar8);
				CAM::SET_CAM_COORD(iLocal_639, Local_66.f_102);
				CAM::SET_CAM_ROT(iLocal_639, Local_66.f_102.f_3, 2);
				CAM::SET_CAM_FOV(iLocal_639, 35f);
				CAM::SHAKE_CAM(iLocal_639, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_639, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_295(&(Local_66.f_470), 2048);
				}
				Local_66.f_102.f_46 = func_64(iLocal_566);
				Local_66.f_102.f_23 = 0;
				Local_66.f_102.f_24 = 3;
				func_180(0, 0);
				func_179(1, 1, 0, 0, 0);
				func_178(1, 2, 1, 1, 1);
				func_177(func_5(iLocal_566));
				func_175(1, Local_66.f_102.f_46, Local_66.f_102.f_46);
				func_174();
				func_170(0, "SNK_ITEM1", 0, 1, 0, 0, 0);
				func_170(0, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				func_166(func_169(0), 0);
				func_170(1, "SNK_ITEM2", 0, 1, 0, 0, 0);
				func_170(1, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				func_166(func_169(1), 0);
				func_170(2, "SNK_ITEM3", 0, 1, 0, 0, 0);
				func_170(2, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				func_166(func_169(2), 0);
				func_165(0);
				func_164(Local_66.f_102.f_23, 1, 1);
				func_163("SNK_ITEM1_D", 0, 0);
				func_162(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				func_162(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
				func_162(203, "SNK_LIFT", -1, 0);
				iLocal_64 = 3;
				break;
			
			case 3:
				iVar6 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						func_159(0, 0, 0, 1);
						func_158(0, -1, 1);
						if (func_157())
						{
							if (Global_4541715 != Local_66.f_102.f_23)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_66.f_102.f_23 = Global_4541715;
								func_164(Local_66.f_102.f_23, 1, 1);
								Local_66.f_102.f_37 = 0;
								Local_66.f_102.f_41 = 0;
								Local_66.f_102.f_42 = 0;
								sVar7 = func_156(Local_66.f_102.f_23);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar7))
								{
									func_163(sVar7, 0, 0);
								}
							}
							else
							{
								iVar6 = 1;
							}
						}
					}
				}
				func_115(1, iLocal_566, 1, 0, 1, -1082130432, 0, 0, -1);
				func_111();
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar6 == 1)
				{
					Local_66.f_102.f_37 = 1;
					Local_66.f_102.f_41 = 0;
					Local_66.f_102.f_42 = 0;
					if (Local_66.f_102.f_40 && Local_66.f_102.f_43)
					{
						Local_66.f_102.f_44 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_629 = 1;
						iLocal_632 = Local_66.f_102.f_23;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_102.f_44 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
				{
					iLocal_64 = 6;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_110();
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					iLocal_64 = 7;
					Local_66.f_102.f_45 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_110();
				}
				break;
			
			case 4:
				func_115(1, iLocal_566, 1, 0, 1, -1082130432, 0, 0, -1);
				switch (Local_66.f_102.f_23)
				{
					case 0:
						iVar0 = func_169(Local_66.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0, 0);
						}
						break;
					
					case 1:
						iVar0 = func_169(Local_66.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0, 0);
						}
						break;
					
					case 2:
						iVar0 = func_169(Local_66.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0, 0);
						}
						break;
				}
				func_69(func_104(), 98, iVar0);
				if (!Local_66.f_102.f_39)
				{
					iLocal_51 = 34;
					Local_66.f_102.f_39 = 1;
				}
				func_13(&(Local_66.f_102.f_53));
				iLocal_64 = 3;
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_572)
					{
					}
					iLocal_64 = 6;
				}
				break;
			
			case 6:
				switch (Local_66.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0, 0);
						}
						break;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				func_182(23, 0);
				iLocal_51 = 35;
				if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
				{
					TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0f, false, false, false);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_64 = 8;
				break;
			
			case 7:
				if ((MISC::GET_GAME_TIMER() - Local_66.f_102.f_45) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 193 /*INPUT_FRONTEND_RLEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && func_1(Local_66.f_470, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_110();
			}
			iLocal_64 = 8;
		}
		if (func_28("SHR_SNACKS" /* GXT: Press ~INPUT_CONTEXT~ to buy a snack.~n~Hold ~INPUT_CONTEXT~ to steal a snack. */))
		{
			HUD::CLEAR_HELP(true);
			func_186(&(Local_66.f_469));
		}
		if (func_28("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
		{
			HUD::CLEAR_HELP(true);
			func_186(&(Local_66.f_469));
		}
		if (BitTest(Local_66.f_162.f_18, 1) && iLocal_622 < 2)
		{
			MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
		}
		if (func_1(Local_66.f_470, 4))
		{
			func_68();
		}
	}
}

void func_68()//Position - 0x3F58
{
	if (func_1(Local_66.f_470, 2048))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_302(&(Local_66.f_470), 2048);
		}
	}
	Local_66.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_639))
	{
		CAM::DESTROY_CAM(iLocal_639, false);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x3FC9
{
	if (func_103(iParam0) == 3)
	{
		return 0;
	}
	if (func_103(iParam0) == 4)
	{
		return 0;
	}
	return func_70(func_103(iParam0), 0, iParam1, iParam2, 0);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3FFD
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_102();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_101(99, 1);
					func_100(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_100(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_100(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_85(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_82(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_100(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_100(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_82(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_100(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_100(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_100(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_100(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_100(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_100(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_100(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_100(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_100(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_100(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_82(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_100(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_100(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_100(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_100(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_81(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_101(95, iParam3);
					break;
				
				case 1:
					func_101(97, iParam3);
					break;
				
				case 2:
					func_101(96, iParam3);
					break;
			}
			func_101(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(bVar1);
	}
	iVar5 = (Global_61212[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61212[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61212[iVar2] = 2147483647;
				}
				else
				{
					Global_61212[iVar2] = (Global_61212[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_100(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_100(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_100(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61212[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61212[iVar2];
			Global_61212[iVar2] = (Global_61212[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114370.f_20567.f_233[iVar2 /*69*/]++;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_72(iParam0);
	if (Global_43922 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)//Position - 0x45FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61220[iVar0 /*3*/][0] = Global_114370.f_20567[iVar0];
		Global_61220.f_31[iVar0 /*3*/][0] = Global_114370.f_20567.f_11[iVar0];
		Global_61220.f_62[iVar0 /*3*/][0] = Global_114370.f_20567.f_22[iVar0];
		Global_61220.f_93[iVar0 /*3*/][0] = Global_114370.f_20567.f_33[iVar0];
		Global_61220.f_124[iVar0 /*3*/][0] = Global_114370.f_20567.f_44[iVar0];
		Global_61220.f_155[iVar0 /*3*/][0] = Global_114370.f_20567.f_55[iVar0];
		Global_61220.f_186[iVar0 /*3*/][0] = Global_114370.f_20567.f_66[iVar0];
		Global_61220.f_217[iVar0 /*3*/][0] = Global_114370.f_20567.f_77[iVar0];
		Global_61220.f_248[iVar0 /*3*/][0] = Global_114370.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61220[iVar0 /*3*/][1] = Global_114370.f_20567[iVar0];
			Global_61220.f_31[iVar0 /*3*/][1] = Global_114370.f_20567.f_11[iVar0];
			Global_61220.f_62[iVar0 /*3*/][1] = Global_114370.f_20567.f_22[iVar0];
			Global_61220.f_93[iVar0 /*3*/][1] = Global_114370.f_20567.f_33[iVar0];
			Global_61220.f_124[iVar0 /*3*/][1] = Global_114370.f_20567.f_44[iVar0];
			Global_61220.f_155[iVar0 /*3*/][1] = Global_114370.f_20567.f_55[iVar0];
			Global_61220.f_186[iVar0 /*3*/][1] = Global_114370.f_20567.f_66[iVar0];
			Global_61220.f_217[iVar0 /*3*/][1] = Global_114370.f_20567.f_77[iVar0];
			Global_61220.f_248[iVar0 /*3*/][1] = Global_114370.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)//Position - 0x4881
{
	int iVar0;
	
	iVar0 = Global_61212[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_73(bool bParam0)//Position - 0x48DB
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_80(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_80(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_80(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_80(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_76(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_76(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_76(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_76(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_76(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_76(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114370.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114370.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_75() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_75() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_74(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_74(bool bParam0)//Position - 0x4A54
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_75()//Position - 0x4B56
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4B63
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_77(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_77(int iParam0, var uParam1)//Position - 0x4B91
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_78(uParam1));
}

int func_78(var uParam0)//Position - 0x4BA6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_79()//Position - 0x4BDA
{
	return Global_1574925;
}

void func_80(int iParam0, bool bParam1, int iParam2)//Position - 0x4BE6
{
	if (iParam2 == -1)
	{
		iParam2 = func_79();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_81(int iParam0)//Position - 0x4C04
{
	func_101(93, iParam0);
	func_101(29, iParam0);
	func_101(30, iParam0);
}

int func_82(int iParam0)//Position - 0x4C24
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_84(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_84(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_84(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_84(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_83(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_83(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_83(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_83(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_83(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_83(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114370.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_75() /*5569*/].f_681.f_10, iParam0);
}

int func_83(int iParam0, int iParam1)//Position - 0x4DC4
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_77(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)//Position - 0x4DF3
{
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_85(bool bParam0)//Position - 0x4E0F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_99(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_86(27, 1);
	return 1;
}

int func_86(int iParam0, int iParam1)//Position - 0x4EC6
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_87(iParam0, iParam1);
}

int func_87(int iParam0, int iParam1)//Position - 0x4EE1
{
	if (func_318(14) && !func_98(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33079 != 0 && !Global_79248)
	{
		return 0;
	}
	if (func_97(&Global_4543283))
	{
		if (func_95(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_88(&Global_4543283, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_88(var uParam0, int iParam1)//Position - 0x4F7E
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_318(14) && !func_98(iParam1))
	{
		return 0;
	}
	if (func_95(uParam0, iParam1))
	{
		return 0;
	}
	if (func_94(uParam0) < 0f)
	{
		func_93(uParam0, 0);
	}
	func_91(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_89(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_89(var uParam0, int iParam1)//Position - 0x502F
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_318(14) && !func_98(iParam1))
	{
		return 0;
	}
	if (func_95(uParam0, iParam1))
	{
		return 0;
	}
	if (func_94(uParam0) < 0f)
	{
		func_93(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_90(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_90(var uParam0, int iParam1)//Position - 0x50AA
{
	return (*uParam0)[iParam1] == 78;
}

void func_91(var uParam0)//Position - 0x50BB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_92(uParam0, iVar0);
		iVar0++;
	}
	func_93(uParam0, (Global_4543282 - 0.5f));
}

void func_92(var uParam0, int iParam1)//Position - 0x50EF
{
	(*uParam0)[iParam1] = 78;
}

void func_93(var uParam0, float fParam1)//Position - 0x50FF
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_94(var uParam0)//Position - 0x511C
{
	return uParam0->f_80;
}

bool func_95(var uParam0, int iParam1)//Position - 0x5128
{
	return func_96(uParam0, iParam1) != -1;
}

int func_96(var uParam0, int iParam1)//Position - 0x513A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_97(var uParam0)//Position - 0x5167
{
	return uParam0->f_79 == 1;
}

int func_98(int iParam0)//Position - 0x5175
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_99(int iParam0, int iParam1)//Position - 0x51C5
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
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_100(int iParam0, int iParam1)//Position - 0x5216
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_101(int iParam0, int iParam1)//Position - 0x5239
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59780[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59780[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_102()//Position - 0x5296
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[0] == iVar0)
		{
			Global_61212[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[1] == iVar0)
		{
			Global_61212[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[2] == iVar0)
		{
			Global_61212[2] = iVar0;
		}
	}
}

int func_103(int iParam0)//Position - 0x530B
{
	return Global_2139[iParam0 /*29*/].f_17;
}

int func_104()//Position - 0x531C
{
	func_105();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_105()//Position - 0x5335
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_108(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_107(PLAYER::PLAYER_PED_ID());
			if (func_106(iVar0) && (!func_318(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_106(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

bool func_106(int iParam0)//Position - 0x5432
{
	return iParam0 < 3;
}

int func_107(int iParam0)//Position - 0x543E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_108(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_108(int iParam0)//Position - 0x547B
{
	if (func_106(iParam0))
	{
		return func_109(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_109(int iParam0)//Position - 0x54A0
{
	return Global_2139[iParam0 /*29*/];
}

void func_110()//Position - 0x54AF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	func_302(&(Local_66.f_470), 2048);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	func_182(23, 0);
	Local_66.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_639))
	{
		CAM::DESTROY_CAM(iLocal_639, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_111()//Position - 0x5527
{
	char* sVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 193 /*INPUT_FRONTEND_RLEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	if (func_114())
	{
		Local_66.f_102.f_37 = 0;
		func_40(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23 = (Local_66.f_102.f_23 - 1);
		if (Local_66.f_102.f_23 < 0)
		{
			Local_66.f_102.f_23 = (Local_66.f_102.f_24 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_164(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_156(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_163(sVar0, 0, 0);
		}
	}
	if (func_113())
	{
		Local_66.f_102.f_37 = 0;
		func_40(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23++;
		if (Local_66.f_102.f_23 > (Local_66.f_102.f_24 - 1))
		{
			Local_66.f_102.f_23 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_164(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_156(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_163(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_102.f_41)
	{
		Local_66.f_102.f_40 = func_112(func_107(PLAYER::PLAYER_PED_ID())) >= func_169(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 1;
	}
	if (!Local_66.f_102.f_42)
	{
		Local_66.f_102.f_43 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		Local_66.f_102.f_42 = 1;
	}
	if (Local_66.f_102.f_37)
	{
		if (func_41(&(Local_66.f_102.f_53)) < 3f)
		{
			if (Local_66.f_102.f_44)
			{
				func_163("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_102.f_40)
			{
				func_163("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_102.f_43)
			{
				func_163("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_102.f_37 = 0;
			Local_66.f_102.f_44 = 0;
			func_40(&(Local_66.f_102.f_53));
			sVar0 = func_156(Local_66.f_102.f_23);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_163(sVar0, 0, 0);
			}
		}
	}
}

int func_112(int iParam0)//Position - 0x5746
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_113()//Position - 0x579E
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
	{
		if (!func_15(&iLocal_636))
		{
			func_12(&iLocal_636);
			return 1;
		}
		else if (func_9(&iLocal_636) > 0.25f)
		{
			func_13(&iLocal_636);
			return 1;
		}
	}
	else if (func_15(&iLocal_636))
	{
		func_40(&iLocal_636);
	}
	return 0;
}

int func_114()//Position - 0x581D
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
	{
		if (!func_15(&iLocal_633))
		{
			func_12(&iLocal_633);
			return 1;
		}
		else if (func_9(&iLocal_633) > 0.25f)
		{
			func_13(&iLocal_633);
			return 1;
		}
	}
	else if (func_15(&iLocal_633))
	{
		func_40(&iLocal_633);
	}
	return 0;
}

void func_115(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x589C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_153(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23711)
	{
		if (func_151(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23711 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23710;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23711.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23709;
	}
	else
	{
		fVar59 = (((Global_23709 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_149(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23711.f_5821 <= 1)
		{
			func_170(Global_23711.f_5821 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23711.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23711.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23709;
			}
			else
			{
				if (Global_23711)
				{
					StringCopy(&cVar63, func_148(29), 64);
					StringCopy(&cVar79, func_145(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23711.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_144(Global_23708, Global_23709, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23708 + (fParam5 * 0.5f)), (Global_23709 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23708 + (fParam5 * 0.5f)), (Global_23709 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23711.f_9086)
				{
					iVar1 = Global_23711.f_9082;
					iVar2 = Global_23711.f_9083;
					iVar3 = Global_23711.f_9084;
					iVar4 = Global_23711.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_144(Global_23708, (Global_23709 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23709 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23711.f_1)) != 0)
				{
					func_143();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23711.f_74)
					{
						if (Global_23711.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23711.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_14[iVar16], Global_23711.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23711.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23711.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23711.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23711.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23711.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23711.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23708 + 0.00390625f), ((Global_23709 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23711.f_6338)
				{
					func_143();
					func_141((((Global_23708 + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6339, Global_23711.f_6340)), ((Global_23709 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6339, Global_23711.f_6340);
				}
				else if (Global_23711.f_6334 > Global_23711.f_5828)
				{
					if (Global_23711.f_6337 != 0)
					{
						func_143();
						func_141((((Global_23708 + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6337, Global_23711.f_6336)), ((Global_23709 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23711.f_6337, Global_23711.f_6336);
					}
				}
			}
			iVar6 = Global_23711.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23711.f_9096)
			{
				iVar1 = Global_23711.f_9092;
				iVar2 = Global_23711.f_9093;
				iVar3 = Global_23711.f_9094;
				iVar4 = Global_23711.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23711.f_5828 && iVar6 <= Global_23711.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23711.f_6088[iVar6])
					{
						if (Global_23711.f_5959[iVar6] && iVar6 != Global_23711.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23711.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23711.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23711.f_6334 > Global_23711.f_5828)
			{
				if (Global_23711.f_9101)
				{
					iVar1 = Global_23711.f_9097;
					iVar2 = Global_23711.f_9098;
					iVar3 = Global_23711.f_9099;
					iVar4 = Global_23711.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_144(Global_23708, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23711.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23711.f_5241)) != 0 && Global_23711.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23708 + 0.0046875f);
				if (Global_23711.f_5325 != 0)
				{
					func_151(Global_23711.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23708 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23711.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23711.f_5319)
				{
					if (Global_23711.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23711.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_5262[iVar16], Global_23711.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23711.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23711.f_9106)
				{
					iVar1 = Global_23711.f_9102;
					iVar2 = Global_23711.f_9103;
					iVar3 = Global_23711.f_9104;
					iVar4 = Global_23711.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_140(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23711.f_5319)
				{
					if (Global_23711.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23711.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_5262[iVar16], Global_23711.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23711.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23711.f_5325 != 0)
				{
					func_151(Global_23711.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_23711.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_5325), func_145(Global_23711.f_5325, 1), ((Global_23708 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_140(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23711.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23711.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_144(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23711.f_9106)
					{
						iVar1 = Global_23711.f_9102;
						iVar2 = Global_23711.f_9103;
						iVar3 = Global_23711.f_9104;
						iVar4 = Global_23711.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_140(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23711.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23711.f_5324) > Global_23711.f_5323)
					{
						StringCopy(&(Global_23711.f_5241), "", 24);
						Global_23711.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23708 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23711.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_140(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23711.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23711.f_5319)
				{
					if (Global_23711.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23711.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_5262[iVar16], Global_23711.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23711.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23711.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23711.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23711.f_9106)
				{
					iVar1 = Global_23711.f_9102;
					iVar2 = Global_23711.f_9103;
					iVar3 = Global_23711.f_9104;
					iVar4 = Global_23711.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_140(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4541639.f_21)) != 0 && Global_4541639.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23708 + 0.0046875f);
				if (Global_4541639.f_67 != 0)
				{
					func_151(Global_4541639.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23708 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541639.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541639.f_61)
				{
					if (Global_4541639.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541639.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541639.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541639.f_34[iVar16], Global_4541639.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541639.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_23708, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23711.f_9106)
				{
					iVar1 = Global_23711.f_9102;
					iVar2 = Global_23711.f_9103;
					iVar3 = Global_23711.f_9104;
					iVar4 = Global_23711.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23708 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_140(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541639.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541639.f_61)
				{
					if (Global_4541639.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541639.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541639.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541639.f_34[iVar16], Global_4541639.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541639.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541639.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541639.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4541639.f_67 != 0)
				{
					func_151(Global_4541639.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_4541639.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_148(Global_4541639.f_67), func_145(Global_4541639.f_67, 1), ((Global_23708 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541639.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4541639.f_66) > Global_4541639.f_65)
					{
						StringCopy(&(Global_4541639.f_21), "", 16);
						Global_4541639.f_65 = -1;
					}
				}
			}
			func_131(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23711.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_23711.f_5821;
			if (Global_23711.f_6332)
			{
				iVar98 = (Global_23711.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23711.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23711.f_6348[iVar6];
				}
				if (Global_23711.f_6332)
				{
					iVar6 = Global_23711.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23711.f_6341 && iVar9 < Global_23711.f_5828)
				{
					bVar33 = true;
					if (Global_23711.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23711.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23711.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23708 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23711.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23711.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23711.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23708 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23711.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23711.f_5829)
				{
					if (BitTest(Global_23711.f_5692[iVar6], iVar8) || Global_23711.f_5659[iVar8] == 5)
					{
						if (Global_23711.f_6332)
						{
							iVar19 = Global_23711.f_8753[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar20 = Global_23711.f_8794[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar21 = Global_23711.f_8835[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar22 = Global_23711.f_8876[((iVar9 * Global_23711.f_5829) + iVar8)];
							iVar23 = Global_23711.f_8917[((iVar9 * Global_23711.f_5829) + iVar8)];
						}
						else
						{
							Global_23711.f_8753[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar19;
							Global_23711.f_8794[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar20;
							Global_23711.f_8835[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar21;
							Global_23711.f_8876[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar22;
							Global_23711.f_8917[((iVar9 * Global_23711.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23711.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23711.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23711.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23711.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23711.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23708 + 0.0046875f) + Global_23711.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23711.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23711.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23711.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23708 + Global_23710) - 0.0046875f) - fVar34);
						}
						if ((Global_23711.f_5678[iVar8] && Global_23711.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23711.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23711.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23711.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_129(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23711.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[(iVar21 + iVar27)], Global_23711.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_151(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23711.f_4984[(iVar22 + iVar14)] == 2 || Global_23711.f_4984[(iVar22 + iVar14)] == 54) || Global_23711.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23711.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
										Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar43;
										Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar44;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23711.f_5686[iVar101] == 2)
												{
													Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar101)] = (Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar101)] - Global_23711.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar43 = Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar44 = Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_151(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_151(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_151(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_151(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23711.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_129(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23711.f_9112 && Global_23711.f_9113 == iVar6)
										{
											func_128(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23711.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[(iVar21 + iVar27)], Global_23711.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23711.f_4984[(iVar22 + iVar28)] == 2 || Global_23711.f_4984[(iVar22 + iVar28)] == 54) || Global_23711.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_151(Global_23711.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_151(Global_23711.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_139(Global_23711.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23711.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_4984[(iVar22 + iVar28)]), func_145(Global_23711.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_4984[(iVar22 + iVar28)]), func_145(Global_23711.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23711.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23711.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_127() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23711.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_129(0, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23711.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23711.f_4984[(iVar22 + iVar14)] != 2 && Global_23711.f_4984[(iVar22 + iVar14)] != 54) && Global_23711.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_151(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_151(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_139(Global_23711.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23711.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_4984[(iVar22 + iVar14)]), func_145(Global_23711.f_4984[(iVar22 + iVar14)], bVar32), (Global_23708 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23711.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_4984[(iVar22 + iVar14)]), func_145(Global_23711.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_4984[(iVar22 + iVar14)]), func_145(Global_23711.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20 = (iVar20 + 1);
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23711.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23711.f_6332)
									{
										func_129(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23711.f_9112 && Global_23711.f_9113 == iVar6)
										{
											func_128(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23711.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
										Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar43 = Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_151(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_151(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_151(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_151(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_129(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
										func_126((fVar34 + fVar42), fVar35, "NUMBER", Global_23711.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23711.f_6332)
									{
										func_129(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23711.f_9112 && Global_23711.f_9113 == iVar6)
										{
											func_128(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[iVar21], Global_23711.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23711.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23711.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
										Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
										fVar43 = Global_23711.f_8999[((iVar9 * Global_23711.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_151(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_151(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_151(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_151(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_129(bVar32, Global_23711.f_1616[iVar24], Global_23711.f_1873[iVar24], bVar55, 0, 0, 0);
									func_125((fVar34 + fVar42), fVar35, "NUMBER", Global_23711.f_4726[iVar21], Global_23711.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_151(Global_23711.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23711.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23711.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23711.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar42;
											Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23711.f_8958[((iVar9 * Global_23711.f_5829) + iVar8)];
											fVar44 = Global_23711.f_9040[((iVar9 * Global_23711.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_151(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23711.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_151(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_151(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_151(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_151(Global_23711.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(Global_23711.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_148(Global_23711.f_4984[iVar22]), func_145(Global_23711.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_124(Global_23711.f_4984[iVar22])), (fVar37 * func_124(Global_23711.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23711.f_5659[iVar8] == 5)
						{
							if (Global_23711.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23711.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23711.f_5671[iVar8]);
							if (Global_23711.f_5678[iVar8])
							{
								if (func_151(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23711.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23711.f_8737[iVar9] = iVar6;
						Global_23711.f_6343 = iVar6;
						iVar9++;
						if (Global_23711.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23711.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23711.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23711.f_6331)
					{
						Global_23711.f_6088[iVar6] = 1;
						if (Global_23711.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23711.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23711.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23711.f_6331)
			{
				Global_23711.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23711.f_6336 = iVar11;
				Global_23711.f_6334 = iVar10;
				Global_23711.f_6331 = 1;
			}
		}
		if (!Global_23711.f_6332)
		{
			Global_23711.f_6335 = iVar9;
			Global_23711.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23711.f_6479 = fVar51;
	Global_23711.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23711.f_6479);
	if (!Global_23711.f_9081)
	{
		func_117(0);
	}
	Global_23711.f_9081 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_116(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_116(int iParam0)//Position - 0x8A58
{
	Global_1669875.f_1163 = iParam0;
}

void func_117(int iParam0)//Position - 0x8A69
{
	if (func_123())
	{
		return;
	}
	if (!Global_20813.f_1 == 1)
	{
		if (func_122(0))
		{
			func_118(iParam0);
		}
		MISC::SET_BIT(&Global_8684, 2);
	}
}

void func_118(int iParam0)//Position - 0x8A9C
{
	if (func_123())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_121())
		{
			func_120(1, 1);
		}
		else
		{
			func_120(0, 0);
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
	if (!func_119())
	{
		Global_20813.f_1 = 3;
	}
}

int func_119()//Position - 0x8B26
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_120(bool bParam0, bool bParam1)//Position - 0x8B4D
{
	if (bParam0)
	{
		if (func_122(0))
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

bool func_121()//Position - 0x8BC1
{
	return BitTest(Global_1956030, 5);
}

int func_122(int iParam0)//Position - 0x8BCF
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

bool func_123()//Position - 0x8C26
{
	return BitTest(Global_1956030, 19);
}

float func_124(int iParam0)//Position - 0x8C35
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_125(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x8CA4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_126(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x8CC3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_127()//Position - 0x8CE1
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_128(bool bParam0)//Position - 0x8CF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23711.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23711.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8D38
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_130(Global_23711.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_130(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8EE6
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_131(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x9170
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_153(bParam4, bParam8))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_134(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23711.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (Global_23711.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5625[iVar1], true), 64);
				}
				else if (Global_23711.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23711.f_5327 = 0;
		}
		if (!Global_23711.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23711.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_133(&(Global_23711.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_133(&(Global_23711.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23711.f_5610[iVar1] == -1)
					{
						func_132(&(Global_23711.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23711.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23711.f_5625[iVar1] != 365 && BitTest(Global_23711.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541639.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5326);
				func_133(&Global_4541639);
				if (Global_4541639.f_20 == -1)
				{
					func_132(&(Global_4541639.f_16));
				}
				else
				{
					iVar4 = Global_23711.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23711.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23711.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23711.f_5326)
		{
			if (Global_23711.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4541639.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23711.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23711.f_9116 = 1;
			}
		}
		else if (Global_23711.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23711.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23711.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23711.f_6263[iVar0 /*10*/], Global_23711.f_5656, Global_23711.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23711.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_132(char* sParam0)//Position - 0x9674
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_133(char* sParam0)//Position - 0x9686
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_134(int iParam0, int iParam1)//Position - 0x9694
{
	bool bVar0;
	
	if (!func_136(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_135(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
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

int func_135(int iParam0, bool bParam1)//Position - 0x96ED
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_136(var uParam0)//Position - 0x972E
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

int func_137()//Position - 0x9750
{
	struct<3> Var0;
	
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	if (func_138())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20758 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_138()//Position - 0x97BE
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x97D8
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_140(float fParam0)//Position - 0x98F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23708 + Global_23710) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_141(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x9958
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_142(char* sParam0, int iParam1, int iParam2)//Position - 0x997B
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_143();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_143()//Position - 0x99BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23711.f_9091)
	{
		iVar0 = Global_23711.f_9087;
		iVar1 = Global_23711.f_9088;
		iVar2 = Global_23711.f_9089;
		iVar3 = Global_23711.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23708 + 0.0046875f), ((Global_23708 + Global_23710) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_144(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9A47
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_145(int iParam0, bool bParam1)//Position - 0x9A76
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23711.f_7680[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_147(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_146(&uVar3);
			}
		}
		else
		{
			return func_146(&(Global_23711.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_146(var uParam0)//Position - 0x9F9E
{
	return uParam0;
}

struct<13> func_147(int iParam0)//Position - 0x9FA8
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_148(int iParam0)//Position - 0x9FBF
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23711.f_6623[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_147(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_146(&uVar0);
		}
		else
		{
			return func_146(&(Global_23711.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_149(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0xA034
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_150(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_150(int iParam0, int iParam1)//Position - 0xA0BC
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_151(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xA0D7
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_148(iParam0), 64);
	StringCopy(&cVar16, func_145(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_149(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_152(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23711.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23710)
			{
				*fParam4 = (*fParam4 * (Global_23710 / *fParam3));
				*fParam3 = Global_23710;
			}
		}
		return 1;
	}
	return 0;
}

float func_152(int iParam0)//Position - 0xA203
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_153(bool bParam0, bool bParam1)//Position - 0xA2D7
{
	if (Global_2672741.f_1689.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_155(8, -1) && func_154() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79509) || Global_23711.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101444.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_154()//Position - 0xA374
{
	return Global_1575008;
}

var func_155(int iParam0, int iParam1)//Position - 0xA380
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

char* func_156(int iParam0)//Position - 0xA3B8
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_157()//Position - 0xA3F1
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4541715 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0, int iParam1, bool bParam2)//Position - 0xA418
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4541715 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4541715 = -1;
			return 0;
		}
	}
	if (((Global_4541715 > -1 || Global_4541715 == -3) || Global_4541715 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4541715 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541715 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_159(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA4F8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		Global_4541715 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23708;
	fVar2 = (fVar0 + Global_23710);
	fVar3 = Global_23711.f_6333;
	fVar1 = (Global_23711.f_6333 - (IntToFloat(Global_23711.f_6335) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23711.f_6335 < 1)
	{
		fVar1 = (Global_23711.f_6333 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_161();
	if (Global_4541715 == -6)
	{
		return;
	}
	Global_4541715 = -1;
	fVar7 = Global_4541709;
	fVar8 = Global_4541710;
	if (Global_23711.f_6336 > Global_23711.f_6335)
	{
		if (((Global_4541709 >= fVar0 && Global_4541709 <= fVar2) && Global_4541710 >= fVar3) && Global_4541710 < (fVar3 + fVar6))
		{
			Global_4541715 = -2;
			if (bParam3)
			{
				func_160(0);
			}
			return;
		}
		if (((Global_4541709 >= fVar0 && Global_4541709 <= fVar2) && Global_4541710 >= (fVar3 + fVar6)) && Global_4541710 < (fVar3 + 0.034722f))
		{
			Global_4541715 = -3;
			if (bParam3)
			{
				func_160(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23711.f_6336 == -1)
		{
			Global_4541715 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23711.f_6335);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_144(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23710, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4541715 = Global_23711.f_8737[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541715 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541715 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541715 = -4;
		return;
	}
	Global_4541715 = -1;
}

void func_160(bool bParam0)//Position - 0xA7A4
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23708;
	fVar1 = Global_23711.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541715 == -2)
	{
		func_144(fVar0, fVar1, Global_23710, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541715 == -3)
	{
		func_144(fVar0, (fVar1 + fVar2), Global_23710, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_161()//Position - 0xA82D
{
	Global_4541711 = Global_4541709;
	Global_4541712 = Global_4541710;
	Global_4541709 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4541710 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4541713 = (Global_4541709 - Global_4541711);
	Global_4541714 = (Global_4541710 - Global_4541712);
}

void func_162(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xA875
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23711.f_5326 >= 14)
	{
		StringCopy(&Global_4541639, sVar0, 64);
		StringCopy(&(Global_4541639.f_16), sParam1, 16);
		Global_4541639.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23711.f_5655), Global_23711.f_5326);
	}
	StringCopy(&(Global_23711.f_5328[Global_23711.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23711.f_5553[Global_23711.f_5326 /*4*/]), sParam1, 16);
	Global_23711.f_5610[Global_23711.f_5326] = iParam2;
	Global_23711.f_5625[Global_23711.f_5326] = iParam0;
	Global_23711.f_5640[Global_23711.f_5326] = 32;
	Global_23711.f_5326++;
}

void func_163(char* sParam0, int iParam1, int iParam2)//Position - 0xA92A
{
	int iVar0;
	
	StringCopy(&(Global_23711.f_5241), sParam0, 24);
	Global_23711.f_5319 = 0;
	Global_23711.f_5320 = 0;
	Global_23711.f_5321 = 0;
	Global_23711.f_5322 = 0;
	Global_23711.f_5323 = iParam1;
	Global_23711.f_5324 = MISC::GET_GAME_TIMER();
	Global_23711.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_164(var uParam0, bool bParam1, int iParam2)//Position - 0xA98F
{
	int iVar0;
	int iVar1;
	
	Global_23711.f_6342 = uParam0;
	Global_23711.f_6477 = iParam2;
	if (Global_23711.f_6342 < Global_23711.f_6341)
	{
		Global_23711.f_6341 = Global_23711.f_6342;
	}
	else if ((Global_23711.f_6332 && Global_23711.f_6342 > Global_23711.f_6343) || (!Global_23711.f_6332 && Global_23711.f_6342 >= (Global_23711.f_6341 + Global_23711.f_5828)))
	{
		iVar0 = Global_23711.f_6341;
		while (iVar0 <= Global_23711.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23711.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23711.f_5828 && Global_23711.f_6341 < 128)
		{
			Global_23711.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23711.f_6341;
			while (iVar0 <= Global_23711.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23711.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23711.f_6331 = 0;
	Global_23711.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23711.f_5241), "", 24);
		StringCopy(&(Global_4541639.f_21), "", 16);
	}
}

void func_165(int iParam0)//Position - 0xAADF
{
	Global_23711.f_6341 = iParam0;
}

void func_166(var uParam0, bool bParam1)//Position - 0xAAEF
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23711.f_5825 >= 256)
	{
		return;
	}
	if (Global_23711.f_6346 >= 4)
	{
		return;
	}
	if (Global_23711.f_6347 != 1)
	{
		return;
	}
	if (Global_23711.f_6346 >= Global_23711.f_6344)
	{
		return;
	}
	Global_23711.f_4469[Global_23711.f_5825] = uParam0;
	Global_23711.f_5825++;
	Global_23711.f_2387[Global_23711.f_6345 /*5*/][Global_23711.f_6346] = 2;
	Global_23711.f_6346++;
	if (Global_23711.f_6346 >= Global_23711.f_6344)
	{
		fVar0 = func_168();
		if (Global_23711.f_5678[Global_23711.f_5822] && Global_23711.f_6346 == Global_23711.f_6344)
		{
			func_151(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23711.f_5671[(Global_23711.f_5822 - 1)])
		{
			Global_23711.f_5671[(Global_23711.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23711.f_6346 >= Global_23711.f_6344)
		{
			fVar3 = func_167();
			if (fVar3 > Global_23711.f_6348[Global_23711.f_5821])
			{
				Global_23711.f_6348[Global_23711.f_5821] = fVar3;
			}
		}
	}
}

float func_167()//Position - 0xAC2A
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23711.f_6346)
	{
		if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23711.f_4984[((Global_23711.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_151(Global_23711.f_4984[((Global_23711.f_5827 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_168()//Position - 0xACDD
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23711.f_6346)
	{
		if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_129(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23711.f_79[Global_23711.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23711.f_6346)
	{
		if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(Global_23711.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23711.f_79[(Global_23711.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23711.f_4469[((Global_23711.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23711.f_4726[((Global_23711.f_5826 - iVar4) + iVar10)], Global_23711.f_4855[((Global_23711.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23711.f_2387[Global_23711.f_6345 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696501[((Global_23711.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23711.f_79[Global_23711.f_6345 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23711.f_4984[((Global_23711.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_151(Global_23711.f_4984[((Global_23711.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_169(int iParam0)//Position - 0xB124
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_170(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0xB152
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23711.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23711.f_5821 >= 128)
	{
		return;
	}
	if (Global_23711.f_5823 >= 256)
	{
		return;
	}
	if (Global_23711.f_6346 < Global_23711.f_6344)
	{
		return;
	}
	if (Global_23711.f_5821 != iParam0)
	{
		Global_23711.f_5821 = iParam0;
		Global_23711.f_5822 = 0;
	}
	iVar0 = Global_23711.f_5659[Global_23711.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23711.f_5822 < 4 && iVar0 != 1)
		{
			Global_23711.f_5822++;
			iVar0 = Global_23711.f_5659[Global_23711.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23711.f_79[Global_23711.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23711.f_1616[Global_23711.f_5823] = bParam3;
	Global_23711.f_1873[Global_23711.f_5823] = iParam4;
	Global_23711.f_2130[Global_23711.f_5823] = iParam6;
	Global_23711.f_5823++;
	if (!bParam3)
	{
		func_173(Global_23711.f_5821, 1);
	}
	else
	{
		func_173(Global_23711.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_172(&(Global_23711.f_79[Global_23711.f_5823 /*6*/]));
		if (Global_23711.f_5678[Global_23711.f_5822])
		{
			func_151(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23711.f_5671[Global_23711.f_5822])
		{
			Global_23711.f_5671[Global_23711.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_171(&(Global_23711.f_79[Global_23711.f_5823 /*6*/]));
			if (fVar4 > Global_23711.f_6348[iParam0])
			{
				Global_23711.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23711.f_5692[iParam0]), Global_23711.f_5822);
	Global_23711.f_5822++;
	Global_23711.f_6347 = 1;
	Global_23711.f_6345 = (Global_23711.f_5823 - 1);
	Global_23711.f_6346 = 0;
	Global_23711.f_6344 = iParam2;
}

float func_171(char* sParam0)//Position - 0xB36E
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_172(char* sParam0)//Position - 0xB38A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_129(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_173(int iParam0, bool bParam1)//Position - 0xB3C7
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23711.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23711.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_174()//Position - 0xB413
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

void func_175(int iParam0, char* sParam1, char* sParam2)//Position - 0xB431
{
	Global_23711 = iParam0;
	func_176(29, sParam1, sParam2);
}

void func_176(int iParam0, char* sParam1, char* sParam2)//Position - 0xB448
{
	StringCopy(&(Global_23711.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23711.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_177(char* sParam0)//Position - 0xB46C
{
	int iVar0;
	
	StringCopy(&(Global_23711.f_1), sParam0, 16);
	Global_23711.f_74 = 0;
	Global_23711.f_75 = 0;
	Global_23711.f_76 = 0;
	Global_23711.f_77 = 0;
	Global_23711.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB4B7
{
	Global_23711.f_5686[0] = iParam0;
	Global_23711.f_5686[1] = iParam1;
	Global_23711.f_5686[2] = iParam2;
	Global_23711.f_5686[3] = iParam3;
	Global_23711.f_5686[4] = iParam4;
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB4F6
{
	Global_23711.f_5659[0] = iParam0;
	Global_23711.f_5659[1] = iParam1;
	Global_23711.f_5659[2] = iParam2;
	Global_23711.f_5659[3] = iParam3;
	Global_23711.f_5659[4] = iParam4;
	Global_23711.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23711.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23711.f_5829++;
	}
}

void func_180(bool bParam0, bool bParam1)//Position - 0xB5A0
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23711.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23711.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696501[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23711.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23711.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23711.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23711.f_5692[iVar0] = 0;
		Global_23711.f_5830[iVar0] = 0;
		Global_23711.f_5959[iVar0] = 0;
		Global_23711.f_6482[iVar0] = 0f;
		Global_23711.f_6088[iVar0] = 0;
		Global_23711.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23711.f_5659[iVar0] = 0;
		Global_23711.f_5671[iVar0] = 0f;
		Global_23711.f_5665[iVar0] = -1f;
		Global_23711.f_5678[iVar0] = 0;
		Global_23711.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23711.f_5553[iVar0 /*4*/]), "", 16);
		Global_23711.f_5610[iVar0] = -1;
		Global_23711.f_5625[iVar0] = 365;
		Global_23711.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23711.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23711.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23711.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541639.f_16), "", 16);
	Global_4541639.f_20 = -1;
	Global_23711 = 0;
	Global_23711.f_5821 = 0;
	Global_23711.f_5822 = 0;
	Global_23711.f_5823 = 0;
	Global_23711.f_5825 = 0;
	Global_23711.f_5826 = 0;
	Global_23711.f_5827 = 0;
	Global_23711.f_5824 = 0;
	Global_23711.f_6477 = 0;
	Global_23711.f_6617 = 0;
	Global_23711.f_6342 = 0;
	Global_23711.f_6341 = 0;
	Global_23711.f_6343 = 0;
	StringCopy(&(Global_23711.f_5241), "", 24);
	Global_23711.f_5319 = 0;
	Global_23711.f_5320 = 0;
	Global_23711.f_5321 = 0;
	Global_23711.f_5322 = 0;
	Global_23711.f_5323 = 0;
	Global_23711.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23711.f_5325 = 0;
	StringCopy(&(Global_4541639.f_21), "", 16);
	Global_4541639.f_61 = 0;
	Global_4541639.f_62 = 0;
	Global_4541639.f_63 = 0;
	Global_4541639.f_64 = 0;
	Global_4541639.f_65 = 0;
	Global_4541639.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541639.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541639.f_67 = 0;
	StringCopy(&(Global_23711.f_1), "", 16);
	Global_23711.f_5677 = 0f;
	Global_23711.f_74 = 0;
	Global_23711.f_75 = 0;
	Global_23711.f_76 = 0;
	Global_23711.f_77 = 0;
	Global_23711.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23711.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23711.f_6347 = 0;
	Global_23711.f_6346 = 0;
	Global_23711.f_6344 = 0;
	Global_23711.f_6345 = 0;
	Global_23711.f_5326 = 0;
	Global_23711.f_5327 = 0;
	Global_23711.f_5828 = 10;
	Global_23711.f_5829 = 0;
	Global_23711.f_6479 = 0f;
	Global_23711.f_6480 = 0f;
	Global_23711.f_6331 = 0;
	Global_23711.f_6332 = 0;
	Global_23711.f_6333 = 0f;
	Global_23711.f_6334 = 0;
	Global_23711.f_6336 = 0;
	Global_23711.f_6335 = 0;
	Global_23711.f_6337 = 0;
	Global_23711.f_6338 = 0;
	Global_23711.f_6339 = 0;
	Global_23711.f_6340 = 0;
	Global_23711.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23711.f_6611[iVar0] = -1;
		Global_23711.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23711.f_5684 = 0f;
	Global_23711.f_5655 = 0;
	Global_23711.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23711.f_6618)
	{
		Global_23711.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23711.f_9091 = 0;
	Global_23711.f_9086 = 0;
	Global_23711.f_9096 = 0;
	Global_23711.f_9101 = 0;
	Global_23711.f_9106 = 0;
	Global_23711.f_9108 = 0;
	Global_23711.f_9114 = 0;
	Global_23708 = 0.05f;
	Global_23709 = 0.05f;
	Global_23710 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23710 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23710 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23710 = 0.225f;
	}
}

int func_181(int iParam0, struct<3> Param1, float fParam4, var uParam5, var uParam6, var uParam7)//Position - 0xBA8A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
			*uParam6 = -4.2069f;
			uParam6->f_1 = -0.027f;
			uParam6->f_2 = (fParam4 + 22.8175f);
			*uParam7 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
			*uParam6 = -9.3866f;
			uParam6->f_1 = -0.0011f;
			uParam6->f_2 = (fParam4 + 46.9866f);
			*uParam7 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
			*uParam6 = -8.483f;
			uParam6->f_1 = 0.0149f;
			uParam6->f_2 = (fParam4 + 53.5519f);
			*uParam7 = 35f;
			break;
		
		case -2:
			*uParam5 = { 1390.6526f, 3598.9656f, 35.6115f };
			*uParam6 = { -3.6091f, 0.022f, -8.6461f };
			*uParam7 = 35f;
			break;
	}
	return 1;
}

void func_182(int iParam0, bool bParam1)//Position - 0xBC12
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33077, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33077, iParam0);
	}
}

int func_183(int iParam0, bool bParam1)//Position - 0xBC34
{
	int iVar0;
	
	iVar0 = func_184(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_122(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1 && Global_44676[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44676[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44676[iVar0 /*32*/].f_5 = 1;
			Global_44676[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44676[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44676[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_184(int iParam0)//Position - 0xBCEC
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_185(int iParam0, int iParam1)//Position - 0xBD27
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_184(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_44676[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_44676[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44676[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44676[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44871);
		if (Global_44676[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44676[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44676[iVar0 /*32*/].f_13));
		}
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar1;
}

void func_186(var uParam0)//Position - 0xBDDC
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_184(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_187(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xBE33
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_186(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/] = 1;
			Global_44676[iVar0 /*32*/].f_1 = Global_44877;
			Global_44877++;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_29 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44676[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44676[iVar0 /*32*/].f_6 = iParam3;
			Global_44676[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44676[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44676[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44676[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44676[iVar0 /*32*/].f_12 = 0;
				Global_44676[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_188(char* sParam0)//Position - 0xBF5E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_189()//Position - 0xBF74
{
	if (Global_114370.f_20413.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_190(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xBF91
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.9547f, 3604.3794f, 33.98091f };
			*uParam4 = { 1394.4752f, 3605.6636f, 35.98091f };
			*uParam5 = { 1392.5505f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_191(float fParam0)//Position - 0xC1DF
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= 0f)
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

void func_192()//Position - 0xC231
{
	if (iLocal_629)
	{
		if (iLocal_628 == 3)
		{
			iLocal_628 = 0;
		}
		iLocal_629 = 0;
	}
	switch (iLocal_628)
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(iLocal_616[iLocal_632], true, false);
			iLocal_630 = PED::CREATE_SYNCHRONIZED_SCENE(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_486.f_9, 2);
			if (!PED::IS_PED_INJURED(Local_66.f_2))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_2, iLocal_630, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1000f, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_616[iLocal_632], iLocal_630, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1000f);
				iLocal_628 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_630))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_630) == 1f)
				{
					if (!PED::IS_PED_INJURED(Local_66.f_2))
					{
						TASK::CLEAR_PED_TASKS(Local_66.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_616[iLocal_632]))
					{
						ENTITY::SET_ENTITY_DYNAMIC(iLocal_616[iLocal_632], true);
					}
					iLocal_631 = MISC::GET_GAME_TIMER();
					iLocal_628 = 2;
				}
			}
			else
			{
				iLocal_631 = MISC::GET_GAME_TIMER();
				iLocal_628 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_631) > 1000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_616[iLocal_632]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_616[iLocal_632], false, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_616[iLocal_632], func_60(iLocal_632), true, false, false, true);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_616[iLocal_632], false);
				}
				iLocal_628 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_193()//Position - 0xC3CE
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_198())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
				{
					func_197();
					func_12(&(Local_66.f_86.f_7));
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
				{
					if ((func_196(&(Local_66.f_86.f_7), 5f) || func_194(Local_66.f_2, &(Local_66.f_451))) || PED::IS_PED_RAGDOLL(Local_66.f_86))
					{
						iLocal_52 = 4;
					}
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
				{
					iLocal_51 = 31;
					TASK::TASK_SMART_FLEE_PED(Local_66.f_86, Local_66.f_0, 500f, -1, false, false);
					iLocal_52 = 5;
				}
				func_40(&(Local_66.f_86.f_7));
				break;
			}
	}
}

int func_194(int iParam0, var uParam1)//Position - 0xC4A4
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_195(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_195(int iParam0, bool bParam1)//Position - 0xC529
{
	return func_23(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_196(var uParam0, float fParam1)//Position - 0xC541
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_197()//Position - 0xC563
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_86.f_6));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_66.f_0, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_66.f_0, 2500, 0, 2);
		TASK::TASK_HANDS_UP(0, 2500, 0, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_86.f_6);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_86, Local_66.f_86.f_6);
	}
}

int func_198()//Position - 0xC5B9
{
	PED::GET_CLOSEST_PED(Local_66.f_86.f_2, Local_66.f_86.f_5, true, false, &(Local_66.f_86), false, true, -1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_66.f_86) == Local_66.f_86.f_1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_86, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_86, true);
			return 1;
		}
	}
	return 0;
}

void func_199()//Position - 0xC619
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_622 > 1 && iLocal_622 < 5)
	{
		if (func_220())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_622 = 6;
		}
	}
	switch (iLocal_622)
	{
		case 0:
			if ((((ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) || !func_219()) || func_1(Local_66.f_470, 128)) && iLocal_55 < 3) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !func_218(0))
				{
					func_217("SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */, -1);
					Local_66.f_469 = -1;
					func_187(&(Local_66.f_469), 4, "SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
					MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
					iLocal_622 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_183(Local_66.f_469, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, Local_66.f_214, Local_66.f_217, Local_66.f_220, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar3, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), false, false, false, true);
							}
						}
					}
					MISC::SET_BIT(&(Local_66.f_162.f_18), 1);
					if (func_28("SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_186(&(Local_66.f_469));
					bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_626, true);
					if (bVar2)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
					CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(false);
					func_118(0);
					func_211(1, 1, 1, 0, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					func_182(23, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_66.f_2.f_1, 3f, 0);
					iLocal_622 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (Local_66.f_469 <= 0)
					{
						Local_66.f_469 = -1;
						func_187(&(Local_66.f_469), 4, "SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_186(&(Local_66.f_469));
				iLocal_622 = 0;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_66.f_2, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_2, true);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_66.f_2.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_564);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_564);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_564);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_564);
				if (!CAM::DOES_CAM_EXIST(iLocal_623))
				{
					iLocal_623 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_623, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_623, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_623, 35f);
				CAM::SHAKE_CAM(iLocal_623, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_623, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_622 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_624))
				{
					iLocal_624 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_624, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_624, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_624, 35f);
				CAM::SHAKE_CAM(iLocal_624, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_624, iLocal_623, 8000, 1, 1);
			}
			iLocal_627 = MISC::GET_GAME_TIMER();
			iLocal_622 = 4;
			break;
		
		case 4:
			if (((MISC::GET_GAME_TIMER() - iLocal_627) > 4800 || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_622 = 5;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_627) > 4500)
			{
				if (func_210())
				{
					if (!iLocal_581)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_581 = 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_625)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 51);
						func_209(func_104(), 1, iVar1, 0, 0);
						iLocal_567 = (iLocal_567 + iVar1);
						Local_66.f_28.f_6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_625 = 1;
					}
				}
				else if (iLocal_625)
				{
					iLocal_625 = 0;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_66.f_2, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_2, false);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::DOES_CAM_EXIST(iLocal_623))
			{
				CAM::DESTROY_CAM(iLocal_623, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_624))
			{
				CAM::DESTROY_CAM(iLocal_624, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				Var4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
			}
			if (iLocal_626 != joaat("WEAPON_UNARMED") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_626, true);
			}
			if (BitTest(Local_66.f_162.f_18, 1))
			{
				MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
			}
			func_208(1, 1, 1);
			func_16(1, 0);
			iLocal_60 = 12;
			func_205();
			func_200(297, 0, 0);
			Local_66.f_468 = 1;
			iLocal_622 = 7;
			break;
		
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_CAM_ACTIVE(iLocal_624, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (iLocal_567 < 15)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(25, 65);
					func_209(func_104(), 1, iVar1, 0, 0);
					iLocal_567 = (iLocal_567 + iVar1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_622 = 5;
			}
			break;
	}
}

void func_200(int iParam0, int iParam1, int iParam2)//Position - 0xCD40
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
		func_80((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114370.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114370.f_10197[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114370.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_201();
	}
}

void func_201()//Position - 0xCE26
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
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114370.f_10197.f_3853;
	Global_114370.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114370.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114370.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114106++;
					fVar1 = (fVar1 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114107++;
					fVar2 = (fVar2 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114108++;
					fVar3 = (fVar3 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114109++;
					fVar4 = (fVar4 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114110++;
					fVar5 = (fVar5 + (Global_114370.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114111++;
					fVar6 = (fVar6 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114112++;
					fVar7 = (fVar7 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114089 > 0)
	{
		if (Global_114106 == Global_114089)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114090 > 0)
	{
		if (Global_114107 == Global_114090)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114091 > 0)
	{
		if (Global_114108 == Global_114091)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114092 > 0)
	{
		if (Global_114109 == Global_114092)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114093 > 0)
	{
		if (((Global_114110 == Global_114093 || (Global_114093 * 10 / Global_114110) < 41) || Global_114110 > Global_114096) || Global_114110 == Global_114096)
		{
			if (!BitTest(Global_114370.f_10197.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114093, 0);
					MISC::SET_BIT(&(Global_114370.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114094 > 0)
	{
		if (Global_114111 == Global_114094)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114095 > 0)
	{
		if (Global_114112 == Global_114095)
		{
			fVar7 = 5f;
		}
	}
	Global_114370.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
	{
		iVar9 = Global_114096;
	}
	else
	{
		iVar9 = Global_114110;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114106, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114089, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114107, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114090, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114108, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114091, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114109, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114092, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114096, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_114112 + Global_114111), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_114095 + Global_114094), true);
	Global_114113 = (Global_114106 * 100 / Global_114089);
	Global_114115 = ((Global_114108 + Global_114107) * 100 / (Global_114091 + Global_114090));
	Global_114114 = ((Global_114109 + iVar9) * 100 / (Global_114092 + Global_114096));
	Global_114116 = ((Global_114111 + Global_114112) * 100 / (Global_114094 + Global_114095));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114370.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114113, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114114, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114115, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114370.f_10197.f_3853))
	{
		func_99(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_204() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_202();
				}
			}
		}
	}
}

int func_202()//Position - 0xD2E4
{
	if (func_203(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_203(bool bParam0)//Position - 0xD32F
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

int func_204()//Position - 0xD357
{
	return Global_32828;
}

void func_205()//Position - 0xD362
{
	if (!iLocal_573)
	{
		Global_114370.f_20038[iLocal_566]++;
		Global_114370.f_20038.f_62[iLocal_566] = Local_66.f_1;
		if (func_104() == 0)
		{
			func_206(5);
		}
		iLocal_573 = 1;
	}
}

void func_206(int iParam0)//Position - 0xD3B1
{
	switch (iParam0)
	{
		case 0:
			func_207(&Global_97840, 1);
			break;
		
		case 1:
			func_207(&Global_97842, 3);
			break;
		
		case 2:
			func_207(&Global_97846, 1);
			break;
		
		case 3:
			func_207(&Global_97848, 1);
			break;
		
		case 4:
			func_207(&Global_97850, 1);
			break;
		
		case 5:
			func_207(&Global_97852, 1);
			break;
		
		case 6:
			func_207(&Global_97854, 1);
			break;
		
		case 7:
			func_207(&Global_97856, 2);
			break;
		
		case 8:
			func_207(&Global_97859, 1);
			break;
		
		case 9:
			func_207(&Global_97861, 1);
			break;
	}
}

void func_207(var uParam0, int iParam1)//Position - 0xD474
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_208(bool bParam0, bool bParam1, int iParam2)//Position - 0xD4B3
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_211(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_182(23, 0);
}

void func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD4F1
{
	int iVar0;
	int iVar1;
	
	if (func_103(iParam0) == 3)
	{
		return;
	}
	if (func_103(iParam0) == 4)
	{
		return;
	}
	func_70(func_103(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_210()//Position - 0xD5C3
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_211(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xD5DC
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_216(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20813.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_119())
			{
				Global_20813.f_1 = 3;
			}
			Global_22166 = 5;
		}
		func_215(1, bParam3, iParam2, 0);
		Global_64044 = 1;
		Global_76372 = 1;
		Global_79246 = 1;
	}
	else
	{
		func_216(0);
		HUD::THEFEED_RESUME();
		Global_64044 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_215(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_213(PLAYER::PLAYER_ID())) && !func_134(PLAYER::PLAYER_ID(), 0)) && !func_212()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_213(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79246 = 0;
	}
}

bool func_212()//Position - 0xD729
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

int func_213(int iParam0)//Position - 0xD743
{
	if (func_134(iParam0, 0))
	{
		return 1;
	}
	if (func_214())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_214()//Position - 0xD782
{
	return BitTest(Global_2621446, 3);
}

int func_215(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xD790
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_216(int iParam0)//Position - 0xD7C3
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 13);
	}
}

void func_217(char* sParam0, int iParam1)//Position - 0xD7E6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_218(int iParam0)//Position - 0xD7FD
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
			{
				if (Global_20812 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20812 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20813.f_1 > 3)
	{
		if (Global_20812 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_219()//Position - 0xD87E
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_66.f_2) == Local_66.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_220()//Position - 0xD944
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

void func_221()//Position - 0xD976
{
	int iVar0;
	
	func_238();
	func_235();
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
		if ((iLocal_58 == 1 && iLocal_620 == 2) && ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_234()) || func_233()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_16(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_230();
	if (!bLocal_572)
	{
		func_229();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_304())
			{
				if ((func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) || (func_194(Local_66.f_2, &(Local_66.f_451)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					func_228();
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					MISC::SET_BIT(&Global_97223, 3);
					func_227();
				}
				if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_226();
						func_295(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_304())
			{
				if (func_194(Local_66.f_2, &(Local_66.f_451)) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					Local_66.f_2.f_11 = 1;
					func_205();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					MISC::SET_BIT(&Global_97223, 3);
					func_227();
				}
				else if (func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					func_226();
					func_228();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_227();
				}
				else if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_226();
						func_295(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		
		case 4:
			if (func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) && func_304())
			{
				func_228();
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		
		case 5:
			if (Local_66.f_486 >= 0)
			{
				if (func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) && func_304())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486) && !Local_66.f_467)
					{
						iLocal_51 = 33;
						Local_66.f_467 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
				if (func_224(Local_66.f_2, 0, 1, 0, 1, 1) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					iLocal_58 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			MISC::CLEAR_BIT(&Global_97223, 3);
			if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
				func_7();
				iLocal_58 = 0;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
				func_223();
				iLocal_51 = 36;
				func_16(1, 0);
				func_295(&(Local_66.f_470), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		
		case 8:
			if (((func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) || func_194(Local_66.f_2, &(Local_66.f_451))) && func_304()) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_19();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_7();
			iLocal_58 = 12;
			break;
		
		case 10:
			if ((((func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) || func_194(Local_66.f_2, &(Local_66.f_451))) && func_304()) && iVar0 != joaat("WEAPON_UNARMED")) && !func_15(&(Local_66.f_480)))
			{
				func_12(&(Local_66.f_480));
				if (PED::IS_PED_RAGDOLL(Local_66.f_2))
				{
					func_7();
				}
				iLocal_51 = 23;
			}
			else if (func_41(&(Local_66.f_480)) > 10f)
			{
				if (!PED::IS_PED_INJURED(Local_66.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				}
				iLocal_58 = 12;
			}
			break;
		
		case 11:
			func_222();
			iLocal_58 = 12;
			break;
	}
}

void func_222()//Position - 0xDE88
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_2, false);
	}
}

void func_223()//Position - 0xDEA6
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_66.f_2, Local_66.f_0, -1, 0, 2);
	}
}

int func_224(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDEC8
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_43)
		{
			iLocal_44 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_43 = true;
		}
		iLocal_45 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_46 = (iLocal_44 - iLocal_45);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_46) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_43)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_46) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_225(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_195(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0, int iParam1)//Position - 0xE090
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226()//Position - 0xE0E5
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_304())
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != PLAYER::PLAYER_PED_ID() && uVar0[iVar4] != Local_66.f_2) && !PED::IS_PED_INJURED(uVar0[iVar4])) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar4])) && !PED::IS_PED_IN_COMBAT(uVar0[iVar4], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar4], true, true);
				TASK::TASK_SMART_FLEE_PED(uVar0[iVar4], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			iVar4++;
		}
	}
}

void func_227()//Position - 0xE19C
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_304())
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != PLAYER::PLAYER_PED_ID() && uVar0[iVar4] != Local_66.f_2) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar4]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar4], true, true);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_564);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_564);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_564);
				TASK::TASK_PERFORM_SEQUENCE(uVar0[iVar4], iLocal_564);
			}
			iVar4++;
		}
	}
}

void func_228()//Position - 0xE257
{
	if (func_25(Local_66.f_0) == joaat("WEAPON_RPG"))
	{
		Local_66.f_458 = 1;
	}
	else if (func_25(Local_66.f_0) == joaat("WEAPON_KNIFE"))
	{
		Local_66.f_459 = 1;
	}
	else if (((func_25(Local_66.f_0) == joaat("WEAPON_HAMMER") || func_25(Local_66.f_0) == joaat("WEAPON_CROWBAR")) || func_25(Local_66.f_0) == joaat("WEAPON_BAT")) || func_25(Local_66.f_0) == joaat("WEAPON_BOTTLE"))
	{
		Local_66.f_460 = 1;
	}
	else if ((func_25(Local_66.f_0) == joaat("WEAPON_GRENADE") || func_25(Local_66.f_0) == joaat("WEAPON_SMOKEGRENADE")) || func_25(Local_66.f_0) == joaat("WEAPON_MOLOTOV"))
	{
		Local_66.f_461 = 1;
	}
	else if (func_25(Local_66.f_0) == joaat("WEAPON_STICKYBOMB"))
	{
		Local_66.f_462 = 1;
	}
	iLocal_60 = 12;
	func_205();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_13 = 0;
}

void func_229()//Position - 0xE343
{
	if (iLocal_53 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				
				case 2:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_17, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				
				case 3:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_18, 8f, -4f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				
				case 4:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_19, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				
				case 5:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_20, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				
				case 6:
					iLocal_56 = 0;
					break;
				
				case 7:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_21, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_230()//Position - 0xE46D
{
	switch (iLocal_57)
	{
		case 1:
			func_223();
			iLocal_57 = 2;
			break;
		
		case 2:
			if (iLocal_53 == 2)
			{
				func_232();
				Local_66.f_2.f_13 = 0;
				iLocal_57 = 3;
			}
			if ((func_45() || func_44()) && !Local_66.f_2.f_13)
			{
				Local_66.f_2.f_13 = 1;
			}
			if (!Local_66.f_2.f_14)
			{
				if (!PED::IS_PED_INJURED(Local_66.f_2) && PED::IS_PED_FLEEING(Local_66.f_2))
				{
					Local_66.f_2.f_14 = 1;
				}
			}
			if ((Local_66.f_2.f_13 && !PED::IS_PED_INJURED(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_231();
			}
			break;
		
		case 3:
			if (iLocal_53 >= 7)
			{
				func_223();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_231()//Position - 0xE533
{
	if ((MISC::GET_GAME_TIMER() - Local_66.f_2.f_10) > 5000)
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_66.f_2.f_24));
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_2.f_24));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_66.f_0, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_66.f_0, -1, 0, 2);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_2.f_24);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, Local_66.f_2.f_24);
		Local_66.f_2.f_10 = MISC::GET_GAME_TIMER();
	}
}

void func_232()//Position - 0xE594
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_66.f_2);
	}
}

int func_233()//Position - 0xE5B1
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_66.f_186, Local_66.f_189, Local_66.f_192, true))
	{
		return 1;
	}
	return 0;
}

int func_234()//Position - 0xE5D6
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_66.f_186, Local_66.f_189, Local_66.f_192))
	{
		return 1;
	}
	return 0;
}

void func_235()//Position - 0xE5FB
{
	if (!Local_66.f_465)
	{
		if (func_236())
		{
			if (!func_15(&(Local_66.f_474)))
			{
				func_12(&(Local_66.f_474));
			}
			else if (func_196(&(Local_66.f_474), 1f))
			{
				Local_66.f_465 = 1;
				iLocal_51 = 26;
				if (!PED::IS_PED_INJURED(Local_66.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					func_16(1, 0);
				}
			}
		}
		else if (func_15(&(Local_66.f_474)))
		{
			func_40(&(Local_66.f_474));
		}
	}
}

int func_236()//Position - 0xE681
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (func_237())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
			if (iVar0 == joaat("WEAPON_PETROLCAN"))
			{
				if (PED::IS_PED_SHOOTING(Local_66.f_0))
				{
					if (PED::IS_PED_FACING_PED(Local_66.f_2, Local_66.f_0, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_237()//Position - 0xE6CF
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_238()//Position - 0xE703
{
	if (iLocal_58 != 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
		{
			if (PED::IS_PED_FLEEING(Local_66.f_2))
			{
				TASK::TASK_SMART_FLEE_PED(Local_66.f_2, Local_66.f_0, 100f, -1, false, false);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_14)
				{
					Local_66.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_239()//Position - 0xE773
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.894f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.871f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_240(0);
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_66.f_28, false, false);
			iLocal_55 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_240(1);
			ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, false);
			iLocal_55 = 5;
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_66.f_28, PLAYER::PLAYER_PED_ID()))
			{
				func_209(func_104(), 1, iLocal_567, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, false);
				if (HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_66.f_28.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				func_200(297, 0, 0);
				Local_66.f_468 = 1;
				Local_66.f_28.f_6 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_13(&(Local_66.f_28.f_15));
				iLocal_55 = 6;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false) && ENTITY::IS_ENTITY_VISIBLE(Local_66.f_28))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_66.f_28.f_15)) > 2.5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_28) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_66.f_28, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
					OBJECT::DELETE_OBJECT(&(Local_66.f_28));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_240(bool bParam0)//Position - 0xE94C
{
	Local_66.f_28.f_3 = 0;
	MISC::SET_BIT(&(Local_66.f_28.f_3), 3);
	MISC::SET_BIT(&(Local_66.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_567 = MISC::GET_RANDOM_INT_IN_RANGE(Local_66.f_28.f_4, Local_66.f_28.f_5);
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_243(Local_66.f_28);
			HUD::SET_BLIP_COLOUR(Local_66.f_28.f_2, 2);
		}
		OBJECT::SET_PICKUP_OBJECT_GLOW_OFFSET(Local_66.f_28, -0.2f, true);
	}
	else
	{
		iLocal_567 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_66.f_28.f_4);
		Local_66.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), Local_66.f_28.f_3, iLocal_567, true, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_241(Local_66.f_28.f_1);
		}
	}
	Local_66.f_28.f_14 = 1;
}

int func_241(int iParam0)//Position - 0xEA19
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_242(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_242(bool bParam0, float fParam1, float fParam2)//Position - 0xEA51
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_243(int iParam0)//Position - 0xEA68
{
	return func_244(iParam0, 1, 0);
}

int func_244(int iParam0, bool bParam1, bool bParam2)//Position - 0xEA78
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_242(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_242(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_242(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_245()//Position - 0xEB1C
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_464)
	{
		switch (iLocal_59)
		{
			case 2:
				if (func_1(Local_66.f_470, 4))
				{
					func_249();
					Local_66.f_46.f_39 = MISC::GET_GAME_TIMER();
					iLocal_59 = 3;
				}
				break;
			
			case 3:
				if (MISC::GET_GAME_TIMER() - Local_66.f_46.f_39) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_66.f_46.f_4[0], false))
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_66.f_46.f_4[0], true);
					}
					iLocal_59 = 4;
				}
				break;
			
			case 4:
				if (func_248() && func_247())
				{
					iLocal_59 = 5;
				}
				break;
			
			case 5:
				iLocal_51 = 24;
				func_16(1, 0);
				iLocal_59 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((PED::IS_PED_INJURED(Local_66.f_46[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_66.f_46[iVar0], 0, 2))) || PED::IS_PED_INJURED(Local_66.f_2)) || (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_66.f_2, 0, 2))) || func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!PED::IS_PED_INJURED(Local_66.f_46[iVar1]))
							{
								TASK::TASK_COMBAT_PED(Local_66.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar1], false);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_246();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_246()//Position - 0xECBE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar0], false);
		}
		iVar0++;
	}
}

int func_247()//Position - 0xECF6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_46[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_248()//Position - 0xED37
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_66.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46.f_4[iVar0], false))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_66.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_249()//Position - 0xEDAB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_46[iVar0] = PED::CREATE_PED(6, Local_66.f_46.f_26, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_46[iVar0], true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar0], true);
		Local_66.f_46.f_4[iVar0] = VEHICLE::CREATE_VEHICLE(Local_66.f_46.f_27, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_46.f_4[iVar0], true, false);
		if (!(ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false) && ENTITY::IS_ENTITY_DEAD(Local_66.f_46.f_4[iVar0], false)))
		{
			PED::SET_PED_INTO_VEHICLE(Local_66.f_46[iVar0], Local_66.f_46.f_4[iVar0], -1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_66.f_46[iVar0], joaat("WEAPON_PISTOL"), 99, false, true);
		}
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_46.f_35[iVar0]));
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_66.f_46.f_4[iVar0], Local_66.f_46.f_22, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_66.f_46.f_4[iVar0]) - 8f), 1, Local_66.f_46.f_27, 786981, Local_66.f_46.f_25, -1f);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_66.f_0, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_46.f_35[iVar0]);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_46[iVar0], Local_66.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_250()//Position - 0xEF18
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		
		case 5:
			if (((((func_25(Local_66.f_0) != joaat("WEAPON_UNARMED") && iVar0 != joaat("WEAPON_BAT")) && iVar0 != joaat("WEAPON_HAMMER")) && iVar0 != joaat("WEAPON_CROWBAR")) && iVar0 != joaat("WEAPON_BOTTLE")) && func_304())
			{
				iLocal_60 = 7;
			}
			break;
		
		case 6:
			if (func_25(Local_66.f_0) != joaat("WEAPON_UNARMED") && func_304())
			{
				if (iVar0 == joaat("WEAPON_BAT"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("WEAPON_CROWBAR") || iVar0 == joaat("WEAPON_HAMMER")) || iVar0 == joaat("WEAPON_BOTTLE"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("WEAPON_STICKYBOMB"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("WEAPON_PETROLCAN") && iVar0 != joaat("OBJECT")) && iVar0 != joaat("WEAPON_BRIEFCASE"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 11:
			if (func_21(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
			{
				func_228();
				iLocal_58 = 5;
			}
			break;
		
		case 12:
			if (!func_304())
			{
				if (!Local_66.f_464)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(Local_66.f_0) < 0.1f && !func_252())
			{
				func_251();
				iLocal_60 = 14;
			}
			else if (func_252() && !func_304())
			{
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (func_252() && !func_304())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!PED::IS_PED_INJURED(Local_66.f_46[iVar1]))
					{
						TASK::TASK_COMBAT_PED(Local_66.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar1], false);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_251()//Position - 0xF1A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
		{
			if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_66.f_46[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_66.f_46[iVar0]);
				TASK::TASK_ARREST_PED(Local_66.f_46[iVar0], Local_66.f_0);
			}
		}
		iVar0++;
	}
}

int func_252()//Position - 0xF1FD
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_46.f_28, Local_66.f_46.f_31, Local_66.f_46.f_34, false, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_253()//Position - 0xF237
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_579)
			{
				if (func_254())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_579 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_254()//Position - 0xF27B
{
	int iVar0;
	struct<3> Var1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_66.f_470, 128))
	{
		if ((PED::IS_PED_RAGDOLL(Local_66.f_2) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_66.f_2, Local_66.f_0, true) && iVar0 == joaat("WEAPON_UNARMED"))) || func_255(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
		{
			if (PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_66.f_2, Local_66.f_0, true) && iVar0 == joaat("WEAPON_UNARMED"))
			{
			}
			if (func_255(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_2, true) };
				Var1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_255(int iParam0, struct<3> Param1, bool bParam4)//Position - 0xF372
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_256()//Position - 0xF3AC
{
	switch (iLocal_61)
	{
		case 0:
			if (func_284())
			{
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			func_277();
			iLocal_61 = 2;
			break;
		
		case 2:
			func_273();
			iLocal_61 = 3;
			break;
		
		case 3:
			if (func_268())
			{
				iLocal_61 = 4;
			}
			break;
		
		case 4:
			func_257();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_65 = 1;
			break;
	}
}

void func_257()//Position - 0xF419
{
	func_261();
	func_260();
	func_259();
	if (INTERIOR::IS_VALID_INTERIOR(Local_66.f_185))
	{
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_66.f_2, Local_66.f_185);
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_66.f_28, Local_66.f_185);
		if (!bLocal_572)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_66.f_96.f_1, Local_66.f_185);
		}
	}
	func_258();
}

void func_258()//Position - 0xF46C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar23 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	if (func_104() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_104() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_104() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_66.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_66.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_66.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_66.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_66.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_66.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_66.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_66.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_66.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_66.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_66.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_66.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_66.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_66.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_66.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_66.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_66.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_66.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_66.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_66.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_66.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_66.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_66.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_66.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_66.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_66.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_66.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_66.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_66.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_66.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_66.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_66.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_66.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_66.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_66.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_66.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_66.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_66.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_66.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_66.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_66.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_66.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_66.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_66.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_66.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_66.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_66.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_66.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_66.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_66.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_66.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_66.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_221.f_166 = "OJSRAUD";
	Local_66.f_221.f_167 = "OJSR_GREET";
	Local_66.f_221.f_168 = "OJSR_BATEQ";
	Local_66.f_221.f_169 = "OJSR_TOOLEQ";
	Local_66.f_221.f_170 = "OJSR_STICKEQ";
	Local_66.f_221.f_171 = "OJSR_WORRY";
	Local_66.f_221.f_172 = "OJSR_SHOCK";
	Local_66.f_221.f_173 = "OJSR_STUBBRN";
	Local_66.f_221.f_174 = "OJSR_COUNTER";
	Local_66.f_221.f_175 = "OJSR_BACKRM";
	Local_66.f_221.f_176 = "OJSR_BUMP";
	Local_66.f_221.f_177 = "OJSR_BPAIM";
	Local_66.f_221.f_178 = "OJSR_BPAIMAG";
	Local_66.f_221.f_179 = "OJSR_HOLDUP";
	Local_66.f_221.f_180 = "OJSR_SCARED";
	Local_66.f_221.f_181 = "OJSR_KNIFAIM";
	Local_66.f_221.f_182 = "OJSR_TOOLAIM";
	Local_66.f_221.f_183 = "OJSR_GRANAIM";
	Local_66.f_221.f_184 = "OJSR_STICAIM";
	Local_66.f_221.f_185 = "OJSR_BRAVE";
	Local_66.f_221.f_186 = "OJSR_MOREAIM";
	Local_66.f_221.f_187 = "OJSR_SURNDER";
	Local_66.f_221.f_188 = "OJSR_COPS";
	Local_66.f_221.f_189 = "OJSR_POURCAN";
	Local_66.f_221.f_190 = "OJSR_FLEE";
	Local_66.f_221.f_191 = "OJSR_RECSCAR";
	Local_66.f_221.f_192 = "OJSR_RECAGGR";
	Local_66.f_221.f_193 = "OJSR_CSTMER";
	Local_66.f_221.f_194 = "OJSR_MOSC";
	Local_66.f_221.f_195 = "OJSR_PLRHUR";
	Local_66.f_221.f_196 = "OJSR_BUY";
	Local_66.f_221.f_197 = "OJSR_STEAL";
	iLocal_577 = 0;
	iLocal_578 = 0;
	iLocal_579 = 0;
}

void func_259()//Position - 0x101F9
{
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), true);
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), true);
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), true);
	Local_66.f_96.f_1 = OBJECT::CREATE_OBJECT(Local_66.f_96, Local_66.f_486.f_6, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Local_66.f_96.f_1, Local_66.f_96.f_5);
	ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_96.f_1, true);
}

void func_260()//Position - 0x1027E
{
	Local_66.f_28 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED"), Local_66.f_28.f_7, false, Local_66.f_28.f_13);
	ENTITY::SET_ENTITY_ROTATION(Local_66.f_28, Local_66.f_28.f_10, 2, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, false);
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_66.f_28, true, false);
	Local_66.f_28.f_14 = 0;
}

void func_261()//Position - 0x102CF
{
	int iVar0;
	int iVar1;
	
	Local_66.f_2 = PED::CREATE_PED(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, true, true);
	func_267(iLocal_566, &iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 0, iVar1, iVar0, 0);
	func_266(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 2, iVar1, iVar0, 0);
	func_265(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 3, iVar1, iVar0, 0);
	func_264(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 4, iVar1, iVar0, 0);
	func_263(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 8, iVar1, iVar0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_2, true);
	if (Local_66.f_2.f_12)
	{
		func_262();
	}
}

void func_262()//Position - 0x1037E
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
	}
}

void func_263(int iParam0, int iParam1)//Position - 0x10393
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_264(int iParam0, int iParam1)//Position - 0x103BB
{
	*iParam0 = 0;
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}

void func_265(int iParam0, int iParam1)//Position - 0x103D0
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

void func_266(int iParam0, int iParam1)//Position - 0x103EA
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_267(int iParam0, var uParam1, var uParam2)//Position - 0x10412
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
}

int func_268()//Position - 0x104BE
{
	if (!func_269(&Local_582))
	{
		return 0;
	}
	if (!bLocal_572)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_66.f_2.f_15))
		{
			return 0;
		}
	}
	if (!INTERIOR::IS_INTERIOR_READY(Local_66.f_185))
	{
		return 0;
	}
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(false);
	return 1;
}

int func_269(var uParam0)//Position - 0x10504
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_270(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_270(var uParam0)//Position - 0x10560
{
	return func_271(*uParam0, "NULL", uParam0->f_1);
}

int func_271(char* sParam0, char* sParam1, int iParam2)//Position - 0x10575
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_272(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_272(var uParam0)//Position - 0x10660
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_273()//Position - 0x10689
{
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	if (!bLocal_572)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_66.f_2.f_15);
		Local_582.f_32 = MISC::GET_FRAME_COUNT();
	}
	func_274(&Local_582, Local_66.f_2.f_5);
	func_274(&Local_582, Local_66.f_28.f_13);
	func_274(&Local_582, Local_66.f_96);
	Local_66.f_466 = 1;
}

void func_274(var uParam0, int iParam1)//Position - 0x106DB
{
	func_275(uParam0, 0, iParam1, 0);
}

void func_275(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x106ED
{
	int iVar0;
	
	if (!func_276(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_276(int iParam0)//Position - 0x107A7
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_277()//Position - 0x10846
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	func_282(iLocal_566, &(Local_66.f_46.f_8), &(Local_66.f_46.f_18), &(Local_66.f_46.f_22), &(Local_66.f_46.f_25), &(Local_66.f_46.f_26), &(Local_66.f_46.f_27), &(Local_66.f_46.f_28), &(Local_66.f_46.f_31), &(Local_66.f_46.f_34));
	func_280(iLocal_566);
	Var0 = { -3244.5735f, 1000.6578f, 12.83f };
	fVar9 = 175.074f;
	Var3 = { -3242.0078f, 1001.20233f, 11.830711f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_307(Var6, fVar9) };
	Var3 = { -3245.0884f, 1001.4681f, 13.650711f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_307(Var6, fVar9) };
	Var3 = { -3243.37f, 1000.37f, 12.83f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_307(Var6, fVar9) };
	Local_66.f_469 = -1;
	Local_66.f_102.f_22 = -1;
	Local_66.f_96 = joaat("p_till_01_s");
	Local_66.f_96.f_2 = { Local_66.f_486.f_6 };
	Local_66.f_96.f_5 = (Local_66.f_486.f_9.f_2 + 180f);
	Local_66.f_451.f_3 = 0;
	Local_66.f_458 = 0;
	Local_66.f_459 = 0;
	Local_66.f_460 = 0;
	Local_66.f_461 = 0;
	Local_66.f_462 = 0;
	Local_66.f_465 = 0;
	func_279(iLocal_566, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_278();
}

void func_278()//Position - 0x109B5
{
	Local_66.f_86.f_1 = joaat("A_M_Y_SouCent_04");
	Local_66.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_86.f_5 = 2f;
}

void func_279(int iParam0, var uParam1, var uParam2)//Position - 0x109E6
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.6815f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.3031f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.9071f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.9711f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.2826f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.1548f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.1631f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.1143f, 1006.5576f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.5117f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.9673f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.3508f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.9199f, 3746.2673f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.7816f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.9199f, 3746.2673f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_280(int iParam0)//Position - 0x10CC5
{
	struct<3> Var0;
	
	Var0 = { func_281(Local_66.f_186, Local_66.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_281(struct<3> Param0, struct<3> Param3)//Position - 0x10D93
{
	struct<3> Var0;
	
	Var0.f_0 = ((Param0.f_0 + Param3.f_0) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param3.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param3.f_2) / 2f);
	return Var0;
}

void func_282(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x10DC6
{
	if (!func_283(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.7031f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.6385f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.4363f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.9546f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.1029f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.4045f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.0122f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.8063f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.7673f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.7985f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.0165f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.2181f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.9592f, -1153.5865f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.9985f, 1105.4094f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.8462f, 1114.8745f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.5183f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.2324f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.0571f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.8347f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.9272f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.8406f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.0348f, 6378.2017f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.7858f, 6375.0464f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.8389f, 6367.3438f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.1416f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.8911f, 3780.5884f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.6309f, 3673.2915f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.332325f };
			*uParam8 = { 30.795f, -1350.308f, 30.820192f };
			*uParam9 = 3f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_283(int iParam0)//Position - 0x11C3C
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_284()//Position - 0x11C5D
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_0, true) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_66.f_181, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_285()//Position - 0x11C98
{
	if (Local_66.f_46.f_26 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_26);
	}
	if (Local_66.f_46.f_27 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_27);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_66.f_2.f_15))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_66.f_2.f_15);
	}
}

int func_286()//Position - 0x11CE0
{
	if (Global_114370.f_9088)
	{
		if (!func_290(56))
		{
			return 1;
		}
	}
	if (func_289())
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (func_306() && !func_305())
	{
		return 1;
	}
	if (func_288() && func_287())
	{
		return 1;
	}
	if (Global_32831)
	{
		HUD::CLEAR_HELP(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	return 0;
}

bool func_287()//Position - 0x11D50
{
	return Global_114088 > 0;
}

int func_288()//Position - 0x11D5E
{
	if (Global_98294 != -1)
	{
		return 1;
	}
	return 0;
}

int func_289()//Position - 0x11D73
{
	struct<3> Var0;
	float fVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_0, true) };
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_66.f_181, true);
		if (fVar3 > Local_66.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x11DB1
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114370.f_9088.f_99.f_58[iParam0];
}

void func_291(var uParam0)//Position - 0x11DDE
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_101392.f_20, 2)) || BitTest(Global_101392.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_292(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_292(int* iParam0)//Position - 0x11E5C
{
	func_293(iParam0, "NULL", iParam0->f_1);
}

void func_293(int* iParam0, char* sParam1, int iParam2)//Position - 0x11E70
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_272(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

int func_294()//Position - 0x11F41
{
	int iVar0;
	
	if (Local_66.f_1 != Global_114370.f_20038.f_62[iLocal_566])
	{
		return 1;
	}
	iVar0 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_114370.f_20038.f_42[iLocal_566]);
	iLocal_571 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH() + 31;
		iVar0 = (iVar0 - Global_114370.f_20038.f_42[iLocal_566]);
	}
	if (iVar0 < iLocal_571)
	{
		return 0;
	}
	return 1;
}

void func_295(var uParam0, int iParam1)//Position - 0x11FAC
{
	func_296(uParam0, iParam1);
}

void func_296(var uParam0, var uParam1)//Position - 0x11FBC
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_297(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x11FCD
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_298(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_298(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_298(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_298(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_298(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_298(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_298(int iParam0)//Position - 0x12112
{
	if (!func_283(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.1747f, 28.4432f;
		
		case 2:
			return 1159.4408f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.4293f, 4928.6416f, 41.0858f;
		
		case 4:
			return -1822.9261f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.4265f, 2703.5283f, 37.1574f;
		
		case 6:
			return -2973.4138f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.8604f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.2753f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.7188f, 1004.5081f, 11.8468f;
		
		case 11:
			return -3039.2488f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.7542f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.5112f, 3282.7627f, 54.2573f;
		
		case 15:
			return 1731.1532f, 6411.6333f, 34.0373f;
		
		case 16:
			return 1964.9305f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.7728f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_299()//Position - 0x122FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (CLOCK::GET_CLOCK_HOURS() - Global_114370.f_20038.f_21[iLocal_566]);
	iVar1 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_114370.f_20038.f_42[iLocal_566]);
	iLocal_570 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS() + 24;
		iVar0 = (iVar0 - Global_114370.f_20038.f_21[iLocal_566]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_570 && iVar1 == 0) || (iVar0 < iLocal_570 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_300(bool bParam0)//Position - 0x12383
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	struct<3> Var7[2];
	
	func_301(iLocal_566, &uVar1, &uVar4, &Var7);
	if (!func_1(Local_66.f_470, 64))
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[0], uVar4[0], Var7[0 /*3*/], false, false, false);
			if (uVar1[1] != -1)
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[1], uVar4[1], Var7[1 /*3*/], false, false, false);
			}
		}
		func_295(&(Local_66.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 1, false, false);
				}
			}
			else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 0, false, false);
			}
		}
		iVar0++;
	}
}

void func_301(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1246E
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_302(var uParam0, int iParam1)//Position - 0x12B13
{
	func_303(uParam0, iParam1);
}

void func_303(var uParam0, var uParam1)//Position - 0x12B23
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_304()//Position - 0x12B38
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_305()//Position - 0x12BDE
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_306()//Position - 0x12BFB
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_307(struct<3> Param0, float fParam3)//Position - 0x12C1E
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_308(var uParam0)//Position - 0x12C62
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66.f_0 = PLAYER::PLAYER_PED_ID();
	func_316(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_181), &iLocal_566);
	if ((((((((iLocal_566 == 10 || iLocal_566 == 11) || iLocal_566 == 12) || iLocal_566 == 13) || iLocal_566 == 14) || iLocal_566 == 15) || iLocal_566 == 16) || iLocal_566 == 17) || iLocal_566 == 18)
	{
		bLocal_580 = true;
	}
	Local_66.f_184 = 150f;
	Local_66.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_66.f_2.f_16 = "absolutely";
	Local_66.f_2.f_17 = "is_this_it";
	Local_66.f_2.f_18 = "shock";
	Local_66.f_2.f_19 = "anger_a";
	Local_66.f_2.f_20 = "screw_you";
	Local_66.f_2.f_21 = "but_why";
	Local_66.f_486.f_1 = "mp_am_hold_up";
	Local_66.f_486.f_2 = "guard_handsup_loop";
	Local_66.f_486.f_3 = "holdup_victim_20s";
	Local_66.f_486.f_4 = "holdup_victim_20s_bag";
	Local_66.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_568 = func_315();
	if (!bLocal_572)
	{
		func_311();
	}
	iLocal_573 = 0;
	if (iLocal_566 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (func_104() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (func_104() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (func_104() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_310(iLocal_566, &(Local_66.f_186), &(Local_66.f_189), &(Local_66.f_192), &(Local_66.f_193), &(Local_66.f_196), &(Local_66.f_199), &(Local_66.f_200), &(Local_66.f_203), &(Local_66.f_206), &(Local_66.f_207), &(Local_66.f_210), &(Local_66.f_213), &(Local_66.f_214), &(Local_66.f_217), &(Local_66.f_220), &(Local_66.f_102.f_6), &(Local_66.f_102.f_9));
	func_309(iLocal_566, &(Local_66.f_486.f_6), &(Local_66.f_486.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_28.f_7), &(Local_66.f_28.f_10), &(Local_66.f_28.f_13), &(Local_66.f_28.f_4), &(Local_66.f_28.f_5), &(Local_66.f_102.f_21));
}

void func_309(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x12E91
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.68866f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.3065f, 4923.3706f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.4653f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.9581f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.0269f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.3306f, -907.82336f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.8114f, -982.36145f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.6729f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.5735f, 1000.6578f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.3567f, 584.26654f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.9414f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.38574f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.2124f, 3280.9695f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.3295f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.2896f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.9545f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_310(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x133F3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.79193f, 19.115599f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.231945f, -1756.996f, 28.421005f };
			*uParam14 = { -47.68424f, -1759.9425f, 31.921005f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.8269f, 29.321005f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.76865f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.8557f, 4927.15f, 41.963657f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.8411f, 790.7311f, 138.08641f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.9458f, 2709.1365f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.9062f, 391.04236f, 14.943308f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.6865f, -907.0001f, 12.226351f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.6508f, -982.4113f, 46.315826f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.3063f, -378.92197f, 39.813408f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.8716f, 1006.5397f, 12.730711f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.1804f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.056515f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.31772f, 108.52299f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.9639f, 3285.2715f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.8646f, 6412.5664f, 34.937244f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.6343f, 3743.5498f, 32.243763f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.973484f, -1347.1146f, 29.393927f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.46642f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_311()//Position - 0x145C7
{
	func_314();
	func_313();
	func_312();
}

void func_312()//Position - 0x145DB
{
	int iVar0;
	
	if (iLocal_568 >= 9)
	{
		if (Global_114370.f_20038.f_41 > 3)
		{
			if (iLocal_568 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_464 = 1;
				Global_114370.f_20038.f_41 = 0;
			}
			else
			{
				Local_66.f_464 = 0;
				Global_114370.f_20038.f_41++;
			}
		}
		else
		{
			Global_114370.f_20038.f_41++;
		}
	}
	else
	{
		Global_114370.f_20038.f_41++;
	}
}

void func_313()//Position - 0x1466F
{
	int iVar0;
	
	if (iLocal_568 >= 3)
	{
		if (iLocal_568 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_12 = 1;
		}
		else
		{
			Local_66.f_2.f_12 = 0;
		}
	}
}

void func_314()//Position - 0x146AE
{
	int iVar0;
	
	if (iLocal_568 >= 6)
	{
		if (iLocal_568 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_315()//Position - 0x146E4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_114370.f_20038[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_316(var uParam0, var uParam1, int iParam2)//Position - 0x14714
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(func_298(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_298(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_298(*iParam2) };
}

void func_317(var uParam0, int iParam1)//Position - 0x14773
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_318(int iParam0)//Position - 0x1478A
{
	return Global_43922 == iParam0;
}

int func_319(int iParam0)//Position - 0x14798
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_320(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_320(int iParam0)//Position - 0x147BA
{
	return func_321(iParam0, Global_43922);
}

int func_321(int iParam0, int iParam1)//Position - 0x147CB
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

void func_322()//Position - 0x149AC
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_622 == 7) || (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_622 == 7)
		{
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) && iLocal_65 == 1)
		{
		}
		Global_114370.f_20038.f_21[iLocal_566] = CLOCK::GET_CLOCK_HOURS();
		Global_114370.f_20038.f_42[iLocal_566] = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && func_333()) && Local_66.f_468)
	{
		func_329(&iLocal_566, &iLocal_573, &iLocal_567);
	}
	func_328();
	iLocal_573 = 0;
	iLocal_577 = 0;
	iLocal_578 = 0;
	iLocal_579 = 0;
	if (!bLocal_572)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_565, false);
	func_29("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
	func_29("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
	if ((func_28("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */) || func_28("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */)) || func_28("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_1(Local_66.f_470, 1024))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_616[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_616[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_616[2]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_616[0]));
			OBJECT::DELETE_OBJECT(&(iLocal_616[1]));
			OBJECT::DELETE_OBJECT(&(iLocal_616[2]));
		}
	}
	if (iLocal_621 == 2)
	{
		STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
	}
	func_323(&Local_582, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_323(var uParam0, bool bParam1)//Position - 0x14B45
{
	int iVar0;
	
	if (!bParam1)
	{
		func_325(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_324(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_324(var uParam0)//Position - 0x14B85
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_325(var uParam0)//Position - 0x14B96
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_326(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_326(var uParam0)//Position - 0x14BCC
{
	func_327(*uParam0, "NULL", uParam0->f_1);
}

void func_327(int iParam0, char* sParam1, int iParam2)//Position - 0x14BE1
{
	if (BitTest(iParam0, 30))
	{
		switch (func_272(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_328()//Position - 0x14C9B
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::CLEAR_PED_TASKS(Local_66.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_2))
	{
		func_222();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_66.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_86))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_66.f_86));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
	{
		if (iLocal_53 >= 4)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, -8f, true);
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_66.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_28))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_66.f_28));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_96.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_66.f_96.f_1));
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_66.f_28.f_1))
	{
		OBJECT::REMOVE_PICKUP(Local_66.f_28.f_1);
	}
	if (func_15(&(Local_66.f_477)))
	{
		func_40(&(Local_66.f_477));
	}
	if (Local_66.f_466)
	{
		if (!bLocal_572)
		{
			STREAMING::REMOVE_ANIM_DICT(Local_66.f_2.f_15);
		}
		Local_66.f_466 = 0;
	}
}

void func_329(int iParam0, var uParam1, var uParam2)//Position - 0x14DDA
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];
	
	iVar0 = func_332(*uParam1, 1, 0);
	StringCopy(&(Var20[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var20[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_331(iParam0)}, 6);
	if (func_330(276, &Var1, &Var20, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(114, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

int func_330(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x14E57
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { func_147(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693219.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1927907.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

struct<8> func_331(var uParam0)//Position - 0x14F8B
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS" /* GXT: LTD Gasoline */, 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1" /* GXT: Scoops Liquor Barn */, 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2" /* GXT: Rob's Liquor */, 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV" /* GXT: 24-7 */, 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_332(bool bParam0, int iParam1, int iParam2)//Position - 0x1505C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_333()//Position - 0x15073
{
	if (func_335() && func_334(0))
	{
		return 1;
	}
	return 0;
}

var func_334(int iParam0)//Position - 0x15091
{
	return Global_1574538[iParam0];
}

var func_335()//Position - 0x150A1
{
	return func_334(func_79() + 1);
}

