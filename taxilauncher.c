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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<31> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 16;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	int iLocal_239 = 0;
	char cLocal_240[16] = "";
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_60 = 1;
	iLocal_65 = -1;
	iLocal_69 = func_147();
	iLocal_70 = func_146();
	StringCopy(&cLocal_240, "TAXI_HAIL", 16);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_145();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Global_113386.f_10049.f_120 = 1;
	while (true)
	{
		switch (iLocal_51)
		{
			case 0:
				if (func_144())
				{
					iLocal_51 = 1;
				}
				else
				{
					SYSTEM::WAIT(500);
				}
				break;
			
			case 1:
				if (func_144())
				{
					Local_243 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					func_112();
					if (func_111())
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
						func_110();
						if (!func_108())
						{
							func_65();
							func_31();
							func_15();
						}
					}
					else
					{
						func_4(0);
						iLocal_51 = 1;
						func_1();
						SYSTEM::WAIT(500);
					}
				}
				else
				{
					func_4(1);
					iLocal_51 = 0;
				}
				break;
			
			case 2:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_239))
				{
					func_4(1);
					iLocal_54 = 3;
					iLocal_51 = 0;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x16C
{
	if (!func_3())
	{
		if (MISC::ARE_STRINGS_EQUAL("NULL", &Global_112442))
		{
			func_2(0);
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Global_112442)) == 0)
		{
			func_2(0);
		}
	}
}

void func_2(bool bParam0)//Position - 0x1A6
{
	if (bParam0)
	{
		StringCopy(&Global_112442, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

int func_3()//Position - 0x1D2
{
	if (!Global_112435)
	{
		return 0;
	}
	if (Global_112436)
	{
		return 0;
	}
	return 1;
}

void func_4(bool bParam0)//Position - 0x1F2
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	func_13();
	func_10();
	func_5();
	iLocal_60 = 1;
	iLocal_58 = 0;
	iLocal_52 = 0;
	iLocal_53 = 0;
	iLocal_55 = 0;
	iLocal_54 = 0;
	iLocal_66 = 0;
	if (bParam0)
	{
		iLocal_51 = 0;
	}
}

void func_5()//Position - 0x22D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FP_HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FUCK_U", &cLocal_240, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FORGET_IT", &cLocal_240, -2f);
		}
		if (iLocal_65 != -1)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
		}
		if (iLocal_62 == 1)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
			iLocal_62 = 0;
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_240);
	if (iLocal_65 != -1)
	{
		func_8(&iLocal_65);
	}
	if (func_7("TXM_H01"))
	{
		iLocal_64++;
		if (iLocal_64 == 3)
		{
			Global_113386.f_10049.f_120 = 1;
		}
		HUD::CLEAR_HELP(true);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::SET_BLIP_ROUTE(iLocal_63, false);
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (iLocal_58)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (!PED::IS_PED_INJURED(Global_112418))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_240, "Aknowledge_R", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_112418, "Aknowledge_R", &cLocal_240, -4f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_240, "Aknowledge_L", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_112418, "Aknowledge_L", &cLocal_240, -4f);
			}
		}
	}
	if (iLocal_54 == 0)
	{
		func_6();
	}
	iLocal_245 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	Global_112454 = -1;
	iLocal_55 = 0;
}

void func_6()//Position - 0x3EC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (!PED::IS_PED_INJURED(Global_112418))
		{
			PED::SET_PED_CONFIG_FLAG(Global_112418, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
			if (!PED::IS_PED_FLEEING(Global_112418) && !PED::IS_PED_IN_COMBAT(Global_112418, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_112418, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112418, -258271821) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 0, false))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_112417, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_112418, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112418, -1146898486) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_112418, 40000f, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112418))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112418, false))
			{
				if (!PED::IS_PED_INJURED(Global_112418))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112418, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_112418);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112417))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112417, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_112417, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_112417, true, 0);
					VEHICLE::_0xBE5C1255A1830FF5(Global_112417, false);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_112417);
			}
		}
	}
	Global_112418 = 0;
	Global_112417 = 0;
	StringCopy(&Global_112448, "NULL", 24);
	Global_112454 = -1;
}

bool func_7(char* sParam0)//Position - 0x62A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_8(int iParam0)//Position - 0x63D
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_9(int iParam0)//Position - 0x694
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_10()//Position - 0x6CF
{
	if (iLocal_54 == 1)
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		func_11();
	}
	else if (iLocal_54 == 2)
	{
		if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
		}
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		func_11();
	}
	func_6();
	if (func_7("TX_H02"))
	{
		HUD::CLEAR_HELP(true);
	}
	iLocal_66 = 0;
	iLocal_54 = 0;
}

void func_11()//Position - 0x72A
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_112417, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112417, false))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112417, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_112417, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112417, false))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112417, 64);
						}
					}
				}
			}
		}
	}
}

int func_12()//Position - 0x7D9
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_13()//Position - 0x7E9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_56.f_1, false))
		{
			if (Local_56.f_1 != Global_112418)
			{
				if (!PED::IS_PED_INJURED(Local_56.f_1))
				{
					PED::SET_PED_CONFIG_FLAG(Local_56.f_1, 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56.f_1, false);
					if (!PED::IS_PED_FLEEING(Local_56.f_1) && !PED::IS_PED_IN_COMBAT(Local_56.f_1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_1, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_56.f_0, false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_56.f_1, Local_56.f_0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_0, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_0, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_0, 0, false))
										{
											TASK::TASK_PAUSE(0, 2000);
										}
										else
										{
											TASK::TASK_PAUSE(0, 500);
										}
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_56.f_0, 12f, 790699);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(Local_56.f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(Local_56.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
									}
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_56.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								}
							}
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(Local_56.f_1, 40000f, 0);
						}
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_56.f_1));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_56.f_1));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_56.f_0, false))
		{
			if (Local_56.f_0 != Global_112417)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_56);
			}
		}
	}
	if (iLocal_53 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
	}
	Local_56.f_0 = 0;
	Local_56.f_1 = 0;
	Local_56.f_2 = 0;
	Local_56.f_3 = 0;
	Local_56.f_5 = 0f;
	Local_56.f_6 = 0f;
	Local_56.f_7 = 45f;
	Local_56.f_8 = 0;
	Local_56.f_10 = 0;
	Local_56.f_9 = 0;
	Local_56.f_11 = { 0f, 0f, 0f };
	Local_56.f_14 = { 0f, 0f, 0f };
	Local_56.f_17 = { 0f, 0f, 0f };
	Local_56.f_20 = { 0f, 0f, 0f };
	Local_56.f_23 = { 0f, 0f, 0f };
	Local_56.f_26 = { 0f, 0f, 0f };
	Local_56.f_29 = 1076367531;
	Local_56.f_30 = func_14();
	iLocal_53 = 0;
}

int func_14()//Position - 0x9F1
{
	if (Global_31959 == 0 || Global_31959 == 2)
	{
		return 187;
	}
	return 161;
}

void func_15()//Position - 0xA13
{
	if (iLocal_54 == 0)
	{
		func_27();
	}
	else if (iLocal_54 == 1)
	{
		func_23();
	}
	else if (iLocal_54 == 2)
	{
		func_16();
	}
	else if (iLocal_54 == 3)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_54 = 0;
		}
	}
}

void func_16()//Position - 0xA58
{
	if (func_22(&Global_112417, iLocal_70, iLocal_69))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417))
			{
				func_21();
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 1, false) == PLAYER::PLAYER_PED_ID())
				{
					iLocal_246 = 1;
				}
				else
				{
					iLocal_246 = 2;
				}
				func_20(&Global_112417, iLocal_246);
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
					{
						if (!func_19(Global_112418, -2118855366))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
						}
					}
				}
				func_13();
				func_5();
				if (iLocal_59)
				{
					if (func_7("TX_H02"))
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_59 = 0;
				}
				func_18();
				func_17();
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
				SCRIPT::REQUEST_SCRIPT("taxiService");
				if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
				{
					iLocal_239 = SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
					iLocal_51 = 2;
				}
			}
		}
		else
		{
			func_4(1);
		}
	}
	else
	{
		func_10();
	}
}

void func_17()//Position - 0xB6B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, 1.5f, 1.5f, -1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			}
		}
	}
}

void func_18()//Position - 0xBC3
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 1, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 2, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
	}
}

int func_19(int iParam0, int iParam1)//Position - 0xC65
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_20(var uParam0, int iParam1)//Position - 0xCAD
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (iVar3 == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, false))
				{
					bVar4 = false;
				}
				if (func_19(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (iVar3 == PLAYER::PLAYER_PED_ID())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, false))
					{
						bVar4 = false;
					}
					if (func_19(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

void func_21()//Position - 0xDE5
{
	Global_23011.f_6 = 1;
}

int func_22(int iParam0, int iParam1, int iParam2)//Position - 0xDF3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == iParam1)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, iParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 90f))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	}
	return 0;
}

void func_23()//Position - 0xE87
{
	if (func_22(&Global_112417, iLocal_70, iLocal_69))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417))
			{
				iLocal_54 = 2;
			}
			func_21();
		}
		else
		{
			func_24();
		}
	}
	else
	{
		func_10();
	}
}

void func_24()//Position - 0xED2
{
	int iVar0;
	
	if (func_25(&Global_112417))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				func_21();
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
					{
						if (!func_19(Global_112418, -2118855366))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
}

int func_25(int iParam0)//Position - 0xF61
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 5f, 5f, 2f, false, true, 0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(*iParam0) > 0.5f)
	{
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!func_26(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)//Position - 0xFCC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0xFF1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		if (func_22(&iLocal_244, iLocal_70, iLocal_69))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_29();
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_244))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, -1, false);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_244, 1, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, 1, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_246 = 1;
						}
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_244, 2, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, 2, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_246 = 2;
						}
					}
					if (iLocal_55 == 4 || iLocal_55 == 2)
					{
						if (iLocal_244 != Global_112417)
						{
							func_5();
						}
					}
					func_21();
					if (func_28(&iLocal_244, &iVar0, 0))
					{
						iLocal_244 = 0;
						iLocal_54 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

int func_28(int iParam0, int iParam1, bool bParam2)//Position - 0x10C9
{
	if (!*iParam0 == Global_112417 && !Global_112417 == 0)
	{
		func_6();
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam1, *iParam0))
				{
					Global_112417 = *iParam0;
					Global_112418 = *iParam1;
					Global_112432 = 1;
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112418, true, true);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112417, true, true);
						StringCopy(&Global_112448, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112418))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112418, true, false);
						}
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112417))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112417, true, false);
							StringCopy(&Global_112448, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Global_112418, 251, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_112418, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_112418, 17, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_112418, 512, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, true);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_112418, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_112417, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_112417, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_112417, false, 0);
					VEHICLE::_0xBE5C1255A1830FF5(Global_112417, true);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_29()//Position - 0x120C
{
	int iVar0;
	int iVar1;
	
	if (func_25(&iLocal_244))
	{
		if (!iLocal_59)
		{
			if (iLocal_244 == Global_112417 && iLocal_55 == 4)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!func_7("TX_H02"))
					{
						if (Global_113386.f_10049.f_121 < 5)
						{
							func_30("TX_H02", -1);
							Global_113386.f_10049.f_121++;
						}
						iLocal_59 = 1;
					}
				}
			}
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, -1, false);
				if (iLocal_55 == 4 || iLocal_55 == 2)
				{
					if (iLocal_244 != Global_112417)
					{
						func_5();
					}
				}
				func_21();
				if (func_28(&iLocal_244, &iVar1, 0))
				{
					if (iLocal_58)
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						iLocal_58 = 0;
					}
					if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
						{
							if (!func_19(Global_112418, -2118855366))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 10000);
							}
						}
					}
					iLocal_59 = 0;
					iLocal_54 = 1;
				}
			}
		}
	}
	else if (func_7("TX_H02"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_30(char* sParam0, int iParam1)//Position - 0x1343
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_31()//Position - 0x135A
{
	if (iLocal_55 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
		{
			iLocal_55 = 1;
		}
	}
	else if (iLocal_55 == 1)
	{
		func_58();
	}
	else if (iLocal_55 == 2)
	{
		func_49();
	}
	else if (iLocal_55 == 3)
	{
		func_43();
	}
	else if (iLocal_55 == 4)
	{
		func_32();
	}
}

void func_32()//Position - 0x13A9
{
	if (func_42(&Global_112417, &Global_112418, iLocal_70, iLocal_69))
	{
		if (!func_36())
		{
			if (!func_19(Global_112418, -2118855366))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
			}
			PED::SET_PED_CONFIG_FLAG(Global_112418, 251, true);
			func_33();
			if (HUD::DOES_BLIP_EXIST(iLocal_63))
			{
				HUD::SET_BLIP_FLASH_TIMER(iLocal_63, 10000);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_33()//Position - 0x141D
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (iLocal_58)
		{
			if (func_34())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
		}
	}
}

int func_34()//Position - 0x143D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	func_35(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 > 64 || iVar0 < -64) || iVar1 > 64) || iVar1 < -64)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1482
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

int func_36()//Position - 0x1557
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (iLocal_55 == 4)
	{
		if (Global_112454 == -1 || Global_112454 == 0)
		{
			Global_112454 = MISC::GET_GAME_TIMER();
		}
		else if (func_41(Global_112454, 30000))
		{
			if (iLocal_54 == 0 || iLocal_54 == 3)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, true))
				{
					return 1;
				}
			}
		}
	}
	if (func_39(Global_112417))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_112417, false) };
		if (iLocal_55 == 4)
		{
			if (!func_38(Local_243, Var0, 75f))
			{
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112417, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.f_0 = (Var2.f_0 - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.f_0 = (Var3.f_0 + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, true))
		{
			return 1;
		}
		if (func_38(Local_243, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Global_112417) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Global_112417))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	if (func_37(Global_112418))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112418, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x16F2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_38(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x171D
{
	return SYSTEM::VDIST2(Param0, Param1) <= (fParam2 * fParam2);
}

int func_39(int iParam0)//Position - 0x1737
{
	if (func_40(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x1761
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41(int iParam0, int iParam1)//Position - 0x1782
{
	return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1794
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (!PED::IS_PED_INJURED(*uParam1))
				{
					if (!PED::IS_PED_FLEEING(*uParam1))
					{
						if (!PED::IS_PED_IN_COMBAT(*uParam1, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam1, *uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(*uParam0) == iParam2)
								{
									if (PED::IS_PED_MODEL(*uParam1, iParam3))
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

void func_43()//Position - 0x1807
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (func_41(iLocal_67, 3000))
	{
		STREAMING::REQUEST_ANIM_DICT(&cLocal_240);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_240))
		{
			if (func_44())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 4f, -2f, -1, 48, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 4f, -2f, -1, 48, 0f, false, false, false);
				}
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 1)
			{
				if (!Global_44237)
				{
					iLocal_57 = 1;
				}
			}
			iLocal_67 = MISC::GET_GAME_TIMER();
			iLocal_68 = MISC::GET_GAME_TIMER();
			if (iLocal_62 == 1)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
				iLocal_62 = 0;
			}
			if (iLocal_65 != -1)
			{
				func_8(&iLocal_65);
			}
			iLocal_55 = 0;
		}
	}
}

int func_44()//Position - 0x18F7
{
	if (iLocal_54 != 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!Global_44237 && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (func_46())
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

bool func_45()//Position - 0x19A6
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

bool func_46()//Position - 0x19BB
{
	return Global_100493.f_376 > 0;
}

bool func_47()//Position - 0x19CC
{
	return Global_75485;
}

int func_48(int iParam0)//Position - 0x19D8
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

void func_49()//Position - 0x1A2F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (func_42(&Global_112417, &Global_112418, iLocal_70, iLocal_69))
	{
		bVar0 = false;
		if (PAD::IS_CONTROL_PRESSED(2, 23))
		{
			bVar0 = true;
		}
		if (func_41(iLocal_67, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 7)
			{
				if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
						if (iLocal_62 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_62 = 0;
						}
						bVar0 = true;
					}
				}
			}
		}
		if (bVar0)
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_240);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_240))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 8)
				{
					if (!func_54(0, 0))
					{
						bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						func_52(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", 34);
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				if (func_51(Global_112417))
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_240, "Aknowledge_R", 8f, -4f, -1, 16785456, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_240, "Aknowledge_L", 8f, -4f, -1, 16785456, 0f, false, false, false);
				}
				TASK::TASK_VEHICLE_MISSION(0, Global_112417, Global_112417, 22, 12f, 262275, 3f, 3f, true);
				TASK::TASK_VEHICLE_MISSION(0, Global_112417, Global_112417, 5, 12f, 262275, 3f, 3f, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_112418, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				func_50();
				iLocal_55 = 4;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_50()//Position - 0x1C13
{
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::SET_BLIP_ROUTE(iLocal_63, false);
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (func_39(Global_112417))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			iLocal_63 = HUD::ADD_BLIP_FOR_ENTITY(Global_112417);
			HUD::SET_BLIP_SPRITE(iLocal_63, 198);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_63, "TXM_BLIP");
			HUD::SET_BLIP_FLASHES(iLocal_63, true);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_63, 10000);
		}
	}
}

int func_51(int iParam0)//Position - 0x1C71
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) };
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		Var3 = { Var1 - Var0 };
		Var4 = { Var2 - Var0 };
		if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1) < 90f)
		{
			return 1;
		}
	}
	return 0;
}

void func_52(int iParam0, char* sParam1, int iParam2)//Position - 0x1CEC
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_53(iParam2), 1);
}

int func_53(int iParam0)//Position - 0x1D03
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

int func_54(int iParam0, bool bParam1)//Position - 0x1EF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_55())
	{
		func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(func_12()))
		{
			PED::GET_GROUP_SIZE(func_12(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_55()//Position - 0x1FCE
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_56(char* sParam0)//Position - 0x1FF0
{
	func_57(sParam0);
}

void func_57(char* sParam0)//Position - 0x1FFE
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_58()//Position - 0x2011
{
	int iVar0;
	
	func_64();
	func_33();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		if (func_22(&iLocal_245, iLocal_70, iLocal_69))
		{
			if (func_44())
			{
				STREAMING::REQUEST_ANIM_DICT(&cLocal_240);
				if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_240))
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
					{
						if (!func_63(&iLocal_245))
						{
							if (!VEHICLE::IS_TAXI_LIGHT_ON(iLocal_245))
							{
								VEHICLE::SET_TAXI_LIGHTS(iLocal_245, true);
							}
						}
						if (iLocal_65 == -1)
						{
							func_62(&iLocal_65, 0, "TXM_H01", 1, 0, 0, 0);
						}
						if (func_61(iLocal_65, 1))
						{
							if (func_7("TXM_H01"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (iLocal_62 == 0)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
								iLocal_62 = 1;
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_245, 5000, 0, 2);
							func_60();
							func_59();
							iLocal_67 = MISC::GET_GAME_TIMER();
							func_8(&iLocal_65);
							if (func_63(&iLocal_245))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_245, false))
								{
									VEHICLE::SET_TAXI_LIGHTS(iLocal_245, false);
								}
								iLocal_58 = 0;
								iLocal_55 = 3;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_245, -1, false);
								if (func_28(&iLocal_245, &iVar0, 0))
								{
									iLocal_245 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_112417, 5000, 0, 2);
									Global_112454 = MISC::GET_GAME_TIMER();
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
									{
										if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
										{
											CAM::SET_GAMEPLAY_VEHICLE_HINT(Global_112417, 0f, 0f, 0f, true, 4000, 2000, 2000);
											iLocal_58 = 1;
										}
									}
									Global_113386.f_10049.f_120 = 1;
									iLocal_55 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_59()//Position - 0x21C6
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	PAD::DISABLE_CONTROL_ACTION(0, 16, true);
	PAD::DISABLE_CONTROL_ACTION(0, 17, true);
	PAD::DISABLE_CONTROL_ACTION(0, 12, true);
	PAD::DISABLE_CONTROL_ACTION(0, 13, true);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
}

void func_60()//Position - 0x2209
{
	int iVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var3;
	int iVar4;
	int iVar5;
	
	bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (!Global_44237)
	{
		Var2.f_4 = 1065353216;
		Var2.f_5 = 1065353216;
		Var2.f_9 = 1065353216;
		Var2.f_10 = 1065353216;
		Var2.f_14 = 1065353216;
		Var2.f_15 = 1065353216;
		Var2.f_17 = 1040187392;
		Var2.f_18 = 1040187392;
		Var2.f_19 = -1;
		Var3.f_4 = 1065353216;
		Var3.f_5 = 1065353216;
		Var3.f_9 = 1065353216;
		Var3.f_10 = 1065353216;
		Var3.f_14 = 1065353216;
		Var3.f_15 = 1065353216;
		Var3.f_17 = 1040187392;
		Var3.f_18 = 1040187392;
		Var3.f_19 = -1;
		iVar4 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			Var3.f_0 = 1;
			Var3.f_2 = "FP_HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_16 = MISC::GET_HASH_KEY("UpperbodyAndIk_filter");
			iVar4 += 16;
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_20 = iVar4;
			Var3.f_21 = 1024;
		}
		else
		{
			Var3.f_0 = 1;
			Var3.f_2 = "HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_20 = iVar4;
		}
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar5, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (MISC::ARE_STRINGS_EQUAL(Var3.f_2, "FP_HAIL_TAXI") && iVar5 == joaat("weapon_petrolcan")))
		{
			if (iVar5 != joaat("weapon_petrolcan") || !MISC::ARE_STRINGS_EQUAL(Var3.f_2, "FP_HAIL_TAXI"))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SWAP_WEAPON(0, false);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Var3, &Var2, &Var2, 0.25f, 0.25f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var3, &Var2, &Var2, 0.25f, 0.25f);
		}
	}
	else
	{
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		}
		func_52(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL_DRUNK", 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

int func_61(int iParam0, bool bParam1)//Position - 0x2449
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_62(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2501
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_8(iParam0);
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
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_63(int iParam0)//Position - 0x262C
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 1, false);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, false);
				}
				return 1;
			}
		}
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 2, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 2, false);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, false);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_64()//Position - 0x26C3
{
	bool bVar0;
	
	if (iLocal_57)
	{
		if (func_41(iLocal_68, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 7)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
					{
						if (!Global_44237)
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							}
							func_52(PLAYER::PLAYER_PED_ID(), "TAXI_DRIVES_PAST", 24);
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
							}
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
						if (iLocal_62 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_62 = 0;
						}
						iLocal_57 = 0;
					}
				}
			}
		}
	}
}

void func_65()//Position - 0x27AD
{
	if (iLocal_53 != 0)
	{
		if (func_107())
		{
			func_13();
		}
	}
	if (iLocal_53 == 0)
	{
	}
	else if (iLocal_53 == 1)
	{
		func_99();
	}
	else if (iLocal_53 == 2)
	{
		func_74();
	}
	else if (iLocal_53 == 3)
	{
		func_66();
	}
}

void func_66()//Position - 0x27F3
{
	if (func_67())
	{
		if (iLocal_54 == 0 && iLocal_55 != 4)
		{
			func_5();
			if (func_28(&Local_56, &(Local_56.f_1), 0))
			{
				Global_112454 = 0;
				if (func_39(Global_112417))
				{
					VEHICLE::START_VEHICLE_HORN(Global_112417, 2500, MISC::GET_HASH_KEY("NORMAL"), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
				{
					if (!PED::IS_PED_INJURED(Global_112418))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_112418, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_112418, 3000, 0, 2);
					}
				}
				func_50();
				iLocal_55 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

int func_67()//Position - 0x2893
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_0, false) };
	if (!Local_56.f_2)
	{
		if (!Local_56.f_3)
		{
			if (func_68(Var0, Local_56.f_14, Local_56.f_6, &(Local_56.f_17), &(Local_56.f_6)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_56.f_1, false))
				{
					PED::SET_DRIVER_ABILITY(Local_56.f_1, 0.5f);
					if (Local_56.f_4)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_56.f_1, Local_56.f_0, Local_56.f_17, 10f, 0, ENTITY::GET_ENTITY_MODEL(Local_56.f_0), Local_56.f_29, 5f, MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_56.f_17, true));
						Local_56.f_4 = 0;
					}
					else
					{
						TASK::TASK_VEHICLE_PARK(Local_56.f_1, Local_56.f_0, Local_56.f_17, Local_56.f_6, 3, 90f, true);
					}
				}
				Local_56.f_2 = 1;
			}
		}
		else
		{
			PED::SET_DRIVER_ABILITY(Local_56.f_1, 0.5f);
			Local_56.f_17 = { Var0 };
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_56.f_1, Local_56.f_0, 6, 15000);
			Local_56.f_2 = 1;
		}
	}
	else if (!func_19(Local_56.f_1, -272084098))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(Local_56.f_0))
		{
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_56.f_1, Local_56.f_0, 1, 1000000);
			return 1;
		}
	}
	else
	{
		if (func_38(Var0, Local_243, 5f))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Local_56.f_0) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Local_56.f_0))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Local_56.f_1, Local_56.f_0, 1, 1000000);
				return 1;
			}
		}
		if (!Local_56.f_3)
		{
			if (!func_38(Var0, Local_56.f_17, 10f))
			{
				if (func_38(Var0, Local_243, 5f))
				{
					Local_56.f_14 = { Local_243 };
					Local_56.f_3 = 1;
					Local_56.f_2 = 0;
				}
			}
		}
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x2A2B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	
	iVar4 = 1;
	if (!func_73(Param1))
	{
		iVar4 = 9;
	}
	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param1, 1, iVar4, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &Var0);
		if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, 0, &Var1) && PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, 1, &Var2))
		{
			Var5 = { Var1 - Var0 };
			Var6 = { -Var5.f_1, Var5.f_0, 0f };
			Var7 = { Param0 - Param1 };
			fVar8 = func_72(Var6, Var7);
			if (fVar8 < 0f)
			{
				*uParam3 = { Var1 };
				*uParam4 = uParam2;
				if (func_70(uParam3, Var0))
				{
					Local_56.f_4 = 1;
				}
			}
			else
			{
				*uParam3 = { Var2 };
				*uParam4 = (*uParam4 + 180f);
				*uParam4 = func_69(*uParam4, 0f, 360f);
				if (func_70(uParam3, Var0))
				{
					Local_56.f_4 = 1;
				}
			}
			return 1;
		}
		else if (PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var1))
		{
			*uParam3 = { Var1 };
			*uParam4 = uParam2;
			return 1;
		}
	}
	return 0;
}

float func_69(float fParam0, float fParam1, float fParam2)//Position - 0x2B48
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

int func_70(var uParam0, struct<3> Param1)//Position - 0x2B8A
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, 1000f, &uVar0, false, false))
	{
		*uParam0 = { Param1 };
		return 0;
	}
	Var1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_71(Var1, Param1))
	{
		Var2 = { Param1 - Var1 / Vector(5f, 5f, 5f) };
		iVar3 = 1;
		while (iVar3 <= 5)
		{
			Var1 = { Var1 + Var2 };
			if (!func_71(Var1, Param1))
			{
				*uParam0 = { Var1 };
				return 1;
			}
			iVar3++;
		}
		*uParam0 = { Param1 };
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param1)//Position - 0x2C2A
{
	if ((Param0.f_2 - Param1.f_2) > 0.45f || (Param0.f_2 - Param1.f_2) < -0.45f)
	{
		return 1;
	}
	return 0;
}

float func_72(struct<3> Param0, struct<3> Param1)//Position - 0x2C5E
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_73(struct<3> Param0)//Position - 0x2C7F
{
	char* sVar0;
	
	sVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd", sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo", sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB", sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa", sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre", sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT", sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP", sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY", sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak", sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH", sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU", sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI", sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW", sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre", sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt", sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl", sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli", sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish", sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo", sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab", sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail", sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct", sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam", sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose", sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo", sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU", sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana", sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow", sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff", sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor", sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh", sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK", sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho", sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY", sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH", sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV", sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora", sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab", sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF", sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo", sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia", sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

void func_74()//Position - 0x2F73
{
	if (func_75())
	{
		Local_56.f_2 = 0;
		iLocal_53 = 3;
	}
}

int func_75()//Position - 0x2F8A
{
	struct<3> Var0;
	
	if (!Local_56.f_2)
	{
		if (func_76(Local_56.f_20, &(Local_56.f_14), &(Local_56.f_6), &(Local_56.f_8), 250))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_56.f_1, Local_56.f_0, Local_56.f_14, 12f, 0, ENTITY::GET_ENTITY_MODEL(Local_56.f_0), Local_56.f_29, (Local_56.f_7 - 20f), 20f);
			Local_56.f_2 = 1;
		}
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_0, true) };
		if (func_38(Var0, Local_56.f_14, Local_56.f_7))
		{
			return 1;
		}
		else if (func_38(Var0, Local_243, 5f))
		{
			Local_56.f_14 = { Local_243 };
			return 1;
		}
		else if (!func_19(Local_56.f_1, -1817882002))
		{
			Local_56.f_2 = 0;
			Local_56.f_8 = 0;
		}
	}
	return 0;
}

int func_76(struct<3> Param0, var* uParam1, float* fParam2, var uParam3, int iParam4)//Position - 0x3052
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam3 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_73(Param0))
	{
		iVar9 = 9;
	}
	func_97(Param0, Param0, &(Local_56.f_23), &(Local_56.f_26), iParam4);
	if (func_96(Local_56.f_23, Local_56.f_26))
	{
		if (!func_79(Param0, uParam1, fParam2, 1))
		{
			while (!bVar8 && *uParam3 < iVar6)
			{
				if (Param0.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, *uParam3, uParam1, fParam2, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, iVar9, 3f, 0f);
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar5))
					{
						fVar2 = (Param0.f_2 - uParam1->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_78(Param0, *uParam1) || fVar2 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_56.f_0, false))
							{
								iVar3 = Local_56.f_0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam1, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam3++;
				if (*uParam3 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			Local_56.f_5 = func_77(Param0, *uParam1);
			return 1;
		}
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param1)//Position - 0x31B1
{
	struct<3> Var0;
	
	Var0 = { Param0 - Param1 };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG(Var0);
}

int func_78(struct<3> Param0, struct<3> Param1)//Position - 0x31D3
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param1.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_79(struct<3> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x3235
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	if (func_95(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam2 = 163.87f;
		return 1;
	}
	else if (func_95(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam2 = 0f;
		return 1;
	}
	else if (func_95(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*uParam2 = 355.3355f;
		return 1;
	}
	else if (func_95(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam2 = 94.6893f;
		return 1;
	}
	else if (func_95(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam1 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam2 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, false, true))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam2 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, false, true))
	{
		*uParam1 = { 416.871f, -1613.081f, 28.1401f };
		*uParam2 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam1 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam2 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam1 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam2 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, false, true))
	{
		*uParam1 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam2 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, false, true))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*uParam2 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, false, true))
	{
		*uParam1 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam2 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, false, true))
	{
		*uParam1 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam2 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var2[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var2[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var2[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var2[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var2[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var2[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar3 = -1;
			fVar4 = 99999f;
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				fVar5 = SYSTEM::VDIST(Var2[iVar6 /*3*/], Var1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { Var2[iVar3 /*3*/] };
			if (iVar3 == 0)
			{
				*uParam2 = 234.3999f;
			}
			else if (iVar3 == 1)
			{
				*uParam2 = 232.2255f;
			}
			else if (iVar3 == 2)
			{
				*uParam2 = 228.2855f;
			}
			else if (iVar3 == 3)
			{
				*uParam2 = 231.4914f;
			}
			else if (iVar3 == 4)
			{
				*uParam2 = 230.6703f;
			}
			else if (iVar3 == 5)
			{
				*uParam2 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, false, true))
	{
		*uParam1 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam2 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam2 = 4.555f;
				break;
			
			case 2:
				*uParam1 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam2 = 6.9278f;
				break;
			
			case 3:
				*uParam1 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam2 = 2.6813f;
				break;
			
			case 4:
				*uParam1 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam2 = 5.542f;
				break;
			
			case 5:
				*uParam1 = { -1381.118f, 35.7838f, 52.659f };
				*uParam2 = 7.6687f;
				break;
			
			case 6:
				*uParam1 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam2 = 2.5572f;
				break;
			
			case 7:
				*uParam1 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam2 = 3.0185f;
				break;
			
			default:
				*uParam1 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam2 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam2 = 150.8833f;
					break;
				
				case 2:
					*uParam1 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam2 = 149.4322f;
					break;
				
				case 3:
					*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam2 = 154.1378f;
					break;
				
				case 4:
					*uParam1 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam2 = 146.3778f;
					break;
				
				case 5:
					*uParam1 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam2 = 91.163f;
					break;
				
				case 6:
					*uParam1 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam2 = 91.0578f;
					break;
				
				case 7:
					*uParam1 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam2 = 91.866f;
					break;
				
				default:
					*uParam1 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam2 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam2 = 148.7004f;
					break;
				
				case 2:
					*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam2 = 148.7144f;
					break;
				
				case 3:
					*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam2 = 150.0955f;
					break;
				
				case 4:
					*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam2 = 149.5649f;
					break;
				
				case 5:
					*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam2 = 150.7363f;
					break;
				
				case 6:
					*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam2 = 147.2113f;
					break;
				
				case 7:
					*uParam1 = { -1044.487f, -2525.534f, 19.079f };
					*uParam2 = 150.7597f;
					break;
				
				default:
					*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam2 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam2 = 150.9439f;
					break;
				
				case 2:
					*uParam1 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam2 = 150.851f;
					break;
				
				case 3:
					*uParam1 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam2 = 149.9285f;
					break;
				
				case 4:
					*uParam1 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam2 = 150.8244f;
					break;
				
				case 5:
					*uParam1 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam2 = 148.6134f;
					break;
				
				case 6:
					*uParam1 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam2 = 149.0112f;
					break;
				
				case 7:
					*uParam1 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam2 = 149.7553f;
					break;
				
				default:
					*uParam1 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam2 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam2 = 230.9025f;
					break;
				
				case 2:
					*uParam1 = { -1058.224f, -2716.217f, 19.06f };
					*uParam2 = 237.1285f;
					break;
				
				case 3:
					*uParam1 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam2 = 255.6885f;
					break;
				
				case 4:
					*uParam1 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam2 = 242.3581f;
					break;
				
				case 5:
					*uParam1 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam2 = 243.5798f;
					break;
				
				case 6:
					*uParam1 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam2 = 240.2381f;
					break;
				
				case 7:
					*uParam1 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam2 = 239.8703f;
					break;
				
				default:
					*uParam1 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam2 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam2 = 265.8022f;
					break;
				
				case 2:
					*uParam1 = { -980.6166f, -2748.535f, 12.757f };
					*uParam2 = 263.5472f;
					break;
				
				case 3:
					*uParam1 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam2 = 257.2886f;
					break;
				
				case 4:
					*uParam1 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam2 = 242.1315f;
					break;
				
				case 5:
					*uParam1 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam2 = 239.9312f;
					break;
				
				case 6:
					*uParam1 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam2 = 240.1081f;
					break;
				
				case 7:
					*uParam1 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam2 = 239.6737f;
					break;
				
				default:
					*uParam1 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam2 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam2 = 93.132f;
				break;
			
			case 2:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*uParam2 = 92.2581f;
				break;
			
			case 3:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam2 = 92.714f;
				break;
			
			case 4:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam2 = 92.8628f;
				break;
			
			case 5:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*uParam2 = 268.6186f;
				break;
			
			case 6:
				*uParam1 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam2 = 270.076f;
				break;
			
			case 7:
				*uParam1 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam2 = 269.722f;
				break;
			
			default:
				*uParam1 = { 861.4028f, -1010.025f, 28.808f };
				*uParam2 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam2 = 181.3629f;
				break;
			
			case 2:
				*uParam1 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam2 = 175.4362f;
				break;
			
			case 3:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam2 = 181.0347f;
				break;
			
			case 4:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*uParam2 = 233.169f;
				break;
			
			case 5:
				*uParam1 = { 703.807f, -1057.866f, 21.4152f };
				*uParam2 = 170.1609f;
				break;
			
			case 6:
				*uParam1 = { 708.1994f, -1048.194f, 21.216f };
				*uParam2 = 134.2729f;
				break;
			
			case 7:
				*uParam1 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam2 = 177.9198f;
				break;
			
			default:
				*uParam1 = { 703.545f, -1078.718f, 21.3987f };
				*uParam2 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_92(3, Var1))
	{
		if (func_91(Var1, 3, 0, 0))
		{
			*uParam1 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam2 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, false, true))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*uParam2 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, true, true))
	{
		if (func_90(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam2 = 275.4274f;
			return 1;
		}
		if (func_90(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam2 = 275.4411f;
			return 1;
		}
		if (func_90(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam2 = 301.2981f;
			return 1;
		}
		if (func_90(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam2 = 209.4354f;
			return 1;
		}
		*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam2 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_90(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, false, true))
		{
			*uParam1 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam2 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, false, true))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*uParam2 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam2 = 182.0998f;
				break;
			
			case 1:
				*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam2 = 83.3356f;
				break;
			
			case 2:
				*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam2 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, false, true))
	{
		*uParam1 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam2 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam1 = { -658.2056f, -1388.789f, 9.499f };
		*uParam2 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*uParam2 = 71.6555f;
		return 1;
	}
	if (!func_81())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_92(7, Var1))
		{
			if (func_91(Var1, 7, 0, 0))
			{
				*uParam1 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam2 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_92(2, Var1))
	{
		if (func_91(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam1 = { -979.95f, -2746.109f, 12.7091f };
						*uParam2 = 91.4929f;
						break;
					
					case 1:
						*uParam1 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam2 = 239.0041f;
						break;
					
					case 2:
						*uParam1 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam2 = 236.4666f;
						break;
					
					case 3:
						*uParam1 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam2 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam2 = 148.7004f;
						break;
					
					case 2:
						*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam2 = 148.7144f;
						break;
					
					case 3:
						*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam2 = 150.0955f;
						break;
					
					case 4:
						*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam2 = 149.5649f;
						break;
					
					case 5:
						*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam2 = 150.7363f;
						break;
					
					case 6:
						*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam2 = 147.2113f;
						break;
					
					case 7:
						*uParam1 = { -1044.487f, -2525.534f, 19.079f };
						*uParam2 = 150.7597f;
						break;
					
					default:
						*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam2 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var7 = { -509.5746f, 4938.918f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = func_80(Param0, Var7);
	Var10 = { 2450.604f, 5129.224f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = func_80(Param0, Var10);
	Var1 = { Param0 };
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var7 };
		*uParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*uParam2 = fVar11;
		}
		return 1;
	}
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, false, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var10 };
		*uParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*uParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_38(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, false, true))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam2 = 253.9545f;
			}
			else
			{
				*uParam1 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam2 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, false, true))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*uParam2 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, false, true))
	{
		*uParam1 = { 498.185f, -1288.535f, 28.1923f };
		*uParam2 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, false, true))
	{
		*uParam1 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam2 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, false, true))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam2 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, false, true))
	{
		*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam2 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, false, true))
	{
		*uParam1 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam2 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, false, true))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam2 = 162.0019f;
		}
		else
		{
			*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam2 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*uParam2 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*uParam2 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, false, true))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam2 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_80(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x5357
{
	return SYSTEM::VDIST2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}

int func_81()//Position - 0x5371
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0)
	{
		if (func_82(65))
		{
			return 1;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_82(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_82(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x53D0
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

int func_83()//Position - 0x53FD
{
	func_84();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_84()//Position - 0x5416
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_88(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_87(PLAYER::PLAYER_PED_ID());
			if (func_86(iVar0) && (!func_85(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_86(Global_113386.f_2363.f_539.f_4321))
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

bool func_85(int iParam0)//Position - 0x5513
{
	return Global_43052 == iParam0;
}

bool func_86(int iParam0)//Position - 0x5521
{
	return iParam0 < 3;
}

int func_87(int iParam0)//Position - 0x552D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)//Position - 0x556A
{
	if (func_86(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_89(int iParam0)//Position - 0x558F
{
	return Global_1998[iParam0 /*29*/];
}

bool func_90(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x559E
{
	struct<3> Var0;
	
	Var0 = { Param1 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_91(struct<3> Param0, int iParam1, int iParam2, bool bParam3)//Position - 0x55C8
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = false;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], bVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_92(int iParam0, struct<3> Param1)//Position - 0x631C
{
	return SYSTEM::VDIST2(Param1, func_94(iParam0)) < func_93(iParam0);
}

float func_93(int iParam0)//Position - 0x6339
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_94(int iParam0)//Position - 0x63D1
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_95(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x64BB
{
	if (((((Param0.f_0 > Param1.f_0 && Param0.f_0 < Param2.f_0) && Param0.f_1 > Param1.f_1) && Param0.f_1 < Param2.f_1) && Param0.f_2 > Param1.f_2) && Param0.f_2 < Param2.f_2)
	{
		return 1;
	}
	return 0;
}

int func_96(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x6512
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1))
	{
		return 1;
	}
	return 0;
}

void func_97(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x6532
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param2.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param2.f_0;
		Var1.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var1.f_0 = Param2.f_0;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param2.f_1;
		Var1.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var1.f_1 = Param2.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	Var1 = { Var1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!func_98(Var0, *uParam4, 1056964608, 0) || !func_98(Var0, *uParam4, 1056964608, 0))
	{
		*uParam4 = { Var0 };
		*uParam5 = { Var1 };
	}
	PATHFIND::REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

int func_98(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x65FD
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_99()//Position - 0x6678
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_41(Local_56.f_9, 10000))
		{
			STREAMING::REQUEST_MODEL(iLocal_70);
			STREAMING::REQUEST_MODEL(iLocal_69);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_70))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_69))
				{
					if (func_73(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (Local_56.f_10 < 2)
						{
							iVar2 = 0;
						}
						else if (Local_56.f_10 < 5)
						{
							iVar2 = 9;
						}
						else
						{
							iVar2 = 1;
						}
					}
					else if (Local_56.f_10 < 5)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 9;
					}
					if (func_101(&Var0, &fVar1, &(Local_56.f_8), iVar2, 1103626240))
					{
						MISC::CLEAR_AREA(Var0, 5f, true, false, false, false);
						if (func_100(&Local_56, &(Local_56.f_1), Var0, fVar1))
						{
							Local_56.f_5 = func_77(ENTITY::GET_ENTITY_COORDS(Local_56.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
							Local_56.f_2 = 0;
							Local_56.f_8 = 0;
							iLocal_53 = 2;
						}
					}
					else if (Local_56.f_8 >= 5)
					{
						Local_56.f_10++;
						if (Local_56.f_10 > 10)
						{
							func_13();
						}
						else
						{
							Local_56.f_8 = 0;
							Local_56.f_9 = (MISC::GET_GAME_TIMER() - 9000);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x6799
{
	STREAMING::REQUEST_MODEL(func_147());
	STREAMING::REQUEST_MODEL(func_146());
	if (STREAMING::HAS_MODEL_LOADED(func_146()))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_147()))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(func_146(), Param2, fParam3, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, true);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, false, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, true);
					*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 25, func_147(), -1, true, true);
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(*uParam0, 5f);
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam1, true, false);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
							PED::SET_PED_CONFIG_FLAG(*uParam1, 251, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*uParam1, 512, false);
							AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_146());
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_147());
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_101(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x68C6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	int iVar13;
	struct<3> Var14;
	
	fVar3 = 0f;
	iVar5 = 1;
	if (iParam3 == 0)
	{
		iVar5 = 0;
	}
	bVar6 = false;
	iVar7 = 0;
	fVar8 = 100f;
	fVar9 = 2.5f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar13 = func_106(Var14);
		if (iVar13 != 6)
		{
			if (func_105(Var14, iVar13, uParam0, uParam1))
			{
				return 1;
			}
		}
		else if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var14, *uParam2, &Var0, &fVar3, &uVar4, iParam3, fVar8, fVar9))
		{
			while (!bVar6 && iVar7 < 5)
			{
				if (VEHICLE::_0xA4822F1CF23F4810(&Var0, &Var1, &Var2, 0f, 180f, iParam4, iVar5, 1, 0))
				{
					fVar3 = func_104(0f, 0f, 0f, Var2, 1);
					if (func_102(Var14, Var1, 1133903872, 1101004800))
					{
						bVar6 = true;
						Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, fVar3, 0f, 1f, 0f) };
						Var11 = { Var10 - Var1 };
						Var12 = { Var0 - Var1 };
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var11.f_0, Var11.f_1, Var12.f_0, Var12.f_1) > 60f)
						{
							fVar3 = (fVar3 + 180f);
							fVar3 = func_69(fVar3, 0f, 360f);
						}
						*uParam0 = { Var1 };
						*uParam1 = fVar3;
						return 1;
					}
					else
					{
						iVar7++;
					}
				}
				else
				{
					iVar7++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return 0;
}

int func_102(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x6A3A
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Param1);
	if (fVar0 >= (fParam2 * fParam2))
	{
		return 0;
	}
	if (fVar0 <= (fParam3 * fParam3))
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(Param1, 2.5f))
	{
		return 0;
	}
	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Param1, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_103(Param1, 0))
	{
		return 0;
	}
	return 1;
}

int func_103(struct<3> Param0, bool bParam1)//Position - 0x6AA6
{
	if (func_38(Param0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_91(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, false, true))
		{
			return 1;
		}
	}
	if (func_92(2, Param0))
	{
		if (func_91(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(3, Param0))
	{
		if (func_91(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(4, Param0))
	{
		if (func_91(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(5, Param0))
	{
		if (func_91(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(6, Param0))
	{
		if (func_91(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_81())
	{
		if (func_92(7, Param0))
		{
			if (func_91(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_92(8, Param0))
	{
		if (func_91(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, false, true))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, false, true))
	{
		return 1;
	}
	if (func_38(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, false, true))
		{
			return 1;
		}
	}
	if (!bParam1)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, false, true))
		{
			return 1;
		}
	}
	return 0;
}

float func_104(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x7120
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_105(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0x7185
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 == 0)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -883.8992f, 76.3237f, 50.9372f };
				fVar1 = 271.8234f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -838.2045f, 88.1067f, 51.3396f };
				fVar1 = 102.3721f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -884.0715f, 217.2857f, 71.7633f };
				fVar1 = 254.5437f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -834.0018f, 217.2782f, 73.154f };
				fVar1 = 80.7037f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { -830.9222f, 135.3548f, 58.1352f };
				fVar1 = 92.957f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 1)
	{
		iVar2 = 0;
		iVar3 = 6;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1587.096f, -928.5875f, 14.3046f };
				fVar1 = 139.9023f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1532.458f, -863.667f, 21.6188f };
				fVar1 = 139.9028f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1472.888f, -733.0396f, 24.0746f };
				fVar1 = 236.3756f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1397.303f, -781.1235f, 19.3347f };
				fVar1 = 48.1876f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { -1605.409f, -1012.578f, 12.0175f };
				fVar1 = 51.1191f;
			}
			else if (iVar2 == 5)
			{
				Var0 = { -1572.457f, -1007.106f, 12.0184f };
				fVar1 = 141.2024f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2 = 0;
		iVar3 = 4;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1126.552f, -1530.591f, 3.294f };
				fVar1 = 214.5477f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1043.019f, -1644.172f, 3.4894f };
				fVar1 = 35.3163f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1039.345f, -1532.581f, 4.1467f };
				fVar1 = 32.1734f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1067.577f, -1501.944f, 4.0327f };
				fVar1 = 216.1659f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 3)
	{
		iVar2 = 0;
		iVar3 = 4;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1247.291f, 2549.53f, 16.4214f };
				fVar1 = 137.1185f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1314.11f, 2470.677f, 23.3185f };
				fVar1 = 309.2187f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1095.382f, 2686.487f, 18.5919f };
				fVar1 = 130.0954f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1373.514f, 2429.944f, 26.7492f };
				fVar1 = 298.9626f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 4)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { 1299.198f, 1164.342f, 105.3728f };
				fVar1 = 3.1765f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { 1304.831f, 1084.598f, 104.6453f };
				fVar1 = 8.2195f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { 1290.873f, 1237.684f, 107.4217f };
				fVar1 = 186.5802f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { 1310.975f, 1001.138f, 104.9354f };
				fVar1 = 359.3654f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { 1284.936f, 1355.748f, 103.4301f };
				fVar1 = 182.4582f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 5)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1208.617f, -1410.733f, 3.1853f };
				fVar1 = 215.8772f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1172.9f, -1412.38f, 3.6078f };
				fVar1 = 126.9322f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1112.842f, -1437.895f, 4.031f };
				fVar1 = 211.4814f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1079.885f, -1472.878f, 4.0784f };
				fVar1 = 32.9476f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { -1086.768f, -1540.707f, 3.5549f };
				fVar1 = 128.3527f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	return 0;
}

int func_106(struct<3> Param0)//Position - 0x7738
{
	if (func_95(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		return 0;
	}
	if (func_90(Param0, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, false, true))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, false, true))
	{
		return 2;
	}
	if (func_92(3, Param0))
	{
		if (func_91(Param0, 3, 0, 0))
		{
			return 3;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, false, true))
	{
		return 4;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, false, true))
	{
		return 5;
	}
	return 6;
}

int func_107()//Position - 0x78E3
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (!func_38(Local_243, Local_56.f_20, 100f))
	{
		return 1;
	}
	if (func_87(PLAYER::PLAYER_PED_ID()) != Local_56.f_30)
	{
		return 1;
	}
	if (iLocal_55 == 4)
	{
		return 1;
	}
	if (iLocal_53 == 2 || iLocal_53 == 3)
	{
		if (!func_37(Local_56.f_1))
		{
			return 1;
		}
		if (!func_39(Local_56.f_0))
		{
			return 1;
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_56.f_1, Local_56.f_0))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(Local_56.f_1))
		{
			return 1;
		}
		if (PED::IS_PED_IN_COMBAT(Local_56.f_1, 0))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_1, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_0, false) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.f_0 = (Var2.f_0 - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.f_0 = (Var3.f_0 + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, true))
		{
			return 1;
		}
		if (func_38(Local_243, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_56.f_0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_56.f_0))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_108()//Position - 0x7A71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	var uVar13[12];
	
	if (iLocal_54 == 0)
	{
		if (func_41(iLocal_66, 500))
		{
			iVar1 = -1;
			iVar2 = -1;
			iVar5 = 0;
			fVar7 = -99999f;
			if (iLocal_55 != 0 && iLocal_55 != 1)
			{
				iLocal_60 = 0;
			}
			if (iLocal_60)
			{
				iVar0 = 3;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 1;
				fVar8 = 10f;
			}
			iVar3 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar13);
			if (iVar3 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (iVar3 - 1))
				{
					if (iVar5 < iVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uVar13[iVar4]))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar13[iVar4]) == iLocal_70)
							{
								Var9 = { ENTITY::GET_ENTITY_COORDS(uVar13[iVar4], false) };
								fVar10 = SYSTEM::VDIST2(Local_243, Var9);
								if (fVar10 <= (fVar8 * fVar8))
								{
									if (func_22(&(uVar13[iVar4]), iLocal_70, iLocal_69))
									{
										if (iVar2 == -1)
										{
											iVar2 = iVar4;
										}
										if (iLocal_60)
										{
											if (uVar13[iVar4] != Global_112417)
											{
												if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar13[iVar4]) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
												{
													fVar6 = 1f;
													fVar10 = (fVar10 / fVar10);
													fVar10 = (fVar10 - 35f);
													fVar10 = (fVar10 * -1f);
													fVar10 = (fVar10 / 35f);
													fVar10 = (fVar10 * 0.5f);
													fVar10 = (fVar10 + 0.5f);
													fVar6 = (fVar6 * fVar10);
													fVar10 = (Local_243.f_2 - Var9.f_2);
													if (fVar10 < 0f)
													{
														fVar10 = (fVar10 * -1f);
													}
													if (fVar10 < 4f)
													{
														Var11 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
														Var12 = { Var9 - Local_243 };
														if (((Var11.f_0 * Var12.f_0) + (Var11.f_1 * Var12.f_1)) / SYSTEM::VDIST(Var12, 0f, 0f, 0f)) > SYSTEM::COS(120f)
														{
															if (CAM::IS_SPHERE_VISIBLE(Var9, 2f))
															{
																fVar6 = (fVar6 * 0.5f);
															}
															if (func_63(&(uVar13[iVar4])))
															{
																fVar6 = (fVar6 * 0.2f);
															}
															if (!ENTITY::IS_ENTITY_UPRIGHT(uVar13[iVar4], 90f) || ENTITY::IS_ENTITY_IN_WATER(uVar13[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == -1)
			{
				func_109(&iLocal_244, 0);
				iLocal_244 = 0;
			}
			else if (iLocal_244 != uVar13[iVar2])
			{
				func_109(&iLocal_244, 0);
				iLocal_244 = uVar13[iVar2];
				func_109(&iLocal_244, 1);
			}
			if (iLocal_60)
			{
				if (iVar1 == -1)
				{
					iLocal_245 = 0;
				}
				else
				{
					iLocal_245 = uVar13[iVar1];
				}
				iLocal_60 = 0;
			}
			else
			{
				iLocal_60 = 1;
			}
			iLocal_66 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

void func_109(int iParam0, bool bParam1)//Position - 0x7D0D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_MODEL(iVar0, func_147()))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 251, bParam1);
					}
				}
			}
		}
	}
}

void func_110()//Position - 0x7D5F
{
	if (iLocal_55 == 2 || iLocal_55 == 3)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3))
		{
			func_59();
		}
	}
}

int func_111()//Position - 0x7DA3
{
	if (!func_3())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

void func_112()//Position - 0x7DD8
{
	if (iLocal_52 == 0)
	{
		if (func_143(131))
		{
			if (func_141(func_83()))
			{
				func_140();
				func_139(&uLocal_71, 0, PLAYER::PLAYER_PED_ID(), sLocal_236, 0, 1);
				func_139(&uLocal_71, 1, 0, "TaxiDispatch", 0, 1);
				if (func_133())
				{
					if (func_132(&uLocal_71, 131, "TAXISAU", sLocal_237, sLocal_237, "TX_2", "TX_2", sLocal_238, sLocal_238, 2, 1, 0, 0, 0))
					{
						iLocal_61 = 0;
						iLocal_52 = 2;
					}
				}
				else if (func_118(&uLocal_71, 131, "TAXISAU", sLocal_237, sLocal_237, "TX_2A", "TX_2A", 2, 1, 0, 0, 0))
				{
					iLocal_52 = 1;
				}
			}
		}
	}
	else if (iLocal_52 == 1)
	{
		if (func_117())
		{
			iLocal_52 = 0;
		}
	}
	else if (iLocal_52 == 2)
	{
		if (func_117())
		{
			if (func_116())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0;
				}
			}
			else if (func_115())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0;
				}
			}
			if (iLocal_52 != 0)
			{
				if (!func_114(19))
				{
					func_113(19);
				}
				func_13();
				Local_56.f_9 = MISC::GET_GAME_TIMER();
				Local_56.f_20 = { Local_243 };
				Local_56.f_30 = func_87(PLAYER::PLAYER_PED_ID());
				Local_56.f_8 = 0;
				Local_56.f_10 = 0;
				iLocal_53 = 1;
				iLocal_52 = 0;
			}
		}
		else if (!iLocal_61)
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
			{
				iLocal_61 = 1;
			}
		}
	}
}

void func_113(int iParam0)//Position - 0x7F1C
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

int func_114(int iParam0)//Position - 0x7F5E
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

int func_115()//Position - 0x7F9E
{
	if (Global_20251)
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x7FB4
{
	if (Global_21654 == 1 || Global_22621 == 1)
	{
		return 1;
	}
	return 0;
}

int func_117()//Position - 0x7FD7
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_118(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x7FEE
{
	var uVar0;
	var uVar1;
	
	func_131(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_130();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_128(2, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&uVar0, &uVar1, iParam7, bParam11);
}

int func_119(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x804F
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_127();
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
		if (func_126(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_125();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam3)
			{
				func_124();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_123())
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
					if (Global_21863 == 0)
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
			}
			if (func_122())
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
			}
			func_121();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_120();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_127();
	}
	return 0;
}

void func_120()//Position - 0x83BA
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

void func_121()//Position - 0x83EC
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

int func_122()//Position - 0x8481
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x84A8
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

void func_124()//Position - 0x8541
{
	if (func_85(14))
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
		Global_20266 = func_83();
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

void func_125()//Position - 0x85E3
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

bool func_126(int iParam0, int iParam1)//Position - 0x863B
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

void func_127()//Position - 0x8673
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

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x86CA
{
	func_129(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_129(var uParam0)//Position - 0x873A
{
	Global_21602 = uParam0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
}

void func_130()//Position - 0x8760
{
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_21619 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
}

void func_131(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8799
{
	Global_21059 = { *uParam0 };
	Global_7452 = uParam1;
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

bool func_132(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)//Position - 0x87EF
{
	var uVar0;
	var uVar1;
	
	func_131(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	func_130();
	if (iParam10 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_128(3, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&uVar0, &uVar1, iParam9, bParam13);
}

int func_133()//Position - 0x8850
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	if (iLocal_53 != 0)
	{
		return 0;
	}
	if (iLocal_55 == 4 || iLocal_55 == 2)
	{
		return 0;
	}
	if (iLocal_54 != 0)
	{
		return 0;
	}
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_239))
	{
		return 0;
	}
	if (!func_111())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			return 0;
		}
	}
	func_134();
	fVar1 = 50f;
	iVar2 = 1;
	if (!func_73(Local_243))
	{
		iVar2 = 9;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(Local_243, &Var0, iVar2, 100f, 2.5f))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, fVar1, fVar1, 20f, false, true, 0))
	{
		return 0;
	}
	if (func_103(Local_243, 1))
	{
		return 0;
	}
	return 1;
}

int func_134()//Position - 0x892C
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = func_83();
		if (func_86(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_136)
			{
				if (BitTest(Global_113386.f_7688[iVar2 /*15*/].f_2, bVar0))
				{
					if (func_137(Var1, func_138(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_764)
			{
				if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bVar0))
				{
					if (func_137(Var1, func_136(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_866)
			{
				if (BitTest(Global_113386.f_7688.f_765[iVar2 /*10*/].f_2, bVar0))
				{
					if (func_137(Var1, func_135(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x8A2C
{
	return Global_113386.f_7688.f_765[iParam0 /*10*/].f_7;
}

int func_136(int iParam0)//Position - 0x8A44
{
	return Global_113386.f_7688.f_651[iParam0 /*14*/].f_7;
}

int func_137(struct<3> Param0, int iParam1)//Position - 0x8A5C
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_43053)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_43053[iParam1 /*5*/]) <= (Global_43053[iParam1 /*5*/].f_3 * Global_43053[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_43053[iParam1 /*5*/].f_4 != -1)
		{
			return func_137(Param0, Global_43053[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x8AC7
{
	return Global_113386.f_7688[iParam0 /*15*/].f_7;
}

void func_139(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8ADC
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

void func_140()//Position - 0x8B77
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0)
	{
		sLocal_236 = "MICHAEL";
		sLocal_237 = "TX_1M";
		sLocal_238 = "TX_3M";
	}
	else if (iVar0 == 1)
	{
		sLocal_236 = "FRANKLIN";
		sLocal_237 = "TX_1F";
		sLocal_238 = "TX_3F";
	}
	else if (iVar0 == 2)
	{
		sLocal_236 = "TREVOR";
		sLocal_237 = "TX_1T";
		sLocal_238 = "TX_3T";
	}
}

int func_141(int iParam0)//Position - 0x8BDC
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		if (func_142(131, iParam0) == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == func_14())
	{
		if ((func_142(131, 0) == 1 || func_142(131, 1) == 1) || func_142(131, 2) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_142(int iParam0, int iParam1)//Position - 0x8C4A
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

int func_143(int iParam0)//Position - 0x8C74
{
	if ((Global_22719 || Global_22718) || Global_22720)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
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
	return 0;
}

int func_144()//Position - 0x8CD8
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_97361 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_112437)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		return 0;
	}
	return 1;
}

void func_145()//Position - 0x8D27
{
	func_6();
	func_4(1);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_240);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
	if (iLocal_58)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

int func_146()//Position - 0x8D66
{
	return joaat("taxi");
}

int func_147()//Position - 0x8D73
{
	return joaat("a_m_y_stlat_01");
}

