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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63[2] = { 0, 0 };
	struct<3> Local_66 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	struct<6> Local_135 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_141[24] = "";
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<3> Local_150 = { 0, 0, 0 } ;
	var uLocal_153[2] = { 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	struct<3> Local_158 = { 0, 0, 0 } ;
	int iLocal_161 = 0;
	float fLocal_162 = 0f;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 16;
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
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	struct<3> Local_337 = { 0, 0, 0 } ;
	struct<3> Local_340 = { 0, 0, 0 } ;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
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
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_85 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_122 = -1;
	StringCopy(&Local_135, "", 24);
	iLocal_163 = -1;
	Local_337 = { -1017.3451f, -1354.1962f, 4.4568f };
	Local_340 = { 2003.4564f, 3071.1018f, 46.0499f };
	Local_55 = { ScriptParam_0.f_1[0 /*3*/] };
	func_282();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_242();
	}
	if (func_200(Local_55, 27, bLocal_343, 0, 0))
	{
		func_197(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_157 = MISC::GET_GAME_TIMER();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_60)
		{
			if (!func_196())
			{
				if (func_195())
				{
					func_242();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DD", 0);
			switch (iLocal_51)
			{
				case 0:
					if (iLocal_54)
					{
						iLocal_170 = 1;
						iLocal_51 = 1;
					}
					else
					{
						if (func_183())
						{
							func_242();
						}
						if (!bLocal_58)
						{
							func_182();
						}
						if (bLocal_58)
						{
							func_181();
						}
					}
					break;
				
				case 1:
					func_174();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_173();
						func_170();
						if (iLocal_52 == 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
						{
							func_76();
							if (func_74() || ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_89[0], false))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
										{
											PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
										}
										TASK::CLEAR_PED_TASKS(iLocal_89[0]);
										TASK::TASK_SMART_FLEE_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
										func_70(iLocal_89[0], 120000, 0, -1082130432);
										PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_171, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_66();
							}
						}
						if (iLocal_52 == 2 || (iLocal_52 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_89[1])))
						{
							func_76();
							if (iLocal_53 != 9)
							{
								if (func_74() || ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
									{
										if (!PED::IS_PED_INJURED(iLocal_89[0]))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
											}
											TASK::CLEAR_PED_TASKS(iLocal_89[0]);
											TASK::TASK_SMART_FLEE_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											func_70(iLocal_89[0], 120000, 0, -1082130432);
											PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
									{
										if (!PED::IS_PED_INJURED(iLocal_89[1]))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_89[1]))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_89[1]);
											}
											TASK::CLEAR_PED_TASKS(iLocal_89[1]);
											TASK::TASK_SMART_FLEE_PED(iLocal_89[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											func_70(iLocal_89[1], 120000, 0, -1082130432);
											PED::SET_PED_KEEP_TASK(iLocal_89[1], true);
										}
									}
									if (iLocal_52 == 1)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_171, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_52 == 2)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_171, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_66();
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_89[0], 1f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_89[1]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_89[1], 1f);
							}
						}
					}
					if ((func_65() && !func_64()) && iLocal_53 != 9)
					{
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_89[0], Local_85, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_52 == 2)
								{
									if (!PED::IS_PED_INJURED(iLocal_89[1]))
									{
										if (!PED::IS_PED_IN_GROUP(iLocal_89[0]) && !PED::IS_PED_IN_GROUP(iLocal_89[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_89[0], func_63());
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_89[1], func_63());
										}
									}
								}
								func_62(0);
								SYSTEM::WAIT(0);
								func_68();
								iLocal_53 = 9;
							}
						}
					}
					if (func_61())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
						{
							PED::DELETE_PED(&(iLocal_89[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
						{
							PED::DELETE_PED(&(iLocal_89[1]));
						}
						func_36();
					}
					if ((func_35() || func_34()) || func_3())
					{
						func_66();
					}
					break;
			}
		}
		else
		{
			func_242();
		}
		func_1();
	}
}

void func_1()//Position - 0x4E9
{
	if (((iLocal_52 == 1 && iLocal_53 == 7) && iLocal_62 == 5) && iLocal_108)
	{
		iLocal_157 = MISC::GET_GAME_TIMER();
		if (func_2())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				Local_158 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };
			}
		}
	}
}

int func_2()//Position - 0x541
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (iLocal_52 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(iLocal_89[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
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

int func_3()//Position - 0x60E
{
	if (iLocal_52 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_92, 200f, 200f, 200f, false, true, 0))
			{
				return 1;
			}
			if (((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_OFFR")) && !func_33("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_33("REDR2_DC") && !func_33("REDR2_AKA")) && !func_33("REDR2_AKB")) && !func_33("REDR2_TRY")) && !func_33("REDR2_JIC")) && !func_33("REDR2_CH")) && !func_33("REDR2_WH2")) && !func_33("REDR2_BCK")) && !func_33("REDR2_JIA")) && !func_33("REDR2_JIB")) && !func_33("REDR2_JIC")) && !func_33("REDR2_WHA")) && !func_33("REDR2_WHB")) && !func_33("REDR2_WHC")) && !func_33("REDR2_PSM")) && !func_33("REDR2_PSF")) && !func_33("REDR2_PST")) && !func_33("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_92) && ENTITY::GET_ENTITY_HEALTH(iLocal_92) < iLocal_78)
				{
					iLocal_78 = ENTITY::GET_ENTITY_HEALTH(iLocal_92);
					func_5(0);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_171, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_92))
			{
				func_68();
				SYSTEM::WAIT(0);
				if (!func_4())
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							TASK::TASK_WANDER_STANDARD(iLocal_89[0], 40000f, 0);
							PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
						}
						if (!PED::IS_PED_INJURED(iLocal_89[1]))
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_89[1], iLocal_89[0], -1, 0f, 1f, 2f, 0);
							PED::SET_PED_KEEP_TASK(iLocal_89[1], true);
						}
						return 1;
					}
				}
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_92, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_92, PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_89[0]);
					TASK::TASK_SMART_FLEE_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
				if (!PED::IS_PED_INJURED(iLocal_89[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_89[1]);
					TASK::TASK_SMART_FLEE_PED(iLocal_89[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x8B8
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)//Position - 0x8DA
{
	if (bParam0)
	{
		if (iLocal_134)
		{
			if (func_10(&uLocal_171, "REDR2AU", &cLocal_141, &Local_135, 8, 0, 0))
			{
				iLocal_134 = 0;
			}
		}
	}
	else if ((!iLocal_134 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_33("REDR1_SWV"))
	{
		cLocal_141 = { func_9() };
		Local_135 = { func_8() };
		func_6();
		iLocal_134 = 1;
	}
}

void func_6()//Position - 0x939
{
	Global_21152 = 0;
	func_7();
}

void func_7()//Position - 0x949
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

struct<6> func_8()//Position - 0x96D
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

struct<6> func_9()//Position - 0x9B3
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9D7
{
	func_32(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA2B
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
		Global_22362 = { Global_22356 };
		func_29();
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
				func_21();
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
			if (func_19())
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
			func_18();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()//Position - 0xCF9
{
	if (!func_13())
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

int func_13()//Position - 0xD30
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
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

bool func_14(int iParam0)//Position - 0xD93
{
	return func_15(iParam0, 20);
}

var func_15(int iParam0, int iParam1)//Position - 0xDA3
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_16()//Position - 0xDBB
{
	return -1;
}

void func_17()//Position - 0xDC4
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

void func_18()//Position - 0xDF4
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

int func_19()//Position - 0xE89
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0xEB0
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

void func_21()//Position - 0xF49
{
	if (func_28(14))
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
		Global_20930 = func_22();
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

int func_22()//Position - 0xFEB
{
	func_23();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_23()//Position - 0x1004
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_24(iVar0) && (!func_28(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_24(Global_113969.f_2366.f_539.f_4321))
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

bool func_24(int iParam0)//Position - 0x1101
{
	return iParam0 < 3;
}

int func_25(int iParam0)//Position - 0x110D
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

int func_26(int iParam0)//Position - 0x114A
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

var func_27(int iParam0)//Position - 0x116F
{
	return Global_2169[iParam0 /*29*/];
}

bool func_28(int iParam0)//Position - 0x117E
{
	return Global_44042 == iParam0;
}

void func_29()//Position - 0x118C
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

bool func_30(int iParam0, int iParam1)//Position - 0x11E2
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

void func_31()//Position - 0x121A
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1271
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

int func_33(char* sParam0)//Position - 0x12C7
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x12EF
{
	if (iLocal_52 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_89[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_89[0]) && PED::IS_PED_INJURED(iLocal_89[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x1332
{
	if (iLocal_52 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_36()//Position - 0x1378
{
	while (!func_60())
	{
		SYSTEM::WAIT(0);
	}
	func_40(27, bLocal_343);
	func_37();
	func_242();
}

void func_37()//Position - 0x13A1
{
	func_38();
}

int func_38()//Position - 0x13AE
{
	if (func_39(0))
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

int func_39(bool bParam0)//Position - 0x13F9
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_40(int iParam0, bool bParam1)//Position - 0x1421
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_57(iParam0))
	{
		func_56(iParam0, bParam1);
		if (!func_55(51))
		{
			func_51("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_54(), 0, 138, 0);
			func_50(51);
		}
		if (func_49(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_48(iParam0, bParam1) != 322)
		{
			func_42(func_48(iParam0, bParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_41(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_41(7);
			}
			else
			{
				func_41(1);
			}
		}
	}
}

void func_41(int iParam0)//Position - 0x1525
{
	Global_113955 = iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2)//Position - 0x1533
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
		func_46((891 + iParam0), 1, -1);
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
		func_43();
	}
}

void func_43()//Position - 0x1619
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
		func_45(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_44() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_38();
				}
			}
		}
	}
}

int func_44()//Position - 0x1AD7
{
	return Global_32948;
}

int func_45(int iParam0, int iParam1)//Position - 0x1AE2
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

void func_46(int iParam0, bool bParam1, int iParam2)//Position - 0x1B33
{
	if (iParam2 == -1)
	{
		iParam2 = func_47();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_47()//Position - 0x1B51
{
	return Global_1574926;
}

int func_48(int iParam0, int iParam1)//Position - 0x1B5D
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

int func_49(int iParam0)//Position - 0x1ED1
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

void func_50(int iParam0)//Position - 0x1F00
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

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1F42
{
	func_52(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_52(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1F62
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
		func_53();
	}
}

void func_53()//Position - 0x2134
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

int func_54()//Position - 0x224B
{
	func_23();
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

int func_55(int iParam0)//Position - 0x2291
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

void func_56(int iParam0, int iParam1)//Position - 0x22D1
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_57(int iParam0)//Position - 0x22EC
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

int func_58()//Position - 0x239D
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_59(Var0);
	return uVar16;
}

int func_59(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x23BA
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

int func_60()//Position - 0x2594
{
	return 1;
}

int func_61()//Position - 0x259D
{
	if (Global_33188)
	{
		func_41(4);
		return 1;
	}
	return 0;
}

void func_62(int iParam0)//Position - 0x25B5
{
	Global_23297 = iParam0;
}

int func_63()//Position - 0x25C2
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_64()//Position - 0x25D2
{
	if (Global_113969.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_65()//Position - 0x25EE
{
	return Global_33187;
}

void func_66()//Position - 0x25F9
{
	func_242();
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2605
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_68()//Position - 0x2653
{
	Global_21152 = 0;
	func_69();
}

void func_69()//Position - 0x2663
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

int func_70(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2684
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_72(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_71();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_45005[iVar2 /*6*/] = 0;
	Global_45005[iVar2 /*6*/].f_1 = iParam0;
	Global_45005[iVar2 /*6*/].f_2 = iParam1;
	Global_45005[iVar2 /*6*/].f_3 = iParam1;
	Global_45005[iVar2 /*6*/].f_4 = 0;
	Global_45005[iVar2 /*6*/].f_5 = iParam3;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_45248 = 1;
	}
	Global_45003++;
	return 1;
}

int func_71()//Position - 0x274B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_72(int iParam0)//Position - 0x277A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0)//Position - 0x27AB
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
		if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
		{
			return Global_45036[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_74()//Position - 0x27EC
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if ((MISC::IS_BULLET_IN_AREA(Local_150, 40f, true) || MISC::IS_BULLET_IN_AREA(func_75(PLAYER::PLAYER_ID()), 10f, false)) || MISC::IS_PROJECTILE_IN_AREA(Local_150 - Vector(40f, 40f, 40f), Local_150 + Vector(40f, 40f, 40f), false))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_89[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(iLocal_89[0]))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_89[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_89[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_89[0]))
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_89[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_89[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_89[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					return 1;
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_89[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_89[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_89[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_75(int iParam0)//Position - 0x29A1
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_76()//Position - 0x29B4
{
	int iVar0;
	
	switch (iLocal_53)
	{
		case 0:
			if (iLocal_52 == 1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.4605f, -1259.8677f, 3.9183f, -1061.8914f, -1424.029f, 24.4253f, 171.75f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_150, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_150, 15f, 15f, 15f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_149))
					{
						HUD::REMOVE_BLIP(&iLocal_149);
					}
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
						{
							uLocal_153[0] = func_169(iLocal_89[0], 0, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[0], false);
						}
					}
					if (!func_196())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							iLocal_93 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_168(&uLocal_171, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_159(1);
						func_158(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.1443f, -1378.79f, 4.1997f, -1039.6846f, -1337.6096f, 9.7035f, 37.875f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
						{
							func_157();
							TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_89[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0f, false, false, false);
							iLocal_121 = (MISC::GET_GAME_TIMER() + 60000);
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
							{
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[0], true);
							}
							iLocal_53 = 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.2384f, 3671.9485f, 30.8437f, 1957.8176f, 3751.8875f, 55.4436f, 159.9375f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_150, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_150, 15f, 15f, 15f, false, true, 0))
				{
					func_156();
					if (!func_196())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							iLocal_93 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_159(1);
						func_158(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.7609f, 3727.6997f, 31.882f, 1896.9618f, 3693.83f, 34.9925f, 19.1875f, false, true, 0))
					{
						func_67(&uLocal_171, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[0], true);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[1], true);
						}
						iLocal_121 = (MISC::GET_GAME_TIMER() + 120000);
						iLocal_53 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_121 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_89[1], 7000, 2060, 4);
					TASK::TASK_PAUSE(0, 2500);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_92, -1, -1, 1f, 1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				}
				if (!PED::IS_PED_INJURED(iLocal_89[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_89[0], 7000, 2060, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_53 = 3;
			}
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 8f, 8f, 4f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 80f))
					{
						bLocal_119 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_53 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 30f, 30f, 30f, false, true, 0))
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(true);
				}
				else
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
				}
			}
			break;
		
		case 3:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[1]))
					{
						if (func_67(&uLocal_171, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_53 = 4;
						}
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 8f, 8f, 4f, false, true, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 80f))
						{
							bLocal_119 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_53 = 4;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 30f, 30f, 30f, false, true, 0))
					{
						func_155();
						if (func_154())
						{
							func_62(0);
						}
					}
					else if (func_4())
					{
						func_62(1);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_66, 15f, 15f, 15f, false, true, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 80f))
						{
							if (PED::CAN_PED_SEE_HATED_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(iLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								}
								if (!PED::IS_PED_INJURED(iLocal_89[1]))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_53 = 4;
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.1215f, 3715.0566f, 31.844f, 1895.6075f, 3703.5864f, 34.8272f, 12.4375f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						if (!PED::IS_PED_INJURED(iLocal_89[1]))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_53 = 4;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_92, 1.5f, 1.5f, 5f, false, true, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_154())
						{
							func_62(0);
						}
						func_68();
						SYSTEM::WAIT(0);
						if (func_67(&uLocal_171, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_168 = 2;
							iLocal_61 = 0;
							while (iLocal_61 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
								{
									HUD::REMOVE_BLIP(&(uLocal_153[iLocal_61]));
								}
								iLocal_61++;
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_156))
							{
								iLocal_156 = func_152(iLocal_92, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_89[0]);
							}
							iLocal_53 = 4;
						}
					}
				}
				if (iLocal_121 < MISC::GET_GAME_TIMER())
				{
					if (func_154())
					{
						func_62(0);
					}
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_92))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_89[1], -1, 2060, 4);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_92, -1, -1, 1f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_89[0], -1, 2060, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_89[0], 0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_92, -1, 0, 1f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							iLocal_61 = 0;
							while (iLocal_61 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
								{
									HUD::REMOVE_BLIP(&(uLocal_153[iLocal_61]));
								}
								iLocal_61++;
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_52 == 1)
			{
				switch (iLocal_168)
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 8f, 8f, 4f, false, true, 0) || bLocal_119)
							{
								AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], -1, 2060, 4);
								if ((MISC::GET_GAME_TIMER() + 50000) > iLocal_121 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									func_6();
									if (bLocal_119)
									{
										if (!func_4())
										{
											if (func_22() == 0)
											{
												if (func_67(&uLocal_171, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_168++;
												}
											}
											else if (func_22() == 1)
											{
												if (func_67(&uLocal_171, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_168++;
												}
											}
											else if (func_22() == 2)
											{
												if (func_67(&uLocal_171, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_168++;
												}
											}
										}
									}
									else
									{
										iLocal_168++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_151())
							{
								if (!PED::IS_PED_INJURED(iLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
									if (!PED::IS_PED_INJURED(iLocal_89[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
										TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0f, false, false, false);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_89[0], 0);
										TASK::TASK_PAUSE(0, 3000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 40000f);
										TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
									}
									func_150();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_89[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 80f))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 10000, 2060, 4);
										func_6();
										SYSTEM::WAIT(0);
										iLocal_168++;
									}
									else
									{
										func_149(iLocal_89[0], &(uLocal_63[0]));
									}
								}
								if (!func_4())
								{
									iLocal_168++;
								}
							}
						}
						break;
					
					case 2:
						if (func_151())
						{
							iLocal_168 = 6;
						}
						else
						{
							iLocal_168++;
						}
						break;
					
					case 3:
						if (!iLocal_102)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(iLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
									SYSTEM::SETTIMERA(0);
									iLocal_102 = 1;
								}
							}
						}
						func_149(iLocal_89[0], &(uLocal_63[0]));
						if (!func_4())
						{
							if (func_67(&uLocal_171, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_168++;
							}
						}
						break;
					
					case 4:
						if (!func_151())
						{
							if (!func_4())
							{
								if (func_67(&uLocal_171, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
									if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_153[0]));
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_153[1]));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 1);
										if (!PED::IS_PED_INJURED(iLocal_89[0]))
										{
											TASK::TASK_ENTER_VEHICLE(iLocal_89[0], iLocal_92, -1, 0, 1f, 1, 0, 0);
										}
									}
									iLocal_168++;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_153[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_153[1]));
							}
							iLocal_168++;
						}
						break;
					
					case 5:
						if (func_151())
						{
							if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								if (!PED::IS_PED_IN_GROUP(iLocal_89[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_89[0]);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_89[0], func_63());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_89[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_89[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_98, joaat("PLAYER"));
								func_148();
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_92)
								{
									if (!func_4())
									{
										if (func_22() == 0)
										{
											if (func_67(&uLocal_171, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_171, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_171, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_53 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_149(iLocal_89[0], &(uLocal_63[0]));
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_67(&uLocal_171, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_168 = 10;
									}
								}
							}
							else
							{
								iLocal_168 = 4;
							}
						}
						else
						{
							iLocal_168 = 4;
						}
						break;
					
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (func_151())
							{
								if (!func_4())
								{
									if (func_22() == 0)
									{
										if (func_67(&uLocal_171, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_168 = 10;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_171, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_168 = 10;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_171, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_168 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_168 = 4;
							}
						}
						else
						{
							iLocal_168 = 4;
						}
						break;
					
					case 10:
						if (func_151())
						{
							if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								if (!PED::IS_PED_IN_GROUP(iLocal_89[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_89[0]);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_89[0], func_63());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_89[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_89[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_98, joaat("PLAYER"));
								func_148();
							}
							iLocal_168++;
						}
						else
						{
							iLocal_168 = 4;
						}
						break;
					
					case 11:
						iLocal_53 = 7;
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_168)
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 10f, 10f, 10f, false, true, 0))
							{
								if (PED::IS_PED_FACING_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									if (func_154())
									{
										func_62(0);
									}
									func_6();
									SYSTEM::WAIT(0);
									if (func_67(&uLocal_171, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_168++;
									}
								}
								else
								{
									func_149(iLocal_89[0], &(uLocal_63[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_PAUSE(0, 500);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							SYSTEM::SETTIMERA(0);
							iLocal_168++;
						}
						break;
					
					case 2:
						func_149(iLocal_89[0], &(uLocal_63[0]));
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 1);
							}
						}
						if (SYSTEM::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_153[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_153[1]));
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_156))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
								{
									iLocal_156 = func_152(iLocal_92, 0, 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 20f, 20f, 20f, false, true, 0) && SYSTEM::TIMERA() > 9500)
								{
									iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
									if (iVar0 < 60)
									{
										if (func_67(&uLocal_171, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
										}
									}
									else if (func_67(&uLocal_171, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, true))
							{
								iLocal_53 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
				{
					if (SYSTEM::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_92, -1, false) == iLocal_89[0])
					{
						if (func_67(&uLocal_171, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_92))
							{
								if (!PED::IS_PED_INJURED(iLocal_89[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_92, -1, false) && PED::IS_PED_IN_VEHICLE(iLocal_89[0], iLocal_92, false))
									{
										TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_89[0], iLocal_92, false);
										iLocal_53 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_92, -1, false) == iLocal_89[0])
									{
										iLocal_53 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_92, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_53 = 7;
									}
									else
									{
										func_70(iLocal_89[0], 120000, 0, -1082130432);
										TASK::TASK_WANDER_STANDARD(iLocal_89[0], 40000f, 0);
										PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
										SYSTEM::WAIT(0);
										func_66();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								func_70(iLocal_89[0], 120000, 0, -1082130432);
								TASK::TASK_WANDER_STANDARD(iLocal_89[0], 40000f, 0);
								PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
								SYSTEM::WAIT(0);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_92, -1, false))
							{
								if (!PED::IS_PED_INJURED(iLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_92, -1, -1, 1f, 1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_89[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_92, -1, 0, 1f, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], iLocal_92, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_92, 5f);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_92, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_92, -1016.1517f, -1352.8549f, 4.4854f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_92, -1005.7568f, -1353.8058f, 4.4756f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_92, -989.2302f, -1354.2777f, -7.3581f, 4, 50f, 262144, -1f, 100f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89[0], iLocal_92) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89[1], iLocal_92))
						{
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_92, true);
							TASK::CLEAR_PED_TASKS(iLocal_89[1]);
							TASK::TASK_STAND_STILL(iLocal_89[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_89[1], true);
							iLocal_53 = 5;
						}
						if (!iLocal_99)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89[0], iLocal_92) && !PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89[1], iLocal_92))
							{
								TASK::CLEAR_PED_TASKS(iLocal_89[0]);
								TASK::TASK_STAND_STILL(iLocal_89[0], -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89[0], iLocal_92) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89[1], iLocal_92))
							{
								TASK::CLEAR_PED_TASKS(iLocal_89[1]);
								TASK::TASK_STAND_STILL(iLocal_89[1], -1);
							}
							iLocal_99 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_89[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_92, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_92, 0f, 2f, 0f), 10f, 0, iLocal_96, 262144, 5f, -1f);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_92, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_92, 9, 1500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_92, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_92, 11, 1500);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_92, 2185.8171f, 3915.4714f, 27.9257f, 4, 30f, 262144, 0f, 0f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
				}
			}
			iLocal_53 = 6;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_89[0]) == 5)
					{
						func_66();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[1], 50f, 50f, 50f, false, true, 0))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_89[1]));
					}
				}
				switch (iLocal_62)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
							{
								uLocal_153[0] = func_169(iLocal_89[0], 0, 145);
							}
							iLocal_62++;
							SYSTEM::SETTIMERA(0);
						}
						break;
					
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(iLocal_89[0]))
							{
								if (func_151())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
									{
										fLocal_162 = func_147(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 1);
										iLocal_62++;
									}
								}
								else if (!iLocal_117)
								{
									if (func_67(&uLocal_171, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_117 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_146();
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							if (func_151())
							{
								if (!iLocal_116)
								{
									if (func_147(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 1) > (fLocal_162 + 5f))
									{
										if (func_67(&uLocal_171, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_116 = 1;
										}
									}
								}
							}
							else if (!iLocal_117)
							{
								if (func_67(&uLocal_171, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_117 = 1;
								}
							}
						}
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 1);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_153[0]));
							}
							if (func_22() == 2 && !func_64())
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_101))
								{
									iLocal_101 = func_144(Local_85, 0);
									HUD::SET_BLIP_SPRITE(iLocal_101, 269 /*RADAR_ALTRUIST*/);
									func_142();
								}
							}
							iLocal_60 = 1;
							iLocal_62++;
						}
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							if (func_147(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 1) > 50f)
							{
								func_66();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							SYSTEM::WAIT(1500);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							if (func_22() == 0)
							{
								if (func_67(&uLocal_171, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_62++;
								}
							}
							else if (func_22() == 1)
							{
								if (func_67(&uLocal_171, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_62++;
								}
							}
							else if (func_22() == 2)
							{
								if (func_67(&uLocal_171, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_62++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_67(&uLocal_171, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_169 = MISC::GET_GAME_TIMER();
								iLocal_62++;
							}
						}
						break;
					
					case 5:
						func_141();
						func_140();
						func_146();
						if (!iLocal_108)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_169) > 7000)
							{
								if (!func_4())
								{
									if (func_67(&uLocal_171, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_169 = MISC::GET_GAME_TIMER();
										iLocal_108 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_107 && !bLocal_106)
							{
								func_139();
							}
							else
							{
								func_136();
								func_135();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							}
						}
						if (func_134(Local_79))
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_171, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_133())
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_171, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_89[0], Local_79, Global_23, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_100))
								{
									HUD::REMOVE_BLIP(&iLocal_100);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_101))
								{
									HUD::REMOVE_BLIP(&iLocal_101);
								}
								iLocal_53 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_62)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, true))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
								{
									uLocal_153[0] = func_169(iLocal_89[0], 0, 145);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_153[1]))
								{
									uLocal_153[1] = func_169(iLocal_89[1], 0, 145);
								}
								if (!func_4())
								{
									SYSTEM::SETTIMERA(0);
									if (func_22() == 0)
									{
										if (func_67(&uLocal_171, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_62++;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_171, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_62++;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_171, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_62++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_89[0]);
							TASK::TASK_ENTER_VEHICLE(iLocal_89[0], iLocal_92, 30000, 2, 2f, 1, 0, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_62++;
						break;
					
					case 2:
						if (!PED::IS_PED_INJURED(iLocal_89[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_92, 1.5f, -3f, 0f, 1f, 4000, 0.1f, true);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_92, 30000, 1, 2f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_62++;
						break;
					
					case 3:
						func_141();
						func_140();
						if (!iLocal_115)
						{
							if (!func_4())
							{
								if (func_67(&uLocal_171, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_115 = 1;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_89[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_89[1], false))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(iLocal_89[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_98, joaat("PLAYER"));
										func_148();
										iLocal_61 = 0;
										while (iLocal_61 <= (iLocal_88 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
											{
												HUD::REMOVE_BLIP(&(uLocal_153[iLocal_61]));
											}
											iLocal_61++;
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_156))
										{
											HUD::REMOVE_BLIP(&iLocal_156);
										}
										if (func_22() == 2 && !func_64())
										{
											if (!HUD::DOES_BLIP_EXIST(iLocal_101))
											{
												iLocal_101 = func_144(Local_85, 0);
												HUD::SET_BLIP_SPRITE(iLocal_101, 269 /*RADAR_ALTRUIST*/);
												func_142();
											}
										}
										if (func_22() == 0)
										{
											if (func_67(&uLocal_171, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_62++;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_171, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_62++;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_171, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_62++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_141();
						func_140();
						if (!func_4())
						{
							if (func_67(&uLocal_171, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_60 = 1;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_169 = MISC::GET_GAME_TIMER();
								iLocal_62++;
							}
						}
						break;
					
					case 5:
						func_141();
						if (iLocal_344 == 0 || iLocal_344 == 9)
						{
							func_140();
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_169) > 9000)
						{
							func_127();
						}
						if (iLocal_344 == 9 && ((MISC::GET_GAME_TIMER() - iLocal_345) > 6000 && (MISC::GET_GAME_TIMER() - iLocal_345) < 6500))
						{
							func_67(&uLocal_171, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_134(Local_79))
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_171, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_133())
						{
							func_5(0);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_171, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
						{
							if ((!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_89[0], Local_79, Global_23, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_89[1], Local_79, Global_23, false, true, 0))
								{
									iLocal_62++;
								}
							}
						}
						break;
					
					case 6:
						if (HUD::DOES_BLIP_EXIST(iLocal_100))
						{
							HUD::REMOVE_BLIP(&iLocal_100);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_101))
						{
							HUD::REMOVE_BLIP(&iLocal_101);
						}
						iLocal_53 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_61 = 0;
			while (iLocal_61 <= (iLocal_88 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_89[iLocal_61]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89[iLocal_61], false);
				}
				iLocal_61++;
			}
			if (iLocal_52 == 1)
			{
				if (func_126(1, 0, 1) && iLocal_122 == -1)
				{
					func_6();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 5f), 2, false);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == iLocal_92)
						{
							iLocal_122 = 0;
						}
						else
						{
							iLocal_122 = 1;
						}
					}
					else
					{
						iLocal_122 = 2;
					}
				}
				if (iLocal_122 == 0)
				{
					func_125();
				}
				if (iLocal_122 == 1)
				{
					func_124();
				}
				if (iLocal_122 == 2)
				{
					func_123();
				}
				if (bLocal_128)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_36();
				}
			}
			if (iLocal_52 == 2)
			{
				if (func_126(1, 0, 1) && iLocal_122 == -1)
				{
					func_68();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 4f), 2, false);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.5865f, 2672.2236f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_114(1, 1, 1, 0, 0, 0, 0);
					while (func_4())
					{
						SYSTEM::WAIT(0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == iLocal_92)
						{
							iLocal_122 = 0;
						}
					}
				}
				if (iLocal_122 == 0)
				{
					func_111();
				}
				else if (iLocal_122 == 1)
				{
					func_110();
				}
				else if (iLocal_122 == 2)
				{
					func_77();
				}
				if (bLocal_128)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_36();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_77()//Position - 0x4A55
{
	switch (iLocal_124)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 10000, 2060, 4);
			}
			if (!PED::IS_PED_INJURED(iLocal_89[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
			}
			func_67(&uLocal_171, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_124++;
			break;
		
		case 1:
			iLocal_124++;
			break;
		
		case 2:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_89[0], Local_82, 1f, -1, 40000f, 0.5f);
					iLocal_123 = MISC::GET_GAME_TIMER() + 500;
					iLocal_124++;
				}
			}
			break;
		
		case 3:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_89[1]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89[1], Local_82, 1f, -1, 0.25f, 0, 40000f);
					iLocal_124++;
				}
			}
			break;
		
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				iLocal_124++;
			}
			break;
		
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_128 = true;
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x4BB2
{
	int iVar0;
	int iVar1;
	
	if (func_109(iParam0) == 3)
	{
		return;
	}
	if (func_109(iParam0) == 4)
	{
		return;
	}
	func_79(func_109(iParam0), 1, iParam1, iParam2, 0);
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4C84
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_108();
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
					func_107(99, 1);
					func_106(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_106(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_106(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_92(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
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
							func_106(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_106(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_106(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_106(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_106(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_106(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_106(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_106(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_106(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_106(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_106(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_106(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_106(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_106(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_106(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_106(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_106(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_106(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_106(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_106(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_106(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_106(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_107(95, iParam3);
					break;
				
				case 1:
					func_107(97, iParam3);
					break;
				
				case 2:
					func_107(96, iParam3);
					break;
			}
			func_107(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_82(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_82(bVar1);
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
					func_106(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_106(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_106(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_81(iParam0);
	if (Global_44042 == 15)
	{
		func_80(0);
	}
	return 1;
}

void func_80(bool bParam0)//Position - 0x5283
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

void func_81(int iParam0)//Position - 0x5505
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

void func_82(bool bParam0)//Position - 0x555F
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_46(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_46(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_46(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_46(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_85(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_85(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_85(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_85(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_85(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_85(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_84() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_84() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_83(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_83(bool bParam0)//Position - 0x56D7
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

int func_84()//Position - 0x57D8
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x57E5
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_86(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_86(int iParam0, var uParam1)//Position - 0x5813
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_87(uParam1));
}

int func_87(var uParam0)//Position - 0x5828
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

void func_88(int iParam0)//Position - 0x585C
{
	func_107(93, iParam0);
	func_107(29, iParam0);
	func_107(30, iParam0);
}

int func_89(int iParam0)//Position - 0x587C
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
		return func_91(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_91(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_91(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_91(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_90(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_90(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_90(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_90(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_90(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_90(8277, -1);
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
	return BitTest(Global_2359296[func_84() /*5570*/].f_681.f_10, iParam0);
}

int func_90(int iParam0, int iParam1)//Position - 0x5A1C
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_86(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_91(int iParam0, int iParam1)//Position - 0x5A4B
{
	if (iParam1 == -1)
	{
		iParam1 = func_47();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_92(bool bParam0)//Position - 0x5A67
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
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_93(27, 1);
	return 1;
}

int func_93(int iParam0, int iParam1)//Position - 0x5B1E
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_94(iParam0, iParam1);
}

int func_94(int iParam0, int iParam1)//Position - 0x5B39
{
	if (func_28(14) && !func_105(iParam0))
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
	if (func_104(&Global_4543384))
	{
		if (func_102(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_95(&Global_4543384, iParam0))
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

int func_95(var uParam0, int iParam1)//Position - 0x5BD6
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_105(iParam1))
	{
		return 0;
	}
	if (func_102(uParam0, iParam1))
	{
		return 0;
	}
	if (func_101(uParam0) < 0f)
	{
		func_100(uParam0, 0);
	}
	func_98(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_96(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_96(var uParam0, int iParam1)//Position - 0x5C87
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_28(14) && !func_105(iParam1))
	{
		return 0;
	}
	if (func_102(uParam0, iParam1))
	{
		return 0;
	}
	if (func_101(uParam0) < 0f)
	{
		func_100(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_97(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_97(var uParam0, int iParam1)//Position - 0x5D02
{
	return (*uParam0)[iParam1] == 78;
}

void func_98(var uParam0)//Position - 0x5D13
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_99(uParam0, iVar0);
		iVar0++;
	}
	func_100(uParam0, (Global_4543383 - 0.5f));
}

void func_99(var uParam0, int iParam1)//Position - 0x5D47
{
	(*uParam0)[iParam1] = 78;
}

void func_100(var uParam0, float fParam1)//Position - 0x5D57
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

float func_101(var uParam0)//Position - 0x5D74
{
	return uParam0->f_80;
}

bool func_102(var uParam0, int iParam1)//Position - 0x5D80
{
	return func_103(uParam0, iParam1) != -1;
}

int func_103(var uParam0, int iParam1)//Position - 0x5D92
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

bool func_104(var uParam0)//Position - 0x5DBF
{
	return uParam0->f_79 == 1;
}

int func_105(int iParam0)//Position - 0x5DCD
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

void func_106(int iParam0, int iParam1)//Position - 0x5E1D
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_107(int iParam0, int iParam1)//Position - 0x5E40
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

void func_108()//Position - 0x5E9D
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

int func_109(int iParam0)//Position - 0x5F12
{
	return Global_2169[iParam0 /*29*/].f_17;
}

void func_110()//Position - 0x5F23
{
	int iVar0;
	
	switch (iLocal_124)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_89[0]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
						}
						if (!PED::IS_PED_INJURED(iLocal_89[1]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_89[1]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_89[1]);
						}
					}
					func_67(&uLocal_171, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_124++;
				}
			}
			break;
		
		case 1:
			iLocal_124++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_89[1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_82, 1f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				iLocal_123 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_124++;
			}
			break;
		
		case 3:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89[0], Local_82, 1f, -1, 0.25f, 0, 40000f);
					iLocal_124++;
				}
			}
			break;
		
		case 4:
			if (func_22() == 2)
			{
				if (func_67(&uLocal_171, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_123 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_124 = 7;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_171, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_123 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_124 = 7;
				}
			}
			else if (func_22() == 0)
			{
				if (func_67(&uLocal_171, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_123 = MISC::GET_GAME_TIMER() + 750;
					iLocal_124 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_124++;
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89[0], Local_82, 1f, -1, 0.25f, 0, 40000f);
						iLocal_123 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_124++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89[0], Local_82, 1f, -1, 0.25f, 0, 40000f);
						iLocal_123 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_124++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_124++;
			}
			break;
		
		case 8:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_128 = true;
			break;
	}
}

void func_111()//Position - 0x61D8
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_124)
	{
		case 0:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_92))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_89[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_89[0]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 4000, 2060, 4);
						}
						if (!PED::IS_PED_INJURED(iLocal_89[1]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_89[1]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_89[1]);
						}
					}
					StringCopy(&cLocal_141, "", 24);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_171, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iLocal_124++;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				iLocal_126 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.3348f, 2643.9084f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, false, 2);
				iLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.3016f, 2643.9983f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, false, 2);
				CAM::SHAKE_CAM(iLocal_126, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_127, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_127, iLocal_126, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::CLEAR_AREA(Local_79, 8f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_92, 1120.5507f, 2647.3071f, 36.9963f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_92, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_92, 5f);
				iLocal_123 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_124++;
			}
			break;
		
		case 2:
			if (iLocal_123 - 500) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(iLocal_89[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[1], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_82, 1f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						PED::SET_PED_KEEP_TASK(iLocal_89[1], true);
					}
				}
			}
			if (iLocal_123 - 1000) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[0], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_82 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
					}
				}
			}
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(iLocal_126, 1105.8485f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_127, 1105.9995f, 2664.4695f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_127, iLocal_126, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_123 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_124++;
			}
			break;
		
		case 3:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(iLocal_126, 1122.3701f, 2646.1082f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_127, 1122.3378f, 2646.1575f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_127, iLocal_126, 1500, 1, 1);
				if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_89[0], 1141.1556f, 2643.2046f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_89[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(iLocal_89[1], 1140.152f, 2644.149f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_89[1], 262.1522f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (func_22() == 2)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 1)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_22() == 0)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_123 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_124++;
			}
			break;
		
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				iLocal_124++;
			}
			break;
		
		case 5:
			iLocal_124 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_123 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_124++;
					}
				}
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_123 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_124++;
					}
				}
			}
			break;
		
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			func_114(0, 1, 1, 0, 0, 0, 0);
			PED::DELETE_PED(&(iLocal_89[0]));
			PED::DELETE_PED(&(iLocal_89[1]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 7);
			}
			if (iLocal_129)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_92, true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			}
			CAM::SET_CAM_ACTIVE(iLocal_126, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_78(func_22(), 1, 40, 0, 1);
			bLocal_128 = true;
	}
	if (iLocal_124 != 0)
	{
		if (func_112(1000))
		{
			func_68();
			iLocal_129 = 1;
			iLocal_124 = 7;
		}
	}
}

int func_112(int iParam0)//Position - 0x67B8
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_29) > iParam0)
		{
			Global_28 = MISC::GET_GAME_TIMER();
		}
		Global_29 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			if (func_113())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_113()//Position - 0x6802
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

void func_114(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6834
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_122(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_19())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_121(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_122(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_121(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_119(PLAYER::PLAYER_ID())) && !func_116(PLAYER::PLAYER_ID(), 0)) && !func_115()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_119(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_115()//Position - 0x6981
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_116(int iParam0, int iParam1)//Position - 0x699B
{
	bool bVar0;
	
	if (!func_118(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_117(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_117(int iParam0, bool bParam1)//Position - 0x69F4
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_118(var uParam0)//Position - 0x6A35
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

int func_119(int iParam0)//Position - 0x6A57
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_120())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_120()//Position - 0x6A96
{
	return BitTest(Global_2621446, 3);
}

int func_121(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x6AA4
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

void func_122(int iParam0)//Position - 0x6AD7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 13);
	}
}

void func_123()//Position - 0x6AFA
{
	switch (iLocal_124)
	{
		case 0:
			if (!func_4())
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 10000, 2060, 4);
				}
				if (bLocal_106)
				{
					func_67(&uLocal_171, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_67(&uLocal_171, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_124++;
			}
			break;
		
		case 1:
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_124++;
			break;
		
		case 2:
			if (func_22() == 0)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_82, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
				iLocal_123 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_124++;
			}
			break;
		
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				iLocal_124++;
			}
			break;
		
		case 5:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_128 = true;
			break;
	}
}

void func_124()//Position - 0x6CD9
{
	int iVar0;
	
	switch (iLocal_124)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !func_4())
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_89[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 10000, 2060, 4);
					}
					if (bLocal_106)
					{
						func_67(&uLocal_171, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_171, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_124++;
				}
			}
			break;
		
		case 1:
			iLocal_124++;
			break;
		
		case 2:
			iLocal_124++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_82, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
			}
			func_70(iLocal_89[0], 120000, 0, -1082130432);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_124++;
			break;
		
		case 4:
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			break;
		
		case 5:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				iLocal_124++;
			}
			break;
		
		case 6:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_128 = true;
			break;
	}
}

void func_125()//Position - 0x6F11
{
	switch (iLocal_124)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_92) && !func_4())
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_89[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 10000, 2060, 4);
					}
					if (bLocal_106)
					{
						func_67(&uLocal_171, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_67(&uLocal_171, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_124++;
				}
			}
			break;
		
		case 1:
			iLocal_124++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_82, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
				func_70(iLocal_89[0], 120000, 0, -1082130432);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_124++;
			}
			break;
		
		case 3:
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
			if (func_22() == 0)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			else if (func_22() == 2)
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_124++;
				}
			}
			break;
		
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				iLocal_124++;
			}
			break;
		
		case 5:
			iLocal_124++;
			break;
		
		case 6:
			iLocal_124++;
			break;
		
		case 7:
			func_78(func_22(), 1, 80, 0, 1);
			bLocal_128 = true;
			break;
	}
}

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x714D
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

void func_127()//Position - 0x7232
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
		if (iVar1 != 0)
		{
			iVar2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_132(64) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || iVar0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	switch (iLocal_344)
	{
		case 0:
			if (func_131())
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], iLocal_89[1], -1, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], iLocal_89[0], -1, 2060, 4);
				if (func_67(&uLocal_171, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89[0], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89[1], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					iLocal_345 = MISC::GET_GAME_TIMER();
					iLocal_344++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_345 = MISC::GET_GAME_TIMER();
				iLocal_344++;
			}
			break;
		
		case 2:
			if (func_131())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_345) > 5000)
				{
					if (func_67(&uLocal_171, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_345 = MISC::GET_GAME_TIMER();
						iLocal_344++;
					}
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_345) > 15000)
			{
				if (func_131())
				{
					TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_344++;
				}
			}
			break;
		
		case 4:
			if (func_131())
			{
				func_129();
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
						iLocal_345 = MISC::GET_GAME_TIMER();
						iLocal_344++;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_89[0]);
				TASK::CLEAR_PED_TASKS(iLocal_89[1]);
				iLocal_344 = 3;
			}
			break;
		
		case 5:
			if (func_131())
			{
				func_129();
				func_128();
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_89[1], false), false))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_345) > 15000)
					{
						bVar3 = false;
						iVar4 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
						if (iVar4 != 0)
						{
							iVar5 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						}
						if (func_22() == 0)
						{
							if (func_67(&uLocal_171, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_345 = MISC::GET_GAME_TIMER();
								iLocal_344++;
							}
						}
						else if (func_22() == 1)
						{
							if (func_67(&uLocal_171, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_345 = MISC::GET_GAME_TIMER();
								iLocal_344++;
							}
						}
						else if (func_22() == 2)
						{
							if (func_67(&uLocal_171, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_345 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_344++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_129();
			func_128();
			if ((MISC::GET_GAME_TIMER() - iLocal_345) > 5000 && func_131())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_89[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0f, false, false, false);
							}
							TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0f, false, false, false);
							iLocal_344++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_129();
			if (func_131())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_345 = MISC::GET_GAME_TIMER();
						iLocal_344++;
					}
				}
			}
			break;
		
		case 8:
			func_129();
			if (func_131())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_89[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
							iLocal_344 = 6;
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_345) > 10000)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_89[0]);
					TASK::CLEAR_PED_TASKS(iLocal_89[1]);
					iLocal_345 = MISC::GET_GAME_TIMER();
					iLocal_344++;
				}
			}
			break;
	}
}

void func_128()//Position - 0x791B
{
	if (!PED::IS_PED_INJURED(iLocal_89[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false), false))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false), 0, false, 0);
				}
			}
		}
	}
}

void func_129()//Position - 0x7A71
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_130();
}

void func_130()//Position - 0x7A81
{
	Global_23692.f_134 = 1;
}

int func_131()//Position - 0x7A8F
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_89[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[1], false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_89[1], false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_89[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], iVar0, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false) == iLocal_89[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false) == iLocal_89[1])
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

int func_132(int iParam0)//Position - 0x7B0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_133()//Position - 0x7B5C
{
	if (func_22() == 2)
	{
		if (func_65())
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

int func_134(struct<3> Param0)//Position - 0x7BD7
{
	if (func_22() == 2)
	{
		if (func_65() && !Global_33190)
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

void func_135()//Position - 0x7C64
{
	if (!bLocal_106)
	{
		if ((((((((!func_33("REDR1_SWV") && !func_33("REDR1_COM")) && !func_33("REDR1_BANT1")) && !func_33("REDR1_SIK")) && !func_33("REDR2_DC")) && !func_33("REDR1_OFFR")) && !func_33("REDR2_OFFR")) && !func_33("REDR1_CULT")) && !func_33("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_108 && !iLocal_132) && (MISC::GET_GAME_TIMER() - iLocal_169) > 9000)
		{
			if (!func_4())
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_132 = 1;
				}
			}
		}
	}
	if (iLocal_132 && !iLocal_133)
	{
		if (!func_4())
		{
			if (func_22() == 0)
			{
				func_67(&uLocal_171, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_22() == 1)
			{
				func_67(&uLocal_171, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_22() == 2)
			{
				func_67(&uLocal_171, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_147 = MISC::GET_GAME_TIMER() + 6000;
			iLocal_133 = 1;
		}
	}
	if (!bLocal_106)
	{
		if ((iLocal_132 && !iLocal_131) && iLocal_147 < MISC::GET_GAME_TIMER())
		{
			if (!func_4())
			{
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_133 = 0;
					iLocal_131 = 1;
				}
			}
		}
	}
	else if ((bLocal_106 && !iLocal_130) && iLocal_147 < MISC::GET_GAME_TIMER())
	{
		if (!func_4())
		{
			if (func_67(&uLocal_171, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_133 = 0;
				iLocal_130 = 1;
			}
		}
	}
}

void func_136()//Position - 0x7E1F
{
	if (func_2() && iLocal_109 < 2)
	{
		if ((PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (!func_33("REDR1_SWV"))
			{
				func_5(0);
				func_68();
				SYSTEM::WAIT(0);
				func_67(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_161 += 6;
			}
		}
		func_137(Local_158, (MISC::GET_GAME_TIMER() - iLocal_157));
	}
	if (iLocal_161 > 17)
	{
		iLocal_107 = 1;
	}
}

void func_137(struct<3> Param0, int iParam3)//Position - 0x7EB0
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_2())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_138(Var3, iParam3) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_33("REDR1_SWV"))
			{
				if (iLocal_163 == -1)
				{
					iLocal_163 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_163 < MISC::GET_GAME_TIMER())
				{
					iLocal_161 += 3;
					func_5(0);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_163 = -1;
			}
		}
	}
	if (Var3.f_1 > 0.025f)
	{
		iLocal_161++;
		if (!func_33("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_1 < -0.025f)
	{
		iLocal_161++;
		if (!func_33("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 > 0.025f)
	{
		iLocal_161++;
		if (!func_33("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 < -0.025f)
	{
		iLocal_161++;
		if (!func_33("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(0);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_138(struct<3> Param0, int iParam3)//Position - 0x8094
{
	struct<3> Var0;
	
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam3));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam3));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam3));
	return Var0;
}

void func_139()//Position - 0x80C0
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_89[0]))
	{
		switch (iLocal_109)
		{
			case 0:
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_109++;
				}
				break;
			
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !func_4())
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_89[0]);
						TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_112, 8f, -8f, -1, 0, 0f, false, false, false);
						iLocal_109++;
					}
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_112, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_1", sLocal_112);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_103)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_89[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_103 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_104)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_89[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_104 = 1;
							if (func_22() == 0)
							{
								func_67(&uLocal_171, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_22() == 1)
							{
								func_67(&uLocal_171, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_22() == 2)
							{
								func_67(&uLocal_171, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_105)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_89[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_105 = 1;
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_89[0], "random@drunk_driver_1", sLocal_112) > 0.8f)
					{
						iLocal_109++;
					}
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_112, 3))
				{
				}
				if (func_67(&uLocal_171, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_111, 2f, -4f, -1, 1, 0f, false, false, false);
					iLocal_103 = 0;
					iLocal_109++;
				}
				break;
			
			case 4:
				AUDIO::STOP_SOUND(iLocal_110);
				bLocal_106 = true;
				break;
			}
	}
}

void func_140()//Position - 0x834A
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_166)
		{
			iLocal_164 = MISC::GET_GAME_TIMER();
			iLocal_166 = 1;
		}
		else
		{
			iLocal_165 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_165 = 0;
		iLocal_166 = 0;
		iLocal_167 = 0;
	}
	if ((iLocal_165 - iLocal_164) > 50000 && !iLocal_167)
	{
		if (iLocal_52 == 1)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_171, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_167 = 1;
	}
	if ((iLocal_165 - iLocal_164) > 60000 && iLocal_167)
	{
		if (iLocal_52 == 2)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_171, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_89[0]) && !PED::IS_PED_INJURED(iLocal_89[1]))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_89[0], 40000f, 0);
			func_70(iLocal_89[0], 120000, 0, -1082130432);
			PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
			if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_89[1], iLocal_89[0], 0f, 1f, 0f, 1f, -1, 0.1f, true);
			func_70(iLocal_89[1], 120000, 0, -1082130432);
			PED::SET_PED_KEEP_TASK(iLocal_89[1], true);
			if (PED::IS_PED_IN_GROUP(iLocal_89[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_89[1]);
			}
		}
		func_66();
	}
}

void func_141()//Position - 0x849D
{
	if (iLocal_52 == 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_89[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 150f, 150f, 150f, false, true, 0))
			{
				func_66();
			}
			if (func_151() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_89[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_89[0], func_63());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_89[0], true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_89[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_111, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_112, 3)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_89[0]))
					{
						TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_111, 2f, -4f, -1, 1, 0f, false, false, false);
					}
					if (func_154())
					{
						func_62(0);
						iLocal_118 = 0;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_111, 3))
				{
					TASK::STOP_ANIM_PLAYBACK(iLocal_89[0], 0, false);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[0], false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89[0], "random@drunk_driver_1", sLocal_111, 3))
					{
						TASK::STOP_ANIM_PLAYBACK(iLocal_89[0], 0, false);
					}
				}
				if (func_4() && !iLocal_118)
				{
					func_62(1);
					iLocal_118 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_153[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_100))
				{
					iLocal_100 = func_144(Local_79, 1);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
				{
					uLocal_153[0] = func_169(iLocal_89[0], 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_100))
				{
					HUD::REMOVE_BLIP(&iLocal_100);
				}
			}
		}
	}
	if (iLocal_52 == 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_92, false) && !PED::IS_PED_INJURED(iLocal_89[0])) && !PED::IS_PED_INJURED(iLocal_89[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 150f, 150f, 150f, false, true, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[1], 150f, 150f, 150f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[0]))
					{
						if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
						}
						TASK::CLEAR_PED_TASKS(iLocal_89[0]);
						TASK::TASK_SMART_FLEE_PED(iLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_70(iLocal_89[0], 120000, 0, -1082130432);
						PED::SET_PED_KEEP_TASK(iLocal_89[0], true);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_89[1]))
					{
						if (PED::IS_PED_IN_GROUP(iLocal_89[1]))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_89[1]);
						}
						TASK::CLEAR_PED_TASKS(iLocal_89[1]);
						TASK::TASK_SMART_FLEE_PED(iLocal_89[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_70(iLocal_89[1], 120000, 0, -1082130432);
						PED::SET_PED_KEEP_TASK(iLocal_89[1], true);
					}
				}
				func_66();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], iLocal_92, false) && PED::IS_PED_IN_VEHICLE(iLocal_89[1], iLocal_92, false))
				{
					if (func_154())
					{
						func_62(0);
						iLocal_118 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_100))
					{
						iLocal_100 = func_144(Local_79, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_156))
				{
					HUD::REMOVE_BLIP(&iLocal_156);
				}
			}
			else
			{
				if ((func_4() && !iLocal_118) && iLocal_62 > 3)
				{
					func_62(1);
					iLocal_118 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_156))
				{
					iLocal_156 = func_152(iLocal_92, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_100))
				{
					HUD::REMOVE_BLIP(&iLocal_100);
				}
			}
		}
	}
}

void func_142()//Position - 0x88A6
{
	if (func_22() == 2)
	{
		if (!Global_33189)
		{
			func_143("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_33189 = 1;
		}
	}
}

void func_143(char* sParam0, int iParam1)//Position - 0x88CA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_144(struct<3> Param0, bool bParam3)//Position - 0x88E1
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_145(bool bParam0, float fParam1, float fParam2)//Position - 0x890D
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_146()//Position - 0x8924
{
	if (!PED::IS_PED_INJURED(iLocal_89[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_151())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_89[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[0], false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_89[0], 0, 0);
				}
				if (!iLocal_120)
				{
					if (!func_4())
					{
						func_67(&uLocal_171, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_120 = 1;
					}
				}
			}
			else
			{
				iLocal_120 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_89[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_89[0]);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_89[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_89[0], func_63());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_89[0], true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_89[0], 0);
		}
	}
}

float func_147(int iParam0, int iParam1, bool bParam2)//Position - 0x8A48
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

void func_148()//Position - 0x8AA6
{
	if (!func_64())
	{
		if (func_22() == 2)
		{
			Global_33187 = 1;
		}
	}
}

void func_149(int iParam0, var uParam1)//Position - 0x8AC2
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_150()//Position - 0x8B7B
{
	if (func_22() == 0)
	{
		if (func_67(&uLocal_171, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_168++;
		}
	}
	else if (func_22() == 1)
	{
		if (func_67(&uLocal_171, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_168++;
		}
	}
	else if (func_22() == 2)
	{
		if (func_67(&uLocal_171, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_168++;
		}
	}
}

int func_151()//Position - 0x8BFE
{
	int iVar0;
	
	if (iLocal_52 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_52 == 2)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if ((((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= iVar0)
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
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(int iParam0, bool bParam1, bool bParam2)//Position - 0x8D57
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_153(int iParam0, bool bParam1, bool bParam2)//Position - 0x8D6A
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_145(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_154()//Position - 0x8E0E
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

void func_155()//Position - 0x8E25
{
	if (!PED::IS_PED_INJURED(iLocal_89[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 30f, 30f, 30f, false, true, 0))
		{
			if (!iLocal_113)
			{
				if (func_67(&uLocal_171, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_113 = 1;
				}
			}
			if (!iLocal_114)
			{
				if (func_67(&uLocal_171, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
		}
	}
}

void func_156()//Position - 0x8E96
{
	if (HUD::DOES_BLIP_EXIST(iLocal_149))
	{
		HUD::REMOVE_BLIP(&iLocal_149);
	}
	iLocal_61 = 0;
	while (iLocal_61 <= (iLocal_88 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
		{
			uLocal_153[iLocal_61] = func_169(iLocal_89[iLocal_61], 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[iLocal_61], false);
		}
		iLocal_61++;
	}
}

void func_157()//Position - 0x8EEE
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_23278 = 0;
}

void func_158(bool bParam0)//Position - 0x8EFE
{
	if (bParam0)
	{
		StringCopy(&Global_113025, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113019 = 1;
	}
	else
	{
		StringCopy(&Global_113025, "NULL", 24);
		Global_113019 = 0;
	}
}

int func_159(int iParam0)//Position - 0x8F2A
{
	if (func_162())
	{
		Global_113959 = 1;
		Global_113956 = MISC::GET_GAME_TIMER();
		if (func_49(Global_113958))
		{
			func_160(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_49(Global_113958))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_160(int iParam0)//Position - 0x8F7D
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_143(func_161(iParam0), -1);
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
					func_143(func_161(iParam0), -1);
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
					func_143(func_161(iParam0), -1);
					Global_113969.f_24998.f_4++;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_161(int iParam0)//Position - 0x9058
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

int func_162()//Position - 0x909A
{
	switch (func_163(&Global_33008, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_163(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x90D0
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
		if (func_167(0))
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
		if (!func_165(iParam2))
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
			func_164(uParam0, iParam4);
		}
	}
	return 2;
}

void func_164(var uParam0, int iParam1)//Position - 0x9207
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

bool func_165(int iParam0)//Position - 0x9256
{
	return func_166(iParam0, Global_44042);
}

int func_166(int iParam0, int iParam1)//Position - 0x9267
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

int func_167(int iParam0)//Position - 0x9448
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_165(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_168(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x946A
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_23279 = 1;
	Global_23283 = 0;
	Global_23281 = iParam7;
	Global_2883585 = 0;
	return func_11(sParam2, iParam3, 0);
}

int func_169(int iParam0, bool bParam1, int iParam2)//Position - 0x94BD
{
	int iVar0;
	
	iVar0 = func_153(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_170()//Position - 0x9507
{
	if (func_172())
	{
		sLocal_111 = "drunk_idle_van";
		sLocal_112 = "vomit_van";
	}
	else if (func_171())
	{
		sLocal_111 = "drunk_idle_low";
		sLocal_112 = "vomit_low";
	}
	else
	{
		sLocal_111 = "drunk_idle";
		sLocal_112 = "vomit_outside";
	}
}

int func_171()//Position - 0x9547
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false), false))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false));
			if ((((((((((iVar0 == joaat("LAYOUT_LOW") || iVar0 == joaat("LAYOUT_LOW_BFINJECTION")) || iVar0 == joaat("LAYOUT_LOW_CHEETAH")) || iVar0 == joaat("LAYOUT_LOW_DUNE")) || iVar0 == joaat("LAYOUT_LOW_INFERNUS")) || iVar0 == joaat("LAYOUT_LOW_RESTRICTED")) || iVar0 == joaat("LAYOUT_LOW_SENTINEL2")) || iVar0 == joaat("LAYOUT_LOW_BLADE")) || iVar0 == joaat("LAYOUT_LOW_TURISMOR")) || iVar0 == joaat("LAYOUT_LOW_FURORE")) || iVar0 == joaat("LAYOUT_LOW_OSIRIS"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172()//Position - 0x961B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false), false))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(iLocal_89[0], false));
			if (((((((((((iVar0 == joaat("LAYOUT_VAN") || iVar0 == joaat("LAYOUT_VAN_BODHI")) || iVar0 == joaat("LAYOUT_VAN_BOXVILLE")) || iVar0 == joaat("LAYOUT_VAN_CADDY")) || iVar0 == joaat("LAYOUT_VAN_JOURNEY")) || iVar0 == joaat("LAYOUT_VAN_MULE")) || iVar0 == joaat("LAYOUT_VAN_POLICE")) || iVar0 == joaat("LAYOUT_VAN_TRASH")) || iVar0 == joaat("LAYOUT_4X4")) || iVar0 == joaat("LAYOUT_BISON")) || iVar0 == joaat("LAYOUT_RANGER")) || iVar0 == joaat("LAYOUT_RANGER_SWAT"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_173()//Position - 0x96FD
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_174()//Position - 0x976A
{
	if (!iLocal_59)
	{
		func_176(39, 1);
		func_176(40, 1);
		func_176(41, 1);
		func_176(42, 1);
		func_176(43, 1);
		func_176(44, 1);
		MISC::CLEAR_AREA(Local_66, 8f, true, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_66 - Vector(8f, 8f, 8f), Local_66 + Vector(8f, 8f, 8f), false, true, true, true, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_74 - Vector(10f, 15f, 15f), Local_74 + Vector(10f, 15f, 15f), false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_79 - Vector(10f, 15f, 15f), Local_79 + Vector(10f, 15f, 15f), false, true);
		MISC::SET_BIT(&uLocal_148, 5);
		if (func_22() == 0)
		{
			func_175(&uLocal_171, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (func_22() == 1)
		{
			func_175(&uLocal_171, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (func_22() == 2)
		{
			func_175(&uLocal_171, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &iLocal_98);
		iLocal_92 = VEHICLE::CREATE_VEHICLE(iLocal_96, Local_74, fLocal_77, true, true, false);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_92);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_92, 5f);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_96, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_92, true);
		iLocal_78 = ENTITY::GET_ENTITY_HEALTH(iLocal_92);
		iLocal_89[0] = PED::CREATE_PED(26, iLocal_94, Local_66, fLocal_69, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89[0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_89[0], iLocal_98);
		PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_89[0], 65536, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_94);
		AUDIO::STOP_PED_SPEAKING(iLocal_89[0], true);
		iLocal_89[1] = PED::CREATE_PED(26, iLocal_95, Local_70, fLocal_73, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89[1], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_89[1], iLocal_98);
		PED::SET_PED_CONFIG_FLAG(iLocal_89[1], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_89[1], 65536, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_89[1], true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_98, joaat("PLAYER"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
		if (iLocal_52 == 1)
		{
			TASK::TASK_PLAY_ANIM(iLocal_89[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(iLocal_89[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0f, false, false, false);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_89[0], "MOVE_M@DRUNK@VERYDRUNK", 0.25f);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_89[1], "MOVE_M@DRUNK@MODERATEDRUNK", 0.25f);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[0], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 4, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_92, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 299, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_89[0], false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_89[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_89[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_175(&uLocal_171, 3, iLocal_89[0], "REDR1Drunk1", 0, 1);
			func_175(&uLocal_171, 4, iLocal_89[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_52 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_79 - Vector(10f, 50f, 30f), Local_79 + Vector(10f, 50f, 30f), false, true, true, true, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_92, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_89[1], 8, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 134, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[1], 134, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 26, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[1], 26, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_89[1], 206, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_89[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_89[1], false);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_89[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_89[0], iLocal_89[1], -1, 2060, 4);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_89[1], "WORLD_HUMAN_BUM_STANDING", 0, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_89[1], false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_89[1], iLocal_89[0], -1, 2060, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_89[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 0.25f);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_89[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 0.25f);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_89[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_89[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_175(&uLocal_171, 3, iLocal_89[0], "REDR2DrunkM", 0, 1);
			func_175(&uLocal_171, 4, iLocal_89[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_59 = 1;
	}
}

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9C4A
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

void func_176(int iParam0, bool bParam1)//Position - 0x9CE5
{
	if (bParam1)
	{
		if (!func_180(iParam0, 2, 1))
		{
			func_179(iParam0, 2, 1);
		}
	}
	else if (func_180(iParam0, 2, 1))
	{
		func_177(iParam0, 2, 1);
	}
}

void func_177(int iParam0, int iParam1, bool bParam2)//Position - 0x9D1C
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
		if (func_44() == 0)
		{
			iVar0 = func_90(func_178(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_85(func_178(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_178(int iParam0)//Position - 0x9D8C
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

void func_179(int iParam0, int iParam1, bool bParam2)//Position - 0xA134
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
		if (func_44() == 0)
		{
			iVar0 = func_90(func_178(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_85(func_178(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

int func_180(int iParam0, int iParam1, bool bParam2)//Position - 0xA1A4
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
		if (func_44() == 0)
		{
			return BitTest(func_90(func_178(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_181()//Position - 0xA204
{
	STREAMING::REQUEST_MODEL(iLocal_94);
	STREAMING::REQUEST_MODEL(iLocal_96);
	STREAMING::REQUEST_MODEL(iLocal_95);
	if (iLocal_52 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	}
	else if (iLocal_52 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_94) && STREAMING::HAS_MODEL_LOADED(iLocal_96)) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK")) && STREAMING::HAS_MODEL_LOADED(iLocal_95))
	{
		if (iLocal_52 == 1)
		{
			if (((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1")) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1))
			{
				iLocal_54 = 1;
			}
		}
		else if (iLocal_52 == 2)
		{
			if ((STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_54 = 1;
			}
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_94);
		STREAMING::REQUEST_MODEL(iLocal_96);
		STREAMING::REQUEST_MODEL(iLocal_95);
		if (iLocal_52 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
		}
		else if (iLocal_52 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_182()//Position - 0xA365
{
	if (iLocal_52 == 1)
	{
		Local_150 = { -1018.2382f, -1350.1014f, 4.475f };
		iLocal_88 = 2;
		iLocal_94 = joaat("A_M_Y_BeachVesp_01");
		iLocal_95 = joaat("A_M_Y_BeachVesp_02");
		Local_66 = { -1016.7623f, -1356.459f, 4.5531f };
		fLocal_69 = 247.8087f;
		Local_70 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_73 = 66.3861f;
		Local_74 = { -1027.7618f, -1341.6439f, 4.4614f };
		fLocal_77 = 76.9418f;
		iLocal_96 = joaat("baller2");
		Local_79 = { 160.8892f, -111.4167f, 61.2999f };
		Local_82 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_58 = true;
	}
	if (iLocal_52 == 2)
	{
		Local_150 = { 1893.8561f, 3714.3457f, 31.7771f };
		iLocal_88 = 2;
		iLocal_94 = joaat("A_M_Y_GenStreet_01");
		iLocal_95 = joaat("A_F_Y_Hipster_03");
		Local_66 = { 1893.8561f, 3714.3457f, 31.7771f };
		fLocal_69 = 252.0142f;
		Local_70 = { 1894.7627f, 3714.1604f, 31.7605f };
		fLocal_73 = 86.1102f;
		Local_74 = { 1888.2565f, 3717.1892f, 31.8394f };
		fLocal_77 = 299.4672f;
		iLocal_96 = joaat("emperor");
		Local_79 = { 1120.5507f, 2647.3071f, 36.9963f };
		Local_82 = { 1121.8657f, 2641.7068f, 37.1487f };
		bLocal_58 = true;
	}
}

int func_183()//Position - 0xA4BD
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
		{
			return 0;
		}
	}
	if (func_190())
	{
		return 1;
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, bool bParam1)//Position - 0xA543
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
		if (func_24(func_22()))
		{
			iVar36 = func_54();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113969.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar32 /*6*/], 3))
				{
					func_185(iVar32, &Var0);
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

void func_185(int iParam0, var uParam1)//Position - 0xA5F4
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xB769
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

int func_187(int iParam0)//Position - 0xB7FA
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

struct<2> func_188(int iParam0)//Position - 0xBB40
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_189(iParam0) };
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

struct<2> func_189(int iParam0)//Position - 0xBB76
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

int func_190()//Position - 0xBFC1
{
	if (func_193() && !func_194())
	{
		return 1;
	}
	if (func_192() && func_191())
	{
		return 1;
	}
	return 0;
}

bool func_191()//Position - 0xBFF3
{
	return Global_113687 > 0;
}

int func_192()//Position - 0xC003
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()//Position - 0xC018
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_194()//Position - 0xC03B
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

int func_195()//Position - 0xC058
{
	if (!func_165(5))
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
		{
			return 0;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_196()//Position - 0xC0BA
{
	if ((Global_113958 == func_58() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0)//Position - 0xC0E5
{
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_199(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_198();
}

void func_198()//Position - 0xC11B
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

void func_199(int iParam0)//Position - 0xC158
{
	Global_113958 = iParam0;
}

int func_200(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC166
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
		iParam3 = func_58();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_241())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_39(0))
		{
			return 0;
		}
		if (func_190())
		{
			return 0;
		}
		if (func_240())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_24(func_22()))
		{
			if (func_184(100f, 1) != -1)
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
		if (!func_239(iParam3))
		{
			return 0;
		}
		if (func_24(func_22()))
		{
			if (func_238(func_22()) == 4 || func_238(func_22()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_22()))
		{
			if (!func_237(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_236(Global_113969.f_24998.f_43[iParam3]))
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
		if (func_235())
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
		if (!func_226(4))
		{
			return 0;
		}
		if (!func_165(5))
		{
			return 0;
		}
		if (func_225(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_225(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_239(30) && !func_225(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_22()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113969.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113969.f_2366.f_539.f_2296[iVar4];
				if (func_224(iVar8))
				{
					if (func_202(iVar4))
					{
						if (!func_201(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_22() != iVar4)
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

bool func_201(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xC500
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_202(int iParam0)//Position - 0xC547
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_203(iVar0);
}

int func_203(int iParam0)//Position - 0xC568
{
	return func_204(iParam0, 1);
}

int func_204(int iParam0, int iParam1)//Position - 0xC577
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_224(iParam0))
	{
		return 0;
	}
	func_205(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC5CA
{
	func_206(func_217(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_206(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC5E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_216(iParam0, iParam1))
	{
		iVar0 = func_215(iParam1);
		iVar1 = func_213(iParam0);
		iVar2 = (func_213(iParam0) - func_213(iParam1));
		iVar3 = (func_215(iParam0) - func_215(iParam1));
		iVar4 = (func_212(iParam0) - func_212(iParam1));
		iVar5 = (func_211(iParam0) - func_211(iParam1));
		iVar6 = (func_210(iParam0) - func_210(iParam1));
		iVar7 = (func_209(iParam0) - func_209(iParam1));
	}
	else
	{
		iVar0 = func_215(iParam0);
		iVar1 = func_213(iParam1);
		iVar2 = (func_213(iParam1) - func_213(iParam0));
		iVar3 = (func_215(iParam1) - func_215(iParam0));
		iVar4 = (func_212(iParam1) - func_212(iParam0));
		iVar5 = (func_211(iParam1) - func_211(iParam0));
		iVar6 = (func_210(iParam1) - func_210(iParam0));
		iVar7 = (func_209(iParam1) - func_209(iParam0));
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
		iVar4 = (iVar4 + func_208(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_207(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_207(float fParam0, float fParam1, float fParam2)//Position - 0xC7E9
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

int func_208(int iParam0, int iParam1)//Position - 0xC82B
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

int func_209(int iParam0)//Position - 0xC8CD
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_210(int iParam0)//Position - 0xC8E0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_211(int iParam0)//Position - 0xC8F3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_212(int iParam0)//Position - 0xC906
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_213(int iParam0)//Position - 0xC918
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_214(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_214(bool bParam0, int iParam1, int iParam2)//Position - 0xC93A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_215(int iParam0)//Position - 0xC951
{
	return iParam0 & 15;
}

int func_216(int iParam0, int iParam1)//Position - 0xC95E
{
	int iVar0;
	int iVar1;
	
	if (!func_224(iParam1) || !func_224(iParam0))
	{
		return 1;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_217()//Position - 0xCA6A
{
	var uVar0;
	
	func_223(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_222(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_221(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_220(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_219(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_218(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_218(var uParam0, int iParam1)//Position - 0xCAB0
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

void func_219(var uParam0, int iParam1)//Position - 0xCB36
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_220(var uParam0, int iParam1)//Position - 0xCB69
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_215(*uParam0);
	iVar1 = func_213(*uParam0);
	if (iParam1 < 1 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_221(var uParam0, int iParam1)//Position - 0xCBBA
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_222(var uParam0, int iParam1)//Position - 0xCBF4
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_223(var uParam0, int iParam1)//Position - 0xCC2F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_224(int iParam0)//Position - 0xCC6B
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
	iVar0 = func_209(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_210(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_211(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_213(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_215(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_212(iParam0);
	if (iVar5 < 1 || iVar5 > func_208(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, bool bParam1)//Position - 0xCD47
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0xCD67
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_22();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_234()) || Global_113016) || Global_32951) || func_233()) || func_30(8, -1)) || func_232()) || func_231()) || func_230()) || func_229()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_234()) || Global_32951) || func_233()) || func_30(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_234()) || Global_113016) || Global_32951) || func_233()) || func_30(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_234()) || Global_113016) || Global_32951) || func_233()) || func_30(8, -1)) || func_232()) || func_231()) || func_229()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_234() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_30(8, -1)) || func_229()) || func_228()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_30(8, -1) || func_232()) || func_231()) || func_228()) || func_227())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_234()) || Global_32951) || func_233()) || func_30(8, -1)) || func_231()) || func_230()) || func_229()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_234()) || func_231()) || Global_113016) || Global_32951) || func_233()) || Global_45250) || func_30(8, -1)) || func_230()) || func_228()) || func_229()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_234()) || Global_113016) || Global_32951) || func_233()) || func_30(8, -1)) || func_230()) || func_228()) || func_232()) || func_231()) || func_229())
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

var func_227()//Position - 0xD484
{
	return Global_101572.f_1;
}

int func_228()//Position - 0xD492
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_229()//Position - 0xD4B5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_230()//Position - 0xD4CF
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

bool func_231()//Position - 0xD4F9
{
	return Global_101585.f_394 > 0;
}

bool func_232()//Position - 0xD50A
{
	return Global_101585.f_393 > 0;
}

var func_233()//Position - 0xD51B
{
	return Global_1575083;
}

int func_234()//Position - 0xD527
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_235()//Position - 0xD543
{
	func_21();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_236(int iParam0)//Position - 0xD56B
{
	return func_216(func_217(), iParam0);
}

int func_237(int iParam0, int iParam1, int iParam2)//Position - 0xD57D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_22();
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

int func_238(int iParam0)//Position - 0xD661
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_239(int iParam0)//Position - 0xD685
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_241())
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

int func_240()//Position - 0xD6DD
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

int func_241()//Position - 0xD721
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

void func_242()//Position - 0xD7D9
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_170)
	{
		func_281(0);
		if (Global_33191)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_280();
		func_6();
		AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_74 - Vector(10f, 15f, 15f), Local_74 + Vector(10f, 15f, 15f), true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_79 - Vector(10f, 15f, 15f), Local_79 + Vector(10f, 15f, 15f), true, true);
		func_158(0);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_93, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false) && func_147(PLAYER::PLAYER_PED_ID(), iLocal_93, 1) > 50f)
			{
				func_254(iLocal_93, 0, 145);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_89[0], 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[0], false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_89[0]);
				}
				if (PED::IS_PED_IN_GROUP(iLocal_89[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_89[0]);
				}
			}
		}
		iLocal_61 = 0;
		while (iLocal_61 <= (iLocal_88 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_89[iLocal_61]))
			{
				if (!PED::IS_PED_INJURED(iLocal_89[iLocal_61]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_89[iLocal_61], 317, true);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_89[iLocal_61], false))
					{
						PED::RESET_PED_LAST_VEHICLE(iLocal_89[iLocal_61]);
					}
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_89[iLocal_61], true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_98, joaat("PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89[iLocal_61], false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_89[iLocal_61]));
			}
			iLocal_61++;
		}
		iLocal_61 = 0;
		while (iLocal_61 <= (iLocal_88 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
			{
				HUD::REMOVE_BLIP(&(uLocal_153[iLocal_61]));
			}
			iLocal_61++;
		}
		if (iLocal_52 == 1)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.4054f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_125))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_125))
			{
				CAM::SET_CAM_ACTIVE(iLocal_125, false);
			}
		}
	}
	func_243(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_243(int iParam0)//Position - 0xDA6D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_58();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_196())
	{
		func_247(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_246(30000);
		StringCopy(&cVar0, func_245(Global_113958, 1), 64);
		if (func_57(Global_113958) > 0)
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
	func_244(&Global_33008);
	Global_113959 = 0;
	func_199(-1);
}

void func_244(var uParam0)//Position - 0xDB1F
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

char* func_245(int iParam0, bool bParam1)//Position - 0xDB5C
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

void func_246(int iParam0)//Position - 0xDDA5
{
	Global_44593 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_247(int iParam0)//Position - 0xDDB7
{
	func_248(iParam0, 0, func_253(iParam0));
}

void func_248(int iParam0, int iParam1, int iParam2)//Position - 0xDDCC
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_217();
	func_251(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_250(iParam0, &uVar0);
	Var1 = { func_249(&uVar0) };
}

struct<16> func_249(var uParam0)//Position - 0xDDFB
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_211(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_209(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_212(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_215(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_213(*uParam0), 64);
	return Var0;
}

void func_250(int iParam0, var uParam1)//Position - 0xDECA
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDEE2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_213(*uParam0);
	iVar1 = func_215(*uParam0);
	iVar2 = func_212(*uParam0);
	iVar3 = func_211(*uParam0);
	iVar4 = func_210(*uParam0);
	iVar5 = func_209(*uParam0);
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
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_252(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE064
{
	func_223(uParam0, iParam1);
	func_222(uParam0, iParam2);
	func_221(uParam0, iParam3);
	func_219(uParam0, iParam5);
	func_220(uParam0, iParam4);
	func_218(uParam0, iParam6);
}

int func_253(int iParam0)//Position - 0xE09C
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

int func_254(int iParam0, int iParam1, int iParam2)//Position - 0xE23F
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_255(iParam0, iParam2);
	return 1;
}

void func_255(int iParam0, int iParam1)//Position - 0xE27F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_261(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_256(iParam0, &(Global_113969.f_32753.f_5510));
}

void func_256(int iParam0, var uParam1)//Position - 0xE481
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_260(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_259(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_258(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_257(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_257(int iParam0)//Position - 0xE72C
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_258(int iParam0, var uParam1, var uParam2)//Position - 0xE7DC
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_259(int iParam0)//Position - 0xE9CF
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_260(var uParam0)//Position - 0xE9EF
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_261(int iParam0)//Position - 0xEA9E
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_278(iParam0, 0, 0)) || func_278(iParam0, 1, 0)) || func_278(iParam0, 2, 0)) || func_277(iParam0) != 145) || func_276(iParam0)) || func_275(iParam0)) || func_274(iParam0)) || func_273(iParam0)) || !func_262(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_275(iParam0))
		{
		}
		if (func_275(iParam0))
		{
		}
		if (func_278(iParam0, 0, 0))
		{
		}
		if (func_278(iParam0, 1, 0))
		{
		}
		if (func_278(iParam0, 2, 0))
		{
		}
		if (func_277(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_262(int iParam0)//Position - 0xEB7B
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_263(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_263(int iParam0, bool bParam1, int iParam2)//Position - 0xED39
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_241())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_272() && !func_271()) && !func_270()) && !func_269()) && !func_241())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_268() || MISC::IS_PC_VERSION()) || func_267())
					{
					}
					else if (!func_270())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_266(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_264(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_264(int iParam0)//Position - 0xEEBE
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_265())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_265()//Position - 0xEF8A
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_266(int iParam0, int iParam1)//Position - 0xEFA1
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("vorschlaghammer"):
			iVar1 = Global_262145.f_35588[0] /* Tunable: LAUNCHPOSIX_VEHICLE_0 */;
			break;
		
		case joaat("driftvorschlag"):
			iVar1 = Global_262145.f_35588[1] /* Tunable: LAUNCHPOSIX_VEHICLE_1 */;
			break;
		
		case joaat("driftnebula"):
			iVar1 = Global_262145.f_35588[2] /* Tunable: LAUNCHPOSIX_VEHICLE_2 */;
			break;
		
		case joaat("driftcypher"):
			iVar1 = Global_262145.f_35588[3] /* Tunable: LAUNCHPOSIX_VEHICLE_3 */;
			break;
		
		case joaat("polimpaler5"):
			iVar1 = Global_262145.f_35588[4] /* Tunable: LAUNCHPOSIX_VEHICLE_4 */;
			break;
		
		case joaat("driftsentinel"):
			iVar1 = Global_262145.f_35588[5] /* Tunable: LAUNCHPOSIX_VEHICLE_5 */;
			break;
		
		case joaat("castigator"):
			iVar1 = Global_262145.f_35588[6] /* Tunable: LAUNCHPOSIX_VEHICLE_6 */;
			break;
		
		case joaat("polgreenwood"):
			iVar1 = Global_262145.f_35588[7] /* Tunable: LAUNCHPOSIX_VEHICLE_7 */;
			break;
		
		case joaat("pipistrello"):
			iVar1 = Global_262145.f_35588[8] /* Tunable: LAUNCHPOSIX_VEHICLE_8 */;
			break;
		
		case joaat("envisage"):
			iVar1 = Global_262145.f_35588[9] /* Tunable: LAUNCHPOSIX_VEHICLE_9 */;
			break;
		
		case joaat("poldorado"):
			iVar1 = Global_262145.f_35588[10] /* Tunable: LAUNCHPOSIX_VEHICLE_10 */;
			break;
		
		case joaat("paragon3"):
			iVar1 = Global_262145.f_35588[11] /* Tunable: LAUNCHPOSIX_VEHICLE_11 */;
			break;
		
		case joaat("dominator10"):
			iVar1 = Global_262145.f_35588[12] /* Tunable: LAUNCHPOSIX_VEHICLE_12 */;
			break;
		
		case joaat("poldominator10"):
			iVar1 = Global_262145.f_35588[13] /* Tunable: LAUNCHPOSIX_VEHICLE_13 */;
			break;
		
		case joaat("pizzaboy"):
			iVar1 = Global_262145.f_35588[14] /* Tunable: LAUNCHPOSIX_VEHICLE_14 */;
			break;
		
		case joaat("coquette5"):
			iVar1 = Global_262145.f_35588[15] /* Tunable: LAUNCHPOSIX_VEHICLE_15 */;
			break;
		
		case joaat("niobe"):
			iVar1 = Global_262145.f_35588[16] /* Tunable: LAUNCHPOSIX_VEHICLE_16 */;
			break;
		
		case joaat("eurosx32"):
			iVar1 = Global_262145.f_35588[17] /* Tunable: LAUNCHPOSIX_VEHICLE_17 */;
			break;
		
		case joaat("yosemite1500"):
			iVar1 = Global_262145.f_35588[18] /* Tunable: LAUNCHPOSIX_VEHICLE_18 */;
			break;
		
		case joaat("polimpaler6"):
			iVar1 = Global_262145.f_35588[19] /* Tunable: LAUNCHPOSIX_VEHICLE_19 */;
			break;
		
		case joaat("policet3"):
			iVar1 = Global_262145.f_35588[20] /* Tunable: LAUNCHPOSIX_VEHICLE_20 */;
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_267()//Position - 0xF1F2
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_268()//Position - 0xF208
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_269()//Position - 0xF21E
{
	return 0;
}

int func_270()//Position - 0xF227
{
	return 1;
}

int func_271()//Position - 0xF230
{
	return 1;
}

int func_272()//Position - 0xF239
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0)//Position - 0xF252
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_263(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0xF299
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_275(int iParam0)//Position - 0xF2D4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98844[iVar0], false))
			{
				if (Global_98844[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98844[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0xF350
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_277(int iParam0)//Position - 0xF438
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_278(int iParam0, int iParam1, bool bParam2)//Position - 0xF49B
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_279(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_279(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xF509
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_280()//Position - 0xF5E0
{
	Global_33187 = 0;
	Global_33188 = 0;
	Global_33190 = 0;
	Global_33191 = 0;
	Global_33192 = 0;
}

void func_281(bool bParam0)//Position - 0xF5FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_176(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_282()//Position - 0xF61F
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_337, true);
		iLocal_336 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_340, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_340, true);
			iLocal_336 = 2;
		}
		if (iLocal_336 == 1)
		{
			bLocal_343 = true;
			iLocal_52 = 1;
			return Local_337;
		}
		if (iLocal_336 == 2)
		{
			bLocal_343 = 2;
			iLocal_52 = 2;
			return Local_340;
		}
	}
	return 0f, 0f, 0f;
}

