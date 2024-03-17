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
	struct<62> Local_35 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 16;
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
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	char[] cLocal_272[8] = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	var uLocal_279[2] = { 0, 0 };
	var uLocal_282[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_289[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_296[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
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
	iLocal_270 = -1;
	iLocal_271 = -1;
	StringCopy(&cLocal_272, "PMGAUD", 8);
	iLocal_274 = -1;
	iLocal_275 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_62(2);
		func_61();
	}
	func_54();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_53())
		{
			iLocal_271 = -1;
		}
		else if (iLocal_271 == -1)
		{
			iLocal_271 = MISC::GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()//Position - 0xBF
{
	struct<2> Var0;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	switch (iLocal_34)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("PGANG", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_113079.f_225[iVar4]))
					{
						uLocal_282[iVar4] = Global_113079.f_225[iVar4];
						Global_113079.f_225[iVar4] = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_282[iVar4], true, true);
						if (iLocal_305 == 0)
						{
							iLocal_305 = ENTITY::GET_ENTITY_MODEL(uLocal_282[iVar4]);
						}
						if (!PED::IS_PED_INJURED(uLocal_282[iVar4]))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_282[iVar4], iLocal_303);
							PED::SET_PED_COMBAT_MOVEMENT(uLocal_282[iVar4], 1);
							PED::SET_PED_COMBAT_RANGE(uLocal_282[iVar4], 0);
							PED::SET_PED_ACCURACY(uLocal_282[iVar4], 5);
							PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_282[iVar4], 1);
							func_52(uLocal_282[iVar4], 20f, 5f, 90f, -80f, 80f, 1101004800, 1125515264);
							if (iLocal_104 == 0)
							{
								PED::SET_PED_COMBAT_MOVEMENT(uLocal_282[iVar4], 2);
							}
							uLocal_296[iVar4] = func_49(uLocal_282[iVar4], 1, 145);
						}
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_113079.f_222[iVar4]))
					{
						uLocal_279[iVar4] = Global_113079.f_222[iVar4];
						Global_113079.f_222[iVar4] = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_279[iVar4], true, true);
						if (iLocal_304 == 0)
						{
							iLocal_304 = ENTITY::GET_ENTITY_MODEL(uLocal_279[iVar4]);
						}
					}
					iVar4++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_35.f_61), 16);
				func_48(&Var0, 7500, 1);
				iLocal_34++;
			}
			break;
		
		case 1:
			bVar6 = true;
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (!bVar5)
				{
					if (uLocal_289[iVar4] > 0)
					{
						bVar5 = true;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar4]) && !PED::IS_PED_INJURED(uLocal_282[iVar4]))
				{
					bVar6 = false;
				}
				iVar4++;
			}
			if (bVar5)
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
			if (bVar6)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_276)
					{
						func_48("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
						iLocal_276 = 1;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_104)
	{
		case 1:
			func_45();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar4]))
		{
			if (PED::IS_PED_INJURED(uLocal_282[iVar4]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_282[iVar4]));
			}
			else if (func_6(uLocal_282[iVar4], func_7(func_8()), 1) > 100f && func_5(PLAYER::PLAYER_PED_ID(), uLocal_282[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_278 && func_6(uLocal_282[iVar4], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_277)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_35.f_61), 16);
						func_48(&Var0, 7500, 1);
						iLocal_277 = 1;
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar4]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar4]) || PED::IS_PED_INJURED(uLocal_282[iVar4]))
			{
				HUD::REMOVE_BLIP(&(uLocal_296[iVar4]));
			}
		}
		iVar4++;
	}
}

int func_2()//Position - 0x41A
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_53() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()//Position - 0x44A
{
	if (Global_23177 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x461
{
	func_62(2);
	func_61();
}

float func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x472
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

float func_6(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x4D0
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

Vector3 func_7(int iParam0)//Position - 0x50A
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
			break;
		
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
			break;
		
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
			break;
		
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
			break;
		
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
			break;
		
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
			break;
		
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
			break;
		
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
			break;
		
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
			break;
		
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
			break;
		
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()//Position - 0x6BD
{
	return Global_113079.f_20;
}

void func_9()//Position - 0x6CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar0]) && !PED::IS_PED_INJURED(uLocal_282[iVar0]))
		{
			switch (uLocal_289[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_270 = 0;
						uLocal_289[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar1]) && !PED::IS_PED_INJURED(uLocal_282[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_289[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_289[iVar0] > 0)
			{
				iVar3 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_282[iVar0], &iVar3, true);
				if (iVar3 == joaat("WEAPON_MOLOTOV"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_282[iVar0], joaat("WEAPON_MICROSMG"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_282[iVar0], joaat("WEAPON_MICROSMG"), true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_282[iVar0], joaat("WEAPON_MICROSMG"), -1, true, true);
					}
				}
			}
			switch (uLocal_289[iVar0])
			{
				case 0:
					func_39(uLocal_282[iVar0], Local_35[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
					{
						TASK::TASK_COMBAT_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1))
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, true, false);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_270)
	{
		case 0:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_282[iVar4]))
				{
					func_34(uLocal_282[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_270++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar5 = { func_33("START") };
				if (func_10(&uLocal_105, &cLocal_272, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_270++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_282[iVar4]))
				{
					func_34(uLocal_282[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_270++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (MISC::GET_GAME_TIMER() - iLocal_271) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				func_34(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_270++;
			}
			break;
		
		case 4:
			if (func_37() && (MISC::GET_GAME_TIMER() - iLocal_271) > 1000)
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_282[iVar4]))
				{
					if (uLocal_289[iVar4] == 2)
					{
						func_34(uLocal_282[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_270 = (iLocal_270 - 1);
					}
					else
					{
						func_34(uLocal_282[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_270 = (iLocal_270 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA37
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA85
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()//Position - 0xD53
{
	if (!func_13())
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

int func_13()//Position - 0xD8A
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_16())
	{
		return 0;
	}
	if (func_14(PLAYER::PLAYER_ID()))
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

bool func_14(int iParam0)//Position - 0xDED
{
	return func_15(iParam0, 20);
}

var func_15(int iParam0, int iParam1)//Position - 0xDFD
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_16()//Position - 0xE15
{
	return -1;
}

void func_17()//Position - 0xE1E
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

void func_18()//Position - 0xE4F
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

int func_19()//Position - 0xEE4
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0xF0B
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

void func_21()//Position - 0xFA4
{
	if (func_28(14))
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
		Global_20813 = func_22();
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

int func_22()//Position - 0x1046
{
	func_23();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_23()//Position - 0x105F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_28(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_24(Global_114370.f_2366.f_539.f_4321))
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

bool func_24(int iParam0)//Position - 0x115C
{
	return iParam0 < 3;
}

int func_25(int iParam0)//Position - 0x1168
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)//Position - 0x11A5
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)//Position - 0x11CA
{
	return Global_2139[iParam0 /*29*/];
}

bool func_28(int iParam0)//Position - 0x11D9
{
	return Global_43922 == iParam0;
}

void func_29()//Position - 0x11E7
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

bool func_30(int iParam0, int iParam1)//Position - 0x123E
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

void func_31()//Position - 0x1276
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x12CD
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

struct<4> func_33(char* sParam0)//Position - 0x1323
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_22())
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

void func_34(int iParam0, char* sParam1, int iParam2)//Position - 0x136E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_35(iParam2), 1);
}

int func_35(int iParam0)//Position - 0x1385
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

int func_36()//Position - 0x1574
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar1]) && !PED::IS_PED_INJURED(uLocal_282[iVar1]))
		{
			fVar3 = func_5(uLocal_282[iVar1], PLAYER::PLAYER_PED_ID(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_37()//Position - 0x15E8
{
	if (func_53())
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

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x160E
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

void func_39(int iParam0, struct<3> Param1)//Position - 0x1654
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (!func_42(Param1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true);
		if (iVar0 == joaat("WEAPON_MOLOTOV"))
		{
			if (iVar1 != joaat("WEAPON_MOLOTOV"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_MOLOTOV"), true);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, func_40(Param1, 1f), 0, false);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar2, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) != 0)
		{
			TASK::TASK_SHOOT_AT_COORD(iParam0, Param1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_STAND_STILL")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_STAND_STILL")) != 0)
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

Vector3 func_40(struct<3> Param0, float fParam3)//Position - 0x1838
{
	struct<3> Var0;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return Param0 + func_41(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_41(struct<3> Param0, float fParam3)//Position - 0x186A
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_42(struct<3> Param0)//Position - 0x18A1
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x18CB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar0]) && !PED::IS_PED_INJURED(uLocal_282[iVar0])) && uLocal_289[iVar0] > 0)
		{
			iLocal_278 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_44(Global_113079.f_35, 134217728) || PED::CAN_PED_SEE_HATED_PED(uLocal_282[iParam0], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_282[iParam0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_282[iParam0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f, true)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f, true, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(uLocal_282[iParam0], true), 15f)) || iLocal_278)
	{
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, int iParam1)//Position - 0x1A38
{
	return (uParam0 && iParam1) != 0;
}

void func_45()//Position - 0x1A47
{
	int iVar0;
	var uVar1[2];
	int iVar4;
	char cVar5[24];
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char cVar20[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_279[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_279[iVar0], false))
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar4]) && !PED::IS_PED_INJURED(uLocal_282[iVar4]))
				{
					if (Local_35[iVar4 /*10*/].f_8 != -1 && Local_35[iVar4 /*10*/].f_8 == iVar0)
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_282[iVar4], uLocal_279[iVar0], false))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar4++;
			}
		}
		StringCopy(&cVar5, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar5, iVar0, 24);
		StringConCat(&cVar5, "]: ", 24);
		StringIntConCat(&cVar5, uVar1[iVar0], 24);
		GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar5, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar0]) && !PED::IS_PED_INJURED(uLocal_282[iVar0]))
		{
			switch (uLocal_289[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_270 = 0;
						uLocal_289[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_35[iVar0 /*10*/].f_8 == -1)
					{
						if (!PED::GET_PED_CONFIG_FLAG(uLocal_282[iVar0], 286, true))
						{
							PED::SET_PED_CONFIG_FLAG(uLocal_282[iVar0], 286, true);
						}
					}
					else
					{
						bVar12 = false;
						if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_282[iVar0], false))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iVar0], false);
							iVar11 = 0;
							while (iVar11 <= 1)
							{
								if (!bVar12)
								{
									if (uLocal_279[iVar11] == iVar13)
									{
										if (uVar1[iVar11] == 0)
										{
											bVar12 = true;
										}
									}
								}
								iVar11++;
							}
							if (bVar12)
							{
								if (iLocal_274 == -1 && func_46(uLocal_282[iVar0], 0) == -1)
								{
									iLocal_274 = iVar0;
								}
								uLocal_289[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_274 != -1)
					{
						iLocal_275 = iLocal_274;
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iLocal_274]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_282[iLocal_274], false))
							{
								iVar14 = PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iLocal_274], false);
							}
						}
					}
					if ((((((((iLocal_274 == -1 || !ENTITY::DOES_ENTITY_EXIST(uLocal_282[iLocal_274])) || PED::IS_PED_INJURED(uLocal_282[iLocal_274])) || !ENTITY::DOES_ENTITY_EXIST(iVar14)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar14, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 0, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 1, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 4, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar14, 5, true))
					{
						iVar15 = -1;
						bVar16 = false;
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar11]) && !PED::IS_PED_INJURED(uLocal_282[iVar11]))
							{
								if (func_46(uLocal_282[iVar11], 0) == -1)
								{
									if (iVar15 == -1 || !bVar16)
									{
										bVar16 = true;
										iVar15 = iVar11;
									}
								}
								else if (!bVar16)
								{
									iVar15 = iVar11;
								}
							}
							iVar11++;
						}
						if (iVar15 != -1)
						{
							iLocal_274 = iVar15;
						}
					}
					break;
			}
			if (uLocal_289[iVar0] > 0)
			{
				iVar17 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_282[iVar0], &iVar17, true);
				if (iVar17 == joaat("WEAPON_MOLOTOV"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_282[iVar0], joaat("WEAPON_MICROSMG"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_282[iVar0], joaat("WEAPON_MICROSMG"), true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_282[iVar0], joaat("WEAPON_MICROSMG"), -1, true, true);
					}
				}
			}
			switch (uLocal_289[iVar0])
			{
				case 0:
					func_39(uLocal_282[iVar0], Local_35[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_35[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
						{
							TASK::TASK_COMBAT_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (uLocal_279[Local_35[iVar0 /*10*/].f_8] == 0 || Local_35[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_282[iVar0], uLocal_279[Local_35[iVar0 /*10*/].f_8], false))
					{
						if (func_5(uLocal_282[iVar0], uLocal_279[Local_35[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(uLocal_282[iVar0], uLocal_279[Local_35[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, false);
								TASK::TASK_COMBAT_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_282[iVar0], uLocal_279[Local_35[iVar0 /*10*/].f_8], -1, Local_35[iVar0 /*10*/].f_9, 2f, 1, 0, 0);
						}
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_279[Local_35[iVar0 /*10*/].f_8], false))
						{
							if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								TASK::TASK_COMBAT_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY"), 1))
					{
						TASK::TASK_VEHICLE_SHOOT_AT_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 20f);
					}
					break;
				
				case 2:
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_282[iVar0], false))
					{
						if (iLocal_274 == iVar0)
						{
							if (func_46(uLocal_282[iVar0], 0) != -1)
							{
								if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_282[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iVar0], false), false);
								}
							}
							else if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || iLocal_274 != iLocal_275)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_282[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iVar0], false), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 1000f, 0f, true);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_282[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
							{
								if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_282[iVar0]))
								{
									TASK::TASK_DRIVE_BY(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						else if (func_46(uLocal_282[iVar0], 0) == -1)
						{
							if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || iLocal_274 != iLocal_275)
							{
								TASK::TASK_VEHICLE_ESCORT(uLocal_282[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iVar0], false), PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iLocal_274], false), -1, 40f, 786468, -1f, 20, 20f);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_282[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
							{
								if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_282[iVar0]))
								{
									TASK::TASK_DRIVE_BY(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						else
						{
							iVar18 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iVar0], false), -1, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar18) || PED::IS_PED_INJURED(iVar18))
							{
								if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_282[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_282[iVar0], false), false);
								}
							}
							else if (!func_38(uLocal_282[iVar0], joaat("SCRIPT_TASK_DRIVE_BY"), 1) || iLocal_274 != iLocal_275)
							{
								TASK::TASK_DRIVE_BY(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_270)
	{
		case 0:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_282[iVar19]))
				{
					func_34(uLocal_282[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_270++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar20 = { func_33("START") };
				if (func_10(&uLocal_105, &cLocal_272, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_270++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_282[iVar19]))
				{
					func_34(uLocal_282[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_270++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (MISC::GET_GAME_TIMER() - iLocal_271) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				func_34(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_270++;
			}
			break;
		
		case 4:
			if (func_37() && (MISC::GET_GAME_TIMER() - iLocal_271) > 1000)
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_282[iVar19]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_282[iVar19], false))
					{
						func_34(uLocal_282[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_270 = (iLocal_270 - 1);
					}
					else
					{
						func_34(uLocal_282[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_270 = (iLocal_270 - 1);
					}
				}
			}
			break;
	}
}

int func_46(int iParam0, bool bParam1)//Position - 0x23A8
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

void func_47()//Position - 0x242D
{
	func_62(1);
	func_61();
}

void func_48(char* sParam0, int iParam1, int iParam2)//Position - 0x243E
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_49(int iParam0, bool bParam1, int iParam2)//Position - 0x2457
{
	int iVar0;
	
	iVar0 = func_50(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)//Position - 0x24A1
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_51(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)//Position - 0x2545
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x255C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
		PED::SET_PED_ID_RANGE(iParam0, fParam6);
		PED::SET_COMBAT_FLOAT(iParam0, 10, fParam7);
	}
}

int func_53()//Position - 0x25AA
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_54()//Position - 0x25CC
{
	int iVar0;
	
	switch (func_22())
	{
		case 0:
			func_60(&uLocal_105, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_60(&uLocal_105, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_60(&uLocal_105, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	iLocal_104 = func_58();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_57(&(Local_35[0 /*10*/]), func_8(), 0);
	func_57(&(Local_35[1 /*10*/]), func_8(), 1);
	func_57(&(Local_35[2 /*10*/]), func_8(), 2);
	func_57(&(Local_35[3 /*10*/]), func_8(), 3);
	func_57(&(Local_35[4 /*10*/]), func_8(), 4);
	func_57(&(Local_35[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_35.f_61), func_56(iVar0), 16);
	StringCopy(&(Local_35.f_65), func_55(iVar0), 16);
	PED::ADD_RELATIONSHIP_GROUP("relGang", &iLocal_303);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_303);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_303, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_303, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_303, joaat("AMBIENT_GANG_MEXICAN"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MEXICAN"), iLocal_303);
			break;
		
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_BALLAS"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_303, joaat("AMBIENT_GANG_BALLAS"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_BALLAS"), iLocal_303);
			break;
		
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_303, joaat("AMBIENT_GANG_WEICHENG"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_WEICHENG"), iLocal_303);
			break;
	}
}

char* func_55(int iParam0)//Position - 0x27BA
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_56(int iParam0)//Position - 0x2805
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_57(var uParam0, int iParam1, int iParam2)//Position - 0x2850
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.8325f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312.9843f, 6250.1147f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326.1756f, 6268.3384f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323.9344f, 6259.6587f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.3945f, 42.7414f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.3203f, 4275.0464f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.3765f, 48.4082f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200.848f, 4268.1904f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.5752f, 4275.1294f, 49.0669f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202.8179f, 4294.1494f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.7834f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196.2708f, 4265.0645f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.1833f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204.4917f, 4290.0586f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.0168f, 4292.6694f, 54.873f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_58()//Position - 0x2FB7
{
	return func_59(Global_113079.f_20, Global_113079.f_29);
}

int func_59(var uParam0, int iParam1)//Position - 0x2FCF
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2FFD
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

void func_61()//Position - 0x3098
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_282[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_282[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_282[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_282[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_296[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_279[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_279[iVar0]));
		}
		iVar0++;
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_304, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_305, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_62(int iParam0)//Position - 0x3167
{
	Global_113079.f_22 = iParam0;
}

