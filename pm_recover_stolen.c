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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	struct<28> Local_35 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
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
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	char[] cLocal_238[8] = 0;
	var uLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = -1;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 1000;
	var uLocal_262 = 1000;
	var uLocal_263 = 0;
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_65 = -1;
	iLocal_236 = -1;
	iLocal_237 = -1;
	StringCopy(&cLocal_238, "PMRAUD", 8);
	iLocal_250 = -1;
	iLocal_251 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_94(2);
		func_93();
	}
	func_87();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_86())
		{
			iLocal_237 = -1;
		}
		else if (iLocal_237 == -1)
		{
			iLocal_237 = MISC::GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()//Position - 0xBA
{
	struct<4> Var0;
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_34)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_35.f_10);
			if (Local_35.f_11 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_35.f_11);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("PRECOV", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_113079.f_222[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113079.f_222[0], false))
				{
					iLocal_242 = Global_113079.f_222[0];
					Global_113079.f_222[0] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_242, true, true);
					Local_35.f_7 = ENTITY::GET_ENTITY_MODEL(iLocal_242);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_35.f_7);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_35.f_7, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_113079.f_225[0]))
				{
					iLocal_243 = Global_113079.f_225[0];
					Global_113079.f_225[0] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_243, true, true);
					Local_35.f_8 = ENTITY::GET_ENTITY_MODEL(iLocal_243);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_243, iLocal_249);
					PED::SET_PED_MONEY(iLocal_243, 0);
					PED::SET_PED_ACCURACY(iLocal_243, 5);
					PED::SET_PED_KEEP_TASK(iLocal_243, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_243, 23, true);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_35.f_7))
					{
						if (Local_35.f_26)
						{
							PED::SET_PED_HELMET(iLocal_243, true);
							PED::GIVE_PED_HELMET(iLocal_243, true, 4096, -1);
						}
						else
						{
							PED::SET_PED_HELMET(iLocal_243, false);
						}
					}
					if (Local_35.f_20)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_243, joaat("WEAPON_PISTOL"), 120, false, false);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_243, joaat("WEAPON_MICROSMG"), 120, true, true);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_35.f_8);
					ENTITY::SET_ENTITY_PROOFS(iLocal_243, false, false, false, Local_35.f_27, false, false, false, false);
					func_85(&uLocal_71, 3, iLocal_243, "ABIGAIL", 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_113079.f_225[1]))
				{
					iLocal_244 = Global_113079.f_225[1];
					Global_113079.f_225[1] = 0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_244, true, true);
					Local_35.f_9 = ENTITY::GET_ENTITY_MODEL(iLocal_244);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_244, iLocal_249);
					PED::SET_PED_MONEY(iLocal_244, 0);
					PED::SET_PED_ACCURACY(iLocal_244, 5);
					PED::SET_PED_KEEP_TASK(iLocal_244, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_244, 23, true);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_35.f_7))
					{
						if (Local_35.f_26)
						{
							PED::SET_PED_HELMET(iLocal_244, true);
							PED::GIVE_PED_HELMET(iLocal_244, true, 4096, -1);
						}
						else
						{
							PED::SET_PED_HELMET(iLocal_244, false);
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_35.f_9);
					ENTITY::SET_ENTITY_PROOFS(iLocal_244, false, false, false, Local_35.f_27, false, false, false, false);
				}
				if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_243) || !PED::IS_PED_INJURED(iLocal_243)) && (!ENTITY::DOES_ENTITY_EXIST(iLocal_244) || !PED::IS_PED_INJURED(iLocal_244)))
				{
					iLocal_247 = func_84(iLocal_242, 1, 0);
					StringCopy(&Var0, "STOP_THIEF_", 32);
					StringConCat(&Var0, &(Local_35.f_12), 32);
					func_83(&Var0, 7500, 1);
					func_82(&(Local_35.f_22), 10000);
					iLocal_236 = 0;
					iLocal_66 = 0;
					iLocal_67 = 0;
					if (Local_35.f_19 != -1)
					{
						iLocal_65 = (MISC::GET_GAME_TIMER() + Local_35.f_19);
					}
				}
				iLocal_34++;
			}
			break;
		
		case 1:
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_243) && PED::IS_PED_INJURED(iLocal_243)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && PED::IS_PED_INJURED(iLocal_244))) || ((Local_35.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_35.f_7)) && !PED::IS_PED_IN_VEHICLE(iLocal_243, iLocal_242, false))) || ((Local_35.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_35.f_7)) && !PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_242, false))) || ((Local_35.f_18 && !PED::IS_PED_IN_VEHICLE(iLocal_243, iLocal_242, false)) && func_81(iLocal_243)))
			{
				if (Local_35.f_17 && VEHICLE::IS_THIS_MODEL_A_BIKE(Local_35.f_7))
				{
					if (!PED::IS_PED_INJURED(iLocal_243) && PED::IS_PED_IN_VEHICLE(iLocal_243, iLocal_242, false))
					{
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_243);
					}
					if (!PED::IS_PED_INJURED(iLocal_244) && PED::IS_PED_IN_VEHICLE(iLocal_244, iLocal_242, false))
					{
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_244);
					}
				}
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_PRINTS();
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				if (func_86())
				{
					func_79();
				}
				iLocal_236 = -1;
				if (STREAMING::HAS_MODEL_LOADED(Local_35.f_10) && (Local_35.f_11 == 0 || STREAMING::HAS_MODEL_LOADED(Local_35.f_11)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
					{
						Var8 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_243, 1.2f, 1.5f) };
						iLocal_245 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_MED_BAG"), Var8, Local_35.f_28, -1, true, Local_35.f_10);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_35.f_10);
						if (HUD::DOES_BLIP_EXIST(iLocal_247))
						{
							HUD::REMOVE_BLIP(&iLocal_247);
						}
						iLocal_247 = func_78(iLocal_245);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && Local_35.f_11 != 0)
					{
						Var8 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_244, 1.2f, 1.5f) };
						iLocal_246 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_MED_BAG"), Var8, Local_35.f_29, -1, true, Local_35.f_11);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_35.f_11);
						if (HUD::DOES_BLIP_EXIST(iLocal_248))
						{
							HUD::REMOVE_BLIP(&iLocal_248);
						}
						iLocal_248 = func_78(iLocal_246);
					}
					func_77(&uLocal_252, 0, 0);
					iLocal_240 = 1;
					iLocal_34++;
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_243, false))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_248))
					{
						HUD::REMOVE_BLIP(&iLocal_248);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_247))
					{
						iLocal_247 = func_84(PED::GET_VEHICLE_PED_IS_IN(iLocal_243, false), 1, 0);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_247))
					{
						HUD::REMOVE_BLIP(&iLocal_247);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_248))
					{
						iLocal_248 = func_74(iLocal_243, 1, 145);
					}
				}
				func_46(&uLocal_252, iLocal_243, 0, 0, 1, 1, 1);
				if (iLocal_65 != -1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_65)
					{
						func_45();
					}
					else
					{
						iVar11 = func_44(MISC::ABSI((iLocal_65 - MISC::GET_GAME_TIMER())), 0, Local_35.f_19);
						if (iVar11 <= 10000)
						{
							func_40((Local_35.f_19 - iVar11), Local_35.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_40((Local_35.f_19 - iVar11), Local_35.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
				{
					if (func_39(PLAYER::PLAYER_PED_ID(), iLocal_243, 1) > 500f)
					{
						func_45();
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_247))
					{
						func_38(iLocal_247, iLocal_243, 500f, 0.8f, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
				{
					if (func_39(PLAYER::PLAYER_PED_ID(), iLocal_244, 1) > 500f)
					{
						func_45();
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_248))
					{
						func_38(iLocal_248, iLocal_244, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!OBJECT::DOES_PICKUP_EXIST(iLocal_245) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_245))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_245))
				{
					OBJECT::REMOVE_PICKUP(iLocal_245);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_247))
				{
					HUD::REMOVE_BLIP(&iLocal_247);
				}
			}
			if (!OBJECT::DOES_PICKUP_EXIST(iLocal_246) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_246))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_246))
				{
					OBJECT::REMOVE_PICKUP(iLocal_246);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_248))
				{
					HUD::REMOVE_BLIP(&iLocal_248);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_247) && !HUD::DOES_BLIP_EXIST(iLocal_248))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_69)
					{
						func_83("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
						iLocal_69 = 1;
					}
				}
				else
				{
					HUD::CLEAR_PRINTS();
					func_37();
				}
			}
			else if ((OBJECT::DOES_PICKUP_EXIST(iLocal_245) && func_36(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(iLocal_245), 1) > 500f) || (OBJECT::DOES_PICKUP_EXIST(iLocal_246) && func_36(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_COORDS(iLocal_246), 1) > 500f))
			{
				func_45();
			}
			else if (iLocal_240 && func_34())
			{
				HUD::CLEAR_PRINTS();
				StringCopy(&Var0, "PKUP_", 32);
				StringConCat(&Var0, &(Local_35.f_12), 32);
				func_83(&Var0, 7500, 1);
				iLocal_240 = 0;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_243) && !PED::IS_PED_INJURED(iLocal_243))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_242) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_242, false)) && !iLocal_66)
		{
			if (!func_33(iLocal_243, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_241);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_242, 31, 10000);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_242, PLAYER::PLAYER_PED_ID(), 8, 30f, Local_35.f_16, 1000f, 0f, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_241);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_243, iLocal_241);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_241);
				iLocal_66 = 1;
			}
		}
		else if (((func_33(iLocal_243, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) && TASK::GET_SEQUENCE_PROGRESS(iLocal_243) < 1) && !iLocal_67) && (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_35, Local_35.f_3, Local_35.f_6, false, true, 0) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 124)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 125)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 126)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 23)) || func_32(Global_113079.f_35, 134217728)))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_243, iLocal_242, PLAYER::PLAYER_PED_ID(), 8, 30f, Local_35.f_16, 1000f, 0f, true);
			iLocal_67 = 1;
		}
		else if ((!func_33(iLocal_243, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) && !func_33(iLocal_243, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1)) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_243, false))
		{
			if (!func_33(iLocal_243, joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_243, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, true);
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(iLocal_243, iLocal_242, true) && (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_242, 0, 3000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_242, 1, 3000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_242, 2, 8000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_242, 3, 8000)))
		{
			if (!func_33(iLocal_243, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_VEHICLE(iLocal_243, iLocal_242, 0);
			}
		}
		if (Local_35.f_20)
		{
			if (!bLocal_68)
			{
				if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_243, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_242, PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 124)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 125)) || PED::HAS_PED_RECEIVED_EVENT(iLocal_243, 126))
				{
					bLocal_68 = true;
				}
			}
			if (bLocal_68)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_243, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_243) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_243, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
				{
					if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_243))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iLocal_243, joaat("WEAPON_MICROSMG"));
						TASK::TASK_DRIVE_BY(iLocal_243, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_242) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_242, false))
		{
			if (!iLocal_70)
			{
				if ((func_33(iLocal_243, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) && TASK::GET_SEQUENCE_PROGRESS(iLocal_243) == 1) || func_33(iLocal_243, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAKINGS", false, -1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_242, 0, false, 0);
						iLocal_70 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244) && !PED::IS_PED_INJURED(iLocal_244))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_244, false) && !func_33(iLocal_244, joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_244, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_243) && !PED::IS_PED_INJURED(iLocal_243))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iLocal_243) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_243, false))
		{
			if (func_86())
			{
				func_79();
			}
		}
		else if (func_39(PLAYER::PLAYER_PED_ID(), iLocal_243, 1) < 15f)
		{
			switch (iLocal_236)
			{
				case 0:
					if (func_31())
					{
						MemCopy(&Var0, {Local_35.f_12}, 8);
						StringConCat(&Var0, "_1", 32);
						MemCopy(&Var0, {func_30(&Var0)}, 8);
						if (func_7(&uLocal_71, &cLocal_238, &Var0, 8, 0, 0, 0))
						{
							StringCopy(&Var0, "", 32);
							iLocal_236++;
						}
					}
					break;
				
				case 1:
					if (func_31())
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_243))
						{
							if (func_5() == 0)
							{
								StringCopy(&Var0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&Var0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_243, &Var0, 10);
							iLocal_237 = -1;
							StringCopy(&Var0, "", 32);
							iLocal_236++;
						}
					}
					break;
				
				case 2:
					if (func_31() && (MISC::GET_GAME_TIMER() - iLocal_237) > 3500)
					{
						MemCopy(&Var0, {Local_35.f_12}, 8);
						StringConCat(&Var0, "_3", 32);
						MemCopy(&Var0, {func_30(&Var0)}, 8);
						if (func_7(&uLocal_71, &cLocal_238, &Var0, 8, 0, 0, 0))
						{
							StringCopy(&Var0, "", 32);
							iLocal_236++;
						}
					}
					break;
				
				case 3:
					if (func_31() && (MISC::GET_GAME_TIMER() - iLocal_237) > 1500)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_243))
						{
							if (func_5() == 0)
							{
								StringCopy(&Var0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&Var0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_243, &Var0, 10);
							iLocal_237 = -1;
							StringCopy(&Var0, "", 32);
							iLocal_236 = (iLocal_236 - 1);
						}
					}
					break;
				}
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
	{
		if (PED::IS_PED_INJURED(iLocal_243))
		{
			if (Local_35.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_35.f_27)
		{
			if (iLocal_250 == -1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_243))
				{
					iLocal_250 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_250) > 2000)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_243, false, false, false, false, false, false, false, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		if (PED::IS_PED_INJURED(iLocal_244))
		{
			if (Local_35.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_35.f_27)
		{
			if (iLocal_251 == -1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_244))
				{
					iLocal_251 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_251) > 2000)
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_244, false, false, false, false, false, false, false, false);
			}
		}
	}
}

void func_2(int iParam0)//Position - 0xDAF
{
	Global_113079.f_220 = iParam0;
}

void func_3(int iParam0, char* sParam1, int iParam2)//Position - 0xDBF
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)//Position - 0xDD6
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

int func_5()//Position - 0xFC6
{
	return func_6(Global_113079.f_20, Global_113079.f_29);
}

int func_6(int iParam0, int iParam1)//Position - 0xFDE
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1044
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)//Position - 0x1092
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_28();
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
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_26();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_18();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_17())
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
				if (!Global_79248)
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
			if (func_16())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_14();
		func_9();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_28();
	}
	return 0;
}

void func_9()//Position - 0x1360
{
	if (!func_10())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_10()//Position - 0x1397
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (func_11(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)//Position - 0x13FA
{
	return func_12(iParam0, 20);
}

var func_12(int iParam0, int iParam1)//Position - 0x140A
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_13()//Position - 0x1422
{
	return -1;
}

void func_14()//Position - 0x142B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_15()//Position - 0x145C
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_16()//Position - 0x14F1
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x1518
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
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

void func_18()//Position - 0x15B1
{
	if (func_25(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_19();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

int func_19()//Position - 0x1653
{
	func_20();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_20()//Position - 0x166C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_25(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_21(Global_114370.f_2366.f_539.f_4321))
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

bool func_21(int iParam0)//Position - 0x1769
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x1775
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x17B2
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)//Position - 0x17D7
{
	return Global_2139[iParam0 /*29*/];
}

bool func_25(int iParam0)//Position - 0x17E6
{
	return Global_43922 == iParam0;
}

void func_26()//Position - 0x17F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

bool func_27(int iParam0, int iParam1)//Position - 0x184B
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

void func_28()//Position - 0x1883
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x18DA
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = uParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

struct<4> func_30(char* sParam0)//Position - 0x1930
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_19())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_31()//Position - 0x197E
{
	if (func_86())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

bool func_32(var uParam0, int iParam1)//Position - 0x19A4
{
	return (uParam0 && iParam1) != 0;
}

int func_33(int iParam0, int iParam1, bool bParam2)//Position - 0x19B3
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x19F9
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_86() && !func_35())
		{
			return 0;
		}
	}
	return 1;
}

int func_35()//Position - 0x1A29
{
	if (Global_23177 == 1)
	{
		return 1;
	}
	return 0;
}

float func_36(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x1A40
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

void func_37()//Position - 0x1A7A
{
	func_94(1);
	func_93();
}

void func_38(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x1A8B
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), false))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

float func_39(int iParam0, int iParam1, bool bParam2)//Position - 0x1BE4
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

void func_40(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1C42
{
	func_41(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
}

void func_41(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)//Position - 0x1C8A
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_43(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_42(0, iVar0);
		Global_1669875.f_1177[iVar0] = uParam0;
		Global_1669875.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1669875.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1669875.f_1177.f_194[iVar0] = uParam3;
		Global_1669875.f_1177.f_183[iVar0] = uParam4;
		Global_1669875.f_1177.f_227[iVar0] = uParam5;
		Global_1669875.f_1177.f_238[iVar0 /*3*/] = fParam6;
		Global_1669875.f_1177.f_238[iVar0 /*3*/].f_1 = fParam7;
		Global_1669875.f_1177.f_269[iVar0] = iParam8;
		Global_1669875.f_1177.f_280[iVar0] = uParam9;
		Global_1669875.f_1177.f_323[iVar0] = iParam10;
		Global_1669875.f_1177.f_334[iVar0] = iParam11;
		Global_1669875.f_1177.f_345[iVar0] = iParam12;
		Global_1669875.f_1177.f_356[iVar0] = iParam13;
		Global_1669875.f_1172 = 1;
		Global_1669875.f_1177.f_367[iVar0] = iParam14;
		Global_1669875.f_1177.f_378[iVar0] = iParam15;
		Global_1669875.f_1177.f_389[iVar0] = iParam16;
		Global_1669875.f_1177.f_400[iVar0] = iParam17;
		Global_1669875.f_1177.f_411[iVar0] = iParam18;
		Global_1669875.f_1177.f_422[iVar0] = iParam19;
		Global_1669875.f_1177.f_433[iVar0] = iParam20;
		Global_1669875.f_1177.f_444[iVar0] = iParam21;
		Global_1669875.f_1177.f_455[iVar0] = iParam22;
		Global_1669875.f_1177.f_466[iVar0] = iParam23;
		Global_1669875.f_1177.f_477[iVar0] = iParam24;
		Global_1669875.f_1177.f_205[iVar0] = iParam25;
		Global_1669875.f_1177.f_216[iVar0] = iParam39;
		Global_1669875.f_1177.f_488[iVar0] = iParam26;
		Global_1669875.f_1177.f_499[iVar0] = iParam27;
		Global_1669875.f_1177.f_510[iVar0] = iParam28;
		Global_1669875.f_1177.f_521[iVar0] = iParam29;
		Global_1669875.f_1177.f_532[iVar0] = iParam30;
		Global_1669875.f_1177.f_543[iVar0] = iParam31;
		Global_1669875.f_1177.f_554[iVar0] = iParam32;
		Global_1669875.f_1177.f_565[iVar0] = iParam33;
		Global_1669875.f_1177.f_576[iVar0] = iParam34;
		Global_1669875.f_1177.f_587[iVar0] = iParam35;
		Global_1669875.f_1177.f_598[iVar0] = iParam36;
		Global_1669875.f_1177.f_609[iVar0] = iParam37;
		Global_1669875.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_42(int iParam0, int iParam1)//Position - 0x1F51
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_43(int iParam0, int iParam1)//Position - 0x1F6A
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1F80
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_45()//Position - 0x1FA5
{
	func_94(2);
	func_93();
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1FB6
{
	uParam0->f_6 = 0;
	func_47(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_47(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x1FD8
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (func_73(iVar0))
	{
		func_72();
	}
	if (func_71(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_66(uParam0, bParam7, bParam9, 0))
			{
				func_62(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_51(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_73(iVar0))
							{
								func_82(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									func_50(1);
								}
							}
						}
					}
				}
			}
			else if (func_51(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_73(iVar0))
						{
							func_82(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_50(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_73(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_77(uParam0, iVar0, 1);
				}
			}
			if (!func_66(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_49(uParam0))
				{
					func_48(uParam0);
				}
			}
		}
	}
	else
	{
		func_77(uParam0, iVar0, 0);
	}
}

void func_48(var uParam0)//Position - 0x2345
{
	if (func_71(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_49(var uParam0)//Position - 0x23AE
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_50(bool bParam0)//Position - 0x23D9
{
	switch (Global_43922)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_114370.f_10052.f_100++;
			}
			return Global_114370.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_114370.f_10052.f_101++;
			}
			return Global_114370.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_114370.f_10052.f_102++;
			}
			return Global_114370.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_51(char* sParam0)//Position - 0x2483
{
	if (!func_52(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_73(sParam0)) || func_73("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43922)
	{
		case 0:
		case 3:
			if (func_50(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)//Position - 0x251C
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_61(0))
	{
		return 0;
	}
	if (func_60())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61219)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_59() || func_58(Global_4718592.f_183007)) || func_57())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_56(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_55(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955039)
	{
		return 0;
	}
	if (func_53(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)//Position - 0x2775
{
	if (iParam0 != func_13())
	{
		if (func_54(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575079 && iParam0 == PLAYER::PLAYER_ID()) && func_54(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)//Position - 0x27DB
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
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)//Position - 0x283B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_56(int iParam0, bool bParam1)//Position - 0x289D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_57()//Position - 0x2922
{
	return Global_2684312.f_19;
}

bool func_58(int iParam0)//Position - 0x2930
{
	return iParam0 == 51;
}

var func_59()//Position - 0x293D
{
	return Global_2684312.f_18;
}

bool func_60()//Position - 0x294B
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_61(int iParam0)//Position - 0x2960
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

void func_62(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x29B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582004 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_77(uParam0, 0, 0);
	}
	if (func_65(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_63())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_63()//Position - 0x2AC7
{
	return func_64(PLAYER::PLAYER_ID());
}

int func_64(int iParam0)//Position - 0x2AD7
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_65(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x2AF6
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_66(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2B3D
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_49(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_70(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_69(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_68(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_68(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_49(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_52(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_72();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_67(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2EA9
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2EFB
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_69(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2F44
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2FA3
{
	if (!func_52(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x2FF9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_72()//Position - 0x3054
{
	MISC::SET_BIT(&Global_8684, 4);
}

bool func_73(char* sParam0)//Position - 0x3064
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x3077
{
	int iVar0;
	
	iVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x30C1
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)//Position - 0x3165
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_77(var uParam0, int iParam1, bool bParam2)//Position - 0x317C
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2738587.f_4697, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_73(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_73(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_78(int iParam0)//Position - 0x3256
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

void func_79()//Position - 0x328E
{
	Global_21032 = 0;
	func_80();
}

void func_80()//Position - 0x329E
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

int func_81(int iParam0)//Position - 0x32BF
{
	if (((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 42)) || (PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_RECEIVED_EVENT(iParam0, 29))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	else
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)//Position - 0x3338
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_83(char* sParam0, int iParam1, int iParam2)//Position - 0x334F
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_84(int iParam0, bool bParam1, bool bParam2)//Position - 0x3368
{
	return func_75(iParam0, !bParam1, bParam2);
}

void func_85(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x337B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

int func_86()//Position - 0x3416
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_87()//Position - 0x3438
{
	func_88(&Local_35);
	PED::ADD_RELATIONSHIP_GROUP("relThief", &iLocal_249);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_249);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_249, joaat("PLAYER"));
	switch (func_19())
	{
		case 0:
			func_85(&uLocal_71, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_85(&uLocal_71, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_85(&uLocal_71, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
}

void func_88(var uParam0)//Position - 0x34C9
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	MISC::SET_BIT(&iVar3, 3);
	MISC::SET_BIT(&iVar3, 4);
	MISC::SET_BIT(&iVar4, 3);
	MISC::SET_BIT(&iVar4, 4);
	MISC::SET_BIT(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("A_M_M_EastSA_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("A_M_M_Paparazzi_01");
			uParam0->f_9 = joaat("A_M_M_Paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_92())
	{
		case 5:
			*uParam0 = { 178.01172f, 202.3507f, 102.90367f };
			uParam0->f_3 = { 514.58386f, 78.78811f, 111.18641f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.57962f, -636.2899f, 25.437576f };
			uParam0->f_3 = { 400.24683f, -826.16113f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.4578f, -238.45432f, 40.36241f };
			uParam0->f_3 = { -1475.6691f, -127.62102f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { -602.37854f, 258.27438f, 79.029305f };
				uParam0->f_3 = { -469.06403f, 244.8735f, 97.885765f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.76657f, 248.21959f, 97.885635f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.94427f };
				uParam0->f_3 = { 297.21042f, 336.02692f, 120.35248f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.32254f, 364.9949f, 104.51527f };
				uParam0->f_3 = { 320.3688f, 325.28772f, 120.26892f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { -221.65858f, 6310.1313f, 28.405548f };
				uParam0->f_3 = { -319.82867f, 6211.6646f, 46.195206f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.9814f, 28.428225f };
				uParam0->f_3 = { -371.56567f, 6164.586f, 46.189396f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.7651f, 4159.022f, 29.590107f };
			uParam0->f_3 = { -2140.8867f, 4437.0566f, 72.618996f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_89(int iParam0, struct<3> Param1)//Position - 0x3829
{
	switch (iParam0)
	{
		case 5:
			if (func_90(func_91(Param1 - Vector(0f, 174.58f, 335.5574f)), func_91(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_90(func_91(Param1 - Vector(0f, -711.023f, 393.0992f)), func_91(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_90(func_91(Param1 - Vector(0f, -215.2002f, -1423.2535f)), func_91(Vector(0f, -215.1443f, -1420.7098f) - Vector(0f, -215.2002f, -1423.2535f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_90(func_91(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_91(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_90(func_91(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_91(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_90(func_91(Param1 - Vector(0f, 6256.4995f, -299.9329f)), func_91(Vector(0f, 6255.1787f, -301.1977f) - Vector(0f, 6256.4995f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_90(func_91(Param1 - Vector(0f, 4287.951f, -2200.2039f)), func_91(Vector(0f, 4289.739f, -2199.2598f) - Vector(0f, 4287.951f, -2200.2039f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_90(struct<3> Param0, struct<3> Param3)//Position - 0x3A50
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_91(struct<3> Param0)//Position - 0x3A71
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_92()//Position - 0x3AB0
{
	return Global_113079.f_20;
}

void func_93()//Position - 0x3ABE
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
	{
		if (!PED::IS_PED_INJURED(iLocal_243))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_243, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_243);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		if (!PED::IS_PED_INJURED(iLocal_244))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_244, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_244);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_242))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_242);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_245))
	{
		OBJECT::REMOVE_PICKUP(iLocal_245);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_246))
	{
		OBJECT::REMOVE_PICKUP(iLocal_246);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_247))
	{
		HUD::REMOVE_BLIP(&iLocal_247);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_248))
	{
		HUD::REMOVE_BLIP(&iLocal_248);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_35.f_7, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_249);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_94(int iParam0)//Position - 0x3B7F
{
	Global_113079.f_22 = iParam0;
}

