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
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58[4] = { 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	float fLocal_84 = 0f;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	float fLocal_100 = 0f;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 16;
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
	int iLocal_299 = 0;
	char* sLocal_300 = NULL;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
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
	fLocal_41 = 20f;
	iLocal_115 = 1;
	iLocal_306 = 6000;
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_53))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_53);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_55))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_55);
			}
		}
		func_185();
	}
	if (func_184(283, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_155(Local_50, -1, 0, 0, 0))
	{
		if ((CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		func_152(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_114)
		{
			if (!func_151())
			{
				if (func_150())
				{
					func_185();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SDRM", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_138())
					{
						func_185();
					}
					if (iLocal_48)
					{
						iLocal_49 = 1;
						iLocal_46 = 1;
					}
					else
					{
						func_128();
					}
					break;
				
				case 1:
					func_127();
					if (!iLocal_112)
					{
						func_126();
						func_123();
						func_112();
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_316))
						{
							func_111();
						}
					}
					else
					{
						func_108();
						if (!bLocal_122)
						{
							func_106();
						}
						func_98();
						func_96();
						func_80();
						func_79(iLocal_53, 0);
						if (!bLocal_119)
						{
						}
						if (iLocal_47 == 0 && !bLocal_116)
						{
							func_75();
							func_73();
						}
						else
						{
							func_68();
						}
						if (iLocal_47 == 3)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_85, true) < 100f)
							{
								if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
								}
								if (CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if ((((!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_55)) && !PED::IS_PED_INJURED(iLocal_54)) && !PED::IS_PED_INJURED(iLocal_56)) && !ENTITY::IS_ENTITY_DEAD(iLocal_130, false))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", iLocal_53, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", iLocal_55, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", iLocal_54, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", iLocal_56, 0);
										}
									}
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
							if (bLocal_116)
							{
								if (func_67(1, 0, 1))
								{
									func_31();
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_55))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_55, false))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_320))
									{
										HUD::REMOVE_BLIP(&iLocal_320);
										if (HUD::DOES_BLIP_EXIST(iLocal_318))
										{
											HUD::REMOVE_BLIP(&iLocal_318);
										}
										if (!HUD::DOES_BLIP_EXIST(iLocal_318))
										{
											iLocal_318 = func_29(Local_65, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!PED::IS_PED_INJURED(iLocal_55))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!PED::IS_PED_INJURED(iLocal_56))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_185();
		}
	}
}

void func_1()//Position - 0x395
{
}

void func_2()//Position - 0x39D
{
	func_185();
}

int func_3()//Position - 0x3A9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(iLocal_53))
		{
			return 1;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(iLocal_53))
			{
				return 1;
			}
			if (bLocal_114)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_27();
					if (func_4(&uLocal_134, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_57, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_57)) || ENTITY::IS_ENTITY_IN_WATER(iLocal_57))
		{
			func_27();
			if (func_4(&uLocal_134, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_57))
				{
					func_27();
					if (func_4(&uLocal_134, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_27();
		if (func_4(&uLocal_134, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_47 >= 1)
	{
		if (bLocal_121)
		{
			if (PED::IS_PED_INJURED(iLocal_55))
			{
				func_27();
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
			{
				func_27();
				return 1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (!iLocal_124)
				{
					func_27();
					if (func_4(&uLocal_134, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_124 = 1;
					}
				}
			}
			else
			{
				iLocal_124 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_47 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_INJURED(iLocal_54) || PED::IS_PED_INJURED(iLocal_56))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0) && iLocal_308)
			{
				if (!iLocal_125)
				{
					func_27();
					if (func_4(&uLocal_134, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_125 = 1;
					}
				}
			}
			else
			{
				iLocal_125 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6AC
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)//Position - 0x6FA
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()//Position - 0x9C8
{
	if (!func_7())
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

int func_7()//Position - 0x9FF
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_10())
	{
		return 0;
	}
	if (func_8(PLAYER::PLAYER_ID()))
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

bool func_8(int iParam0)//Position - 0xA62
{
	return func_9(iParam0, 20);
}

var func_9(int iParam0, int iParam1)//Position - 0xA72
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_10()//Position - 0xA8A
{
	return -1;
}

void func_11()//Position - 0xA93
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

void func_12()//Position - 0xAC4
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

int func_13()//Position - 0xB59
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0xB80
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

void func_15()//Position - 0xC19
{
	if (func_22(14))
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
		Global_20500 = func_16();
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

int func_16()//Position - 0xCBB
{
	func_17();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_17()//Position - 0xCD4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_19(PLAYER::PLAYER_PED_ID());
			if (func_18(iVar0) && (!func_22(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_18(Global_113810.f_2366.f_539.f_4321))
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

bool func_18(int iParam0)//Position - 0xDD1
{
	return iParam0 < 3;
}

int func_19(int iParam0)//Position - 0xDDD
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)//Position - 0xE1A
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)//Position - 0xE3F
{
	return Global_2058[iParam0 /*29*/];
}

bool func_22(int iParam0)//Position - 0xE4E
{
	return Global_43377 == iParam0;
}

void func_23()//Position - 0xE5C
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

bool func_24(int iParam0, int iParam1)//Position - 0xEB3
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

void func_25()//Position - 0xEEB
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xF42
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;
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

void func_27()//Position - 0xF98
{
	Global_20711 = 0;
	func_28();
}

void func_28()//Position - 0xFA8
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

int func_29(struct<3> Param0, bool bParam3)//Position - 0xFC9
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_30(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_30(bool bParam0, float fParam1, float fParam2)//Position - 0xFF5
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_31()//Position - 0x100C
{
	switch (iLocal_129)
	{
		case 0:
			func_27();
			SYSTEM::WAIT(0);
			func_58(1, 1, 1, 0, 0, 0, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			iLocal_308 = 0;
			iLocal_129++;
			break;
		
		case 1:
			iLocal_129++;
			break;
		
		case 2:
			if ((((!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_55)) && !PED::IS_PED_INJURED(iLocal_54)) && !PED::IS_PED_INJURED(iLocal_56)) && !ENTITY::IS_ENTITY_DEAD(iLocal_130, false))
			{
				if (func_57())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_53, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_54, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_56, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_129++;
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_130, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_130, 5f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_130, true);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				}
				iLocal_129++;
			}
			break;
		
		case 4:
			PED::DELETE_PED(&iLocal_53);
			PED::DELETE_PED(&iLocal_55);
			PED::DELETE_PED(&iLocal_54);
			PED::DELETE_PED(&iLocal_56);
			func_58(0, 1, 1, 0, 0, 0, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_32();
			break;
	}
}

void func_32()//Position - 0x116F
{
	while (!func_56())
	{
		SYSTEM::WAIT(0);
	}
	func_36(-1, 0);
	func_33();
	func_185();
}

void func_33()//Position - 0x1195
{
	func_34();
}

int func_34()//Position - 0x11A2
{
	if (func_35(0))
	{
		return 0;
	}
	if (Global_100872.f_8)
	{
		if (Global_100872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100872.f_10 > 1)
	{
		return 0;
	}
	Global_100872.f_10++;
	return 1;
}

int func_35(bool bParam0)//Position - 0x11ED
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_36(int iParam0, int iParam1)//Position - 0x1215
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_53(iParam0))
	{
		func_52(iParam0, iParam1);
		if (!func_51(51))
		{
			func_47("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_50(), 0, 138, 0);
			func_46(51);
		}
		if (func_45(iParam0))
		{
			Global_113810.f_24998.f_2 = 3;
		}
		if (func_44(iParam0, iParam1) != 322)
		{
			func_38(func_44(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113798 = iParam1;
		if (Global_113796 == 0)
		{
			if (((Global_113799 == 1 || Global_113799 == 5) || Global_113799 == 11) || Global_113799 == 25)
			{
				func_37(2);
			}
			else if ((Global_113799 == 26 || Global_113799 == 8) || Global_113799 == 17)
			{
				func_37(7);
			}
			else
			{
				func_37(1);
			}
		}
	}
}

void func_37(int iParam0)//Position - 0x1318
{
	Global_113796 = iParam0;
}

void func_38(int iParam0, var uParam1, var uParam2)//Position - 0x1326
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
		func_42((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_39();
	}
}

void func_39()//Position - 0x140C
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
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113810.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113546++;
					fVar1 = (fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113547++;
					fVar2 = (fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113548++;
					fVar3 = (fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113549++;
					fVar4 = (fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113550++;
					fVar5 = (fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113551++;
					fVar6 = (fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113552++;
					fVar7 = (fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113529 > 0)
	{
		if (Global_113546 == Global_113529)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113530 > 0)
	{
		if (Global_113547 == Global_113530)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113531 > 0)
	{
		if (Global_113548 == Global_113531)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113532 > 0)
	{
		if (Global_113549 == Global_113532)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113533 > 0)
	{
		if (((Global_113550 == Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550 == Global_113536)
		{
			if (!BitTest(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113534 > 0)
	{
		if (Global_113551 == Global_113534)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113535 > 0)
	{
		if (Global_113552 == Global_113535)
		{
			fVar7 = 5f;
		}
	}
	Global_113810.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
	{
		iVar9 = Global_113536;
	}
	else
	{
		iVar9 = Global_113550;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113552 + Global_113551), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113535 + Global_113534), true);
	Global_113553 = (Global_113546 * 100 / Global_113529);
	Global_113555 = ((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
	Global_113554 = ((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
	Global_113556 = ((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113553, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113555, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
	{
		func_41(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_40() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113544 = 0;
				}
				if (!Global_63485)
				{
					func_34();
				}
			}
		}
	}
}

int func_40()//Position - 0x18CA
{
	return Global_32283;
}

int func_41(int iParam0, int iParam1)//Position - 0x18D5
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

void func_42(int iParam0, bool bParam1, int iParam2)//Position - 0x1926
{
	if (iParam2 == -1)
	{
		iParam2 = func_43();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_43()//Position - 0x1944
{
	return Global_1574918;
}

int func_44(int iParam0, int iParam1)//Position - 0x1950
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

int func_45(int iParam0)//Position - 0x1CC4
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

void func_46(int iParam0)//Position - 0x1CF3
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
		MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1D35
{
	func_48(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_48(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1D56
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
	while (iVar0 < Global_113810.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113810.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113810.f_20413.f_145++;
		func_49();
	}
}

void func_49()//Position - 0x1F29
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113810.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_20413.f_145)
	{
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0])
			{
				Global_113810.f_20413.f_146[0] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1])
			{
				Global_113810.f_20413.f_146[1] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2])
			{
				Global_113810.f_20413.f_146[2] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_50()//Position - 0x2040
{
	func_17();
	switch (Global_113810.f_2366.f_539.f_4321)
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

int func_51(int iParam0)//Position - 0x2086
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
		return BitTest(Global_113810.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_52(int iParam0, int iParam1)//Position - 0x20C6
{
	MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}

int func_53(int iParam0)//Position - 0x20E1
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

int func_54()//Position - 0x2192
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_55(Var0);
	return uVar16;
}

int func_55(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x21AF
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

int func_56()//Position - 0x2389
{
	return 1;
}

bool func_57()//Position - 0x2392
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_78688)
	{
		if (!bVar0)
		{
			Global_78688 = 1;
		}
	}
	return bVar0;
}

void func_58(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x23B5
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_66(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_13())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_65(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_66(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_65(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_63(PLAYER::PLAYER_ID())) && !func_60(PLAYER::PLAYER_ID(), 0)) && !func_59()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_63(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_59()//Position - 0x2502
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_60(int iParam0, int iParam1)//Position - 0x251C
{
	bool bVar0;
	
	if (!func_62(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_61(-1, 0) == 8;
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

int func_61(int iParam0, bool bParam1)//Position - 0x2575
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
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

int func_62(var uParam0)//Position - 0x25B6
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

int func_63(int iParam0)//Position - 0x25D8
{
	if (func_60(iParam0, 0))
	{
		return 1;
	}
	if (func_64())
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

bool func_64()//Position - 0x2617
{
	return BitTest(Global_2621446, 3);
}

int func_65(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x2625
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

void func_66(int iParam0)//Position - 0x2658
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

int func_67(bool bParam0, bool bParam1, bool bParam2)//Position - 0x267B
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

void func_68()//Position - 0x2760
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
	{
		if (!iLocal_115)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false) && PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_57, false))
			{
				iLocal_115 = 1;
				if (HUD::DOES_BLIP_EXIST(iLocal_317))
				{
					HUD::REMOVE_BLIP(&iLocal_317);
				}
				if (iLocal_120 && !bLocal_116)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_318))
					{
						iLocal_318 = func_29(Local_65, 1);
					}
				}
				if (!func_72())
				{
				}
			}
		}
		if (!iLocal_115 && !iLocal_117)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_57, false))
				{
					if (!func_72())
					{
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_317))
					{
						HUD::REMOVE_BLIP(&iLocal_317);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_317))
					{
						iLocal_317 = func_71(iLocal_53, 0, 145);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_317, true);
					}
					iLocal_115 = 0;
					iLocal_117 = 1;
				}
			}
		}
		if (iLocal_115)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false))
			{
				if (!func_72())
				{
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_317))
				{
					iLocal_317 = func_69(iLocal_57, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_317, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_318))
				{
					HUD::REMOVE_BLIP(&iLocal_318);
				}
				iLocal_115 = 0;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false) && !PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_57, false))
			{
				if (!func_72())
				{
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_317))
				{
					iLocal_317 = func_69(iLocal_57, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_317, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_318))
				{
					HUD::REMOVE_BLIP(&iLocal_318);
				}
				iLocal_115 = 0;
			}
		}
	}
}

int func_69(int iParam0, bool bParam1, bool bParam2)//Position - 0x28EF
{
	return func_70(iParam0, !bParam1, bParam2);
}

int func_70(int iParam0, bool bParam1, bool bParam2)//Position - 0x2902
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_30(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_30(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_30(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_71(int iParam0, bool bParam1, int iParam2)//Position - 0x29A6
{
	int iVar0;
	
	iVar0 = func_70(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2058[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_72()//Position - 0x29F0
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x2A12
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_319))
					{
						HUD::REMOVE_BLIP(&iLocal_319);
						if (!HUD::DOES_BLIP_EXIST(iLocal_318))
						{
							iLocal_318 = func_29(Local_65, 1);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_319))
					{
						HUD::REMOVE_BLIP(&iLocal_319);
						if (!HUD::DOES_BLIP_EXIST(iLocal_318))
						{
							iLocal_318 = func_29(Local_65, 1);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_318))
				{
					HUD::REMOVE_BLIP(&iLocal_318);
					if (!HUD::DOES_BLIP_EXIST(iLocal_319))
					{
						iLocal_319 = func_71(iLocal_53, 0, 145);
					}
				}
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_318))
			{
				HUD::REMOVE_BLIP(&iLocal_318);
				if (!HUD::DOES_BLIP_EXIST(iLocal_319))
				{
					iLocal_319 = func_71(iLocal_53, 0, 145);
				}
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_53))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_53, func_74());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_53, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_53, func_74());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_53, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
				}
			}
		}
	}
}

int func_74()//Position - 0x2BA6
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_75()//Position - 0x2BB6
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_78())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_53))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_53);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_53, 0, 0);
				}
				if (!iLocal_123)
				{
					if (!func_72())
					{
						iLocal_123 = 1;
						if (func_77())
						{
							func_76(&uLocal_134, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_76(&uLocal_134, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_123 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					if (!PED::IS_PED_IN_GROUP(iLocal_53))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_53, func_74());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_53, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
					}
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(iLocal_53) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_53, func_74());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_53, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
		}
	}
}

int func_76(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2D44
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 1;
	Global_22838 = 0;
	Global_22842 = 0;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_77()//Position - 0x2D98
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

int func_78()//Position - 0x2E03
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (((((!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
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
			if ((((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_79(int iParam0, bool bParam1)//Position - 0x2F25
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(iParam0, false))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!PED::IS_PED_HEADTRACKING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (!bVar0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iParam0))
			{
				TASK::TASK_CLEAR_LOOK_AT(iParam0);
			}
		}
	}
}

void func_80()//Position - 0x2FAC
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_94("stagd_chape_1"))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_318))
				{
					iLocal_318 = func_29(Local_65, 1);
				}
				iLocal_120 = 1;
			}
			if (func_94("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 13.5f, 13.5f, 13.5f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_53, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (iLocal_47 == 0)
					{
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_128 == 0)
							{
								if (!func_72())
								{
									func_93();
									if (func_4(&uLocal_134, "stagdau", sLocal_300, 4, 0, 0, 0))
									{
										iLocal_308 = 1;
									}
									bLocal_119 = true;
									iLocal_128++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_128 == 1)
							{
								if (!func_72())
								{
									HUD::DISPLAY_HUD(true);
									HUD::DISPLAY_RADAR(true);
									iLocal_128++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 2500)
						{
							if (iLocal_128 == 2)
							{
								if (!func_72())
								{
									func_93();
									if (func_16() == 0)
									{
										func_4(&uLocal_134, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_16() == 1)
									{
										func_4(&uLocal_134, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_16() == 2)
									{
										func_4(&uLocal_134, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_128++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					}
					if (!bLocal_122)
					{
						if (iLocal_47 == 3)
						{
							if (!func_72())
							{
								if (iLocal_128 == 0)
								{
									func_4(&uLocal_134, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_128++;
								}
							}
						}
						if (iLocal_47 == 3)
						{
							if (SYSTEM::TIMERB() > 5000)
							{
								if (iLocal_128 == 0)
								{
									if (!func_72())
									{
										iLocal_128++;
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_85, 150f, 150f, 150f, false, true, 0))
						{
							if (iLocal_301 == 0)
							{
								if (iLocal_305 == func_81(func_82()) + 11)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_301 = 1;
									}
								}
							}
							if (iLocal_301 < 2)
							{
								if (iLocal_305 == func_81(func_82()) + 10)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_301 = 2;
									}
								}
							}
							if (iLocal_301 < 3)
							{
								if (iLocal_305 == func_81(func_82()) + 9)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_301 = 3;
									}
								}
							}
							if (iLocal_301 < 4)
							{
								if (iLocal_305 == func_81(func_82()) + 8)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_301 = 4;
									}
								}
							}
							if (iLocal_301 < 5)
							{
								if (iLocal_305 == func_81(func_82()) + 7)
								{
									if (!func_72())
									{
										iLocal_301 = 5;
									}
								}
							}
							if (iLocal_301 < 6)
							{
								if (iLocal_305 == func_81(func_82()) + 6)
								{
									if (!func_72())
									{
										iLocal_301 = 6;
									}
								}
							}
							if (iLocal_301 < 7)
							{
								if (iLocal_305 == func_81(func_82()) + 5)
								{
									if (!func_72())
									{
										iLocal_301 = 7;
									}
								}
							}
							if (iLocal_301 < 8)
							{
								if (iLocal_305 == func_81(func_82()) + 4)
								{
									if (!func_72())
									{
										iLocal_301 = 8;
									}
								}
							}
							if (iLocal_301 < 9)
							{
								if (iLocal_305 == func_81(func_82()) + 3)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = 9;
									}
								}
							}
							if (iLocal_301 < 10)
							{
								if (iLocal_305 == func_81(func_82()) + 2)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = 10;
									}
								}
							}
							if (iLocal_301 < 11)
							{
								if (iLocal_305 == func_81(func_82()) + 1)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_301 < 6)
							{
								if (iLocal_305 == func_81(func_82()) + 6)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301++;
									}
								}
							}
							if (iLocal_301 < 7)
							{
								if (iLocal_305 == func_81(func_82()) + 5)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301++;
									}
								}
							}
							if (iLocal_301 < 8)
							{
								if (iLocal_305 == func_81(func_82()) + 4)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301++;
									}
								}
							}
							if (iLocal_301 < 9)
							{
								if (iLocal_305 == func_81(func_82()) + 3)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301++;
									}
								}
							}
							if (iLocal_301 < 10)
							{
								if (iLocal_305 == func_81(func_82()) + 2)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301++;
									}
								}
							}
							if (iLocal_301 < 11)
							{
								if (iLocal_305 == func_81(func_82()) + 1)
								{
									if (!func_72())
									{
										func_4(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301++;
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

int func_81(int iParam0)//Position - 0x3549
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_82()//Position - 0x355C
{
	var uVar0;
	
	func_92(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_91(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_90(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_85(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_84(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_83(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_83(var uParam0, int iParam1)//Position - 0x35A2
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

void func_84(var uParam0, int iParam1)//Position - 0x3628
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_85(var uParam0, int iParam1)//Position - 0x365B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_89(*uParam0);
	iVar1 = func_87(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_86(int iParam0, int iParam1)//Position - 0x36AC
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

int func_87(int iParam0)//Position - 0x374E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_88(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_88(bool bParam0, int iParam1, int iParam2)//Position - 0x3770
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_89(int iParam0)//Position - 0x3787
{
	return iParam0 & 15;
}

void func_90(var uParam0, int iParam1)//Position - 0x3794
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_91(var uParam0, int iParam1)//Position - 0x37CE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_92(var uParam0, int iParam1)//Position - 0x3809
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_93()//Position - 0x3845
{
	Global_20711 = 0;
	func_25();
}

int func_94(char* sParam0)//Position - 0x3855
{
	var uVar0;
	
	if (func_72())
	{
		MemCopy(&uVar0, {func_95()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_95()//Position - 0x387D
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22855);
		if (iVar6 > -1)
		{
			return Global_20713[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_96()//Position - 0x38C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (!iLocal_127 && bLocal_116)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
					iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					if (iVar0 != 0)
					{
						iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
						if (iVar1 != 4)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_53, -2002.008f, 455.58f, 101.0381f, -2009.7614f, 453.2027f, 105.9135f, 12.4375f, false, true, 0) || SYSTEM::TIMERA() > 5000)
					{
						iLocal_127 = 1;
						SYSTEM::SETTIMERA(0);
						func_58(1, 1, 1, 0, 0, 0, 0);
						HUD::CLEAR_HELP(true);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("superd")))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_132 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.49612f, 103.55235f, -6.509435f, -0.037031f, -95.98762f, 29.001434f, false, 2);
						iLocal_133 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.3337f, 456.418f, 103.31525f, -6.198685f, -0.037031f, -100.57357f, 29.001434f, false, 2);
						CAM::SHAKE_CAM(iLocal_132, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(iLocal_133, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(iLocal_132, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						SYSTEM::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_133, iLocal_132, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_97, 10f, false, false, false, false, false, false, 0);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_97, 8f, 8f, 8f, false, true, 0))
							{
								iLocal_131 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_131, true, false);
								VEHICLE::DELETE_VEHICLE(&iLocal_131);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_57, 1);
							if (!HUD::DOES_BLIP_EXIST(iLocal_317))
							{
								iLocal_317 = func_69(iLocal_57, 0, 0);
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_317, true);
							}
						}
						iLocal_115 = 0;
					}
				}
				if (iLocal_127 && CAM::DOES_CAM_EXIST(iLocal_132))
				{
					if (SYSTEM::TIMERA() > 5700 && !iLocal_315)
					{
						if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_315 = 1;
						}
					}
					if (SYSTEM::TIMERA() > 6000)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						func_58(0, 1, 1, 0, 0, 0, 0);
						CAM::SET_CAM_ACTIVE(iLocal_132, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(iLocal_132, false);
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2201.4172f, 4296.06f, 47.5076f, 100f, 100f, 100f, false, true, 0))
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_85, 5f, false, false, false, false, false, false, 0);
				}
			}
			if (!bLocal_121)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_101, 100f, 100f, 100f, false, true, 0))
				{
					STREAMING::REQUEST_MODEL(joaat("IG_BestMen"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("IG_BestMen")))
					{
						iLocal_55 = PED::CREATE_PED(4, joaat("IG_BestMen"), -2202.7468f, 4299.008f, 47.4293f, 73.0028f, true, true);
						func_97(&uLocal_134, 4, iLocal_55, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_55, 0, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, joaat("PLAYER"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_55, 185, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_111);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
						bLocal_121 = true;
					}
				}
			}
			if (!bLocal_122)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, 20f, 20f, 20f, false, true, 0))
				{
					func_27();
					if (!func_72())
					{
						func_4(&uLocal_134, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_122 = true;
					}
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_68, Local_71, fLocal_74, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_53, Local_68, Local_71, fLocal_74, false, true, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, Local_65, 0f, 0f, 2f, true, true, 0) && func_67(1, 0, 1))) || bLocal_116)
			{
				switch (iLocal_47)
				{
					case 0:
						HUD::REMOVE_BLIP(&iLocal_318);
						if (!bLocal_116)
						{
							Local_65 = { Local_101 };
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, false);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
							{
								iVar2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
								if (iVar2 != 0)
								{
									iVar3 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar2);
									if (iVar3 == 4)
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 5000, 2052, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_57, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
							func_27();
							if (!func_72())
							{
								func_4(&uLocal_134, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!PED::IS_PED_INJURED(iLocal_53))
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.0945f, 460.3515f, 101.8024f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_97, 3f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
									PED::SET_PED_KEEP_TASK(iLocal_53, true);
								}
								bLocal_116 = true;
								SYSTEM::SETTIMERA(0);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
						{
							if ((bLocal_116 && ENTITY::IS_ENTITY_AT_COORD(iLocal_53, Local_97, 1f, 1f, 1f, false, true, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
							{
								if (PED::IS_PED_IN_GROUP(iLocal_53))
								{
									if (!func_72())
									{
										if (func_16() == 2)
										{
											func_4(&uLocal_134, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									PED::REMOVE_PED_FROM_GROUP(iLocal_53);
								}
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_53))
								{
									if (!PED::IS_PED_INJURED(iLocal_53))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_53, false, false);
										ENTITY::SET_ENTITY_COLLISION(iLocal_53, false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(iLocal_53, true);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_53, true);
									}
									if (SYSTEM::TIMERA() > 15000)
									{
										if (!PED::IS_PED_INJURED(iLocal_53))
										{
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 11, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(iLocal_53, true, false);
											ENTITY::SET_ENTITY_COLLISION(iLocal_53, true, false);
											ENTITY::SET_ENTITY_INVINCIBLE(iLocal_53, false);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_53, false);
											ENTITY::SET_ENTITY_COORDS(iLocal_53, Local_97, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_53, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, true);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_53, true);
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, -1, 2048, 4);
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
												TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
											}
										}
										SYSTEM::SETTIMERA(0);
										Local_65 = { Local_101 };
										Local_68 = { Local_104 };
										Local_71 = { Local_107 };
										fLocal_74 = fLocal_110;
										iLocal_47 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_57, 5f, 5f, 5f, false, true, 0) && !iLocal_126)
							{
								func_4(&uLocal_134, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_126 = 1;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false))
								{
									if (func_4(&uLocal_134, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_47 = 2;
										bLocal_116 = false;
										iLocal_128 = 0;
									}
								}
								else
								{
									if (iLocal_306 == 0)
									{
										iLocal_306 = MISC::GET_GAME_TIMER();
									}
									if (iLocal_306 != 0 && MISC::GET_GAME_TIMER() > iLocal_306 + 6000)
									{
										func_4(&uLocal_134, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_306 = 0;
									}
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_116)
						{
							func_27();
							if (func_4(&uLocal_134, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									{
										iLocal_130 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_55) && !PED::IS_PED_INJURED(iLocal_53))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
									{
										iLocal_130 = PED::GET_VEHICLE_PED_IS_IN(iLocal_53, false);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_130, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_111);
										PED::SET_PED_CONFIG_FLAG(iLocal_55, 185, false);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_55, iLocal_53, -1, 8f, 2f, 2f, 0);
									}
									if (!HUD::DOES_BLIP_EXIST(iLocal_320))
									{
										iLocal_320 = func_71(iLocal_55, 0, 145);
									}
									if (HUD::DOES_BLIP_EXIST(iLocal_318))
									{
										HUD::REMOVE_BLIP(&iLocal_318);
									}
								}
								SYSTEM::SETTIMERA(0);
								iLocal_118 = 1;
								bLocal_116 = true;
							}
						}
						if (bLocal_116 && !PED::IS_PED_INJURED(iLocal_53))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || SYSTEM::TIMERA() > 12000)
							{
								Local_65 = { Local_75 };
								Local_68 = { Local_78 };
								Local_71 = { Local_81 };
								fLocal_74 = fLocal_84;
								STREAMING::REQUEST_MODEL(joaat("IG_Bride"));
								STREAMING::REQUEST_MODEL(joaat("washington"));
								STREAMING::REQUEST_MODEL(joaat("baller2"));
								STREAMING::REQUEST_MODEL(joaat("primo"));
								if (((STREAMING::HAS_MODEL_LOADED(joaat("IG_Bride")) && STREAMING::HAS_MODEL_LOADED(joaat("washington"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2"))) && STREAMING::HAS_MODEL_LOADED(joaat("primo")))
								{
									iLocal_54 = PED::CREATE_PED(5, joaat("IG_Bride"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_111);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
									iLocal_56 = PED::CREATE_PED(4, joaat("IG_BestMen"), -333.3692f, 6157.6436f, 30.489f, 83.2763f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, true);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), -1);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 0, 1, 0, 0);
									iLocal_58[0] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -342.1295f, 6141.4043f, 30.4839f, 133.4604f, true, true, false);
									iLocal_58[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									iLocal_58[2] = VEHICLE::CREATE_VEHICLE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									iLocal_58[3] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -322.3235f, 6135.4272f, 30.4924f, 316.5898f, true, true, false);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_58[0], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_58[1], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_58[2], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_58[3], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									iLocal_47 = 3;
									bLocal_116 = false;
									iLocal_128 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_116)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									bLocal_116 = true;
									SYSTEM::WAIT(3000);
									func_27();
									SYSTEM::WAIT(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
		{
			func_185();
		}
	}
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x44F6
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

void func_98()//Position - 0x4591
{
	if ((iLocal_308 && iLocal_305 != func_81(func_82())) && !CAM::DOES_CAM_EXIST(iLocal_132))
	{
		func_102(((iLocal_305 * 1000 * 60 - func_81(func_82()) * 1000 * 60) + (iLocal_304 * 1000 - func_105(func_82()) * 1000)), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iLocal_304 == 0)
	{
		if (iLocal_305 == func_81(func_82()) + 1 && ((((iLocal_304 == (func_105(func_82()) - 55) || iLocal_304 == (func_105(func_82()) - 56)) || iLocal_304 == (func_105(func_82()) - 57)) || iLocal_304 == (func_105(func_82()) - 58)) || iLocal_304 == (func_105(func_82()) - 59)))
		{
			func_101();
		}
	}
	if (iLocal_305 == func_81(func_82()))
	{
		func_101();
		func_99();
		if (!func_72())
		{
			func_4(&uLocal_134, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				TASK::TASK_USE_MOBILE_PHONE(iLocal_53, true, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			SYSTEM::WAIT(8500);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, false);
				}
			}
			SYSTEM::WAIT(2000);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				TASK::CLEAR_PED_TASKS(iLocal_53);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 5000, 2048, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_53, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_53);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_55, 500, 0);
			}
			SYSTEM::WAIT(1000);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_57)
				{
					TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_57, PLAYER::PLAYER_PED_ID(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
				PED::SET_PED_KEEP_TASK(iLocal_53, true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_57)
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_57, -1, 0, 2f, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_111);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
					PED::SET_PED_KEEP_TASK(iLocal_55, true);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			while (func_72())
			{
				SYSTEM::WAIT(0);
			}
			func_2();
		}
	}
}

void func_99()//Position - 0x48C5
{
	Global_20711 = 0;
	func_100();
}

void func_100()//Position - 0x48D5
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_101()//Position - 0x48F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_SECONDS();
	if (iLocal_307 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
	else if (iLocal_307 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_305)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307++;
		}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x4BCE
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_104(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_103(7, iVar0);
		Global_1655612.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1655612.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_4659.f_172[iVar0] = iParam2;
		Global_1655612.f_4659.f_216[iVar0] = iParam3;
		Global_1655612.f_4659.f_183[iVar0] = iParam4;
		Global_1655612.f_4659.f_194[iVar0] = iParam5;
		Global_1655612.f_4659.f_249[iVar0] = iParam6;
		Global_1655612.f_4659.f_260[iVar0] = iParam7;
		Global_1655612.f_4659.f_205[iVar0] = iParam8;
		Global_1655612.f_4659.f_314[iVar0] = iParam9;
		Global_1655612.f_4659.f_325[iVar0] = iParam10;
		Global_1655612.f_4659.f_357[iVar0] = iParam11;
		Global_1655612.f_4659.f_238[iVar0] = iParam12;
		Global_1655612.f_4659.f_271[iVar0] = iParam13;
		Global_1655612.f_4659.f_368[iVar0] = iParam14;
		Global_1655612.f_4659.f_379[iVar0] = iParam15;
		Global_1655612.f_4659.f_390[iVar0] = iParam16;
		Global_1655612.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_103(int iParam0, int iParam1)//Position - 0x4D2B
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_104(int iParam0, int iParam1)//Position - 0x4D44
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

int func_105(int iParam0)//Position - 0x4D5A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

void func_106()//Position - 0x4D6D
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_57, false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_57))
			{
				if (!func_72())
				{
					if (func_107())
					{
						func_4(&uLocal_134, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_134, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_53, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (!func_72())
				{
					func_4(&uLocal_134, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_107()//Position - 0x4E27
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_108()//Position - 0x4E45
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_53, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_55, false);
	}
	if (((((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0) || iLocal_47 == 1) || iLocal_124) || iLocal_125) || iLocal_123) || bLocal_116)
	{
		if ((((((iLocal_47 >= 2 && iLocal_118) && iLocal_47 != 1) && !iLocal_124) && !iLocal_125) && !iLocal_123) && !bLocal_116)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if (func_110())
				{
					func_109(0);
				}
			}
			else if (func_72() && !func_110())
			{
				func_109(1);
			}
		}
		else if (func_110())
		{
			func_109(0);
		}
	}
	else if (func_72() && !func_110())
	{
		func_109(1);
	}
}

void func_109(int iParam0)//Position - 0x4F43
{
	Global_22856 = iParam0;
}

int func_110()//Position - 0x4F50
{
	if (Global_22856 == 1)
	{
		return 1;
	}
	return 0;
}

void func_111()//Position - 0x4F67
{
	if ((CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			TASK::CLEAR_PED_TASKS(iLocal_53);
			func_27();
			SYSTEM::WAIT(0);
			func_4(&uLocal_134, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
			{
				ENTITY::DETACH_ENTITY(iLocal_64, true, true);
			}
		}
		while (func_72())
		{
			SYSTEM::WAIT(0);
		}
		func_2();
	}
}

void func_112()//Position - 0x4FE5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (!iLocal_113)
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 130f, 60f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_53)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_319))
				{
					iLocal_319 = func_71(iLocal_53, 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_319, false);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_319))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_319, true);
					}
					SYSTEM::SETTIMERB(0);
					func_99();
					while (func_72())
					{
						SYSTEM::WAIT(0);
					}
					if (!func_72())
					{
						if (func_16() == 0)
						{
							func_4(&uLocal_134, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_16() == 1)
						{
							func_4(&uLocal_134, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_16() == 2)
						{
							func_4(&uLocal_134, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_113 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_53))
			{
				if ((!func_151() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, false, true, 0)) && HUD::DOES_BLIP_EXIST(iLocal_319))
				{
					if (!func_72())
					{
						func_4(&uLocal_134, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						iLocal_63 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					}
					func_113(1);
				}
			}
		}
		else if (!iLocal_299)
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 25f, 25f, 25f, false, true, 0))
				{
					func_27();
					SYSTEM::WAIT(0);
					func_4(&uLocal_134, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_299 = 1;
				}
			}
		}
	}
}

int func_113(int iParam0)//Position - 0x520D
{
	if (func_117())
	{
		Global_113800 = 1;
		Global_113797 = MISC::GET_GAME_TIMER();
		if (func_45(Global_113799))
		{
			func_114(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_45(Global_113799))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)//Position - 0x5260
{
	switch (iParam0)
	{
		case 0:
			if (Global_113810.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_115(func_116(iParam0), -1);
					Global_113810.f_24998.f_2++;
					MISC::SET_BIT(&Global_113806, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113806, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_115(func_116(iParam0), -1);
					Global_113810.f_24998.f_3++;
					MISC::SET_BIT(&Global_113806, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113806, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_115(func_116(iParam0), -1);
					Global_113810.f_24998.f_4++;
					MISC::SET_BIT(&Global_113806, 2);
				}
			}
			break;
	}
}

void func_115(char* sParam0, int iParam1)//Position - 0x533B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_116(int iParam0)//Position - 0x5352
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

int func_117()//Position - 0x5395
{
	switch (func_118(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_118(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x53CB
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98291.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_122(0))
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43338)
			{
				if (Global_43344[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_120(iParam2))
		{
			return 0;
		}
		if (Global_43338 == 8)
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338++;
		if (iParam4 != 0)
		{
			func_119(uParam0, iParam4);
		}
	}
	return 2;
}

void func_119(var uParam0, int iParam1)//Position - 0x5502
{
	int iVar0;
	
	if (Global_43338 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43338)
	{
		if (Global_43344[iVar0 /*4*/] == *uParam0)
		{
			Global_43344[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_120(int iParam0)//Position - 0x5551
{
	return func_121(iParam0, Global_43377);
}

int func_121(int iParam0, int iParam1)//Position - 0x5562
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

int func_122(int iParam0)//Position - 0x5743
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_120(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_123()//Position - 0x5765
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_53);
				ENTITY::SET_ENTITY_HEALTH(iLocal_53, 99, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_53, true);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_53, false);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_53);
						ENTITY::SET_ENTITY_HEALTH(iLocal_53, 99, 0);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 2f, 2f, 2f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_67(1, 0, 1))
					{
						if (!iLocal_309)
						{
							func_113(1);
							func_58(1, 1, 1, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
							HUD::CLEAR_HELP(true);
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 5f, true, false, false, false);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f);
							}
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53, 5f, 5f, 5f, false, true, 0))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(iLocal_53, true) - Vector(1.5f, 4f, 3f), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								iLocal_316 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								iLocal_132 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_316, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_132, iLocal_316, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_53);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_53, iLocal_316, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_53, false, false);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_316, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								CAM::SET_CAM_ACTIVE(iLocal_132, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								iLocal_309 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_309 && !iLocal_311)
	{
		func_27();
		SYSTEM::WAIT(0);
		if (func_16() == 0)
		{
			func_4(&uLocal_134, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_16() == 1)
		{
			func_4(&uLocal_134, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_16() == 2)
		{
			func_4(&uLocal_134, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_311 = 1;
	}
	if (iLocal_309 && !iLocal_310)
	{
		if (!iLocal_314)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) < 0.3f)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ROPE_CUT", PLAYER::PLAYER_PED_ID(), "ROPE_CUT_SOUNDSET", false, 0);
				iLocal_314 = 1;
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) > 0.46470588f && !iLocal_315)
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_315 = 1;
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) > 0.5f)
		{
			iLocal_310 = 1;
		}
		if (func_124(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_310 = 1;
			iLocal_313 = 1;
		}
	}
	if (iLocal_310 && !iLocal_312)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			ENTITY::DETACH_ENTITY(iLocal_64, true, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -936.6537f, 2767.4968f, 24.4289f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.4017f);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::SET_CAM_ACTIVE(iLocal_132, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_132, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
		func_58(0, 1, 1, 0, 0, 0, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_53, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_53);
			PED::SET_PED_CAN_RAGDOLL(iLocal_53, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_53, -935.6716f, 2767.7717f, 24.4289f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_53, 136.9073f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_53, false, false);
		}
		if (iLocal_313)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_313 = 0;
		}
		iLocal_315 = 0;
		iLocal_312 = 1;
	}
	if (iLocal_312 && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if ((((((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("rhino"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2048, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
			}
			else if (!PED::IS_PED_IN_GROUP(iLocal_53))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_53, func_74());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_53, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_53))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_53, func_74());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_53, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_53, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		iLocal_318 = func_29(Local_65, 1);
		iLocal_112 = 1;
		bLocal_114 = true;
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@");
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@idle_a");
		iLocal_303 = func_81(func_82());
		iLocal_305 = iLocal_303 + 5;
		iLocal_302 = func_105(func_82());
		if (iLocal_302 >= 30)
		{
			iLocal_304 = 0;
			iLocal_305++;
		}
		if (iLocal_305 > 24)
		{
			iLocal_305 = (iLocal_305 - 24);
		}
		if (iLocal_305 == 0)
		{
			sLocal_300 = "stagd_ptime0";
		}
		else if (iLocal_305 == 1)
		{
			sLocal_300 = "stagd_ptime1";
		}
		else if (iLocal_305 == 2)
		{
			sLocal_300 = "stagd_ptime2";
		}
		else if (iLocal_305 == 3)
		{
			sLocal_300 = "stagd_ptime3";
		}
		else if (iLocal_305 == 4)
		{
			sLocal_300 = "stagd_ptime4";
		}
		else if (iLocal_305 == 5)
		{
			sLocal_300 = "stagd_ptime5";
		}
		else if (iLocal_305 == 6)
		{
			sLocal_300 = "stagd_ptime6";
		}
		else if (iLocal_305 == 7)
		{
			sLocal_300 = "stagd_ptime7";
		}
		else if (iLocal_305 == 8)
		{
			sLocal_300 = "stagd_ptime8";
		}
		else if (iLocal_305 == 9)
		{
			sLocal_300 = "stagd_ptime9";
		}
		else if (iLocal_305 == 10)
		{
			sLocal_300 = "stagd_ptim10";
		}
		else if (iLocal_305 == 11)
		{
			sLocal_300 = "stagd_ptim11";
		}
		else if (iLocal_305 == 12)
		{
			sLocal_300 = "stagd_ptim12";
		}
		else if (iLocal_305 == 13)
		{
			sLocal_300 = "stagd_ptim13";
		}
		else if (iLocal_305 == 14)
		{
			sLocal_300 = "stagd_ptim14";
		}
		else if (iLocal_305 == 15)
		{
			sLocal_300 = "stagd_ptim15";
		}
		else if (iLocal_305 == 16)
		{
			sLocal_300 = "stagd_ptim16";
		}
		else if (iLocal_305 == 17)
		{
			sLocal_300 = "stagd_ptim17";
		}
		else if (iLocal_305 == 18)
		{
			sLocal_300 = "stagd_ptim18";
		}
		else if (iLocal_305 == 19)
		{
			sLocal_300 = "stagd_ptim19";
		}
		else if (iLocal_305 == 20)
		{
			sLocal_300 = "stagd_ptim20";
		}
		else if (iLocal_305 == 21)
		{
			sLocal_300 = "stagd_ptim21";
		}
		else if (iLocal_305 == 22)
		{
			sLocal_300 = "stagd_ptim22";
		}
		else if (iLocal_305 == 23)
		{
			sLocal_300 = "stagd_ptim23";
		}
	}
}

int func_124(int iParam0)//Position - 0x5F33
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_125())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_125()//Position - 0x5F7D
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

void func_126()//Position - 0x5FAF
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
			}
		}
		iLocal_131 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), 30f, 0, 4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_131, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_131, -1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_131, iLocal_53, 30f, 30f, 30f, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_131, true, false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_131, false))
					{
						VEHICLE::START_VEHICLE_HORN(iLocal_131, 3000, 0, false);
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (!func_72() && !iLocal_113)
							{
								func_4(&uLocal_134, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_131);
				}
			}
		}
	}
}

void func_127()//Position - 0x6087
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

void func_128()//Position - 0x60F4
{
	func_129(39, 1);
	func_129(40, 1);
	func_129(41, 1);
	func_129(42, 1);
	func_129(43, 1);
	func_129(44, 1);
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_StagGrm_01"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("prop_stag_do_rope"));
	while ((!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_StagGrm_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("superd"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_stag_do_rope")))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_53 = PED::CREATE_PED(26, joaat("U_M_Y_StagGrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, true);
	PED::SET_PED_MONEY(iLocal_53, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 11, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(iLocal_53, joaat("empty"));
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_53, 3);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 206, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 134, true);
	iLocal_64 = OBJECT::CREATE_OBJECT(joaat("prop_stag_do_rope"), ENTITY::GET_ENTITY_COORDS(iLocal_53, true), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_64, iLocal_53, PED::GET_PED_BONE_INDEX(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	iLocal_57 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -2009.0146f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_57, true);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_57, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_57, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_57, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(iLocal_57, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(iLocal_57, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(iLocal_57, 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(iLocal_57, 12, 1, false);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_57, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_57, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_57);
	Local_75 = { -352.88f, 6164.31f, 30.5f };
	Local_78 = { -355.2565f, 6164.9307f, 30.2944f };
	Local_81 = { -330.5575f, 6139.8516f, 34.4886f };
	fLocal_84 = 25.375f;
	Local_85 = { -343.5804f, 6156.198f, 30.489f };
	Local_88 = { -1991.1265f, 457.991f, 101.1808f };
	Local_91 = { -2002.6903f, 460.539f, 99.828f };
	Local_94 = { -1997.6046f, 445.6651f, 105.0519f };
	Local_97 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_100 = 24.6875f;
	Local_101 = { -2205.3506f, 4298.7896f, 47.265f };
	Local_104 = { -2207.5254f, 4301.697f, 47.1803f };
	Local_107 = { -2195.6367f, 4295.4067f, 51.1889f };
	fLocal_110 = 12.5625f;
	Local_65 = { Local_88 };
	Local_68 = { Local_91 };
	Local_71 = { Local_94 };
	fLocal_74 = fLocal_100;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("superd"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_85 - Vector(10f, 10f, 10f), Local_85 + Vector(10f, 10f, 10f), false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_85 - Vector(20f, 20f, 20f), Local_85 + Vector(20f, 20f, 20f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_53, false) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_53, false) + Vector(10f, 10f, 10f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(47.4293f, 4299.008f, -2202.7468f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.7468f) + Vector(15f, 25f, 25f), false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 10f, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
		PED::SET_PED_KEEP_TASK(iLocal_53, true);
	}
	if (func_16() == 0)
	{
		func_97(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1)
	{
		func_97(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2)
	{
		func_97(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_97(&uLocal_134, 3, iLocal_53, "GROOM", 0, 1);
	iLocal_48 = 1;
}

void func_129(int iParam0, bool bParam1)//Position - 0x6602
{
	if (bParam1)
	{
		if (!func_137(iParam0, 2, 1))
		{
			func_136(iParam0, 2, 1);
		}
	}
	else if (func_137(iParam0, 2, 1))
	{
		func_130(iParam0, 2, 1);
	}
}

void func_130(int iParam0, int iParam1, bool bParam2)//Position - 0x6639
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			iVar0 = func_134(func_135(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_131(func_135(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_131(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x66A9
{
	int iVar0;
	
	iVar0 = func_132(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_132(int iParam0, var uParam1)//Position - 0x66CC
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_133(uParam1));
}

int func_133(var uParam0)//Position - 0x66E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
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

int func_134(int iParam0, int iParam1)//Position - 0x6715
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_132(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x6744
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
			return 12514;
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
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		case 60:
			return 11901;
			break;
		
		default:
			break;
	}
	return 14385;
}

void func_136(int iParam0, int iParam1, bool bParam2)//Position - 0x6AEC
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			iVar0 = func_134(func_135(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_131(func_135(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x6B5C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100885.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			return BitTest(func_134(func_135(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_138()//Position - 0x6BBC
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_145())
	{
		return 1;
	}
	if (func_139(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_139(float fParam0, bool bParam1)//Position - 0x6C42
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
		if (func_18(func_16()))
		{
			iVar36 = func_50();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113810.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113810.f_18577[iVar32 /*6*/], 3))
				{
					func_140(iVar32, &Var0);
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

void func_140(int iParam0, var uParam1)//Position - 0x6CF3
{
	switch (iParam0)
	{
		case 0:
			func_141(uParam1, "Abigail1", func_143(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 1:
			func_141(uParam1, "Abigail2", func_143(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 2:
			func_141(uParam1, "Barry1", func_143(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 3:
			func_141(uParam1, "Barry2", func_143(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 4:
			func_141(uParam1, "Barry3", func_143(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 5:
			func_141(uParam1, "Barry3A", func_143(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 6:
			func_141(uParam1, "Barry3C", func_143(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 7:
			func_141(uParam1, "Barry4", func_143(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_142(iParam0), 0, 0);
			break;
		
		case 8:
			func_141(uParam1, "Dreyfuss1", func_143(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 9:
			func_141(uParam1, "Epsilon1", func_143(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 10:
			func_141(uParam1, "Epsilon2", func_143(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 11:
			func_141(uParam1, "Epsilon3", func_143(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 12:
			func_141(uParam1, "Epsilon4", func_143(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 13:
			func_141(uParam1, "Epsilon5", func_143(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 14:
			func_141(uParam1, "Epsilon6", func_143(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 15:
			func_141(uParam1, "Epsilon7", func_143(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 16:
			func_141(uParam1, "Epsilon8", func_143(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 17:
			func_141(uParam1, "Extreme1", func_143(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 18:
			func_141(uParam1, "Extreme2", func_143(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 19:
			func_141(uParam1, "Extreme3", func_143(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 20:
			func_141(uParam1, "Extreme4", func_143(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 21:
			func_141(uParam1, "Fanatic1", func_143(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_142(iParam0), 1, 0);
			break;
		
		case 22:
			func_141(uParam1, "Fanatic2", func_143(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_142(iParam0), 1, 0);
			break;
		
		case 23:
			func_141(uParam1, "Fanatic3", func_143(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_142(iParam0), 0, 1);
			break;
		
		case 24:
			func_141(uParam1, "Hao1", func_143(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_142(iParam0), 0, 1);
			break;
		
		case 25:
			func_141(uParam1, "Hunting1", func_143(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 26:
			func_141(uParam1, "Hunting2", func_143(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 27:
			func_141(uParam1, "Josh1", func_143(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 28:
			func_141(uParam1, "Josh2", func_143(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 29:
			func_141(uParam1, "Josh3", func_143(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 30:
			func_141(uParam1, "Josh4", func_143(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 31:
			func_141(uParam1, "Maude1", func_143(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 32:
			func_141(uParam1, "Minute1", func_143(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 33:
			func_141(uParam1, "Minute2", func_143(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 34:
			func_141(uParam1, "Minute3", func_143(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 35:
			func_141(uParam1, "MrsPhilips1", func_143(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 36:
			func_141(uParam1, "MrsPhilips2", func_143(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 37:
			func_141(uParam1, "Nigel1", func_143(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 38:
			func_141(uParam1, "Nigel1A", func_143(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 39:
			func_141(uParam1, "Nigel1B", func_143(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		
		case 40:
			func_141(uParam1, "Nigel1C", func_143(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		
		case 41:
			func_141(uParam1, "Nigel1D", func_143(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		
		case 42:
			func_141(uParam1, "Nigel2", func_143(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 43:
			func_141(uParam1, "Nigel3", func_143(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 44:
			func_141(uParam1, "Omega1", func_143(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 45:
			func_141(uParam1, "Omega2", func_143(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 46:
			func_141(uParam1, "Paparazzo1", func_143(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 47:
			func_141(uParam1, "Paparazzo2", func_143(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 48:
			func_141(uParam1, "Paparazzo3", func_143(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 49:
			func_141(uParam1, "Paparazzo3A", func_143(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 50:
			func_141(uParam1, "Paparazzo3B", func_143(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 51:
			func_141(uParam1, "Paparazzo4", func_143(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 52:
			func_141(uParam1, "Rampage1", func_143(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 54:
			func_141(uParam1, "Rampage3", func_143(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 55:
			func_141(uParam1, "Rampage4", func_143(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 56:
			func_141(uParam1, "Rampage5", func_143(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 53:
			func_141(uParam1, "Rampage2", func_143(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 57:
			func_141(uParam1, "TheLastOne", func_143(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 58:
			func_141(uParam1, "Tonya1", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 59:
			func_141(uParam1, "Tonya2", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 60:
			func_141(uParam1, "Tonya3", func_143(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 61:
			func_141(uParam1, "Tonya4", func_143(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 62:
			func_141(uParam1, "Tonya5", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_141(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x7EA8
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

int func_142(int iParam0)//Position - 0x7F39
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

struct<2> func_143(int iParam0)//Position - 0x833F
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_144(iParam0) };
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

struct<2> func_144(int iParam0)//Position - 0x8376
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

int func_145()//Position - 0x87C2
{
	if (func_148() && !func_149())
	{
		return 1;
	}
	if (func_147() && func_146())
	{
		return 1;
	}
	return 0;
}

bool func_146()//Position - 0x87F4
{
	return Global_113528 > 0;
}

int func_147()//Position - 0x8802
{
	if (Global_97735 != -1)
	{
		return 1;
	}
	return 0;
}

int func_148()//Position - 0x8817
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 20);
	}
	return 0;
}

int func_149()//Position - 0x883A
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

int func_150()//Position - 0x8857
{
	if (!func_120(5))
	{
		return 1;
	}
	if (func_145())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
		{
			return 0;
		}
	}
	if (func_139(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_151()//Position - 0x88B9
{
	if ((Global_113799 == func_54() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800)
	{
		return 1;
	}
	return 0;
}

void func_152(int iParam0)//Position - 0x88E4
{
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_154(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113796 = 0;
	func_153();
}

void func_153()//Position - 0x891A
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

void func_154(int iParam0)//Position - 0x8957
{
	Global_113799 = iParam0;
}

int func_155(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8965
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152397)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_54();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_183())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_149())
			{
				return 0;
			}
		}
		if (!Global_113810.f_9088)
		{
			return 0;
		}
		if (func_35(0))
		{
			return 0;
		}
		if (func_145())
		{
			return 0;
		}
		if (func_182())
		{
			return 0;
		}
		if (Global_113799 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_139(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_181(iParam3))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_180(func_16()) == 4 || func_180(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_179(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_178(Global_113810.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113801) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_177())
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
		if (!func_168(4))
		{
			return 0;
		}
		if (!func_120(5))
		{
			return 0;
		}
		if (func_167(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_167(0, 0))
		{
			return 0;
		}
		if (Global_32430)
		{
			return 0;
		}
		if (func_181(30) && !func_167(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113810.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113810.f_2366.f_539.f_2296[iVar4];
				if (func_166(iVar8))
				{
					if (func_157(iVar4))
					{
						if (!func_156(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_16() != iVar4)
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

bool func_156(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x8CFF
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_157(int iParam0)//Position - 0x8D46
{
	int iVar0;
	
	iVar0 = Global_113810.f_2366.f_539.f_2296[iParam0];
	return func_158(iVar0);
}

int func_158(int iParam0)//Position - 0x8D67
{
	return func_159(iParam0, 1);
}

int func_159(int iParam0, int iParam1)//Position - 0x8D76
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_166(iParam0))
	{
		return 0;
	}
	func_160(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8DC9
{
	func_161(func_82(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_161(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8DE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_165(iParam0, iParam1))
	{
		iVar0 = func_89(iParam1);
		iVar1 = func_87(iParam0);
		iVar2 = (func_87(iParam0) - func_87(iParam1));
		iVar3 = (func_89(iParam0) - func_89(iParam1));
		iVar4 = (func_164(iParam0) - func_164(iParam1));
		iVar5 = (func_81(iParam0) - func_81(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_163(iParam0) - func_163(iParam1));
	}
	else
	{
		iVar0 = func_89(iParam0);
		iVar1 = func_87(iParam1);
		iVar2 = (func_87(iParam1) - func_87(iParam0));
		iVar3 = (func_89(iParam1) - func_89(iParam0));
		iVar4 = (func_164(iParam1) - func_164(iParam0));
		iVar5 = (func_81(iParam1) - func_81(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_163(iParam1) - func_163(iParam0));
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
		iVar4 = (iVar4 + func_86(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_162(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_162(float fParam0, float fParam1, float fParam2)//Position - 0x8FE8
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

int func_163(int iParam0)//Position - 0x902A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_164(int iParam0)//Position - 0x903D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_165(int iParam0, int iParam1)//Position - 0x904F
{
	int iVar0;
	int iVar1;
	
	if (!func_166(iParam1) || !func_166(iParam0))
	{
		return 1;
	}
	iVar0 = func_87(iParam0);
	iVar1 = func_87(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_89(iParam0);
	iVar1 = func_89(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_81(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x915B
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
	iVar0 = func_163(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_81(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_87(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_89(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_164(iParam0);
	if (iVar5 < 1 || iVar5 > func_86(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0, bool bParam1)//Position - 0x9237
{
	if (BitTest(Global_113810.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x9257
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_176()) || Global_112857) || Global_32286) || func_175()) || func_24(8, -1)) || func_174()) || func_173()) || func_172()) || func_171()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_176()) || Global_32286) || func_175()) || func_24(8, -1)) || func_172()) || func_174()) || func_173()) || func_171()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_176()) || Global_112857) || Global_32286) || func_175()) || func_24(8, -1)) || func_172()) || func_174()) || func_173()) || func_171()) || Global_113810.f_7691.f_919[iVar0] == 5) || Global_43924 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_176()) || Global_112857) || Global_32286) || func_175()) || func_24(8, -1)) || func_174()) || func_173()) || func_171()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_176() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_24(8, -1)) || func_171()) || func_170()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_174()) || func_173()) || func_170()) || func_169())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_176()) || Global_32286) || func_175()) || func_24(8, -1)) || func_173()) || func_172()) || func_171()) || Global_113810.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_176()) || func_173()) || Global_112857) || Global_32286) || func_175()) || Global_44569) || func_24(8, -1)) || func_172()) || func_170()) || func_171()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_176()) || Global_112857) || Global_32286) || func_175()) || func_24(8, -1)) || func_172()) || func_170()) || func_174()) || func_173()) || func_171())
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

var func_169()//Position - 0x9974
{
	return Global_100872.f_1;
}

int func_170()//Position - 0x9982
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 13);
	}
	return 0;
}

int func_171()//Position - 0x99A5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0x99BF
{
	if (Global_78950)
	{
		return 1;
	}
	else if (Global_63479 && !Global_63485)
	{
		return 1;
	}
	return 0;
}

bool func_173()//Position - 0x99E9
{
	return Global_100885.f_394 > 0;
}

bool func_174()//Position - 0x99FA
{
	return Global_100885.f_393 > 0;
}

var func_175()//Position - 0x9A0B
{
	return Global_1575063;
}

int func_176()//Position - 0x9A17
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

int func_177()//Position - 0x9A33
{
	func_15();
	if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_178(int iParam0)//Position - 0x9A5B
{
	return func_165(func_82(), iParam0);
}

int func_179(int iParam0, int iParam1, int iParam2)//Position - 0x9A6D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_180(int iParam0)//Position - 0x9B51
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_113810.f_7691.f_919[iParam0];
}

int func_181(int iParam0)//Position - 0x9B75
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_183())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113810.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113810.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_182()//Position - 0x9BCD
{
	int iVar0;
	
	if (Global_32435)
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

int func_183()//Position - 0x9C11
{
	int iVar0;
	
	if (Global_152686 == 2)
	{
		return 1;
	}
	else if (Global_152686 == 3)
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
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
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

int func_184(int iParam0, int iParam1)//Position - 0x9CC9
{
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_185()//Position - 0x9CF0
{
	if (iLocal_49)
	{
		func_224(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_85 - Vector(10f, 10f, 10f), Local_85 + Vector(10f, 10f, 10f), true, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_27();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_63, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 50f, 50f, 50f, false, true, 0))
			{
				func_197(iLocal_63, 0, 145);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_85, 100f, 100f, 100f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_55))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_CHAT_TO_PED(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_CHAT_TO_PED(0, iLocal_53, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
			}
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_131);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_57);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_53, 317, true);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_53))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_53, false);
			}
			PED::REMOVE_PED_FROM_GROUP(iLocal_53);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			ENTITY::DETACH_ENTITY(iLocal_64, true, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_55, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_55);
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
		}
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54);
	}
	func_186(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_186(int iParam0)//Position - 0x9F0F
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_151())
	{
		func_190(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113801 = MISC::GET_GAME_TIMER();
		func_189(30000);
		StringCopy(&cVar0, func_188(Global_113799, 1), 64);
		if (func_53(Global_113799) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113798, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
	}
	else if (BitTest(Global_113806, 0) && Global_113810.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113806, 0);
	}
	func_187(&Global_32343);
	Global_113800 = 0;
	func_154(-1);
}

void func_187(var uParam0)//Position - 0x9FC1
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43339)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
}

char* func_188(int iParam0, bool bParam1)//Position - 0x9FFE
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

void func_189(int iParam0)//Position - 0xA247
{
	Global_43928 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_190(int iParam0)//Position - 0xA259
{
	func_191(iParam0, 0, func_196(iParam0));
}

void func_191(int iParam0, int iParam1, int iParam2)//Position - 0xA26E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_82();
	func_194(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_193(iParam0, &uVar0);
	Var1 = { func_192(&uVar0) };
}

struct<16> func_192(var uParam0)//Position - 0xA29D
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_81(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_105(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_163(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_164(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_89(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_87(*uParam0), 64);
	return Var0;
}

void func_193(int iParam0, var uParam1)//Position - 0xA36D
{
	Global_113810.f_24998.f_43[iParam0] = *uParam1;
}

void func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA385
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_87(*uParam0);
	iVar1 = func_89(*uParam0);
	iVar2 = func_164(*uParam0);
	iVar3 = func_81(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_163(*uParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_195(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA507
{
	func_92(uParam0, iParam1);
	func_91(uParam0, iParam2);
	func_90(uParam0, iParam3);
	func_84(uParam0, iParam5);
	func_85(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

int func_196(int iParam0)//Position - 0xA53F
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

int func_197(int iParam0, int iParam1, int iParam2)//Position - 0xA6E2
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
	func_198(iParam0, iParam2);
	return 1;
}

void func_198(int iParam0, int iParam1)//Position - 0xA722
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_204(iParam0))
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
			iParam1 = Global_113810.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113810.f_32752.f_5592[iVar1] = iVar2;
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
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113810.f_32752.f_5590 = iParam1;
	Global_78384 = iParam0;
	Global_113810.f_32752.f_5588 = 1;
	func_199(iParam0, &(Global_113810.f_32752.f_5510));
}

void func_199(int iParam0, var uParam1)//Position - 0xA924
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_203(uParam1);
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
		if (uParam1->f_65 == -1 && !func_202(uParam1->f_66))
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
		func_201(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_200(iVar0 + 1));
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

int func_200(int iParam0)//Position - 0xABCF
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

int func_201(int iParam0, var uParam1, var uParam2)//Position - 0xAC7F
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

int func_202(int iParam0)//Position - 0xAE72
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

void func_203(var uParam0)//Position - 0xAE92
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

int func_204(int iParam0)//Position - 0xAF42
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_222(iParam0, 0, 0)) || func_222(iParam0, 1, 0)) || func_222(iParam0, 2, 0)) || func_221(iParam0) != 145) || func_220(iParam0)) || func_219(iParam0)) || func_218(iParam0)) || func_217(iParam0)) || !func_205(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_219(iParam0))
		{
		}
		if (func_219(iParam0))
		{
		}
		if (func_222(iParam0, 0, 0))
		{
		}
		if (func_222(iParam0, 1, 0))
		{
		}
		if (func_222(iParam0, 2, 0))
		{
		}
		if (func_221(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_205(int iParam0)//Position - 0xB01F
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_206(iParam0, 0, -1))
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
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_206(int iParam0, bool bParam1, int iParam2)//Position - 0xB1D1
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
		if (!func_183())
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
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_216() && !func_215()) && !func_214()) && !func_213()) && !func_183())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_212() || MISC::IS_PC_VERSION()) || func_211())
		{
		}
		else if (!func_214())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_209(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_207(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_207(int iParam0)//Position - 0xB353
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_208())
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

int func_208()//Position - 0xB41F
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_209(int iParam0, int iParam1)//Position - 0xB436
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764417 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586488[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764416)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7142 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13570 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13571 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14912 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14924 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14920 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14921 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14922 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14923 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14925 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14914 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14917 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14915 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14918 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14916 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14919 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17493 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17458 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17488 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17453 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17492 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17457 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17491 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17456 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17485 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17450 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17486 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17451 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17489 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17454 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17490 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17455 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17487 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17452 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17495 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17460 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17496 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17461 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17484 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17449 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17483 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17448 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17482 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17447 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17494 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17459 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17497 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17462 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17498 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17463 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17499 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17464 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17500 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17465 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17654 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17676 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17655 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17677 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17656 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17678 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17657 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17679 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17658 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17680 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17659 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17681 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17661 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17682 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17662 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17683 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17663 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17684 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17664 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17685 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17665 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17686 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17666 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17687 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17667 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17688 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17673 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17695 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17670 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17691 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17671 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17692 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17672 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17693 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17660 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17694 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17674 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17696 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17668 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17689 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17669 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17690 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17675 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17697 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19311 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19408 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19312 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19409 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19313 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19410 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19314 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19411 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19315 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19412 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19316 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19413 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19317 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19414 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19318 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19415 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19319 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19416 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19320 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19417 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19418 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19322 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19419 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19420 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19421 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19325 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19422 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19326 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19423 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19424 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19328 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19425 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19426 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19330 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19427 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19428 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19332 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19429 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19333 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19430 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19431 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19335 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19432 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20392 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20388 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20393 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20389 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20394 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20390 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20395 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20391 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21274 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21282 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21275 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21283 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21276 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21284 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21277 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21285 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21278 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21286 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21279 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21287 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_22073 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_22093 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_22085 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_22105 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_22076 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_22096 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_22086 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_22106 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_22074 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_22094 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_22090 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_22110 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_22088 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_22108 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_22089 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_22109 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_22084 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_22104 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_22091 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_22111 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_22087 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_22107 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_22083 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_22103 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_22075 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_22095 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_22077 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_22097 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_22078 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_22098 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_22079 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_22099 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_22080 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_22100 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_22081 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_22101 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_22082 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_22102 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_23041 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_23069 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_23042 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_23070 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_23043 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_23071 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_23044 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_23072 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_23045 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_23073 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_23046 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_23074 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_23047 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_23075 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_23048 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_23076 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_23049 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_23077 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_23050 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_23078 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_23051 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_23079 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_23052 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_23080 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_23053 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_23081 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_23054 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_23082 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_23055 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_23083 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_23056 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_23084 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_23057 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_23085 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_23058 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_23086 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_23059 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_23087 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_23060 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_23088 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_23061 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_23089 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_23062 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_23090 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_23063 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_23091 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_23064 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_23092 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_23065 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_23093 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_23066 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_23094 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_23067 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_23095 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_23068 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_23096 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24263 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24279 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24264 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24280 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24268 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24284 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24271 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24287 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24276 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24292 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24270 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24286 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24262 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24278 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24269 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24285 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24275 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24291 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24274 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24290 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24265 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24281 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24267 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24283 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24277 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24293 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24273 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24289 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24266 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24282 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24272 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24288 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24353 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24340 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24354 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24341 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24359 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24346 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24358 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24345 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24356 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24343 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24362 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24349 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24364 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24351 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24365 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24352 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24363 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24350 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24355 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24342 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24357 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24344 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24361 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24348 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24360 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24347 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26956 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_26958 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25969 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_25962 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25970 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_25963 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25971 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_25964 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25972 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_25965 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26957 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_26959 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25973 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_25966 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25974 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_25967 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25975 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_25968 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25980 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_26001 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25981 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_26002 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25982 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_26003 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25983 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_26004 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25984 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_26005 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25985 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_26006 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25986 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_26007 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25987 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_26008 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25988 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_26009 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25989 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_26010 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25990 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_26011 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25991 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_26012 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25992 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_26013 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25993 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_26014 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25994 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_26015 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25995 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_26016 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25996 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_26017 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25997 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_26018 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25998 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_26019 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25999 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_26020 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26000 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_26021 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28820 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28841 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28821 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28842 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28822 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28843 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28823 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28844 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28824 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28845 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28825 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28846 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28826 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28847 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28827 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28848 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28828 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28849 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28829 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28850 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28830 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28851 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28831 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28852 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28832 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28853 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28833 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28854 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28834 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28855 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28835 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28856 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28836 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28857 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28837 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28858 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28838 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28859 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28839 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28860 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28840 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28861 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28863 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28864 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28818 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28866 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28867 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28819 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28871 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28874 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28872 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28875 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28873 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28876 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29889 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29554 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29540 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29561 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29541 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29547 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29887 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29555 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29888 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29556 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29534 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29553 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29535 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29562 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29536 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29552 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29537 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29550 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29883 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29557 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29884 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29558 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29885 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29559 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29886 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29560 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29538 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29549 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29539 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29551 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30348 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30331 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30349 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30332 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30350 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30333 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30351 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30334 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30352 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30335 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30353 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30336 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30354 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30337 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30355 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30338 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30356 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30339 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30365 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30357 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30340 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30358 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30341 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30359 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30342 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30360 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30343 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30361 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30344 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30366 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30362 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30345 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30363 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30346 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30364 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30347 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31216 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_31199 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31217 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_31200 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31218 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_31201 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31219 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_31202 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31220 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_31203 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31221 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_31204 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31222 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_31205 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31223 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_31206 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31224 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_31207 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31225 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_31208 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31226 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_31209 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31227 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_31210 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31228 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_31211 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31229 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_31212 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31230 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_31213 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31231 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_31214 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31232 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_31215 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32099 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_32084 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32100 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_32085 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32101 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_32086 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32102 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_32087 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32103 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_32088 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32104 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_32089 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32105 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_32090 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32106 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_32091 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32107 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_32092 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32108 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_32093 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32109 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_32094 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32110 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_32095 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32111 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_32096 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32112 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_32097 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32177 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_32113 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_32098 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33350 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33331 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33344 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33325 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33348 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33329 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33342 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33323 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33353 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33334 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33345 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33326 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33354 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33335 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33356 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33337 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33347 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33328 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33355 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33336 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33358 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33339 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33343 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33324 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33351 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33332 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33357 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33338 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33349 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33330 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33359 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33340 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33346 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33327 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33341 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33322 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_34217 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34201 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_34217 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34201 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_34226 /* Tunable: ENABLE_VEHICLE_EUDORA */ && iVar1 < Global_262145.f_34209 /* Tunable: LAUNCHPOSIX_EUDORA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_34220 /* Tunable: ENABLE_VEHICLE_POWERSURGE */ && iVar1 < Global_262145.f_34204 /* Tunable: LAUNCHPOSIX_POWERSURGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_34214 /* Tunable: ENABLE_VEHICLE_JOURNEY2 */ && iVar1 < Global_262145.f_34198 /* Tunable: LAUNCHPOSIX_JOURNEY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_34215 /* Tunable: ENABLE_VEHICLE_SURFER3 */ && iVar1 < Global_262145.f_34199 /* Tunable: LAUNCHPOSIX_SURFER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_34212 /* Tunable: ENABLE_VEHICLE_ENTITY3 */ && iVar1 < Global_262145.f_34196 /* Tunable: LAUNCHPOSIX_ENTITY3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_34223 /* Tunable: ENABLE_VEHICLE_PANTHERE */ && iVar1 < Global_262145.f_34207 /* Tunable: LAUNCHPOSIX_PANTHERE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_34227 /* Tunable: ENABLE_VEHICLE_BOOR */ && iVar1 < Global_262145.f_34211 /* Tunable: LAUNCHPOSIX_BOOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_34224 /* Tunable: ENABLE_VEHICLE_EVERON2 */ && iVar1 < Global_262145.f_34208 /* Tunable: LAUNCHPOSIX_EVERON2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_34213 /* Tunable: ENABLE_VEHICLE_TULIP2 */ && iVar1 < Global_262145.f_34197 /* Tunable: LAUNCHPOSIX_TULIP2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_34216 /* Tunable: ENABLE_VEHICLE_R300 */ && iVar1 < Global_262145.f_34200 /* Tunable: LAUNCHPOSIX_R300 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_34225 /* Tunable: ENABLE_VEHICLE_VIRTUE */ && iVar1 < Global_262145.f_34210 /* Tunable: LAUNCHPOSIX_VIRTUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_34221 /* Tunable: ENABLE_VEHICLE_ISSI8 */ && iVar1 < Global_262145.f_34205 /* Tunable: LAUNCHPOSIX_ISSI8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_34222 /* Tunable: ENABLE_VEHICLE_BROADWAY */ && iVar1 < Global_262145.f_34206 /* Tunable: LAUNCHPOSIX_BROADWAY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_34219 /* Tunable: ENABLE_VEHICLE_TAHOMA */ && iVar1 < Global_262145.f_34203 /* Tunable: LAUNCHPOSIX_TAHOMA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_34218 /* Tunable: ENABLE_VEHICLE_TAXI */ && iVar1 < Global_262145.f_34202 /* Tunable: LAUNCHPOSIX_TAXI */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("exemplar"))
	{
		if (!Global_262145.f_35167 /* Tunable: ENABLE_VEHICLE_EXEMPLAR */ && !Global_262145.f_35168 /* Tunable: ENABLE_VEHICLE_EXEMPLAR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cogcabrio"))
	{
		if (!Global_262145.f_35169 /* Tunable: ENABLE_VEHICLE_COGCABRIO */ && !Global_262145.f_35170 /* Tunable: ENABLE_VEHICLE_COGCABRIO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrust"))
	{
		if (!Global_262145.f_35171 /* Tunable: ENABLE_VEHICLE_THRUST */ && !Global_262145.f_35172 /* Tunable: ENABLE_VEHICLE_THRUST_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vindicator"))
	{
		if (!Global_262145.f_35173 /* Tunable: ENABLE_VEHICLE_VINDICATOR */ && !Global_262145.f_35174 /* Tunable: ENABLE_VEHICLE_VINDICATOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (!Global_262145.f_35175 /* Tunable: ENABLE_VEHICLE_COQUETTE3 */ && !Global_262145.f_35176 /* Tunable: ENABLE_VEHICLE_COQUETTE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		if (!Global_262145.f_35177 /* Tunable: ENABLE_VEHICLE_BRAWLER */ && !Global_262145.f_35178 /* Tunable: ENABLE_VEHICLE_BRAWLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		if (!Global_262145.f_35179 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI */ && !Global_262145.f_35180 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti2"))
	{
		if (!Global_262145.f_35181 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2 */ && !Global_262145.f_35182 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog55"))
	{
		if (!Global_262145.f_35183 /* Tunable: ENABLE_VEHICLE_COG55 */ && !Global_262145.f_35184 /* Tunable: ENABLE_VEHICLE_COG55_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog552"))
	{
		if (!Global_262145.f_35185 /* Tunable: ENABLE_VEHICLE_COG552 */ && !Global_262145.f_35186 /* Tunable: ENABLE_VEHICLE_COG552_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("superd"))
	{
		if (!Global_262145.f_35187 /* Tunable: ENABLE_VEHICLE_SUPERD */ && !Global_262145.f_35188 /* Tunable: ENABLE_VEHICLE_SUPERD_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter4"))
	{
		if (!Global_262145.f_35189 /* Tunable: ENABLE_VEHICLE_SCHAFTER4 */ && !Global_262145.f_35190 /* Tunable: ENABLE_VEHICLE_SCHAFTER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter6"))
	{
		if (!Global_262145.f_35191 /* Tunable: ENABLE_VEHICLE_SCHAFTER6 */ && !Global_262145.f_35192 /* Tunable: ENABLE_VEHICLE_SCHAFTER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alpha"))
	{
		if (!Global_262145.f_35193 /* Tunable: ENABLE_VEHICLE_ALPHA */ && !Global_262145.f_35194 /* Tunable: ENABLE_VEHICLE_ALPHA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer2"))
	{
		if (!Global_262145.f_35195 /* Tunable: ENABLE_VEHICLE_FELTZER2 */ && !Global_262145.f_35196 /* Tunable: ENABLE_VEHICLE_FELTZER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (!Global_262145.f_35197 /* Tunable: ENABLE_VEHICLE_MASSACRO */ && !Global_262145.f_35198 /* Tunable: ENABLE_VEHICLE_MASSACRO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt"))
	{
		if (!Global_262145.f_35199 /* Tunable: ENABLE_VEHICLE_RAPIDGT */ && !Global_262145.f_35200 /* Tunable: ENABLE_VEHICLE_RAPIDGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt2"))
	{
		if (!Global_262145.f_35201 /* Tunable: ENABLE_VEHICLE_RAPIDGT2 */ && !Global_262145.f_35202 /* Tunable: ENABLE_VEHICLE_RAPIDGT2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_35203 /* Tunable: ENABLE_VEHICLE_SEVEN70 */ && !Global_262145.f_35204 /* Tunable: ENABLE_VEHICLE_SEVEN70_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester"))
	{
		if (!Global_262145.f_35205 /* Tunable: ENABLE_VEHICLE_JESTER */ && !Global_262145.f_35206 /* Tunable: ENABLE_VEHICLE_JESTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		if (!Global_262145.f_35207 /* Tunable: ENABLE_VEHICLE_BESTIAGTS */ && !Global_262145.f_35208 /* Tunable: ENABLE_VEHICLE_BESTIAGTS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("carbonizzare"))
	{
		if (!Global_262145.f_35209 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE */ && !Global_262145.f_35210 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette"))
	{
		if (!Global_262145.f_35211 /* Tunable: ENABLE_VEHICLE_COQUETTE */ && !Global_262145.f_35212 /* Tunable: ENABLE_VEHICLE_COQUETTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furoregt"))
	{
		if (!Global_262145.f_35213 /* Tunable: ENABLE_VEHICLE_FUROREGT */ && !Global_262145.f_35214 /* Tunable: ENABLE_VEHICLE_FUROREGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef"))
	{
		if (!Global_262145.f_35215 /* Tunable: ENABLE_VEHICLE_NINEF */ && !Global_262145.f_35216 /* Tunable: ENABLE_VEHICLE_NINEF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef2"))
	{
		if (!Global_262145.f_35217 /* Tunable: ENABLE_VEHICLE_NINEF2 */ && !Global_262145.f_35218 /* Tunable: ENABLE_VEHICLE_NINEF2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		if (!Global_262145.f_35219 /* Tunable: ENABLE_VEHICLE_VERLIERER2 */ && !Global_262145.f_35220 /* Tunable: ENABLE_VEHICLE_VERLIERER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype"))
	{
		if (!Global_262145.f_35221 /* Tunable: ENABLE_VEHICLE_BTYPE */ && !Global_262145.f_35222 /* Tunable: ENABLE_VEHICLE_BTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (!Global_262145.f_35223 /* Tunable: ENABLE_VEHICLE_FELTZER3 */ && !Global_262145.f_35224 /* Tunable: ENABLE_VEHICLE_FELTZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingergt"))
	{
		if (!Global_262145.f_35225 /* Tunable: ENABLE_VEHICLE_STINGERGT */ && !Global_262145.f_35226 /* Tunable: ENABLE_VEHICLE_STINGERGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stinger"))
	{
		if (!Global_262145.f_35227 /* Tunable: ENABLE_VEHICLE_STINGER */ && !Global_262145.f_35228 /* Tunable: ENABLE_VEHICLE_STINGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette2"))
	{
		if (!Global_262145.f_35229 /* Tunable: ENABLE_VEHICLE_COQUETTE2 */ && !Global_262145.f_35230 /* Tunable: ENABLE_VEHICLE_COQUETTE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb700"))
	{
		if (!Global_262145.f_35231 /* Tunable: ENABLE_VEHICLE_JB700 */ && !Global_262145.f_35232 /* Tunable: ENABLE_VEHICLE_JB700_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mamba"))
	{
		if (!Global_262145.f_35233 /* Tunable: ENABLE_VEHICLE_MAMBA */ && !Global_262145.f_35234 /* Tunable: ENABLE_VEHICLE_MAMBA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monroe"))
	{
		if (!Global_262145.f_35235 /* Tunable: ENABLE_VEHICLE_MONROE */ && !Global_262145.f_35236 /* Tunable: ENABLE_VEHICLE_MONROE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype3"))
	{
		if (!Global_262145.f_35237 /* Tunable: ENABLE_VEHICLE_BTYPE3 */ && !Global_262145.f_35238 /* Tunable: ENABLE_VEHICLE_BTYPE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ztype"))
	{
		if (!Global_262145.f_35239 /* Tunable: ENABLE_VEHICLE_ZTYPE */ && !Global_262145.f_35240 /* Tunable: ENABLE_VEHICLE_ZTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("voltic"))
	{
		if (!Global_262145.f_35241 /* Tunable: ENABLE_VEHICLE_VOLTIC */ && !Global_262145.f_35242 /* Tunable: ENABLE_VEHICLE_VOLTIC_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_35243 /* Tunable: ENABLE_VEHICLE_SHEAVA */ && !Global_262145.f_35244 /* Tunable: ENABLE_VEHICLE_SHEAVA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah"))
	{
		if (!Global_262145.f_35245 /* Tunable: ENABLE_VEHICLE_CHEETAH */ && !Global_262145.f_35246 /* Tunable: ENABLE_VEHICLE_CHEETAH_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entityxf"))
	{
		if (!Global_262145.f_35247 /* Tunable: ENABLE_VEHICLE_ENTITYXF */ && !Global_262145.f_35248 /* Tunable: ENABLE_VEHICLE_ENTITYXF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus"))
	{
		if (!Global_262145.f_35249 /* Tunable: ENABLE_VEHICLE_INFERNUS */ && !Global_262145.f_35250 /* Tunable: ENABLE_VEHICLE_INFERNUS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vacca"))
	{
		if (!Global_262145.f_35251 /* Tunable: ENABLE_VEHICLE_VACCA */ && !Global_262145.f_35252 /* Tunable: ENABLE_VEHICLE_VACCA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bullet"))
	{
		if (!Global_262145.f_35253 /* Tunable: ENABLE_VEHICLE_BULLET */ && !Global_262145.f_35254 /* Tunable: ENABLE_VEHICLE_BULLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fmj"))
	{
		if (!Global_262145.f_35255 /* Tunable: ENABLE_VEHICLE_FMJ */ && !Global_262145.f_35256 /* Tunable: ENABLE_VEHICLE_FMJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller2"))
	{
		if (!Global_262145.f_35257 /* Tunable: ENABLE_VEHICLE_BALLER2 */ && !Global_262145.f_35258 /* Tunable: ENABLE_VEHICLE_BALLER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller3"))
	{
		if (!Global_262145.f_35259 /* Tunable: ENABLE_VEHICLE_BALLER3 */ && !Global_262145.f_35260 /* Tunable: ENABLE_VEHICLE_BALLER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller5"))
	{
		if (!Global_262145.f_35261 /* Tunable: ENABLE_VEHICLE_BALLER5 */ && !Global_262145.f_35262 /* Tunable: ENABLE_VEHICLE_BALLER5_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller4"))
	{
		if (!Global_262145.f_35263 /* Tunable: ENABLE_VEHICLE_BALLER4 */ && !Global_262145.f_35264 /* Tunable: ENABLE_VEHICLE_BALLER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller6"))
	{
		if (!Global_262145.f_35265 /* Tunable: ENABLE_VEHICLE_BALLER6 */ && !Global_262145.f_35266 /* Tunable: ENABLE_VEHICLE_BALLER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls"))
	{
		if (!Global_262145.f_35267 /* Tunable: ENABLE_VEHICLE_XLS */ && !Global_262145.f_35268 /* Tunable: ENABLE_VEHICLE_XLS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls2"))
	{
		if (!Global_262145.f_35269 /* Tunable: ENABLE_VEHICLE_XLS2 */ && !Global_262145.f_35270 /* Tunable: ENABLE_VEHICLE_XLS2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("prairie"))
	{
		if (!Global_262145.f_35271 /* Tunable: ENABLE_VEHICLE_PRAIRIE */ && !Global_262145.f_35272 /* Tunable: ENABLE_VEHICLE_PRAIRIE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi2"))
	{
		if (!Global_262145.f_35273 /* Tunable: ENABLE_VEHICLE_ISSI2 */ && !Global_262145.f_35274 /* Tunable: ENABLE_VEHICLE_ISSI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dilettante"))
	{
		if (!Global_262145.f_35275 /* Tunable: ENABLE_VEHICLE_DILETTANTE */ && !Global_262145.f_35276 /* Tunable: ENABLE_VEHICLE_DILETTANTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon"))
	{
		if (!Global_262145.f_35277 /* Tunable: ENABLE_VEHICLE_FELON */ && !Global_262145.f_35278 /* Tunable: ENABLE_VEHICLE_FELON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon2"))
	{
		if (!Global_262145.f_35279 /* Tunable: ENABLE_VEHICLE_FELON2 */ && !Global_262145.f_35280 /* Tunable: ENABLE_VEHICLE_FELON2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("f620"))
	{
		if (!Global_262145.f_35281 /* Tunable: ENABLE_VEHICLE_F620 */ && !Global_262145.f_35282 /* Tunable: ENABLE_VEHICLE_F620_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jackal"))
	{
		if (!Global_262145.f_35283 /* Tunable: ENABLE_VEHICLE_JACKAL */ && !Global_262145.f_35284 /* Tunable: ENABLE_VEHICLE_JACKAL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle2"))
	{
		if (!Global_262145.f_35285 /* Tunable: ENABLE_VEHICLE_ORACLE2 */ && !Global_262145.f_35286 /* Tunable: ENABLE_VEHICLE_ORACLE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle"))
	{
		if (!Global_262145.f_35287 /* Tunable: ENABLE_VEHICLE_ORACLE */ && !Global_262145.f_35288 /* Tunable: ENABLE_VEHICLE_ORACLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel2"))
	{
		if (!Global_262145.f_35289 /* Tunable: ENABLE_VEHICLE_SENTINEL2 */ && !Global_262145.f_35290 /* Tunable: ENABLE_VEHICLE_SENTINEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion"))
	{
		if (!Global_262145.f_35291 /* Tunable: ENABLE_VEHICLE_ZION */ && !Global_262145.f_35292 /* Tunable: ENABLE_VEHICLE_ZION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion2"))
	{
		if (!Global_262145.f_35293 /* Tunable: ENABLE_VEHICLE_ZION2 */ && !Global_262145.f_35294 /* Tunable: ENABLE_VEHICLE_ZION2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akuma"))
	{
		if (!Global_262145.f_35295 /* Tunable: ENABLE_VEHICLE_AKUMA */ && !Global_262145.f_35296 /* Tunable: ENABLE_VEHICLE_AKUMA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("double"))
	{
		if (!Global_262145.f_35297 /* Tunable: ENABLE_VEHICLE_DOUBLE */ && !Global_262145.f_35298 /* Tunable: ENABLE_VEHICLE_DOUBLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("enduro"))
	{
		if (!Global_262145.f_35299 /* Tunable: ENABLE_VEHICLE_ENDURO */ && !Global_262145.f_35300 /* Tunable: ENABLE_VEHICLE_ENDURO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hexer"))
	{
		if (!Global_262145.f_35301 /* Tunable: ENABLE_VEHICLE_HEXER */ && !Global_262145.f_35302 /* Tunable: ENABLE_VEHICLE_HEXER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("innovation"))
	{
		if (!Global_262145.f_35303 /* Tunable: ENABLE_VEHICLE_INNOVATION */ && !Global_262145.f_35304 /* Tunable: ENABLE_VEHICLE_INNOVATION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez"))
	{
		if (!Global_262145.f_35305 /* Tunable: ENABLE_VEHICLE_SANCHEZ */ && !Global_262145.f_35306 /* Tunable: ENABLE_VEHICLE_SANCHEZ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez2"))
	{
		if (!Global_262145.f_35307 /* Tunable: ENABLE_VEHICLE_SANCHEZ2 */ && !Global_262145.f_35308 /* Tunable: ENABLE_VEHICLE_SANCHEZ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bati2"))
	{
		if (!Global_262145.f_35309 /* Tunable: ENABLE_VEHICLE_BATI2 */ && !Global_262145.f_35310 /* Tunable: ENABLE_VEHICLE_BATI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio2"))
	{
		if (!Global_262145.f_35311 /* Tunable: ENABLE_VEHICLE_FAGGIO2 */ && !Global_262145.f_35312 /* Tunable: ENABLE_VEHICLE_FAGGIO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruffian"))
	{
		if (!Global_262145.f_35313 /* Tunable: ENABLE_VEHICLE_RUFFIAN */ && !Global_262145.f_35314 /* Tunable: ENABLE_VEHICLE_RUFFIAN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nemesis"))
	{
		if (!Global_262145.f_35315 /* Tunable: ENABLE_VEHICLE_NEMESIS */ && !Global_262145.f_35316 /* Tunable: ENABLE_VEHICLE_NEMESIS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		if (!Global_262145.f_35317 /* Tunable: ENABLE_VEHICLE_HAKUCHOU */ && !Global_262145.f_35318 /* Tunable: ENABLE_VEHICLE_HAKUCHOU_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pcj"))
	{
		if (!Global_262145.f_35319 /* Tunable: ENABLE_VEHICLE_PCJ */ && !Global_262145.f_35320 /* Tunable: ENABLE_VEHICLE_PCJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vader"))
	{
		if (!Global_262145.f_35321 /* Tunable: ENABLE_VEHICLE_VADER */ && !Global_262145.f_35322 /* Tunable: ENABLE_VEHICLE_VADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sovereign"))
	{
		if (!Global_262145.f_35323 /* Tunable: ENABLE_VEHICLE_SOVEREIGN */ && !Global_262145.f_35324 /* Tunable: ENABLE_VEHICLE_SOVEREIGN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet"))
	{
		if (!Global_262145.f_35325 /* Tunable: ENABLE_VEHICLE_GAUNTLET */ && !Global_262145.f_35326 /* Tunable: ENABLE_VEHICLE_GAUNTLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratloader"))
	{
		if (!Global_262145.f_35327 /* Tunable: ENABLE_VEHICLE_RATLOADER */ && !Global_262145.f_35328 /* Tunable: ENABLE_VEHICLE_RATLOADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("picador"))
	{
		if (!Global_262145.f_35329 /* Tunable: ENABLE_VEHICLE_PICADOR */ && !Global_262145.f_35330 /* Tunable: ENABLE_VEHICLE_PICADOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero"))
	{
		if (!Global_262145.f_35331 /* Tunable: ENABLE_VEHICLE_VIGERO */ && !Global_262145.f_35332 /* Tunable: ENABLE_VEHICLE_VIGERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner"))
	{
		if (!Global_262145.f_35333 /* Tunable: ENABLE_VEHICLE_RUINER */ && !Global_262145.f_35334 /* Tunable: ENABLE_VEHICLE_RUINER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa"))
	{
		if (!Global_262145.f_35335 /* Tunable: ENABLE_VEHICLE_TAMPA */ && !Global_262145.f_35336 /* Tunable: ENABLE_VEHICLE_TAMPA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blade"))
	{
		if (!Global_262145.f_35337 /* Tunable: ENABLE_VEHICLE_BLADE */ && !Global_262145.f_35338 /* Tunable: ENABLE_VEHICLE_BLADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bifta"))
	{
		if (!Global_262145.f_35339 /* Tunable: ENABLE_VEHICLE_BIFTA */ && !Global_262145.f_35340 /* Tunable: ENABLE_VEHICLE_BIFTA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune"))
	{
		if (!Global_262145.f_35341 /* Tunable: ENABLE_VEHICLE_DUNE */ && !Global_262145.f_35342 /* Tunable: ENABLE_VEHICLE_DUNE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bfinjection"))
	{
		if (!Global_262145.f_35343 /* Tunable: ENABLE_VEHICLE_BFINJECTION */ && !Global_262145.f_35344 /* Tunable: ENABLE_VEHICLE_BFINJECTION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bodhi2"))
	{
		if (!Global_262145.f_35345 /* Tunable: ENABLE_VEHICLE_BODHI2 */ && !Global_262145.f_35346 /* Tunable: ENABLE_VEHICLE_BODHI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kalahari"))
	{
		if (!Global_262145.f_35347 /* Tunable: ENABLE_VEHICLE_KALAHARI */ && !Global_262145.f_35348 /* Tunable: ENABLE_VEHICLE_KALAHARI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rancherxl"))
	{
		if (!Global_262145.f_35349 /* Tunable: ENABLE_VEHICLE_RANCHERXL */ && !Global_262145.f_35350 /* Tunable: ENABLE_VEHICLE_RANCHERXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel2"))
	{
		if (!Global_262145.f_35351 /* Tunable: ENABLE_VEHICLE_REBEL2 */ && !Global_262145.f_35352 /* Tunable: ENABLE_VEHICLE_REBEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel"))
	{
		if (!Global_262145.f_35353 /* Tunable: ENABLE_VEHICLE_REBEL */ && !Global_262145.f_35354 /* Tunable: ENABLE_VEHICLE_REBEL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer"))
	{
		if (!Global_262145.f_35355 /* Tunable: ENABLE_VEHICLE_BLAZER */ && !Global_262145.f_35356 /* Tunable: ENABLE_VEHICLE_BLAZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer3"))
	{
		if (!Global_262145.f_35357 /* Tunable: ENABLE_VEHICLE_BLAZER3 */ && !Global_262145.f_35358 /* Tunable: ENABLE_VEHICLE_BLAZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sandking2"))
	{
		if (!Global_262145.f_35359 /* Tunable: ENABLE_VEHICLE_SANDKING2 */ && !Global_262145.f_35360 /* Tunable: ENABLE_VEHICLE_SANDKING2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("washington"))
	{
		if (!Global_262145.f_35361 /* Tunable: ENABLE_VEHICLE_WASHINGTON */ && !Global_262145.f_35362 /* Tunable: ENABLE_VEHICLE_WASHINGTON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter2"))
	{
		if (!Global_262145.f_35363 /* Tunable: ENABLE_VEHICLE_SCHAFTER2 */ && !Global_262145.f_35364 /* Tunable: ENABLE_VEHICLE_SCHAFTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("romero"))
	{
		if (!Global_262145.f_35365 /* Tunable: ENABLE_VEHICLE_ROMERO */ && !Global_262145.f_35366 /* Tunable: ENABLE_VEHICLE_ROMERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fugitive"))
	{
		if (!Global_262145.f_35367 /* Tunable: ENABLE_VEHICLE_FUGITIVE */ && !Global_262145.f_35368 /* Tunable: ENABLE_VEHICLE_FUGITIVE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surge"))
	{
		if (!Global_262145.f_35369 /* Tunable: ENABLE_VEHICLE_SURGE */ && !Global_262145.f_35370 /* Tunable: ENABLE_VEHICLE_SURGE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asea"))
	{
		if (!Global_262145.f_35371 /* Tunable: ENABLE_VEHICLE_ASEA */ && !Global_262145.f_35372 /* Tunable: ENABLE_VEHICLE_ASEA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("premier"))
	{
		if (!Global_262145.f_35373 /* Tunable: ENABLE_VEHICLE_PREMIER */ && !Global_262145.f_35374 /* Tunable: ENABLE_VEHICLE_PREMIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("regina"))
	{
		if (!Global_262145.f_35375 /* Tunable: ENABLE_VEHICLE_REGINA */ && !Global_262145.f_35376 /* Tunable: ENABLE_VEHICLE_REGINA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope"))
	{
		if (!Global_262145.f_35377 /* Tunable: ENABLE_VEHICLE_ASTEROPE */ && !Global_262145.f_35378 /* Tunable: ENABLE_VEHICLE_ASTEROPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("intruder"))
	{
		if (!Global_262145.f_35379 /* Tunable: ENABLE_VEHICLE_INTRUDER */ && !Global_262145.f_35380 /* Tunable: ENABLE_VEHICLE_INTRUDER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater"))
	{
		if (!Global_262145.f_35381 /* Tunable: ENABLE_VEHICLE_TAILGATER */ && !Global_262145.f_35382 /* Tunable: ENABLE_VEHICLE_TAILGATER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stanier"))
	{
		if (!Global_262145.f_35383 /* Tunable: ENABLE_VEHICLE_STANIER */ && !Global_262145.f_35384 /* Tunable: ENABLE_VEHICLE_STANIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ingot"))
	{
		if (!Global_262145.f_35385 /* Tunable: ENABLE_VEHICLE_INGOT */ && !Global_262145.f_35386 /* Tunable: ENABLE_VEHICLE_INGOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener"))
	{
		if (!Global_262145.f_35387 /* Tunable: ENABLE_VEHICLE_WARRENER */ && !Global_262145.f_35388 /* Tunable: ENABLE_VEHICLE_WARRENER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stratum"))
	{
		if (!Global_262145.f_35389 /* Tunable: ENABLE_VEHICLE_STRATUM */ && !Global_262145.f_35390 /* Tunable: ENABLE_VEHICLE_STRATUM_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schwarzer"))
	{
		if (!Global_262145.f_35391 /* Tunable: ENABLE_VEHICLE_SCHWARZER */ && !Global_262145.f_35392 /* Tunable: ENABLE_VEHICLE_SCHWARZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surano"))
	{
		if (!Global_262145.f_35393 /* Tunable: ENABLE_VEHICLE_SURANO */ && !Global_262145.f_35394 /* Tunable: ENABLE_VEHICLE_SURANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo"))
	{
		if (!Global_262145.f_35395 /* Tunable: ENABLE_VEHICLE_BUFFALO */ && !Global_262145.f_35396 /* Tunable: ENABLE_VEHICLE_BUFFALO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo2"))
	{
		if (!Global_262145.f_35397 /* Tunable: ENABLE_VEHICLE_BUFFALO2 */ && !Global_262145.f_35398 /* Tunable: ENABLE_VEHICLE_BUFFALO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (!Global_262145.f_35399 /* Tunable: ENABLE_VEHICLE_MASSACRO2 */ && !Global_262145.f_35400 /* Tunable: ENABLE_VEHICLE_MASSACRO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester2"))
	{
		if (!Global_262145.f_35401 /* Tunable: ENABLE_VEHICLE_JESTER2 */ && !Global_262145.f_35402 /* Tunable: ENABLE_VEHICLE_JESTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo"))
	{
		if (!Global_262145.f_35403 /* Tunable: ENABLE_VEHICLE_FUTO */ && !Global_262145.f_35404 /* Tunable: ENABLE_VEHICLE_FUTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra"))
	{
		if (!Global_262145.f_35405 /* Tunable: ENABLE_VEHICLE_PENUMBRA */ && !Global_262145.f_35406 /* Tunable: ENABLE_VEHICLE_PENUMBRA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fusilade"))
	{
		if (!Global_262145.f_35407 /* Tunable: ENABLE_VEHICLE_FUSILADE */ && !Global_262145.f_35408 /* Tunable: ENABLE_VEHICLE_FUSILADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype2"))
	{
		if (!Global_262145.f_35409 /* Tunable: ENABLE_VEHICLE_BTYPE2 */ && !Global_262145.f_35410 /* Tunable: ENABLE_VEHICLE_BTYPE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pigalle"))
	{
		if (!Global_262145.f_35411 /* Tunable: ENABLE_VEHICLE_PIGALLE */ && !Global_262145.f_35412 /* Tunable: ENABLE_VEHICLE_PIGALLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade"))
	{
		if (!Global_262145.f_35413 /* Tunable: ENABLE_VEHICLE_CAVALCADE */ && !Global_262145.f_35414 /* Tunable: ENABLE_VEHICLE_CAVALCADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade2"))
	{
		if (!Global_262145.f_35415 /* Tunable: ENABLE_VEHICLE_CAVALCADE2 */ && !Global_262145.f_35416 /* Tunable: ENABLE_VEHICLE_CAVALCADE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bjxl"))
	{
		if (!Global_262145.f_35417 /* Tunable: ENABLE_VEHICLE_BJXL */ && !Global_262145.f_35418 /* Tunable: ENABLE_VEHICLE_BJXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("serrano"))
	{
		if (!Global_262145.f_35419 /* Tunable: ENABLE_VEHICLE_SERRANO */ && !Global_262145.f_35420 /* Tunable: ENABLE_VEHICLE_SERRANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gresley"))
	{
		if (!Global_262145.f_35421 /* Tunable: ENABLE_VEHICLE_GRESLEY */ && !Global_262145.f_35422 /* Tunable: ENABLE_VEHICLE_GRESLEY_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole"))
	{
		if (!Global_262145.f_35423 /* Tunable: ENABLE_VEHICLE_SEMINOLE */ && !Global_262145.f_35424 /* Tunable: ENABLE_VEHICLE_SEMINOLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger"))
	{
		if (!Global_262145.f_35425 /* Tunable: ENABLE_VEHICLE_GRANGER */ && !Global_262145.f_35426 /* Tunable: ENABLE_VEHICLE_GRANGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker"))
	{
		if (!Global_262145.f_35427 /* Tunable: ENABLE_VEHICLE_LANDSTALKER */ && !Global_262145.f_35428 /* Tunable: ENABLE_VEHICLE_LANDSTALKER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("habanero"))
	{
		if (!Global_262145.f_35429 /* Tunable: ENABLE_VEHICLE_HABANERO */ && !Global_262145.f_35430 /* Tunable: ENABLE_VEHICLE_HABANERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fq2"))
	{
		if (!Global_262145.f_35431 /* Tunable: ENABLE_VEHICLE_FQ2 */ && !Global_262145.f_35432 /* Tunable: ENABLE_VEHICLE_FQ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller"))
	{
		if (!Global_262145.f_35433 /* Tunable: ENABLE_VEHICLE_BALLER */ && !Global_262145.f_35434 /* Tunable: ENABLE_VEHICLE_BALLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot"))
	{
		if (!Global_262145.f_35435 /* Tunable: ENABLE_VEHICLE_PATRIOT */ && !Global_262145.f_35436 /* Tunable: ENABLE_VEHICLE_PATRIOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rocoto"))
	{
		if (!Global_262145.f_35437 /* Tunable: ENABLE_VEHICLE_ROCOTO */ && !Global_262145.f_35438 /* Tunable: ENABLE_VEHICLE_ROCOTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("radi"))
	{
		if (!Global_262145.f_35439 /* Tunable: ENABLE_VEHICLE_RADI */ && !Global_262145.f_35440 /* Tunable: ENABLE_VEHICLE_RADI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mesa3"))
	{
		if (!Global_262145.f_35441 /* Tunable: ENABLE_VEHICLE_MESA3 */ && !Global_262145.f_35442 /* Tunable: ENABLE_VEHICLE_MESA3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monster"))
	{
		if (!Global_262145.f_35443 /* Tunable: ENABLE_VEHICLE_MONSTER */ && !Global_262145.f_35444 /* Tunable: ENABLE_VEHICLE_MONSTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet6"))
	{
		if (!Global_262145.f_35473 /* Tunable: ENABLE_VEHICLE_GAUNTLET6 */ && iVar1 < Global_262145.f_35460 /* Tunable: LAUNCHPOSIX_GAUNTLET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada2"))
	{
		if (!Global_262145.f_35472 /* Tunable: ENABLE_VEHICLE_CONADA2 */ && iVar1 < Global_262145.f_35459 /* Tunable: LAUNCHPOSIX_CONADA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brigham"))
	{
		if (!Global_262145.f_35474 /* Tunable: ENABLE_VEHICLE_BRIGHAM */ && iVar1 < Global_262145.f_35461 /* Tunable: LAUNCHPOSIX_BRIGHAM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique2"))
	{
		if (!Global_262145.f_35465 /* Tunable: ENABLE_VEHICLE_CLIQUE2 */ && iVar1 < Global_262145.f_35452 /* Tunable: LAUNCHPOSIX_CLIQUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("l35"))
	{
		if (!Global_262145.f_35462 /* Tunable: ENABLE_VEHICLE_L35 */ && iVar1 < Global_262145.f_35449 /* Tunable: LAUNCHPOSIX_L35 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == func_210(1))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("ratel"))
	{
		if (!Global_262145.f_35463 /* Tunable: ENABLE_VEHICLE_RATEL */ && iVar1 < Global_262145.f_35450 /* Tunable: LAUNCHPOSIX_RATEL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingertt"))
	{
		if (!Global_262145.f_35466 /* Tunable: ENABLE_VEHICLE_STINGERTT */ && iVar1 < Global_262145.f_35453 /* Tunable: LAUNCHPOSIX_STINGERTT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo5"))
	{
		if (!Global_262145.f_35469 /* Tunable: ENABLE_VEHICLE_BUFFALO5 */ && iVar1 < Global_262145.f_35456 /* Tunable: LAUNCHPOSIX_BUFFALO5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streamer216"))
	{
		if (!Global_262145.f_35467 /* Tunable: ENABLE_VEHICLE_STREAMER216 */ && iVar1 < Global_262145.f_35454 /* Tunable: LAUNCHPOSIX_STREAMER216 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monstrociti"))
	{
		if (!Global_262145.f_35464 /* Tunable: ENABLE_VEHICLE_MONSTROCITI */ && iVar1 < Global_262145.f_35451 /* Tunable: LAUNCHPOSIX_MONSTROCITI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coureur"))
	{
		if (!Global_262145.f_35471 /* Tunable: ENABLE_VEHICLE_COUREUR */ && iVar1 < Global_262145.f_35458 /* Tunable: LAUNCHPOSIX_COUREUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiju"))
	{
		if (!Global_262145.f_35468 /* Tunable: ENABLE_VEHICLE_RAIJU */ && iVar1 < Global_262145.f_35455 /* Tunable: LAUNCHPOSIX_RAIJU */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35457 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor2"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35457 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_210(bool bParam0)//Position - 0x10612
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_211()//Position - 0x1062C
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_212()//Position - 0x10642
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_213()//Position - 0x10658
{
	return 0;
}

int func_214()//Position - 0x10661
{
	return 1;
}

int func_215()//Position - 0x1066A
{
	return 1;
}

int func_216()//Position - 0x10673
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)//Position - 0x1068C
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_206(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x106D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98174[iVar0]))
		{
			if (Global_98174[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x1070E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], false))
			{
				if (Global_98144[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x1078A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24]))
	{
		if (iParam0 == Global_77479.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77479.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x10872
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
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (Global_98144[iVar0] == iParam0)
			{
				return Global_98154[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x108D5
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_223(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113810.f_7232[iVar9], 0))
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

int func_223(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x10943
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

void func_224(bool bParam0)//Position - 0x10A1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_129(iVar0, bParam0);
		iVar0++;
	}
}

