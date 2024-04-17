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
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_67[64] = "";
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	Local_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	iLocal_95 = 2050;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */;
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	iLocal_116 = 6;
	iLocal_117 = 18;
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_88 = { Local_88 };
	iLocal_84 = iLocal_84;
	cLocal_67 = { cLocal_67 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_96(1);
	}
	iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_94(&Global_113020, 0);
	func_91();
	if (func_90(uLocal_92, 1))
	{
		iLocal_98 = 10;
	}
	else
	{
		iLocal_98 = 9;
	}
	while (!Global_39261)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_90(uLocal_92, 8))
	{
		if (!func_88(iLocal_98))
		{
			if (func_87(0, iLocal_97))
			{
				func_96(0);
			}
			else
			{
				func_96(1);
			}
		}
	}
	if (iLocal_97 != -1)
	{
		if (!func_87(0, iLocal_97))
		{
			func_96(1);
		}
	}
	if (func_90(uLocal_92, 8388608))
	{
		func_96(1);
	}
	if (func_90(uLocal_92, 524288) && (func_86() && !func_85()))
	{
		func_96(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_90(uLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_84(iLocal_103, 1, 0);
			iLocal_103 = 263;
		}
		func_83(10);
	}
	while (true)
	{
		iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_90(uLocal_92, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				func_96(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			Local_85 = { ENTITY::GET_ENTITY_COORDS(iLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(Local_85, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			Local_109 = { Local_85 };
			Local_112 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_109.f_2 = 0f;
			Local_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(Local_109, Local_112);
			switch (iLocal_93)
			{
				case 0:
					if (func_88(iLocal_98) || (func_90(uLocal_92, 16) && !func_90(uLocal_92, 524288)))
					{
						iLocal_96 = -1;
						func_82();
						func_83(1);
					}
					else
					{
						if (fLocal_108 > (fLocal_100 * fLocal_100))
						{
							if (iLocal_103 != 263)
							{
								func_84(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
							func_83(10);
						}
						if ((Local_85.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_81())
					{
						iLocal_101 = iLocal_101;
						func_83(3);
					}
					else
					{
						func_82();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_96(1);
						return;
					}
					if (!func_88(iLocal_98))
					{
						if (!func_90(uLocal_92, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101392.f_3), &cLocal_67))
							{
								cLocal_67 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_96(0);
								break;
							}
						}
					}
					if (!func_90(uLocal_92, 4))
					{
						func_80();
						func_79(&uLocal_92, 4);
					}
					if (fLocal_108 > (fLocal_100 * fLocal_100) && !Global_101426)
					{
						if (iLocal_103 != 263)
						{
							if (func_78(6) && !func_77(iLocal_103))
							{
							}
							else
							{
								func_84(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
						}
						func_83(10);
					}
					else
					{
						cLocal_67 = { Local_51 };
						bVar2 = !func_90(uLocal_92, 64);
						func_94(&uLocal_92, 128);
						if (!func_76(3) && !Global_101426)
						{
							if (func_90(uLocal_92, 2097152))
							{
								if ((!func_90(uLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_75())) && !Global_101426)
								{
									func_83(10);
									break;
								}
							}
						}
						if (func_90(uLocal_92, 524288) && (func_86() && !func_85()))
						{
							func_96(1);
						}
						if (func_74())
						{
							func_96(1);
						}
						if ((!func_66(6) || Global_113419) || func_65())
						{
							bVar2 = false;
						}
						if (func_90(uLocal_92, 1))
						{
							if (!func_64())
							{
								func_62(&uLocal_92, 128);
								bVar2 = false;
							}
						}
						if (func_61(1))
						{
							bVar2 = false;
						}
						if (Global_79248)
						{
							bVar2 = false;
						}
						if (func_60())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_59() || func_58(8, -1))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (func_57(0) || func_56())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iLocal_83, false), ScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 20f, false, false, iLocal_101))
								{
									bVar2 = false;
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
							{
								bVar2 = false;
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, 0))
							{
								func_62(&uLocal_92, 128);
								bVar2 = false;
							}
							iVar3 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_116 > iLocal_117)
							{
								if (iVar3 < iLocal_116 && iVar3 >= iLocal_117)
								{
									func_62(&uLocal_92, 128);
									bVar2 = false;
									if (fLocal_91 < ((fLocal_115 * fLocal_115) + 4f))
									{
										if (!func_90(uLocal_92, 134217728))
										{
											func_55("MG_NA_TIME" /* GXT: This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity. */, iLocal_116, iLocal_117);
											func_62(&uLocal_92, 134217728);
										}
									}
									else
									{
										func_94(&uLocal_92, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_116 || iVar3 >= iLocal_117)
							{
								func_62(&uLocal_92, 128);
								bVar2 = false;
								if (fLocal_91 < ((fLocal_115 * fLocal_115) + 4f))
								{
									if (!func_90(uLocal_92, 134217728))
									{
										func_55("MG_NA_TIME" /* GXT: This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity. */, iLocal_116, iLocal_117);
										func_62(&uLocal_92, 134217728);
									}
								}
								else
								{
									func_94(&uLocal_92, 134217728);
								}
							}
							if (bVar2 && func_48(func_49()) < iLocal_118)
							{
								func_62(&uLocal_92, 128);
								bVar2 = false;
								if (!func_90(uLocal_92, 33554432))
								{
									func_47("MG_YOU_IS_BROKE" /* GXT: Can't afford this activity. $~1~ needed to start. */, iLocal_118, -1);
									func_62(&uLocal_92, 33554432);
								}
							}
							else
							{
								func_94(&uLocal_92, 33554432);
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (func_46(iLocal_84))
								{
									if (iLocal_94 == -1)
									{
										if (iLocal_118 > 0)
										{
											func_45(&iLocal_94, 4, "", 1, 0, 0, 0);
											func_44(sLocal_99, iLocal_118);
											func_62(&uLocal_92, 2048);
										}
										else
										{
											func_45(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
											func_62(&uLocal_92, 2048);
										}
									}
									else if (!func_90(uLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_43(&iLocal_94);
										func_94(&uLocal_92, 2048);
									}
									if (func_41(iLocal_94, 1))
									{
										sLocal_99 = sLocal_99;
										func_43(&iLocal_94);
										func_94(&uLocal_92, 2048);
										if (func_90(uLocal_92, 2048))
										{
											if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												func_94(&uLocal_92, 2048);
												HUD::CLEAR_HELP(false);
											}
										}
										SCRIPT::REQUEST_SCRIPT(&cLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_83(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_43(&iLocal_94);
									func_94(&uLocal_92, 2048);
									if (func_90(uLocal_92, 2048))
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_94(&uLocal_92, 2048);
											HUD::CLEAR_HELP(false);
										}
									}
									SCRIPT::REQUEST_SCRIPT(&cLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_83(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_94 != -1)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_43(&iLocal_94);
									func_94(&uLocal_92, 2048);
									HUD::CLEAR_HELP(false);
								}
							}
						}
					}
					func_39();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_67))
					{
						if (iLocal_94 != -1)
						{
							func_43(&iLocal_94);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_90(uLocal_92, 1))
						{
							if (func_78(6) || func_78(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_36(&iLocal_96, 6, iLocal_98, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_35();
							if (Global_45122)
							{
								func_26(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = SYSTEM::START_NEW_SCRIPT(&cLocal_67, iLocal_95);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_67);
							Local_51 = { cLocal_67 };
							StringCopy(&cLocal_67, "", 64);
							func_94(&uLocal_92, 4);
							func_25();
							func_62(&uLocal_92, 2);
							func_83(6);
							func_21(&iLocal_105);
							if (iLocal_97 != -1)
							{
								func_20(iLocal_97);
								func_17(func_19(iLocal_97), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_16();
						}
						else if (iVar4 == 0)
						{
							func_83(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (func_90(Global_113020, 262144))
					{
						func_94(&Global_113020, 262144);
						func_15();
					}
					if (func_90(uLocal_92, 2097152))
					{
						if (!func_76(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_83(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&iLocal_105) * 1000f)), iLocal_97, false);
						func_10(&iLocal_105);
						func_94(&uLocal_92, 256);
						func_7();
						if (bVar0)
						{
							func_94(&uLocal_92, 2);
						}
						else if (func_90(uLocal_92, 2))
						{
							if (func_90(Global_113020, 0))
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_94(&uLocal_92, 2);
							}
							else
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_94(&uLocal_92, 2);
							}
						}
						func_83(0);
						if (iLocal_97 != -1)
						{
							if (func_90(Global_113020, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101429, 0);
								func_5(func_19(iLocal_97), 0, Global_101429, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101429, 0);
								func_5(func_19(iLocal_97), 0, Global_101429, 0, 0);
							}
						}
						func_4();
						func_94(&Global_113020, 0);
						if (func_90(uLocal_92, 16777216))
						{
							func_96(1);
						}
						if (iLocal_97 != -1)
						{
							if (Global_114372.f_9088)
							{
								if (!func_87(0, iLocal_97))
								{
									func_96(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_83(0);
					break;
				
				case 10:
					func_96(1);
					break;
				
				case 9:
					if (fLocal_108 > (fLocal_100 * fLocal_100))
					{
						if (iLocal_103 != 263)
						{
							func_84(iLocal_103, 1, 0);
							iLocal_103 = 263;
						}
						func_83(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_103 != 263)
					{
						func_84(iLocal_103, 0, 0);
					}
					if (iLocal_94 != -1)
					{
						func_43(&iLocal_94);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
					{
						if (func_1(sLocal_99))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					func_83(4);
					break;
				
				case 4:
					if ((iLocal_102 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (func_88(iLocal_98) && func_87(0, iLocal_97))
									{
										func_91();
										if (iLocal_103 != 263)
										{
											func_84(iLocal_103, 1, 0);
										}
										func_83(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > (fLocal_100 * fLocal_100))
								{
									if (iLocal_103 != 263)
									{
										func_84(iLocal_103, 1, 0);
										iLocal_103 = 263;
									}
									func_83(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > ((80f + 5f) * (80f + 5f)))
								{
									func_91();
									if (iLocal_103 != 263)
									{
										func_84(iLocal_103, 1, 0);
									}
									func_83(0);
								}
							}
						}
						else
						{
							func_84(iLocal_103, 1, 0);
						}
					}
					else
					{
						iLocal_102++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)//Position - 0xBEC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xBFF
{
}

void func_3()//Position - 0xC07
{
}

void func_4()//Position - 0xC0F
{
}

void func_5(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC17
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_98442, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95549);
	StringCopy(&Global_98442, "", 64);
}

void func_6(int iParam0)//Position - 0xC5B
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43884)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

void func_7()//Position - 0xC98
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_9())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_8())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR" /* GXT: Playing story */, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_8()//Position - 0xCDA
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_9()//Position - 0xCF0
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_10(int* iParam0)//Position - 0xD06
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int* iParam0)//Position - 0xD1C
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)//Position - 0xD58
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

bool func_13(var uParam0)//Position - 0xDB0
{
	return BitTest(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0xDBD
{
	return BitTest(*uParam0, 1);
}

int func_15()//Position - 0xDCA
{
	return 1;
}

void func_16()//Position - 0xDD3
{
}

void func_17(char* sParam0, int iParam1, int iParam2)//Position - 0xDDB
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98442, 0, 0, false, true, false);
		StringCopy(&Global_98442, "", 64);
	}
	StringCopy(&Global_98442, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0)//Position - 0xE1C
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

char* func_19(int iParam0)//Position - 0xE44
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)//Position - 0xF82
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_9())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_8())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_21(int* iParam0)//Position - 0xFD9
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int* iParam0)//Position - 0xFFA
{
	func_23(iParam0, 0f);
}

void func_23(int* iParam0, float fParam1)//Position - 0x1009
{
	iParam0->f_1 = (func_12(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int* iParam0)//Position - 0x1034
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

void func_25()//Position - 0x104C
{
	int iVar0;
	var uVar1[100];
	int iVar102;
	int iVar103;
	
	if (PED::GET_CLOSEST_PED(-1370.6245f, 56.1227f, 52.7033f, 100f, true, true, &iVar0, false, false, -1))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar102 = PED::GET_PED_NEARBY_PEDS(iVar0, &uVar1, -1);
			TASK::CLEAR_PED_TASKS(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar103]))
			{
				TASK::CLEAR_PED_TASKS(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}

void func_26(int iParam0)//Position - 0x10D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_34(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44908[iVar0 /*5*/];
		func_29(1, iVar1, 1);
		return;
	}
	iVar2 = func_28(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_27(iVar2);
}

void func_27(int iParam0)//Position - 0x112A
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44882[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44882[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_45120 = 0;
		}
	}
	Global_44882[iParam0 /*5*/] = 13;
	Global_44882[iParam0 /*5*/].f_1 = 0;
	Global_44882[iParam0 /*5*/].f_2 = 0;
	Global_44882[iParam0 /*5*/].f_3 = 0;
	Global_44882[iParam0 /*5*/].f_4 = 0;
	Global_44880 = (Global_44880 - 1);
	if (Global_44880 < 0)
	{
		Global_44880 = 0;
	}
}

int func_28(int iParam0)//Position - 0x11AD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44882[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x11DE
{
	func_30(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11F3
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
	if (func_32(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_31();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44989[iVar0 /*6*/] = iParam0;
	Global_44989[iVar0 /*6*/].f_1 = iParam1;
	Global_44989[iVar0 /*6*/].f_2 = iParam2;
	Global_44989[iVar0 /*6*/].f_3 = iParam3;
	Global_44989[iVar0 /*6*/].f_4 = iParam4;
	Global_44989[iVar0 /*6*/].f_5 = iParam5;
}

int func_31()//Position - 0x1275
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44989[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x12A6
{
	if (func_33(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x12C1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44989[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44989[iVar0 /*6*/])
			{
				if (iParam1 == Global_44989[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_34(int iParam0)//Position - 0x130D
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
		if (!Global_44908[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44908[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_35()//Position - 0x1356
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8683, 25);
	MISC::SET_BIT(&Global_8684, 11);
}

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x13D3
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98850.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_38(0))
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *iParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_88(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883++;
		if (iParam4 != 0)
		{
			func_37(iParam0, iParam4);
		}
	}
	return 2;
}

void func_37(var uParam0, int iParam1)//Position - 0x150A
{
	int iVar0;
	
	if (Global_43883 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43883)
	{
		if (Global_43889[iVar0 /*4*/] == *uParam0)
		{
			Global_43889[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_38(int iParam0)//Position - 0x1559
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_88(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_39()//Position - 0x157B
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_88, fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
	}
	if (iLocal_118 > 0)
	{
		if (func_40(8) == func_49())
		{
			iLocal_118 = 0;
			sLocal_99 = "PLAY_GOLF" /* GXT: Press ~INPUT_CONTEXT~ to play Golf. */;
		}
	}
}

int func_40(int iParam0)//Position - 0x15BC
{
	return Global_114372.f_24907[iParam0 /*4*/];
}

int func_41(int iParam0, bool bParam1)//Position - 0x15CF
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_57(0))
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

int func_42(int iParam0)//Position - 0x1687
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

void func_43(int iParam0)//Position - 0x16C2
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_42(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_44(char* sParam0, int iParam1)//Position - 0x1719
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_45(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1735
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_46(int iParam0)//Position - 0x1860
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_IN_AIR(iParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_47(char* sParam0, int iParam1, int iParam2)//Position - 0x189C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_48(int iParam0)//Position - 0x18B9
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

int func_49()//Position - 0x1911
{
	func_50();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_50()//Position - 0x192A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_53(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_52(PLAYER::PLAYER_PED_ID());
			if (func_51(iVar0) && (!func_78(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_51(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_51(int iParam0)//Position - 0x1A27
{
	return iParam0 < 3;
}

int func_52(int iParam0)//Position - 0x1A33
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)//Position - 0x1A70
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)//Position - 0x1A95
{
	return Global_2139[iParam0 /*29*/];
}

void func_55(char* sParam0, int iParam1, int iParam2)//Position - 0x1AA4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
}

var func_56()//Position - 0x1AC6
{
	return Global_76369;
}

int func_57(int iParam0)//Position - 0x1AD2
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

var func_58(int iParam0, int iParam1)//Position - 0x1B29
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

bool func_59()//Position - 0x1B61
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_60()//Position - 0x1B76
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_61(bool bParam0)//Position - 0x1B90
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

void func_62(var uParam0, int iParam1)//Position - 0x1BB9
{
	func_63(uParam0, iParam1);
}

void func_63(var uParam0, var uParam1)//Position - 0x1BC9
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_64()//Position - 0x1BDA
{
	if (func_78(6) || func_78(7))
	{
		return func_77(68);
	}
	return 1;
}

bool func_65()//Position - 0x1BFF
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_66(int iParam0)//Position - 0x1D09
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_49();
				if (!func_51(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_73()) || Global_113419) || Global_32831) || func_72()) || func_58(8, -1)) || func_71()) || func_70()) || func_69()) || func_60()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_73()) || Global_32831) || func_72()) || func_58(8, -1)) || func_69()) || func_71()) || func_70()) || func_60()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_73()) || Global_113419) || Global_32831) || func_72()) || func_58(8, -1)) || func_69()) || func_71()) || func_70()) || func_60()) || Global_114372.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_73()) || Global_113419) || Global_32831) || func_72()) || func_58(8, -1)) || func_71()) || func_70()) || func_60()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_73() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_58(8, -1)) || func_60()) || func_68()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_58(8, -1) || func_71()) || func_70()) || func_68()) || func_67())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_73()) || Global_32831) || func_72()) || func_58(8, -1)) || func_70()) || func_69()) || func_60()) || Global_114372.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_73()) || func_70()) || Global_113419) || Global_32831) || func_72()) || Global_45122) || func_58(8, -1)) || func_69()) || func_68()) || func_60()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_73()) || Global_113419) || Global_32831) || func_72()) || func_58(8, -1)) || func_69()) || func_68()) || func_71()) || func_70()) || func_60())
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

var func_67()//Position - 0x2426
{
	return Global_101431.f_1;
}

int func_68()//Position - 0x2434
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_69()//Position - 0x2457
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

bool func_70()//Position - 0x2481
{
	return Global_101444.f_394 > 0;
}

bool func_71()//Position - 0x2492
{
	return Global_101444.f_393 > 0;
}

var func_72()//Position - 0x24A3
{
	return Global_1575079;
}

int func_73()//Position - 0x24AF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_74()//Position - 0x24CB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_75()//Position - 0x24E5
{
	return Global_97204;
}

int func_76(int iParam0)//Position - 0x24F1
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_78(6) || func_78(7))
			{
				return 1;
			}
			else
			{
				return func_76(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_88(5))
			{
				if (func_66(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_77(int iParam0)//Position - 0x2563
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19);
}

bool func_78(int iParam0)//Position - 0x259F
{
	return Global_43922 == iParam0;
}

void func_79(var uParam0, int iParam1)//Position - 0x25AD
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80()//Position - 0x25BE
{
}

int func_81()//Position - 0x25C6
{
	return 1;
}

void func_82()//Position - 0x25CF
{
}

void func_83(int iParam0)//Position - 0x25D7
{
	iLocal_93 = iParam0;
}

void func_84(int iParam0, bool bParam1, bool bParam2)//Position - 0x25E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_33208[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
		if (Global_33205 == 1)
		{
			Global_33206 = 1;
		}
		Global_33205 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33208[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

int func_85()//Position - 0x26E3
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

int func_86()//Position - 0x2700
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_87(int iParam0, int iParam1)//Position - 0x2723
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_114372.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_88(int iParam0)//Position - 0x276D
{
	return func_89(iParam0, Global_43922);
}

int func_89(int iParam0, int iParam1)//Position - 0x277E
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

bool func_90(var uParam0, int iParam1)//Position - 0x295F
{
	return (uParam0 && iParam1) != 0;
}

void func_91()//Position - 0x296E
{
	StringCopy(&Local_51, "golf" /* GXT: GWC and Golfing Society */, 64);
	iLocal_97 = 2;
	fLocal_115 = 7f;
	func_79(&uLocal_92, 1);
	if (func_78(6) || func_78(7))
	{
		iLocal_101 = 0;
	}
	if (func_40(8) == func_49())
	{
		iLocal_118 = 0;
		sLocal_99 = "PLAY_GOLF" /* GXT: Press ~INPUT_CONTEXT~ to play Golf. */;
	}
	else
	{
		iLocal_118 = func_93(ENTITY::DOES_ENTITY_EXIST(func_75()));
		sLocal_99 = "PAY_PLAY_GOLF" /* GXT: Press ~INPUT_CONTEXT~ to play Golf. The entry fee is $~1~. */;
	}
	iLocal_103 = 68;
	fLocal_100 = (SYSTEM::TO_FLOAT(func_92(iLocal_103)) + 5f);
	iLocal_95 = 60500;
}

int func_92(int iParam0)//Position - 0x29E3
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_93(bool bParam0)//Position - 0x2AFB
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_94(var uParam0, int iParam1)//Position - 0x2B12
{
	func_95(uParam0, iParam1);
}

void func_95(var uParam0, var uParam1)//Position - 0x2B22
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_96(bool bParam0)//Position - 0x2B37
{
	if (bParam0)
	{
		if (iLocal_103 != 263)
		{
			func_84(iLocal_103, 0, 0);
		}
	}
	func_43(&iLocal_94);
	if (func_90(uLocal_92, 2048))
	{
		if (func_99(sLocal_99, iLocal_118))
		{
			func_94(&uLocal_92, 2048);
			HUD::CLEAR_HELP(false);
		}
	}
	if (func_90(uLocal_92, 2))
	{
		func_4();
		func_94(&uLocal_92, 2);
		func_6(&iLocal_96);
	}
	iLocal_96 = -1;
	func_97();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_97()//Position - 0x2BA5
{
	func_94(&uLocal_92, 4);
	func_98();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&cLocal_67))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_67) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_67);
		}
	}
}

void func_98()//Position - 0x2BE2
{
}

bool func_99(char* sParam0, int iParam1)//Position - 0x2BEA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

