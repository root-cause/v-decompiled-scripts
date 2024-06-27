#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<6> Local_70 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_76 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100[2] = { 0, 0 };
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	int iLocal_119[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	char* sLocal_152 = NULL;
	var uLocal_153 = 16;
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
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
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
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	StringCopy(&Local_70, "", 24);
	Local_116 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_133 = -1;
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_56))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_56);
			}
		}
		func_227();
	}
	if (func_226(256, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_184(Local_49, -1, 0, 0, 0))
	{
		func_181(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_47 == 4) || iLocal_66 > 18)
		{
			if (!func_180())
			{
				if (func_179())
				{
					func_227();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DO", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (!bLocal_48)
						{
							if (func_167())
							{
								func_227();
							}
							if (!bLocal_57)
							{
								func_166();
							}
							if (bLocal_57)
							{
								func_165();
							}
						}
						if (bLocal_48)
						{
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						func_157();
						if (iLocal_67 > 3)
						{
							if (!iLocal_90 && !func_156())
							{
								func_155(&uLocal_153, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_90 = 1;
							}
						}
						switch (iLocal_47)
						{
							case 0:
								func_151();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!iLocal_97)
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_104, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_104, 20f, 20f, 20f, false, true, 0))
									{
										func_150();
										func_141(1);
										iLocal_97 = 1;
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_104, 50f, 50f, 50f, false, true, 0))
									{
										func_139();
									}
									if (!PED::IS_PED_INJURED(iLocal_56))
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_56, Local_61, 30f, 30f, 30f, false, true, 0))
										{
											iLocal_47 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_137();
								if (iLocal_66 > 18)
								{
									func_136();
								}
								else if (!func_156())
								{
									func_136();
								}
								break;
							
							case 7:
								func_137();
								func_132();
								break;
							
							case 4:
								func_137();
								func_82();
								if (func_81(Local_110))
								{
									func_58(0);
									func_56();
									SYSTEM::WAIT(0);
									func_155(&uLocal_153, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_54())
								{
									func_58(0);
									func_56();
									SYSTEM::WAIT(0);
									func_155(&uLocal_153, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_87)
								{
									if (func_53())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_110, 23f, 60f, 20f, false, true, 0))
										{
											func_58(0);
											func_56();
											SYSTEM::WAIT(0);
											if (!func_156())
											{
												func_155(&uLocal_153, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_87 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_52();
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_55))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "f_attack_end", 3))
							{
								func_50(iLocal_55, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24, 0);
							}
						}
						if ((func_49() && !func_48()) && iLocal_46 != 2)
						{
							if (!PED::IS_PED_INJURED(iLocal_56))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_56, Local_116, 5f, 5f, 5f, false, true, 0))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
									{
										iLocal_119[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_119[8], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
									}
									func_47(0);
									SYSTEM::WAIT(0);
									func_56();
									iLocal_46 = 2;
								}
							}
						}
						if (func_46())
						{
							func_52();
						}
						break;
					
					case 2:
						if (func_45())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
							{
								PED::DELETE_PED(&iLocal_56);
							}
							func_15();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_227();
		}
	}
}

void func_1()//Position - 0x4AC
{
	int iVar0;
	
	if (iLocal_148 && !iLocal_147)
	{
		func_3(0);
		if (Global_33191)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_2();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
		{
			iLocal_131 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_GOLFCLUB"), ENTITY::GET_ENTITY_COORDS(iLocal_119[8], true), ENTITY::GET_ENTITY_ROTATION(iLocal_119[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, true, 0);
			OBJECT::DELETE_OBJECT(&(iLocal_119[8]));
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_61 - Vector(10f, 10f, 10f), Local_61 + Vector(10f, 10f, 10f), true, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_150, joaat("PLAYER"));
		if (bLocal_57)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_94);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_55);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_103))
		{
			HUD::REMOVE_BLIP(&iLocal_103);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_100[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_100[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_56, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_56);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_56);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_56, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_119)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_119[iVar0], true, true);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		iLocal_147 = 1;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_61, 80f, 80f, 80f, false, true, 0) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_131)) || !(ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]) && !OBJECT::DOES_PICKUP_EXIST(iLocal_131)))
	{
		func_227();
	}
}

void func_2()//Position - 0x697
{
	Global_33187 = 0;
	Global_33188 = 0;
	Global_33190 = 0;
	Global_33191 = 0;
	Global_33192 = 0;
}

void func_3(bool bParam0)//Position - 0x6B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)//Position - 0x6D6
{
	if (bParam1)
	{
		if (!func_14(iParam0, 2, 1))
		{
			func_13(iParam0, 2, 1);
		}
	}
	else if (func_14(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x70D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_12() == 0)
		{
			iVar0 = func_10(func_11(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_6(func_11(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x77D
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_7(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_7(int iParam0, var uParam1)//Position - 0x7AB
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_8(uParam1));
}

int func_8(var uParam0)//Position - 0x7C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_9()//Position - 0x7F4
{
	return Global_1574926;
}

int func_10(int iParam0, int iParam1)//Position - 0x800
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_7(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_11(int iParam0)//Position - 0x82F
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_12()//Position - 0xBD7
{
	return Global_32948;
}

void func_13(int iParam0, int iParam1, bool bParam2)//Position - 0xBE2
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_12() == 0)
		{
			iVar0 = func_10(func_11(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_6(func_11(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_14(int iParam0, int iParam1, bool bParam2)//Position - 0xC52
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_12() == 0)
		{
			return BitTest(func_10(func_11(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_15()//Position - 0xCB2
{
	while (func_156())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_44())
	{
		SYSTEM::WAIT(0);
	}
	Global_113969.f_18577.f_383 = func_43() + 1;
	func_19(-1, 0);
	func_16();
	iLocal_46 = 3;
}

void func_16()//Position - 0xCF6
{
	func_17();
}

int func_17()//Position - 0xD03
{
	if (func_18(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_18(bool bParam0)//Position - 0xD4E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_19(int iParam0, int iParam1)//Position - 0xD76
{
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_40(iParam0))
	{
		func_39(iParam0, iParam1);
		if (!func_38(51))
		{
			func_28("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_31(), 0, 138, 0);
			func_27(51);
		}
		if (func_26(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_25(iParam0, iParam1) != 322)
		{
			func_21(func_25(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113957 = iParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_20(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_20(7);
			}
			else
			{
				func_20(1);
			}
		}
	}
}

void func_20(int iParam0)//Position - 0xE79
{
	Global_113955 = iParam0;
}

void func_21(int iParam0, var uParam1, var uParam2)//Position - 0xE87
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
		func_24((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_22();
	}
}

void func_22()//Position - 0xF6D
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_23(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_12() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_17();
				}
			}
		}
	}
}

int func_23(int iParam0, int iParam1)//Position - 0x142B
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

void func_24(int iParam0, bool bParam1, int iParam2)//Position - 0x147C
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_25(int iParam0, int iParam1)//Position - 0x149A
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

int func_26(int iParam0)//Position - 0x180E
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

void func_27(int iParam0)//Position - 0x183D
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
		MISC::SET_BIT(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_28(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x187F
{
	func_29(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_29(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x189F
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
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_30();
	}
}

void func_30()//Position - 0x1A71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_31()//Position - 0x1B88
{
	func_32();
	switch (Global_113969.f_2366.f_539.f_4321)
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

void func_32()//Position - 0x1BCE
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_36(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_33(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_34(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_33(int iParam0)//Position - 0x1CCB
{
	return Global_44042 == iParam0;
}

bool func_34(int iParam0)//Position - 0x1CD9
{
	return iParam0 < 3;
}

int func_35(int iParam0)//Position - 0x1CE5
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)//Position - 0x1D22
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)//Position - 0x1D47
{
	return Global_2169[iParam0 /*29*/];
}

int func_38(int iParam0)//Position - 0x1D56
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
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_39(int iParam0, int iParam1)//Position - 0x1D96
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_40(int iParam0)//Position - 0x1DB1
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

int func_41()//Position - 0x1E62
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_42(Var0);
	return uVar16;
}

int func_42(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1E7F
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

int func_43()//Position - 0x2059
{
	return (Global_113969.f_10019.f_21 + Global_113969.f_18577.f_380);
}

int func_44()//Position - 0x2075
{
	return 1;
}

int func_45()//Position - 0x207E
{
	if (Global_33188)
	{
		func_20(4);
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x2096
{
	if (PED::IS_PED_INJURED(iLocal_55) && PED::IS_PED_INJURED(iLocal_56))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0)//Position - 0x20B7
{
	Global_23297 = iParam0;
}

int func_48()//Position - 0x20C4
{
	if (Global_113969.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_49()//Position - 0x20E0
{
	return Global_33187;
}

void func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x20EB
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_51(iParam3), bParam4);
}

int func_51(int iParam0)//Position - 0x2105
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

void func_52()//Position - 0x22F5
{
	iLocal_46 = 3;
}

int func_53()//Position - 0x2300
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_149 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_149, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_56, iLocal_149))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_54()//Position - 0x2343
{
	if (func_55() == 2)
	{
		if (func_49())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_33192)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_33192 = 1;
					if (!Global_33191)
					{
						Global_33191 = 1;
						return 1;
					}
				}
			}
			else if (Global_33192)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_33192 = 0;
			}
		}
	}
	return 0;
}

int func_55()//Position - 0x23BE
{
	func_32();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_56()//Position - 0x23D7
{
	Global_21152 = 0;
	func_57();
}

void func_57()//Position - 0x23E7
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_58(bool bParam0)//Position - 0x2408
{
	if (bParam0)
	{
		if (iLocal_69)
		{
			if (func_65(&uLocal_153, "REDO2AU", &Local_76, &Local_70, 8, 0, 0))
			{
				iLocal_69 = 0;
			}
		}
	}
	else if ((!iLocal_69 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_63())
	{
		Local_76 = { func_62() };
		Local_70 = { func_61() };
		func_59();
		iLocal_69 = 1;
	}
}

void func_59()//Position - 0x2464
{
	Global_21152 = 0;
	func_60();
}

void func_60()//Position - 0x2474
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23297 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

struct<6> func_61()//Position - 0x2498
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_23296);
		if (iVar6 > -1)
		{
			return Global_21154[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_62()//Position - 0x24DE
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_63()//Position - 0x2502
{
	if (((((((func_64("REDO2_DRP") || func_64("REDO2_UV")) || func_64("REDO2_UV2")) || func_64("REDO2_CULT")) || func_64("REDO2_NEAR")) || func_64("REDO2_GETOUT")) || func_64("REDO2_JACK")) || func_64("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_64(char* sParam0)//Position - 0x2579
{
	var uVar0;
	
	if (func_156())
	{
		MemCopy(&uVar0, {func_62()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x25A1
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_66(sParam2, iParam4, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x25F5
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_79();
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
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_77();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_76();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_75())
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
				if (!Global_79389)
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
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_72();
		func_67();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_79();
	}
	return 0;
}

void func_67()//Position - 0x28C3
{
	if (!func_68())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_68()//Position - 0x28FA
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_71())
	{
		return 0;
	}
	if (func_69(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_69(int iParam0)//Position - 0x295D
{
	return func_70(iParam0, 20);
}

var func_70(int iParam0, int iParam1)//Position - 0x296D
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_71()//Position - 0x2985
{
	return -1;
}

void func_72()//Position - 0x298E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_73()//Position - 0x29BE
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_74()//Position - 0x2A53
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x2A7A
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_76()//Position - 0x2B13
{
	if (func_33(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_55();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

void func_77()//Position - 0x2BB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_78(int iParam0, int iParam1)//Position - 0x2C0B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_79()//Position - 0x2C43
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2C9A
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_81(struct<3> Param0)//Position - 0x2CF0
{
	if (func_55() == 2)
	{
		if (func_49() && !Global_33190)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_33190 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_82()//Position - 0x2D7D
{
	switch (iLocal_68)
	{
		case 0:
			if (iLocal_66 > 18)
			{
				iLocal_68++;
			}
			else if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_56, 1f);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
				{
					if (iLocal_66 < 19)
					{
						if (func_155(&uLocal_153, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_68++;
						}
					}
					else
					{
						iLocal_68++;
					}
				}
			}
			break;
		
		case 1:
			func_128();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_56))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_119[8]));
						}
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_56))
					{
						func_126();
						func_120();
						if (func_155(&uLocal_153, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_68++;
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_56, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_120();
			func_119();
			func_128();
			func_118();
			if (SYSTEM::TIMERB() > 1500)
			{
				func_117();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_110, 10f, 10f, 10f, false, true, 0))
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_56, Local_110, Global_20, true, true, 0) && func_116(1, 0, 1))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_98))
						{
							HUD::REMOVE_BLIP(&iLocal_98);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_99))
						{
							HUD::REMOVE_BLIP(&iLocal_99);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_56, false))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_56, false), 10.5f, 3, false);
							iLocal_68++;
						}
						else
						{
							iLocal_68 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_115();
			if (bLocal_143)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_15();
			}
			break;
		
		case 4:
			func_83();
			if (bLocal_143)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_15();
			}
			break;
	}
}

void func_83()//Position - 0x2F82
{
	switch (iLocal_141)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_59();
			if (func_155(&uLocal_153, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_141++;
			}
			break;
		
		case 1:
			iLocal_141++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_56);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_113, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
				PED::SET_PED_KEEP_TASK(iLocal_56, true);
				iLocal_142 = MISC::GET_GAME_TIMER() + 4000;
				iLocal_141++;
			}
			break;
		
		case 3:
			if (iLocal_142 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_141++;
			}
			break;
		
		case 4:
			if (!func_156())
			{
				func_114("DOM_GOLF" /* GXT: Castro will soon be available to play golf. */, -1);
				func_113(&(Global_113969.f_18982), 16);
				if (func_55() == 0)
				{
					func_112(&(Global_113969.f_18982.f_24), 1);
				}
				else if (func_55() == 1)
				{
					func_112(&(Global_113969.f_18982.f_24), 4);
				}
				else if (func_55() == 2)
				{
					func_112(&(Global_113969.f_18982.f_24), 2);
				}
				func_84(func_55(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_141++;
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_143 = true;
			}
			break;
	}
}

void func_84(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x310E
{
	int iVar0;
	int iVar1;
	
	if (func_111(iParam0) == 3)
	{
		return;
	}
	if (func_111(iParam0) == 4)
	{
		return;
	}
	func_85(func_111(iParam0), 1, iParam1, iParam2, 0);
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

int func_85(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x31E0
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_110();
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
					func_109(99, 1);
					func_108(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_108(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_108(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_94(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_92(5))
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
							func_108(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_108(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_108(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_92(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_108(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_108(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_108(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_108(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_108(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_108(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_108(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_108(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_108(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_108(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_108(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_108(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_108(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_108(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_108(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_92(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_108(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_108(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_108(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_108(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_108(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_108(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_91(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_109(95, iParam3);
					break;
				
				case 1:
					func_109(97, iParam3);
					break;
				
				case 2:
					func_109(96, iParam3);
					break;
			}
			func_109(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_88(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_88(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_108(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_108(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_108(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
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
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_87(iParam0);
	if (Global_44042 == 15)
	{
		func_86(0);
	}
	return 1;
}

void func_86(bool bParam0)//Position - 0x37DF
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
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_87(int iParam0)//Position - 0x3A61
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
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

void func_88(bool bParam0)//Position - 0x3ABB
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_24(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_24(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_24(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_24(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_6(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_6(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_6(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_6(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_6(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_6(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_90() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_90() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_89(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_89(bool bParam0)//Position - 0x3C33
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

int func_90()//Position - 0x3D34
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_91(int iParam0)//Position - 0x3D41
{
	func_109(93, iParam0);
	func_109(29, iParam0);
	func_109(30, iParam0);
}

int func_92(int iParam0)//Position - 0x3D61
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
		return func_93(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_93(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_93(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_93(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_10(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_10(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_10(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_10(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_10(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_10(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_90() /*5570*/].f_681.f_10, iParam0);
}

bool func_93(int iParam0, int iParam1)//Position - 0x3F01
{
	if (iParam1 == -1)
	{
		iParam1 = func_9();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_94(bool bParam0)//Position - 0x3F1D
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
		func_23(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_95(27, 1);
	return 1;
}

int func_95(int iParam0, int iParam1)//Position - 0x3FD4
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_96(iParam0, iParam1);
}

int func_96(int iParam0, int iParam1)//Position - 0x3FEF
{
	if (func_33(14) && !func_107(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_106(&Global_4543384))
	{
		if (func_104(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_97(&Global_4543384, iParam0))
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

int func_97(var uParam0, int iParam1)//Position - 0x408E
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_33(14) && !func_107(iParam1))
	{
		return 0;
	}
	if (func_104(uParam0, iParam1))
	{
		return 0;
	}
	if (func_103(uParam0) < 0f)
	{
		func_102(uParam0, 0);
	}
	func_100(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_98(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_98(var uParam0, int iParam1)//Position - 0x413F
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_33(14) && !func_107(iParam1))
	{
		return 0;
	}
	if (func_104(uParam0, iParam1))
	{
		return 0;
	}
	if (func_103(uParam0) < 0f)
	{
		func_102(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_99(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_99(var uParam0, int iParam1)//Position - 0x41BA
{
	return (*uParam0)[iParam1] == 78;
}

void func_100(var uParam0)//Position - 0x41CB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_101(uParam0, iVar0);
		iVar0++;
	}
	func_102(uParam0, (Global_4543383 - 0.5f));
}

void func_101(var uParam0, int iParam1)//Position - 0x41FF
{
	(*uParam0)[iParam1] = 78;
}

void func_102(var uParam0, float fParam1)//Position - 0x420F
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

float func_103(var uParam0)//Position - 0x422C
{
	return uParam0->f_80;
}

bool func_104(var uParam0, int iParam1)//Position - 0x4238
{
	return func_105(uParam0, iParam1) != -1;
}

int func_105(var uParam0, int iParam1)//Position - 0x424A
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

bool func_106(var uParam0)//Position - 0x4277
{
	return uParam0->f_79 == 1;
}

int func_107(int iParam0)//Position - 0x4285
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

void func_108(int iParam0, int iParam1)//Position - 0x42D5
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_109(int iParam0, int iParam1)//Position - 0x42F8
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_110()//Position - 0x4355
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_111(int iParam0)//Position - 0x43CA
{
	return Global_2169[iParam0 /*29*/].f_17;
}

void func_112(var uParam0, int iParam1)//Position - 0x43DB
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_113(var uParam0, int iParam1)//Position - 0x43EC
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_114(char* sParam0, int iParam1)//Position - 0x43FF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_115()//Position - 0x4416
{
	switch (iLocal_141)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_59();
			if (func_155(&uLocal_153, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_141++;
			}
			break;
		
		case 1:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_141++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_141++;
			break;
		
		case 3:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_56);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_PAUSE(0, 300);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_113, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
				PED::SET_PED_KEEP_TASK(iLocal_56, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
				{
					iLocal_119[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_119[8], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
				}
				iLocal_142 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_141++;
			}
			break;
		
		case 4:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (iLocal_142 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_142 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_141++;
				}
			}
			break;
		
		case 5:
			if (iLocal_142 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_141++;
			}
			break;
		
		case 6:
			if (!func_156())
			{
				func_114("DOM_GOLF" /* GXT: Castro will soon be available to play golf. */, -1);
				func_113(&(Global_113969.f_18982), 16);
				if (func_55() == 0)
				{
					func_112(&(Global_113969.f_18982.f_24), 1);
				}
				else if (func_55() == 1)
				{
					func_112(&(Global_113969.f_18982.f_24), 4);
				}
				else if (func_55() == 2)
				{
					func_112(&(Global_113969.f_18982.f_24), 2);
				}
				func_84(func_55(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_141++;
			}
			break;
		
		case 7:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_143 = true;
			}
			break;
	}
}

int func_116(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4660
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_117()//Position - 0x4745
{
	if (!func_63())
	{
		func_58(1);
	}
	if (!func_156())
	{
		switch (iLocal_139)
		{
			case 0:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 1:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 2:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 3:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 4:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 5:
				func_155(&uLocal_153, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 6:
				iLocal_140 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_139++;
				break;
			
			case 7:
				if (iLocal_140 < MISC::GET_GAME_TIMER())
				{
					if (func_55() == 0)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_55() == 1)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_55() == 2)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_139++;
				}
				break;
			
			case 8:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 9:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 10:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 11:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 12:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 13:
				iLocal_140 = MISC::GET_GAME_TIMER() + 600;
				iLocal_139++;
				break;
			
			case 14:
				if (iLocal_140 < MISC::GET_GAME_TIMER())
				{
					if (func_55() == 0)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_55() == 1)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_55() == 2)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_139++;
				}
				break;
			
			case 15:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_139++;
				break;
			
			case 16:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 17:
				iLocal_140 = MISC::GET_GAME_TIMER() + 800;
				iLocal_139++;
				break;
			
			case 18:
				if (iLocal_140 < MISC::GET_GAME_TIMER())
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_139++;
				}
				break;
			
			case 19:
				if (func_55() == 0)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_55() == 1)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_55() == 2)
				{
					func_155(&uLocal_153, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_139++;
				break;
			
			case 20:
				func_155(&uLocal_153, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_139++;
				break;
			}
	}
}

void func_118()//Position - 0x4C70
{
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		if (!iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_56, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_58(0);
					func_56();
					SYSTEM::WAIT(0);
					func_155(&uLocal_153, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_82 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_56, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_82 = 0;
			}
		}
		if (!iLocal_83)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_58(0);
				func_56();
				SYSTEM::WAIT(0);
				func_155(&uLocal_153, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_83 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_83 = 0;
		}
		if (!iLocal_84)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_58(0);
				func_56();
				SYSTEM::WAIT(0);
				func_155(&uLocal_153, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_84 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_84 = 0;
		}
	}
}

void func_119()//Position - 0x4D97
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_134 == 0)
		{
			iLocal_134 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_135 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_135 = 0;
		iLocal_134 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 60000)
	{
		func_56();
		SYSTEM::WAIT(0);
		func_155(&uLocal_153, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_56, Local_113, 200f, 200f, 200f, false, true, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_56, Local_113, 1f, -1, 0.25f, 0, 40000f);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_56, 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_56, true);
			PED::REMOVE_PED_FROM_GROUP(iLocal_56);
		}
		func_52();
	}
}

void func_120()//Position - 0x4E4F
{
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_56, false)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_100[0]))
				{
					uLocal_100[0] = func_124(iLocal_56, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_98))
				{
					HUD::REMOVE_BLIP(&iLocal_98);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_100[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_100[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_98))
				{
					iLocal_98 = func_122(Local_110, 1);
				}
				if (func_55() == 2 && !func_48())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_99))
					{
						iLocal_99 = func_122(Local_116, 0);
						HUD::SET_BLIP_SPRITE(iLocal_99, 269 /*RADAR_ALTRUIST*/);
						func_121();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_100[0]))
			{
				uLocal_100[0] = func_124(iLocal_56, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_98))
			{
				HUD::REMOVE_BLIP(&iLocal_98);
			}
		}
	}
}

void func_121()//Position - 0x4F6E
{
	if (func_55() == 2)
	{
		if (!Global_33189)
		{
			func_114("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_33189 = 1;
		}
	}
}

int func_122(struct<3> Param0, bool bParam3)//Position - 0x4F92
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_123(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_123(bool bParam0, float fParam1, float fParam2)//Position - 0x4FBE
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_124(int iParam0, bool bParam1, int iParam2)//Position - 0x4FD5
{
	int iVar0;
	
	iVar0 = func_125(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_125(int iParam0, bool bParam1, bool bParam2)//Position - 0x501F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_123(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_123(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_123(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_126()//Position - 0x50C3
{
	int iVar0;
	
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_55);
	func_127(&uLocal_153, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_119)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_119[iVar0]));
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT("random@domestic");
}

void func_127(var uParam0, int iParam1)//Position - 0x50FC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_128()//Position - 0x5119
{
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_131())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_56))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_56);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_56, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_56, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_56, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_56, 0, 0);
				}
				if (!iLocal_89)
				{
					func_58(0);
					func_56();
					SYSTEM::WAIT(0);
					if (!func_156())
					{
						if (!func_130())
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_89 = 1;
					}
				}
			}
			else
			{
				iLocal_89 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_56, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_56, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_56);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_56))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_56, func_129());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_56, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_56, 0);
		}
	}
}

int func_129()//Position - 0x523A
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_130()//Position - 0x524A
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_131()//Position - 0x52B5
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_132()//Position - 0x53D7
{
	switch (iLocal_67)
	{
		case 0:
			if (!func_156())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_131())
					{
						if (func_55() == 0)
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_55() == 1)
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_55() == 2)
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_67 = 2;
					}
					else
					{
						if (func_55() == 0)
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_55() == 1)
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_55() == 2)
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_67++;
					}
				}
				else
				{
					if (func_55() == 0)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_55() == 1)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_55() == 2)
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_67++;
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!func_131())
				{
					if (!func_156())
					{
						func_155(&uLocal_153, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_137 = MISC::GET_GAME_TIMER();
						iLocal_67++;
					}
				}
				else
				{
					iLocal_67++;
				}
			}
			else if (!func_156())
			{
				func_155(&uLocal_153, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_137 = MISC::GET_GAME_TIMER();
				iLocal_67++;
			}
			break;
		
		case 2:
			iLocal_138 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 12f, 12f, 5f, false, true, 2))
				{
					if (func_131())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_150, joaat("PLAYER"));
						if (func_135("REDO2_WT"))
						{
							func_56();
							SYSTEM::WAIT(0);
						}
						iLocal_67++;
					}
					else if (!func_156() && !iLocal_85)
					{
						if (!func_130())
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_155(&uLocal_153, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_85 = 1;
					}
				}
			}
			if (iLocal_137 != 0)
			{
				if ((iLocal_138 - iLocal_137) > 60000)
				{
					if (func_155(&uLocal_153, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						SYSTEM::WAIT(2000);
						if (!PED::IS_PED_INJURED(iLocal_56))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_USE_MOBILE_PHONE_TIMED(0, -1);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
							PED::SET_PED_KEEP_TASK(iLocal_56, true);
							SYSTEM::WAIT(3000);
							iLocal_47 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				if (iLocal_66 > 18)
				{
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_119[8], true) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_134(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_119[8], true)));
				TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
				SYSTEM::SETTIMERB(0);
				iLocal_67++;
			}
			break;
		
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_56) && !ENTITY::IS_ENTITY_DEAD(iLocal_119[8], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_56, iLocal_119[8], false);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_67 = 7;
					}
				}
				else if (SYSTEM::TIMERB() > 10000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_119[8], true), 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_119[8]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
						TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
						iLocal_67 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_56) && !ENTITY::IS_ENTITY_DEAD(iLocal_119[8], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_56, iLocal_119[8], false);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_67++;
					}
				}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_119[8], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_56, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_56, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_56, 0);
					func_133();
					iLocal_47 = 4;
				}
			}
			break;
	}
}

void func_133()//Position - 0x5944
{
	if (!func_48())
	{
		if (func_55() == 2)
		{
			Global_33187 = 1;
		}
	}
}

float func_134(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x5960
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_135(char* sParam0)//Position - 0x597A
{
	var uVar0;
	
	if (func_156())
	{
		MemCopy(&uVar0, {func_61()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_136()//Position - 0x59A2
{
	if (!iLocal_96)
	{
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_56);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 18000, 0, 2);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 15000, 0, 2);
				iLocal_96 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
		{
			if (!bLocal_136)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_56);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
					bLocal_136 = true;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_56);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
					bLocal_136 = true;
				}
			}
			if (bLocal_136)
			{
				if (bLocal_52)
				{
					func_59();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_56))
					{
						if (!func_156())
						{
							if (PED::IS_PED_FACING_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 90f))
							{
								if (func_155(&uLocal_153, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_47 = 7;
								}
							}
						}
					}
				}
				else if (!func_156())
				{
					if (func_155(&uLocal_153, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_47 = 7;
					}
				}
			}
		}
	}
}

void func_137()//Position - 0x5B45
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 15f, 15f, 15f, false, true, 0))
		{
			if (func_138())
			{
				func_47(0);
				iLocal_88 = 0;
			}
		}
		else if (func_156() && !iLocal_88)
		{
			func_47(1);
			iLocal_88 = 1;
		}
	}
}

int func_138()//Position - 0x5B9E
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

void func_139()//Position - 0x5BB5
{
	switch (iLocal_66)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_56) && !PED::IS_PED_INJURED(iLocal_55))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_55, true), 3f))
				{
					if (!func_156())
					{
						if (func_155(&uLocal_153, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_56, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, false, false, false);
							iLocal_66++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_119[8], iLocal_55, PED::GET_PED_BONE_INDEX(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
				iLocal_66++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_55, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						ENTITY::DETACH_ENTITY(iLocal_119[8], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_119[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_66++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_86 && ENTITY::DOES_ENTITY_EXIST(iLocal_119[8]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_119[8]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_119[8], "RE_DOMESTIC_SOUNDSET", false, 0);
					iLocal_86 = 1;
				}
			}
			if (!func_156() || func_138())
			{
				func_155(&uLocal_153, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_86 = 0;
				iLocal_66++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_55, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_119[9], iLocal_55, PED::GET_PED_BONE_INDEX(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
						iLocal_66++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_156() || func_138())
			{
				func_155(&uLocal_153, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_66++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_55, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						ENTITY::DETACH_ENTITY(iLocal_119[9], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_119[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_66++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_86 && ENTITY::DOES_ENTITY_EXIST(iLocal_119[9]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_119[9]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_119[9], "RE_DOMESTIC_SOUNDSET", false, 0);
					iLocal_86 = 1;
				}
			}
			if (!func_156() || func_138())
			{
				func_155(&uLocal_153, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_86 = 0;
				iLocal_66++;
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_55, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_119[10], iLocal_55, PED::GET_PED_BONE_INDEX(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
						iLocal_66++;
					}
				}
			}
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_55) && ENTITY::DOES_ENTITY_EXIST(iLocal_119[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_55, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						ENTITY::DETACH_ENTITY(iLocal_119[10], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_119[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_66++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_86 && ENTITY::DOES_ENTITY_EXIST(iLocal_119[10]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_119[10]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_119[10], "RE_DOMESTIC_SOUNDSET", false, 0);
					iLocal_86 = 1;
				}
			}
			if (!func_156() || func_138())
			{
				func_155(&uLocal_153, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_86 = 0;
				iLocal_66++;
			}
			break;
		
		case 11:
			if (!PED::IS_PED_INJURED(iLocal_55) && !PED::IS_PED_INJURED(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_55, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_55, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_55, iLocal_56, 0);
					}
				}
			}
			if (!func_156() || func_138())
			{
				func_155(&uLocal_153, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_66 = 14;
			}
			break;
		
		case 14:
			if (!func_156())
			{
				if (func_155(&uLocal_153, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_140();
					iLocal_66++;
				}
			}
			break;
		
		case 15:
			if (!func_156())
			{
				if (func_155(&uLocal_153, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_66++;
				}
			}
			break;
		
		case 16:
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_107, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
				iLocal_66++;
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_55, Local_107, 1f, 1f, 5f, false, true, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_55))
					{
						PED::DELETE_PED(&iLocal_55);
					}
				}
			}
			if (iLocal_91 < MISC::GET_GAME_TIMER())
			{
				if (!func_156())
				{
					if (func_155(&uLocal_153, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_91 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_92++;
					}
				}
			}
			if (iLocal_92 > 0)
			{
				iLocal_66++;
			}
			break;
		
		case 18:
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (!func_156())
				{
					if (func_155(&uLocal_153, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						TASK::TASK_WANDER_STANDARD(iLocal_56, 40000f, 0);
						iLocal_66++;
					}
				}
			}
			break;
	}
	if (!bLocal_52)
	{
		if (iLocal_66 > 2 && iLocal_66 < 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 6f, 4f, 5f, false, true, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 12f, 12f, 5f, false, true, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID())))
				{
					TASK::CLEAR_PED_TASKS(iLocal_56);
					func_140();
					if (iLocal_66 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						func_59();
						while (func_156())
						{
							SYSTEM::WAIT(0);
						}
						if (func_155(&uLocal_153, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_52 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_66 > 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 6f, 8f, 5f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_100[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_100[0], true);
					}
					TASK::CLEAR_PED_TASKS(iLocal_56);
					func_140();
					if (iLocal_66 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						func_56();
						while (func_156())
						{
							SYSTEM::WAIT(0);
						}
						if (func_155(&uLocal_153, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_52 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_54)
	{
		if (iLocal_53 < MISC::GET_GAME_TIMER())
		{
			func_59();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				func_140();
			}
			iLocal_47 = 3;
		}
	}
}

void func_140()//Position - 0x6371
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_107, 1f, -1, 40000f, 0.5f);
		TASK::TASK_PLAY_ANIM(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_93);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
		PED::SET_PED_KEEP_TASK(iLocal_55, true);
		iVar0 = 0;
		while (iVar0 < iLocal_119)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_119[iVar0], true, true);
			}
			iVar0++;
		}
	}
}

int func_141(int iParam0)//Position - 0x63FC
{
	if (func_144())
	{
		Global_113959 = 1;
		Global_113956 = MISC::GET_GAME_TIMER();
		if (func_26(Global_113958))
		{
			func_142(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_26(Global_113958))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_142(int iParam0)//Position - 0x644F
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_114(func_143(iParam0), -1);
					Global_113969.f_24998.f_2++;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_114(func_143(iParam0), -1);
					Global_113969.f_24998.f_3++;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_114(func_143(iParam0), -1);
					Global_113969.f_24998.f_4++;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_143(int iParam0)//Position - 0x652A
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

int func_144()//Position - 0x656C
{
	switch (func_145(&Global_33008, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_145(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x65A2
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_149(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_147(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_146(uParam0, iParam4);
		}
	}
	return 2;
}

void func_146(var uParam0, int iParam1)//Position - 0x66D9
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_147(int iParam0)//Position - 0x6728
{
	return func_148(iParam0, Global_44042);
}

int func_148(int iParam0, int iParam1)//Position - 0x6739
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

int func_149(int iParam0)//Position - 0x691A
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_147(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_150()//Position - 0x693C
{
	if (HUD::DOES_BLIP_EXIST(iLocal_103))
	{
		HUD::REMOVE_BLIP(&iLocal_103);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_100[0]))
	{
		uLocal_100[0] = func_124(iLocal_56, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_100[0], false);
	}
}

void func_151()//Position - 0x6978
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	MISC::CLEAR_AREA(Local_61, 2f, true, false, false, false);
	MISC::CLEAR_AREA(Local_58, 2f, true, false, false, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_61 - Vector(10f, 10f, 10f), Local_61 + Vector(10f, 10f, 10f), false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, false, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_61 - Vector(10f, 10f, 10f), Local_61 + Vector(10f, 10f, 10f), false, true, true, true, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_110 - Vector(3f, 2f, 2f), Local_110 + Vector(3f, 2f, 2f), false, true, true, true, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(53.1038f, 56.6649f, -1366.4806f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.4806f) + Vector(1f, 1f, 1f), false, true, true, true, 1);
	PED::ADD_RELATIONSHIP_GROUP("rghDomestic", &iLocal_150);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_150, joaat("PLAYER"));
	iLocal_55 = PED::CREATE_PED(26, iLocal_94, Local_58, fLocal_64, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_55, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 8, false);
	TASK::TASK_PLAY_ANIM(iLocal_55, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_150);
	func_154(iLocal_55, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_94);
	PED::SET_PED_CONFIG_FLAG(iLocal_55, 185, true);
	iLocal_56 = PED::CREATE_PED(26, iLocal_95, Local_61, fLocal_65, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 1, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 65536, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_56, 185, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_56, 206, true);
	PED::SET_PED_HELMET(iLocal_56, false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_56, false);
	TASK::TASK_PLAY_ANIM(iLocal_56, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, iLocal_150);
	func_154(iLocal_56, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_56, iLocal_55, -1, 0, 2);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_55, iLocal_56, -1, 0, 2);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 2, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 8, 0, 0, 0);
	func_153();
	MISC::SET_BIT(&uLocal_132, 5);
	if (func_55() == 0)
	{
		func_152(&uLocal_153, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (func_55() == 1)
	{
		func_152(&uLocal_153, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (func_55() == 2)
	{
		func_152(&uLocal_153, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_152(&uLocal_153, 3, iLocal_56, "REDOCastro", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_56, sLocal_151);
	func_152(&uLocal_153, 4, iLocal_55, "NATHALIA", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_55, sLocal_152);
	SYSTEM::SETTIMERA(0);
	iLocal_148 = 1;
}

void func_152(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x6CD6
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

void func_153()//Position - 0x6D71
{
	iLocal_119[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[0], -13.7262f, 0.5001f, -0.5886f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[0], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_tshirt_02"));
	iLocal_119[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[1], -7.3906f, -12.8136f, -63.733f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[1], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_02"));
	iLocal_119[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[2], -7.041683f, 10.172982f, 45.761696f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[2], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_01"));
	iLocal_119[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[3], -8.5884f, 12.6893f, 57.1792f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[3], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_01"));
	iLocal_119[4] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[4], -16.4886f, 2.4979f, -3.8769f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[4], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_02"));
	iLocal_119[5] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[5], -3.5946f, -15.0978f, -75.5026f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[5], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shirt_01"));
	iLocal_119[6] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_03"), -472.75427f, 542.30225f, 119.76284f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[6], 6.402527f, -15.686654f, -104.13083f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[6], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_03"));
	iLocal_119[7] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_119[7], -8.3642f, 1.9344f, 2.6889f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_119[7], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_01"));
	iLocal_119[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	iLocal_119[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_rub_binbag_01"));
	iLocal_119[10] = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_golf_bag_01"));
}

void func_154(int iParam0, char* sParam1, int iParam2)//Position - 0x7056
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_51(iParam2), 1);
}

bool func_155(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x706D
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_66(sParam2, iParam3, 0);
}

int func_156()//Position - 0x70BB
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_157()//Position - 0x70DD
{
	if (!PED::IS_PED_INJURED(iLocal_56) && !PED::IS_PED_INJURED(iLocal_55))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_56, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_55, PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_56) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_56)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_55)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_55))
				{
					if (iLocal_133 == -1)
					{
						iLocal_133 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_133 = -1;
				}
			}
			if ((iLocal_133 != -1 && MISC::GET_GAME_TIMER() > iLocal_133 + 500) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_164();
			}
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_164();
	}
	if (iLocal_47 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (func_163(iLocal_56))
			{
				func_162();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, false, true, 0))
	{
		func_161();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		if (func_160(iLocal_55))
		{
			func_158();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (func_160(iLocal_56) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), true))
		{
			func_158();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		if (func_160(iLocal_55) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
		{
			func_158();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 250f, 250f, 250f, false, true, 0) || ENTITY::IS_ENTITY_IN_WATER(iLocal_56))
		{
			iLocal_47 = 11;
		}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_158();
	}
}

void func_158()//Position - 0x72A0
{
	func_56();
	SYSTEM::WAIT(0);
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_155(&uLocal_153, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_155(&uLocal_153, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::CLEAR_PED_TASKS(iLocal_56);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
		PED::SET_PED_KEEP_TASK(iLocal_56, true);
		SYSTEM::WAIT(3000);
	}
	func_159();
	SYSTEM::WAIT(0);
	func_52();
	iLocal_47 = 11;
}

void func_159()//Position - 0x733D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		TASK::TASK_COWER(iLocal_55, -1);
		PED::SET_PED_KEEP_TASK(iLocal_55, true);
		iVar0 = 0;
		while (iVar0 < iLocal_119)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_119[iVar0], true, true);
			}
			iVar0++;
		}
	}
}

int func_160(int iParam0)//Position - 0x7389
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_161()//Position - 0x73B7
{
	func_159();
	func_56();
	SYSTEM::WAIT(0);
	func_155(&uLocal_153, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::CLEAR_PED_TASKS(iLocal_56);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
		PED::SET_PED_KEEP_TASK(iLocal_56, true);
		SYSTEM::WAIT(3000);
	}
	func_52();
	iLocal_47 = 11;
}

void func_162()//Position - 0x742F
{
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::CLEAR_PED_TASKS(iLocal_56);
		TASK::TASK_SMART_FLEE_COORD(iLocal_56, ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_56, true);
	}
	iLocal_47 = 11;
}

int func_163(int iParam0)//Position - 0x746E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1.5f, 1.5f, 8f, false, true, 2))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_164()//Position - 0x74C3
{
	func_56();
	SYSTEM::WAIT(0);
	func_155(&uLocal_153, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_93);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_93);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_93);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_93);
		PED::SET_PED_KEEP_TASK(iLocal_56, true);
		SYSTEM::WAIT(3000);
	}
	func_52();
	iLocal_47 = 11;
}

void func_165()//Position - 0x753A
{
	STREAMING::REQUEST_MODEL(iLocal_94);
	STREAMING::REQUEST_MODEL(iLocal_95);
	STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
	STREAMING::REQUEST_ANIM_DICT("random@domestic");
	STREAMING::REQUEST_ANIM_DICT("random@security_van");
	if ((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_94) && STREAMING::HAS_MODEL_LOADED(iLocal_95)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_iron_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_rub_binbag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_bag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_tshirt_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shirt_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@domestic")) && STREAMING::HAS_ANIM_DICT_LOADED("random@security_van"))
	{
		bLocal_48 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_94);
		STREAMING::REQUEST_MODEL(iLocal_95);
		STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
		STREAMING::REQUEST_ANIM_DICT("random@domestic");
		STREAMING::REQUEST_ANIM_DICT("random@security_van");
	}
}

void func_166()//Position - 0x770B
{
	Local_104 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_94 = joaat("A_F_Y_Business_02");
	iLocal_95 = joaat("A_M_Y_Golfer_01");
	sLocal_151 = "REDOCastro";
	sLocal_152 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_58 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_64 = 348.9152f;
	Local_61 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_65 = 156.0666f;
	Local_107 = { -469.082f, 535.0479f, 123.3553f };
	Local_110 = { -1378.2733f, 40.2254f, 52.6774f };
	Local_113 = { -1368.1881f, 57.2309f, 52.7045f };
	bLocal_57 = true;
}

int func_167()//Position - 0x77B0
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_178())
		{
			return 0;
		}
	}
	if (func_174())
	{
		return 1;
	}
	if (func_168(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_168(float fParam0, bool bParam1)//Position - 0x7836
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_34(func_55()))
		{
			iVar36 = func_31();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113969.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar32 /*6*/], 3))
				{
					func_169(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_169(int iParam0, var uParam1)//Position - 0x78E7
{
	switch (iParam0)
	{
		case 0:
			func_170(uParam1, "Abigail1", func_172(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 1:
			func_170(uParam1, "Abigail2", func_172(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 2:
			func_170(uParam1, "Barry1", func_172(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 3:
			func_170(uParam1, "Barry2", func_172(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 4:
			func_170(uParam1, "Barry3", func_172(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 5:
			func_170(uParam1, "Barry3A", func_172(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 6:
			func_170(uParam1, "Barry3C", func_172(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 7:
			func_170(uParam1, "Barry4", func_172(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_171(iParam0), 0, 0);
			break;
		
		case 8:
			func_170(uParam1, "Dreyfuss1", func_172(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 9:
			func_170(uParam1, "Epsilon1", func_172(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 10:
			func_170(uParam1, "Epsilon2", func_172(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 11:
			func_170(uParam1, "Epsilon3", func_172(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 12:
			func_170(uParam1, "Epsilon4", func_172(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 13:
			func_170(uParam1, "Epsilon5", func_172(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 14:
			func_170(uParam1, "Epsilon6", func_172(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 15:
			func_170(uParam1, "Epsilon7", func_172(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 16:
			func_170(uParam1, "Epsilon8", func_172(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 17:
			func_170(uParam1, "Extreme1", func_172(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 18:
			func_170(uParam1, "Extreme2", func_172(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 19:
			func_170(uParam1, "Extreme3", func_172(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 20:
			func_170(uParam1, "Extreme4", func_172(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 21:
			func_170(uParam1, "Fanatic1", func_172(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_171(iParam0), 1, 0);
			break;
		
		case 22:
			func_170(uParam1, "Fanatic2", func_172(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_171(iParam0), 1, 0);
			break;
		
		case 23:
			func_170(uParam1, "Fanatic3", func_172(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_171(iParam0), 0, 1);
			break;
		
		case 24:
			func_170(uParam1, "Hao1", func_172(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_171(iParam0), 0, 1);
			break;
		
		case 25:
			func_170(uParam1, "Hunting1", func_172(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 26:
			func_170(uParam1, "Hunting2", func_172(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 27:
			func_170(uParam1, "Josh1", func_172(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 28:
			func_170(uParam1, "Josh2", func_172(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 29:
			func_170(uParam1, "Josh3", func_172(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 30:
			func_170(uParam1, "Josh4", func_172(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 31:
			func_170(uParam1, "Maude1", func_172(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 32:
			func_170(uParam1, "Minute1", func_172(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 33:
			func_170(uParam1, "Minute2", func_172(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 34:
			func_170(uParam1, "Minute3", func_172(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 35:
			func_170(uParam1, "MrsPhilips1", func_172(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 36:
			func_170(uParam1, "MrsPhilips2", func_172(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 37:
			func_170(uParam1, "Nigel1", func_172(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 38:
			func_170(uParam1, "Nigel1A", func_172(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 39:
			func_170(uParam1, "Nigel1B", func_172(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
		
		case 40:
			func_170(uParam1, "Nigel1C", func_172(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
		
		case 41:
			func_170(uParam1, "Nigel1D", func_172(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_171(iParam0), 1, 1);
			break;
		
		case 42:
			func_170(uParam1, "Nigel2", func_172(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 43:
			func_170(uParam1, "Nigel3", func_172(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 1);
			break;
		
		case 44:
			func_170(uParam1, "Omega1", func_172(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 45:
			func_170(uParam1, "Omega2", func_172(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 46:
			func_170(uParam1, "Paparazzo1", func_172(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 47:
			func_170(uParam1, "Paparazzo2", func_172(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 48:
			func_170(uParam1, "Paparazzo3", func_172(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 49:
			func_170(uParam1, "Paparazzo3A", func_172(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 50:
			func_170(uParam1, "Paparazzo3B", func_172(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 51:
			func_170(uParam1, "Paparazzo4", func_172(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 52:
			func_170(uParam1, "Rampage1", func_172(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 54:
			func_170(uParam1, "Rampage3", func_172(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 55:
			func_170(uParam1, "Rampage4", func_172(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 56:
			func_170(uParam1, "Rampage5", func_172(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_171(iParam0), 0, 0);
			break;
		
		case 53:
			func_170(uParam1, "Rampage2", func_172(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_171(iParam0), 1, 0);
			break;
		
		case 57:
			func_170(uParam1, "TheLastOne", func_172(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 58:
			func_170(uParam1, "Tonya1", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 59:
			func_170(uParam1, "Tonya2", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 60:
			func_170(uParam1, "Tonya3", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 61:
			func_170(uParam1, "Tonya4", func_172(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		case 62:
			func_170(uParam1, "Tonya5", func_172(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_171(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_170(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x8A5C
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_171(int iParam0)//Position - 0x8AED
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

struct<2> func_172(int iParam0)//Position - 0x8E33
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_173(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_173(int iParam0)//Position - 0x8E69
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

int func_174()//Position - 0x92B4
{
	if (func_177() && !func_178())
	{
		return 1;
	}
	if (func_176() && func_175())
	{
		return 1;
	}
	return 0;
}

bool func_175()//Position - 0x92E6
{
	return Global_113687 > 0;
}

int func_176()//Position - 0x92F4
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_177()//Position - 0x9309
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_178()//Position - 0x932C
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

int func_179()//Position - 0x9349
{
	if (!func_147(5))
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_178())
		{
			return 0;
		}
	}
	if (func_168(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()//Position - 0x93AB
{
	if ((Global_113958 == func_41() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_181(int iParam0)//Position - 0x93D6
{
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_183(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_182();
}

void func_182()//Position - 0x940C
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

void func_183(int iParam0)//Position - 0x9449
{
	Global_113958 = iParam0;
}

int func_184(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9457
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_41();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_225())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_178())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_18(0))
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (func_224())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_34(func_55()))
		{
			if (func_168(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_223(iParam3))
		{
			return 0;
		}
		if (func_34(func_55()))
		{
			if (func_222(func_55()) == 4 || func_222(func_55()) == 5)
			{
				return 0;
			}
		}
		if (func_34(func_55()))
		{
			if (!func_221(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_220(Global_113969.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113960) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_219())
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
		if (!func_210(4))
		{
			return 0;
		}
		if (!func_147(5))
		{
			return 0;
		}
		if (func_209(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_209(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_223(30) && !func_209(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_34(func_55()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113969.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113969.f_2366.f_539.f_2296[iVar4];
				if (func_208(iVar8))
				{
					if (func_186(iVar4))
					{
						if (!func_185(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_55() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_185(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x97F1
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_186(int iParam0)//Position - 0x9838
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_187(iVar0);
}

int func_187(int iParam0)//Position - 0x9859
{
	return func_188(iParam0, 1);
}

int func_188(int iParam0, int iParam1)//Position - 0x9868
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_208(iParam0))
	{
		return 0;
	}
	func_189(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x98BB
{
	func_190(func_201(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_190(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x98D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_200(iParam0, iParam1))
	{
		iVar0 = func_199(iParam1);
		iVar1 = func_197(iParam0);
		iVar2 = (func_197(iParam0) - func_197(iParam1));
		iVar3 = (func_199(iParam0) - func_199(iParam1));
		iVar4 = (func_196(iParam0) - func_196(iParam1));
		iVar5 = (func_195(iParam0) - func_195(iParam1));
		iVar6 = (func_194(iParam0) - func_194(iParam1));
		iVar7 = (func_193(iParam0) - func_193(iParam1));
	}
	else
	{
		iVar0 = func_199(iParam0);
		iVar1 = func_197(iParam1);
		iVar2 = (func_197(iParam1) - func_197(iParam0));
		iVar3 = (func_199(iParam1) - func_199(iParam0));
		iVar4 = (func_196(iParam1) - func_196(iParam0));
		iVar5 = (func_195(iParam1) - func_195(iParam0));
		iVar6 = (func_194(iParam1) - func_194(iParam0));
		iVar7 = (func_193(iParam1) - func_193(iParam0));
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
		iVar4 = (iVar4 + func_192(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_191(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_191(float fParam0, float fParam1, float fParam2)//Position - 0x9ADA
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

int func_192(int iParam0, int iParam1)//Position - 0x9B1C
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

int func_193(int iParam0)//Position - 0x9BBE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_194(int iParam0)//Position - 0x9BD1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_195(int iParam0)//Position - 0x9BE4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_196(int iParam0)//Position - 0x9BF7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_197(int iParam0)//Position - 0x9C09
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_198(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_198(bool bParam0, int iParam1, int iParam2)//Position - 0x9C2B
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_199(int iParam0)//Position - 0x9C42
{
	return iParam0 & 15;
}

int func_200(int iParam0, int iParam1)//Position - 0x9C4F
{
	int iVar0;
	int iVar1;
	
	if (!func_208(iParam1) || !func_208(iParam0))
	{
		return 1;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_201()//Position - 0x9D5B
{
	var uVar0;
	
	func_207(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_206(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_205(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_204(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_203(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_202(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_202(var uParam0, int iParam1)//Position - 0x9DA1
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

void func_203(var uParam0, int iParam1)//Position - 0x9E27
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_204(var uParam0, int iParam1)//Position - 0x9E5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_197(*uParam0);
	if (iParam1 < 1 || iParam1 > func_192(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_205(var uParam0, int iParam1)//Position - 0x9EAB
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_206(var uParam0, int iParam1)//Position - 0x9EE5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_207(var uParam0, int iParam1)//Position - 0x9F20
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_208(int iParam0)//Position - 0x9F5C
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
	iVar0 = func_193(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_194(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_195(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_197(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_199(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_196(iParam0);
	if (iVar5 < 1 || iVar5 > func_192(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0, bool bParam1)//Position - 0xA038
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0xA058
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_55();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_78(8, -1)) || func_216()) || func_215()) || func_214()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_218()) || Global_32951) || func_217()) || func_78(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_78(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_78(8, -1)) || func_216()) || func_215()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_218() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_78(8, -1)) || func_213()) || func_212()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_216()) || func_215()) || func_212()) || func_211())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_218()) || Global_32951) || func_217()) || func_78(8, -1)) || func_215()) || func_214()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_218()) || func_215()) || Global_113016) || Global_32951) || func_217()) || Global_45250) || func_78(8, -1)) || func_214()) || func_212()) || func_213()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_218()) || Global_113016) || Global_32951) || func_217()) || func_78(8, -1)) || func_214()) || func_212()) || func_216()) || func_215()) || func_213())
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

var func_211()//Position - 0xA775
{
	return Global_101572.f_1;
}

int func_212()//Position - 0xA783
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_213()//Position - 0xA7A6
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_214()//Position - 0xA7C0
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_215()//Position - 0xA7EA
{
	return Global_101585.f_394 > 0;
}

bool func_216()//Position - 0xA7FB
{
	return Global_101585.f_393 > 0;
}

var func_217()//Position - 0xA80C
{
	return Global_1575083;
}

int func_218()//Position - 0xA818
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_219()//Position - 0xA834
{
	func_76();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)//Position - 0xA85C
{
	return func_200(func_201(), iParam0);
}

int func_221(int iParam0, int iParam1, int iParam2)//Position - 0xA86E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_55();
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

int func_222(int iParam0)//Position - 0xA952
{
	if (!func_34(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_223(int iParam0)//Position - 0xA976
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_225())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_224()//Position - 0xA9CE
{
	int iVar0;
	
	if (Global_33100)
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

int func_225()//Position - 0xAA12
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
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

int func_226(int iParam0, int iParam1)//Position - 0xAACA
{
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_227()//Position - 0xAAF1
{
	int iVar0;
	
	if (iLocal_148 && !iLocal_147)
	{
		func_3(0);
		if (Global_33191)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_2();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_61 - Vector(10f, 10f, 10f), Local_61 + Vector(10f, 10f, 10f), true, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_150, joaat("PLAYER"));
		if (bLocal_57)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_94);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_55, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_55);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_103))
		{
			HUD::REMOVE_BLIP(&iLocal_103);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_100[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_100[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_56, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_56, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_56);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_56);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_56, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_119)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_119[iVar0], true, true);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_228(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_228(int iParam0)//Position - 0xAC5A
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_180())
	{
		func_232(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_231(30000);
		StringCopy(&cVar0, func_230(Global_113958, 1), 64);
		if (func_40(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113955, (MISC::GET_GAME_TIMER() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, 0);
	}
	func_229(&Global_33008);
	Global_113959 = 0;
	func_183(-1);
}

void func_229(var uParam0)//Position - 0xAD0C
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

char* func_230(int iParam0, bool bParam1)//Position - 0xAD49
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

void func_231(int iParam0)//Position - 0xAF92
{
	Global_44593 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_232(int iParam0)//Position - 0xAFA4
{
	func_233(iParam0, 0, func_238(iParam0));
}

void func_233(int iParam0, int iParam1, int iParam2)//Position - 0xAFB9
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_201();
	func_236(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_235(iParam0, &uVar0);
	Var1 = { func_234(&uVar0) };
}

struct<16> func_234(var uParam0)//Position - 0xAFE8
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_194(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_193(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_197(*uParam0), 64);
	return Var0;
}

void func_235(int iParam0, var uParam1)//Position - 0xB0B7
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB0CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_197(*uParam0);
	iVar1 = func_199(*uParam0);
	iVar2 = func_196(*uParam0);
	iVar3 = func_195(*uParam0);
	iVar4 = func_194(*uParam0);
	iVar5 = func_193(*uParam0);
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
	iVar6 = func_192(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_192(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_237(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB251
{
	func_207(uParam0, iParam1);
	func_206(uParam0, iParam2);
	func_205(uParam0, iParam3);
	func_203(uParam0, iParam5);
	func_204(uParam0, iParam4);
	func_202(uParam0, iParam6);
}

int func_238(int iParam0)//Position - 0xB289
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

