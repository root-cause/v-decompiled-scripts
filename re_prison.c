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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_63[12];
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<7> Local_126 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_133 = 0;
	int* iLocal_134 = NULL;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int* iLocal_140 = NULL;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 16;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	struct<3> Local_310 = { 0, 0, 0 } ;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	struct<76> Local_316 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	int iLocal_402[3] = { 0, 0, 0 };
	int iLocal_406[3] = { 0, 0, 0 };
	int iLocal_410[3] = { 0, 0, 0 };
	float fLocal_414 = 0f;
	bool bLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	struct<13> Local_418[10];
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
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
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	bool bLocal_570 = 0;
	int iLocal_571 = 0;
	bool bLocal_572 = 0;
	int iLocal_573 = 0;
	var uLocal_574[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_595[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_616 = 0;
	int iLocal_617 = 0;
	var uLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	struct<3> Local_623 = { 0, 0, 0 } ;
	int iLocal_626 = 0;
	struct<41> Local_627 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
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
	fLocal_414 = 0f;
	bLocal_415 = true;
	Local_623 = { 1683.6819f, 2518.867f, 44.5651f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_89(0);
	}
	iLocal_309 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
	}
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_309, false))
		{
			func_89(0);
		}
		func_88();
		Local_310 = { ENTITY::GET_ENTITY_COORDS(iLocal_309, true) };
		switch (iLocal_308)
		{
			case 0:
				func_86();
				iLocal_308 = 1;
				break;
			
			case 1:
				if (!Global_32957)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_308 = 2;
				}
				break;
			
			case 2:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_308 = 3;
				}
				break;
			
			case 3:
				func_70();
				SYSTEM::WAIT(0);
				func_69();
				SYSTEM::WAIT(0);
				func_66();
				func_65();
				iLocal_308 = 4;
				break;
			
			case 4:
				if (!Global_32957)
				{
					if (Global_98441)
					{
						func_89(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_89(1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(bool bParam0)//Position - 0x1C6
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)//Position - 0x1EC
{
	return Global_44042 == iParam0;
}

int func_3()//Position - 0x1FA
{
	if (Global_112911)
	{
		return 1;
	}
	if (!func_2(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x22C
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_49 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1766.972f, 2409.5964f, 43.55469f, 1826.6466f, 2471.6326f, 56.308628f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[0] = 1;
				}
			}
			else
			{
				iLocal_105[0] = 0;
			}
		}
	}
	else if (iLocal_49 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1662.3102f, 2391.0603f, 43.51377f, 1761.3618f, 2405.1426f, 56.654724f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[1] = 1;
				}
			}
			else
			{
				iLocal_105[1] = 0;
			}
		}
	}
	else if (iLocal_49 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1537.3691f, 2465.132f, 43.5756f, 1655.6632f, 2391.8218f, 56.544037f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[2] = 1;
				}
			}
			else
			{
				iLocal_105[2] = 0;
			}
		}
	}
	else if (iLocal_49 == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1529.1527f, 2584.2637f, 43.616802f, 1535.0143f, 2469.2527f, 56.5985f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[3] = 1;
				}
			}
			else
			{
				iLocal_105[3] = 0;
			}
		}
	}
	else if (iLocal_49 == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1565.0453f, 2681.2046f, 43.505524f, 1529.9149f, 2586.4275f, 56.526855f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[4] = 1;
				}
			}
			else
			{
				iLocal_105[4] = 0;
			}
		}
	}
	else if (iLocal_49 == 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1645.1686f, 2760.3303f, 43.6705f, 1567.1129f, 2682.9048f, 56.391766f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[5] = 1;
				}
			}
			else
			{
				iLocal_105[5] = 0;
			}
		}
	}
	else if (iLocal_49 == 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1772.306f, 2766.3638f, 43.591255f, 1650.228f, 2761.6912f, 56.530285f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[6] = 1;
				}
			}
			else
			{
				iLocal_105[6] = 0;
			}
		}
	}
	else if (iLocal_49 == 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.4353f, 2623.2573f, 43.466583f, 1851.6586f, 2696.4043f, 56.680935f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[7] = 1;
				}
			}
			else
			{
				iLocal_105[7] = 0;
			}
		}
	}
	else if (iLocal_49 == 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.4353f, 2623.2573f, 43.466583f, 1851.6586f, 2696.4043f, 56.680935f, 12f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[8] = 1;
				}
			}
			else
			{
				iLocal_105[8] = 0;
			}
		}
	}
	else if (iLocal_49 == 10)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1829.468f, 2480.96f, 43.52237f, 1836.9982f, 2566.8564f, 60.35412f, 20.5f, false, true, 0))
			{
				if (!bLocal_101)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_105[9] = 1;
				}
			}
			else
			{
				iLocal_105[9] = 0;
			}
		}
	}
	iLocal_49++;
	if (iLocal_49 > 10)
	{
		iLocal_49 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_105[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_101)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", false, true);
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", true, true);
			}
		}
	}
}

void func_5()//Position - 0x6CC
{
	struct<3> Var0;
	
	switch (iLocal_48)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
			{
				iLocal_48++;
			}
			break;
		
		case 1:
			iLocal_122 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1797.7852f, 2599.6965f, 44.5769f, 269.6189f, true, true, false);
			iLocal_124 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_122, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
			func_26(&iLocal_124);
			iLocal_48++;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if ((func_16(iLocal_124, iLocal_122, &Local_126, &uLocal_133, 0, 1, 0, 1, 1) || func_16(iLocal_125, iLocal_123, &Local_126, &uLocal_133, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, false, 0f, 50f, 0f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, false, 0f, 50f, 0f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_124, false))
				{
					TASK::TASK_COMBAT_PED(iLocal_124, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!func_14(&iLocal_134))
				{
					func_11(&iLocal_134);
				}
				iLocal_48++;
			}
			break;
		
		case 3:
			if (func_14(&iLocal_134))
			{
				if (func_8(&iLocal_134) > 15f)
				{
					iLocal_123 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1755.1588f, 2614.4556f, 44.5652f, 179.3394f, true, true, false);
					iLocal_125 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_123, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
					func_26(&iLocal_125);
					TASK::TASK_COMBAT_PED(iLocal_125, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_48++;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					}
					if (func_7(1818.2367f, 2604.9265f, 44.57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_48 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				if (func_7(1818.2367f, 2604.9265f, 44.57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_48 = 0;
				}
			}
			break;
	}
}

void func_6()//Position - 0x94E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_122);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		PED::DELETE_PED(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		PED::DELETE_PED(&iLocal_125);
	}
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x992
{
	if (SYSTEM::VDIST2(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_122) && ENTITY::DOES_ENTITY_EXIST(iLocal_124)) && ENTITY::DOES_ENTITY_EXIST(iLocal_123)) && ENTITY::DOES_ENTITY_EXIST(iLocal_125))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_122) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_122))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_124) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_124))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_123) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_123))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_125) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_125))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(int* iParam0)//Position - 0xA52
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)//Position - 0xA8E
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

bool func_10(int* iParam0)//Position - 0xAE6
{
	return BitTest(*iParam0, 2);
}

void func_11(int* iParam0)//Position - 0xAF3
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int* iParam0)//Position - 0xB0B
{
	func_13(iParam0, 0f);
}

void func_13(int* iParam0, float fParam1)//Position - 0xB1A
{
	iParam0->f_1 = (func_9(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int* iParam0)//Position - 0xB45
{
	return BitTest(*iParam0, 1);
}

int func_15(struct<3> Param0, int iParam3, int iParam4, bool bParam5)//Position - 0xB52
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var46[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var46[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var46[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var46[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var46[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var46[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var46[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var46[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var46[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var46[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var46[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var46[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var46[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var46[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var46[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var46[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var46[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var46[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var46[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var46[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var46[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var46[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var46[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var46[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var46[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var46[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var46[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var46[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var46[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var46[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var46[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var46[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var46[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var46[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var46[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var46[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var46[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var46[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var46[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x18A6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x19D0
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
	if (func_20(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_18(iParam0, 1) < 1.5f)
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

float func_18(int iParam0, bool bParam1)//Position - 0x1B98
{
	return func_19(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_19(int iParam0, int iParam1, bool bParam2)//Position - 0x1BB0
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

int func_20(int iParam0, int iParam1)//Position - 0x1C0E
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

int func_21(int iParam0, int iParam1, var uParam2)//Position - 0x1C63
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1CB1
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_23(iVar3))
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

int func_23(int iParam0)//Position - 0x1E2A
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
						if (func_19(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_24(int iParam0, var uParam1)//Position - 0x1EF8
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
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

bool func_25(var uParam0, int iParam1)//Position - 0x1F7D
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)//Position - 0x1F8C
{
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_ASSAULTSHOTGUN"), -1, false, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 0f);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_PED_ACCURACY(*iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(*iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, false);
	PED::SET_PED_SEEING_RANGE(*iParam0, 1000f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
}

void func_27()//Position - 0x200E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_572)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_567, false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_567))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_567, 101, "PrisonHeli", true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_568, false))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_568, 0f, 4f, -2f) };
				TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_568, Var0);
			}
			if (bLocal_570)
			{
				if (!func_28())
				{
					bLocal_570 = false;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_567, false, false);
				}
			}
			else if (func_28())
			{
				bLocal_570 = true;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_567, true, false);
			}
			if (bLocal_570)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_567, true) };
				if (SYSTEM::VDIST2(Local_310, Var3) < 90000f)
				{
					if (!iLocal_571)
					{
						iLocal_571 = 1;
					}
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_569))
		{
			HUD::REMOVE_BLIP(&iLocal_569);
		}
	}
}

int func_28()//Position - 0x20E1
{
	if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()//Position - 0x2104
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_627.f_18[0])
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!bLocal_104)
		{
			if (SYSTEM::VDIST2(Var1, Local_623) < 5625f)
			{
				iLocal_626 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_627.f_27[iVar0]))
		{
			if (!Local_627.f_18[iVar0])
			{
				if (func_16(Local_627.f_27[iVar0], 0, &Local_126, &uLocal_133, 1, 1, 0, 1, 1) || iLocal_626)
				{
					TASK::TASK_COMBAT_PED(Local_627.f_27[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_627.f_18[iVar0] = 1;
				}
			}
			if (!Local_627.f_18[iVar0])
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_627.f_27[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_627.f_27[iVar0], Local_627.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_627.f_36[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_627.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_627.f_31[iVar0]))
		{
			if (PED::IS_PED_INJURED(Local_627.f_31[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_627.f_40[iVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_627.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_627.f_22[0])
	{
		if (!PED::IS_PED_INJURED(Local_627.f_31[0]))
		{
			if ((func_16(Local_627.f_31[0], 0, &Local_126, &uLocal_133, 1, 1, 0, 1, 1) || Local_627.f_18[1] == 1) || iLocal_626)
			{
				TASK::CLEAR_PED_TASKS(Local_627.f_31[0]);
				TASK::TASK_COMBAT_PED(Local_627.f_31[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_627.f_22[0] = 1;
			}
		}
	}
	if (!Local_627.f_22[1])
	{
		if (!PED::IS_PED_INJURED(Local_627.f_31[1]))
		{
			if ((func_16(Local_627.f_31[1], 0, &Local_126, &uLocal_133, 0, 1, 0, 1, 1) || Local_627.f_18[1] == 1) || iLocal_626)
			{
				TASK::CLEAR_PED_TASKS(Local_627.f_31[1]);
				TASK::TASK_COMBAT_PED(Local_627.f_31[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_627.f_22[1] = 1;
			}
		}
	}
	if (!Local_627.f_22[2])
	{
		if (!PED::IS_PED_INJURED(Local_627.f_31[2]))
		{
			if ((func_16(Local_627.f_31[2], 0, &Local_126, &uLocal_133, 0, 1, 0, 1, 1) || Local_627.f_18[2] == 1) || iLocal_626)
			{
				TASK::CLEAR_PED_TASKS(Local_627.f_31[2]);
				TASK::TASK_COMBAT_PED(Local_627.f_31[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_627.f_22[2] = 1;
			}
		}
	}
	if (!Local_627.f_22[3])
	{
		if (!PED::IS_PED_INJURED(Local_627.f_31[3]))
		{
			if ((func_16(Local_627.f_31[3], 0, &Local_126, &uLocal_133, 0, 1, 0, 1, 1) || Local_627.f_18[2] == 1) || iLocal_626)
			{
				TASK::CLEAR_PED_TASKS(Local_627.f_31[3]);
				TASK::TASK_COMBAT_PED(Local_627.f_31[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_627.f_22[3] = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_627.f_27[1]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_627.f_27[1]))
		{
			if (!Local_627.f_22[0])
			{
				if (!PED::IS_PED_INJURED(Local_627.f_31[0]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_627.f_31[0], Local_627.f_27[1], -2f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
			if (!Local_627.f_22[1])
			{
				if (!PED::IS_PED_INJURED(Local_627.f_31[1]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_627.f_31[1], Local_627.f_27[1], -1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_627.f_27[2]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_627.f_27[2]))
		{
			if (!Local_627.f_22[2])
			{
				if (!PED::IS_PED_INJURED(Local_627.f_31[2]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_627.f_31[2], Local_627.f_27[2], 1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
			if (!Local_627.f_22[3])
			{
				if (!PED::IS_PED_INJURED(Local_627.f_31[3]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_627.f_31[3], Local_627.f_27[2], -1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
		}
	}
}

void func_30()//Position - 0x256E
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_417++;
	if (iLocal_417 >= 30)
	{
		if (!bLocal_104)
		{
			if (func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_316.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_316.f_64[iVar0]))
					{
						if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
							{
								PED::SET_PED_ACCURACY(Local_316.f_64[iVar0], 10);
								iLocal_416 = 1;
							}
						}
						else if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_316.f_64[iVar0], 10);
							iLocal_416 = 1;
						}
						else
						{
							PED::SET_PED_ACCURACY(Local_316.f_64[iVar0], 100);
							iLocal_416 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_416 = 0;
			}
		}
		iLocal_417 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_316.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_316.f_64[iVar0]))
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			}
			if ((((func_16(Local_316.f_64[iVar0], 0, &Local_126, &uLocal_133, 0, 1, 0, 1, 1) || MISC::IS_BULLET_IN_AREA(Local_316[iVar0 /*3*/], 20f, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(Local_316[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_316[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_416) || func_32(&(Local_316.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_117)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_316.f_64[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_316.f_64[iVar0], Local_316.f_42[iVar0], 0, 0, -1);
					Local_316.f_53[iVar0] = 0;
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_316.f_75[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_316.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_406[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_406[iVar0], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_402[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_402[iVar0], false))
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_406[iVar0], 0f, 3.5f, -2f) };
			TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_406[iVar0], Var1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_402[iVar0], false, false, false);
			if (iLocal_410[iVar0])
			{
				if (!func_28())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_402[iVar0], false))
					{
						iLocal_410[iVar0] = 0;
						VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_402[iVar0], false, false);
					}
				}
			}
			else if (func_28())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_402[iVar0], false))
				{
					iLocal_410[iVar0] = 1;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_402[iVar0], true, false);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_414 > 20f)
	{
		bLocal_415 = false;
	}
	else if (fLocal_414 < -20f)
	{
		bLocal_415 = true;
	}
	if (bLocal_415)
	{
		fLocal_414 = (fLocal_414 + 0.25f);
	}
	else
	{
		fLocal_414 = (fLocal_414 - 0.25f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[0]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_402[0], (53f + fLocal_414));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[1]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_402[1], (13f + fLocal_414));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[2]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_402[2], (250f + fLocal_414));
	}
}

void func_31(int iParam0)//Position - 0x2949
{
	if (!Local_316.f_53[iParam0])
	{
		TASK::TASK_SHOOT_AT_ENTITY(Local_316.f_64[iParam0], PLAYER::PLAYER_PED_ID(), -1, 0);
		PED::SET_PED_SEEING_RANGE(Local_316.f_64[iParam0], 1000f);
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_316.f_64[iParam0]);
		Local_316.f_53[iParam0] = 1;
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

int func_32(var uParam0)//Position - 0x29B9
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()//Position - 0x2A0D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2 || func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 150, 0))
		{
			if (AUDIO::PREPARE_ALARM("PRISON_ALARMS"))
			{
				AUDIO::START_ALARM("PRISON_ALARMS", false);
			}
		}
		else
		{
			AUDIO::STOP_ALARM("PRISON_ALARMS", false);
		}
	}
}

void func_34()//Position - 0x2A63
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1840.2296f, 2471.4897f, 41.941128f, 1840.5532f, 2751.9827f, 54.68177f, 84.25f, false, true, 0))
		{
			func_63(&Local_126, 2);
		}
		else
		{
			func_61(&Local_126, 2);
		}
	}
	if (iLocal_47 > 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_15(Var0, 4, 150, 0))
				{
					func_60(4, 1);
					if (!func_14(&iLocal_140))
					{
						func_11(&iLocal_140);
					}
					if (!bLocal_116)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_124) && !ENTITY::IS_ENTITY_DEAD(iLocal_124, false))
						{
							func_59(&uLocal_143, 8, iLocal_124, "TANNOY", 0, 1);
							if (func_37(&uLocal_143, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_104 = true;
								bLocal_116 = true;
							}
						}
					}
				}
				else
				{
					func_60(4, 0);
					if (func_14(&iLocal_140))
					{
						func_12(&iLocal_140);
					}
					bLocal_104 = false;
				}
			}
			else
			{
				func_60(4, 0);
				if (func_14(&iLocal_140))
				{
					func_12(&iLocal_140);
				}
				bLocal_104 = false;
			}
			if (bLocal_104)
			{
				if (func_14(&iLocal_140))
				{
					if (func_8(&iLocal_140) > 10f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							bLocal_117 = true;
							bLocal_104 = false;
							func_60(4, 0);
						}
					}
				}
			}
			if (!bLocal_101)
			{
				if (bLocal_116)
				{
					if (!func_36())
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
							bLocal_101 = true;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
					bLocal_101 = true;
				}
			}
			if (!bLocal_104)
			{
				if (func_15(Var0, 4, 100, 0))
				{
					if (!bLocal_101)
					{
						if (bLocal_116)
						{
							if (!func_36())
							{
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
								bLocal_101 = true;
							}
						}
						else
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
							bLocal_101 = true;
						}
					}
					func_35();
				}
			}
			iLocal_47 = 0;
		}
	}
	iLocal_47++;
}

void func_35()//Position - 0x2C84
{
	int iVar0;
	
	if (!iLocal_100)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_50[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_63[iVar0 /*3*/], 10f, 10f, 10f, 0f, false, 7);
			iVar0++;
		}
		iLocal_100 = 1;
	}
}

int func_36()//Position - 0x2CCC
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2CEE
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)//Position - 0x2D3C
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_55();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_44();
		func_39();
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
		func_57();
	}
	return 0;
}

void func_39()//Position - 0x300A
{
	if (!func_40())
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

int func_40()//Position - 0x3041
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_43())
	{
		return 0;
	}
	if (func_41(PLAYER::PLAYER_ID()))
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

bool func_41(int iParam0)//Position - 0x30A4
{
	return func_42(iParam0, 20);
}

var func_42(int iParam0, int iParam1)//Position - 0x30B4
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_43()//Position - 0x30CC
{
	return -1;
}

void func_44()//Position - 0x30D5
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

void func_45()//Position - 0x3106
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

int func_46()//Position - 0x319B
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0x31C2
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

void func_48()//Position - 0x325B
{
	if (func_2(14))
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
		Global_20930 = func_49();
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

var func_49()//Position - 0x32FD
{
	func_50();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_50()//Position - 0x3316
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_53(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_52(PLAYER::PLAYER_PED_ID());
			if (func_51(iVar0) && (!func_2(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_51(Global_113969.f_2366.f_539.f_4321))
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

bool func_51(int iParam0)//Position - 0x3413
{
	return iParam0 < 3;
}

int func_52(int iParam0)//Position - 0x341F
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

int func_53(int iParam0)//Position - 0x345C
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

var func_54(int iParam0)//Position - 0x3481
{
	return Global_2169[iParam0 /*29*/];
}

void func_55()//Position - 0x3490
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

bool func_56(int iParam0, int iParam1)//Position - 0x34E7
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

void func_57()//Position - 0x351F
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3576
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
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

void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x35CC
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

void func_60(int iParam0, int iParam1)//Position - 0x3667
{
	MISC::SET_BIT(&Global_33108, iParam0);
	StringCopy(&(Global_33109[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_33164[iParam0] = iParam1;
}

void func_61(var uParam0, int iParam1)//Position - 0x368E
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)//Position - 0x369E
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(var uParam0, int iParam1)//Position - 0x36AF
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, var uParam1)//Position - 0x36BF
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_65()//Position - 0x36D4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PrisGuard_01"));
}

void func_66()//Position - 0x36EE
{
	func_68();
	func_67();
}

void func_67()//Position - 0x36FE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_627.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_627.f_27[iVar0], false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_627.f_27[iVar0], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_627.f_27[iVar0], 1000);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_627.f_27[iVar0], joaat("SECURITY_GUARD"));
			PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_627.f_27[iVar0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_627.f_27[iVar0], true);
			if (!PED::IS_PED_INJURED(Local_627.f_27[iVar0]))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_627.f_27[iVar0], Local_627.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_68()//Position - 0x37B9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_627.f_27[iVar0]))
		{
			Local_627.f_27[iVar0] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Local_627[iVar0 /*3*/], Local_627.f_10[iVar0], true, true);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_627[1 /*3*/], Local_627.f_10[1], -2f, 0f, 0f) };
	Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_627[1 /*3*/], Local_627.f_10[1], -1f, 0f, 0f) };
	Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_627[2 /*3*/], Local_627.f_10[2], 1f, 0f, 0f) };
	Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_627[2 /*3*/], Local_627.f_10[2], -1f, 0f, 0f) };
	Local_627.f_31[0] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var1, Local_627.f_10[1], true, true);
	Local_627.f_31[1] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var4, Local_627.f_10[1], true, true);
	Local_627.f_31[2] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var7, Local_627.f_10[2], true, true);
	Local_627.f_31[3] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var10, Local_627.f_10[2], true, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_627.f_31[iVar0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_627.f_31[iVar0], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_627.f_31[iVar0], 500);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_627.f_31[iVar0], joaat("SECURITY_GUARD"));
			PED::SET_PED_STEERS_AROUND_PEDS(Local_627.f_31[iVar0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_627.f_31[iVar0], true);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PrisGuard_01"));
}

void func_69()//Position - 0x397E
{
	if (bLocal_572)
	{
		iLocal_567 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 10f, 10f, -30f, 0f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_567, true, true, false);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_567);
		ENTITY::SET_ENTITY_VELOCITY(iLocal_567, 0f, 0f, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_567, 500);
		if (func_28())
		{
			bLocal_570 = true;
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_567, true, false);
		}
		iLocal_568 = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), 10f, 10f, -20f, 0f, true, true);
		PED::SET_PED_INTO_VEHICLE(iLocal_568, iLocal_567, -1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_567, false))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_567, 101, "PrisonHeli", true);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
	}
}

void func_70()//Position - 0x3A36
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()//Position - 0x3A52
{
	Local_418[0 /*13*/][0 /*3*/] = { 1827.6901f, 2474.1807f, 61.7202f };
	Local_418[0 /*13*/][1 /*3*/] = { 1826.0537f, 2478.9336f, 61.7157f };
	Local_418[0 /*13*/][2 /*3*/] = { 1820.9086f, 2477.5276f, 61.7153f };
	Local_418[0 /*13*/][3 /*3*/] = { 1822.5847f, 2472.1223f, 61.7167f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_01");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[0 /*13*/][0 /*3*/], 1879.9438f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[0 /*13*/][1 /*3*/], 1831.6309f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[0 /*13*/][2 /*3*/], 1789.0701f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[0 /*13*/][3 /*3*/], 1789.8002f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[1 /*13*/][0 /*3*/] = { 1764.7294f, 2409.1394f, 61.7533f };
	Local_418[1 /*13*/][1 /*3*/] = { 1763.1285f, 2413.9756f, 61.7328f };
	Local_418[1 /*13*/][2 /*3*/] = { 1758.0787f, 2411.984f, 61.7403f };
	Local_418[1 /*13*/][3 /*3*/] = { 1760.2131f, 2406.8271f, 61.7419f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_02");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[1 /*13*/][0 /*3*/], 1879.9438f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[1 /*13*/][1 /*3*/], 1831.6309f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[1 /*13*/][2 /*3*/], 1789.0701f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[1 /*13*/][3 /*3*/], 1789.8002f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[2 /*13*/][0 /*3*/] = { 1658.8293f, 2390.8882f, 61.7462f };
	Local_418[2 /*13*/][1 /*3*/] = { 1662.5215f, 2394.6921f, 61.7532f };
	Local_418[2 /*13*/][2 /*3*/] = { 1658.8541f, 2398.0615f, 61.7573f };
	Local_418[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.7048f, 61.7429f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_03");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[2 /*13*/][0 /*3*/], 1655.9081f, 2349.0215f, 55.1775f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[2 /*13*/][1 /*3*/], 1733.8748f, 2385.5215f, 44.9049f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[2 /*13*/][2 /*3*/], 1662.2343f, 2446.3574f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.3381f, 61.7497f };
	Local_418[3 /*13*/][1 /*3*/] = { 1542.1888f, 2465.7556f, 61.7247f };
	Local_418[3 /*13*/][2 /*3*/] = { 1543.8986f, 2470.9707f, 61.7482f };
	Local_418[3 /*13*/][3 /*3*/] = { 1539.1404f, 2473.2637f, 61.7359f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_04");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[3 /*13*/][0 /*3*/], 1455.0807f, 2432.6418f, 51.3366f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[3 /*13*/][1 /*3*/], 1576.1744f, 2407.0762f, 44.8143f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[3 /*13*/][2 /*3*/], 1578.1f, 2486.2266f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[3 /*13*/][3 /*3*/], 1512.8368f, 2560.4192f, 44.8417f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[4 /*13*/][0 /*3*/] = { 1535.0978f, 2581.9187f, 61.7312f };
	Local_418[4 /*13*/][1 /*3*/] = { 1535.1241f, 2581.1006f, 61.7002f };
	Local_418[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.7224f, 61.7251f };
	Local_418[4 /*13*/][3 /*3*/] = { 1534.6793f, 2589.2678f, 61.7123f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_05");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[4 /*13*/][0 /*3*/], 1484.1997f, 2584.4094f, 51.9283f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[4 /*13*/][1 /*3*/], 1535.1536f, 2538.9255f, 44.496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[4 /*13*/][2 /*3*/], 1570.6615f, 2587.8142f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[4 /*13*/][3 /*3*/], 1538.2266f, 2655.5305f, 44.9156f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[5 /*13*/][0 /*3*/] = { 1566.9205f, 2682.5247f, 61.7716f };
	Local_418[5 /*13*/][1 /*3*/] = { 1567.9268f, 2677.4634f, 61.7741f };
	Local_418[5 /*13*/][2 /*3*/] = { 1572.5742f, 2678.1926f, 61.7702f };
	Local_418[5 /*13*/][3 /*3*/] = { 1572.3588f, 2683.086f, 61.7664f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_06");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[5 /*13*/][0 /*3*/], 1505.5382f, 2727.2422f, 37.6965f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[5 /*13*/][1 /*3*/], 1545.9504f, 2632.5242f, 44.7178f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[5 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[5 /*13*/][3 /*3*/], 1599.0406f, 2713.3926f, 44.4309f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[6 /*13*/][0 /*3*/] = { 1648.1042f, 2761.528f, 61.9103f };
	Local_418[6 /*13*/][1 /*3*/] = { 1646.0511f, 2756.6714f, 61.9091f };
	Local_418[6 /*13*/][2 /*3*/] = { 1651.5334f, 2754.6677f, 61.9021f };
	Local_418[6 /*13*/][3 /*3*/] = { 1653.1254f, 2759.3274f, 61.9056f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_07");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[6 /*13*/][0 /*3*/], 1606.661f, 2815.6726f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[6 /*13*/][1 /*3*/], 1602.8872f, 2721.3984f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[6 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[6 /*13*/][3 /*3*/], 1719.2246f, 2766.1113f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.5588f, 61.9143f };
	Local_418[7 /*13*/][1 /*3*/] = { 1769.7677f, 2763.8162f, 61.9248f };
	Local_418[7 /*13*/][2 /*3*/] = { 1772.4415f, 2759.1394f, 61.9193f };
	Local_418[7 /*13*/][3 /*3*/] = { 1776.8927f, 2762.3562f, 61.9258f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_08");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[7 /*13*/][0 /*3*/], 1783.2037f, 2811.3752f, 44.4414f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[7 /*13*/][1 /*3*/], 1709.2751f, 2764.4321f, 44.5747f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[7 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[7 /*13*/][3 /*3*/], 1822.456f, 2749.1892f, 44.9326f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_418[9 /*13*/][0 /*3*/] = { 1824.2876f, 2625.0415f, 61.9749f };
	Local_418[9 /*13*/][1 /*3*/] = { 1820.5237f, 2621.4897f, 61.9951f };
	Local_418[9 /*13*/][2 /*3*/] = { 1820.4141f, 2621.5444f, 61.9908f };
	Local_418[9 /*13*/][3 /*3*/] = { 1823.4504f, 2617.4773f, 61.9829f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_10");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_418[9 /*13*/][0 /*3*/], 1606.661f, 2815.6726f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_418[9 /*13*/][1 /*3*/], 1602.8872f, 2721.3984f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_418[9 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_418[9 /*13*/][3 /*3*/], 1719.2246f, 2766.1113f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_72()//Position - 0x45A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_316.f_64[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_316.f_64[iVar0], false))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_316.f_64[iVar0], joaat("SECURITY_GUARD"));
			PED::SET_PED_CONFIG_FLAG(Local_316.f_64[iVar0], 132, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_316.f_64[iVar0], 300f, 10);
			PED::SET_PED_SEEING_RANGE(Local_316.f_64[iVar0], 1000f);
			PED::SET_PED_ID_RANGE(Local_316.f_64[iVar0], 1000f);
			PED::SET_PED_HEARING_RANGE(Local_316.f_64[iVar0], 1000f);
			PED::SET_PED_COMBAT_ABILITY(Local_316.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_316.f_64[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_316.f_64[iVar0], 0, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_316.f_64[iVar0], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_316.f_64[iVar0], 1);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_316.f_64[iVar0], 0f);
			PED::SET_PED_KEEP_TASK(Local_316.f_64[iVar0], true);
			PED::SET_PED_ACCURACY(Local_316.f_64[iVar0], 20);
			PED::SET_PED_COMBAT_RANGE(Local_316.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_316.f_64[iVar0], 23, false);
			WEAPON::GIVE_WEAPON_TO_PED(Local_316.f_64[iVar0], joaat("WEAPON_SNIPERRIFLE"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_316.f_64[iVar0], 1000);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_316.f_64[iVar0], true);
			PED::SET_PED_SEEING_RANGE(Local_316.f_64[iVar0], 1000f);
			if (!PED::IS_PED_INJURED(Local_316.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_01", 1, false, true);
				}
				else if (iVar0 == 1)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_02", 1, false, true);
				}
				else if (iVar0 == 2)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_03", 1, false, true);
				}
				else if (iVar0 == 3)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_04", 1, false, true);
				}
				else if (iVar0 == 4)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_05", 1, false, true);
				}
				else if (iVar0 == 5)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_06", 1, false, true);
				}
				else if (iVar0 == 6)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_07", 1, false, true);
				}
				else if (iVar0 == 7)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_08", 1, false, true);
				}
				else if (iVar0 == 9)
				{
					TASK::TASK_PATROL(Local_316.f_64[iVar0], "miss_Tower_10", 1, false, true);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_316.f_64[iVar0], Local_316.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_73()//Position - 0x484E
{
	int iVar0;
	
	if (!CAM::IS_SPHERE_VISIBLE(1823.8451f, 2621.267f, 57f, 0.5f))
	{
		iLocal_402[0] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1823.8451f, 2621.267f, 57f, 53f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_402[0], false))
		{
			iLocal_406[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_402[0], 6, joaat("S_M_M_PrisGuard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_406[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_406[0], iLocal_314);
			ENTITY::SET_ENTITY_COLLISION(iLocal_402[0], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_402[0], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_402[0], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_402[0], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1761.4176f, 2410.3784f, 61f, 0.5f))
	{
		iLocal_402[1] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1761.4176f, 2410.3784f, 61f, 13f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_402[1], false))
		{
			iLocal_406[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_402[1], 6, joaat("S_M_M_PrisGuard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_406[1], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_406[1], iLocal_314);
			ENTITY::SET_ENTITY_COLLISION(iLocal_402[1], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_402[1], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_402[1], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_402[1], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1534.6355f, 2585.162f, 61f, 0.5f))
	{
		iLocal_402[2] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1534.6355f, 2585.162f, 61f, 250f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_402[2], false))
		{
			iLocal_406[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_402[2], 6, joaat("S_M_M_PrisGuard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_406[2], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_406[2], iLocal_314);
			ENTITY::SET_ENTITY_COLLISION(iLocal_402[2], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_402[2], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_402[2], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_402[2], true);
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_406[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_406[iVar0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_402[iVar0], false))
		{
			if (func_28())
			{
				iLocal_410[iVar0] = 1;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_402[iVar0], true, false);
			}
		}
		iVar0++;
	}
}

void func_74()//Position - 0x4B02
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_316.f_64[iVar0]))
		{
			Local_316.f_64[iVar0] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Local_316[iVar0 /*3*/], Local_316.f_31[iVar0], true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PrisGuard_01"));
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}

void func_75()//Position - 0x4B63
{
	Local_316[0 /*3*/] = { 1827.6901f, 2474.1807f, 61.7202f };
	Local_316[1 /*3*/] = { 1764.7294f, 2409.1394f, 61.7533f };
	Local_316[2 /*3*/] = { 1658.8293f, 2390.8882f, 61.7462f };
	Local_316[3 /*3*/] = { 1537.28f, 2468.3381f, 61.7497f };
	Local_316[4 /*3*/] = { 1530.493f, 2585.1724f, 61.7001f };
	Local_316[5 /*3*/] = { 1566.9205f, 2682.5247f, 61.7716f };
	Local_316[6 /*3*/] = { 1648.1042f, 2761.528f, 61.9103f };
	Local_316[7 /*3*/] = { 1774.523f, 2766.5588f, 61.9143f };
	Local_316[8 /*3*/] = { 1852.4752f, 2697.6318f, 61.9547f };
	Local_316[9 /*3*/] = { 1824.2876f, 2625.0415f, 61.9749f };
	Local_316.f_31[0] = 248.9733f;
	Local_316.f_31[1] = 45.8793f;
	Local_316.f_31[2] = 186.3656f;
	Local_316.f_31[3] = 313.5206f;
	Local_316.f_31[4] = 95.9574f;
	Local_316.f_31[5] = 289.3531f;
	Local_316.f_31[6] = 13.7511f;
	Local_316.f_31[7] = 0f;
	Local_316.f_31[8] = 208.5786f;
	Local_316.f_31[9] = 280.9389f;
}

int func_76()//Position - 0x4CD3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_627.f_14[iVar0]))
		{
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	return 1;
}

int func_77()//Position - 0x4D07
{
	if (bLocal_616)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_78()//Position - 0x4D27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_316.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PrisGuard_01")))
	{
		return 0;
	}
	return 1;
}

int func_79()//Position - 0x4D7A
{
	if (bLocal_572)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			return 0;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_80()//Position - 0x4DAA
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PrisGuard_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_81()//Position - 0x4DE6
{
	int iVar0;
	
	func_82();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_627.f_14[iVar0]);
		iVar0++;
	}
}

void func_82()//Position - 0x4E11
{
	Local_627[0 /*3*/] = { 1768.6276f, 2538.9705f, 44.4054f };
	Local_627[1 /*3*/] = { 1633.6128f, 2498.849f, 44.4117f };
	Local_627[2 /*3*/] = { 1622.6099f, 2555.6829f, 44.4051f };
	Local_627.f_10[0] = 0f;
	Local_627.f_10[1] = 0f;
	Local_627.f_10[2] = 198.4323f;
	Local_627.f_14[0] = "PatrolGuard02";
	Local_627.f_14[1] = "PatrolGuard03";
	Local_627.f_14[2] = "PatrolGuard04";
}

void func_83()//Position - 0x4EA1
{
	int iVar0;
	
	Local_316.f_42[0] = "TowerGuard01";
	Local_316.f_42[1] = "TowerGuard02";
	Local_316.f_42[2] = "TowerGuard03";
	Local_316.f_42[3] = "TowerGuard04";
	Local_316.f_42[4] = "TowerGuard05";
	Local_316.f_42[5] = "TowerGuard06";
	Local_316.f_42[6] = "TowerGuard07";
	Local_316.f_42[7] = "TowerGuard08";
	Local_316.f_42[8] = "TowerGuard09";
	Local_316.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_316.f_42[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_PrisGuard_01"));
}

void func_84()//Position - 0x4F55
{
	bLocal_572 = false;
	if (func_28())
	{
		iLocal_573 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
		if (iLocal_573 == 0)
		{
			bLocal_572 = true;
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PrisonHeli");
		}
		else
		{
			bLocal_572 = false;
		}
	}
}

void func_85()//Position - 0x4F99
{
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_PrisGuard_01"));
	STREAMING::REQUEST_MODEL(joaat("polmav"));
}

void func_86()//Position - 0x4FBC
{
	iLocal_313 = iLocal_313;
	iLocal_313 = 0;
	func_87();
	func_34();
	Local_126.f_4 = 75;
	Local_126.f_6 = 15;
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, true, 0f, 50f, 0f);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Guards", &iLocal_314);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Prisoners", &iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_314, iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_315, iLocal_314);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_314, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_314);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_315);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_315, joaat("PLAYER"));
}

void func_87()//Position - 0x5080
{
	Local_63[0 /*3*/] = { 1809.8156f, 2482.8772f, 44.4744f };
	Local_63[1 /*3*/] = { 1755.8229f, 2424.904f, 44.4319f };
	Local_63[2 /*3*/] = { 1661.1997f, 2410.0957f, 44.4265f };
	Local_63[3 /*3*/] = { 1555.966f, 2476.4304f, 44.4042f };
	Local_63[4 /*3*/] = { 1549.1406f, 2583.1033f, 44.4225f };
	Local_63[5 /*3*/] = { 1581.1555f, 2671.9739f, 44.481f };
	Local_63[6 /*3*/] = { 1655.4904f, 2743.6897f, 44.4665f };
	Local_63[7 /*3*/] = { 1768.7761f, 2748.527f, 44.4402f };
	Local_63[8 /*3*/] = { 1831.1996f, 2696.0005f, 44.4578f };
	Local_63[9 /*3*/] = { 1803.1215f, 2617.7808f, 44.5082f };
	Local_63[10 /*3*/] = { 1817.221f, 2608.3872f, 44.6204f };
	Local_63[11 /*3*/] = { 1843.8378f, 2608.3606f, 44.6178f };
}

void func_88()//Position - 0x5194
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1879.9559f, 2705.0974f, 52.073414f, 1869.8593f, 2726.7761f, 59.823376f, 24.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1833.1132f, 2520.8884f, 52.260857f, 1833.1155f, 2554.4307f, 61.259975f, 15f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1832.742f, 2568.4214f, 48.87375f, 1833.0145f, 2596.5288f, 57.12439f, 27.75f, false, true, 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}
	if (!iLocal_102)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, false, false, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("SECURITY_GUARD"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("SECURITY_GUARD"), joaat("PLAYER"));
					iLocal_102 = 1;
				}
				if ((MISC::IS_BULLET_IN_AREA(1874.0724f, 2605.4226f, 44.6723f, 100f, true) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID())) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("SECURITY_GUARD"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("SECURITY_GUARD"), joaat("PLAYER"));
					iLocal_102 = 1;
				}
			}
		}
	}
}

void func_89(bool bParam0)//Position - 0x535D
{
	int iVar0;
	
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	AUDIO::STOP_ALARM("PRISON_ALARMS", true);
	if (iLocal_102)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("SECURITY_GUARD"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("SECURITY_GUARD"), joaat("PLAYER"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_50[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_50[iVar0]);
		}
		iVar0++;
	}
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, true, 0f, 50f, 0f);
	if (bParam0)
	{
		MISC::CLEAR_AREA(1695.1f, 2595.8f, 50f, 1000f, true, false, false, false);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_90()//Position - 0x5433
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_122);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_125);
	}
}

void func_91()//Position - 0x5477
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_627.f_27[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_627.f_36[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_627.f_36[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_627.f_27[iVar0]))
			{
				PED::DELETE_PED(&(Local_627.f_27[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_627.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_627.f_31[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_627.f_40[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_627.f_40[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_627.f_31[iVar0]))
			{
				PED::DELETE_PED(&(Local_627.f_31[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_627.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()//Position - 0x5557
{
	if (HUD::DOES_BLIP_EXIST(iLocal_619))
	{
		HUD::REMOVE_BLIP(&iLocal_619);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_617))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_617);
	}
}

void func_93()//Position - 0x5581
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_574[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_595[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_595[iVar0]));
			}
			PED::DELETE_PED(&(uLocal_574[iVar0]));
		}
		iVar0++;
	}
}

void func_94()//Position - 0x55CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_402[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_402[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_406[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_406[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_316.f_64[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_316.f_75[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_316.f_75[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_316.f_64[iVar0]))
			{
				PED::DELETE_PED(&(Local_316.f_64[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_316.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()//Position - 0x5687
{
	if (HUD::DOES_BLIP_EXIST(iLocal_569))
	{
		HUD::REMOVE_BLIP(&iLocal_569);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_567))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_567))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_567);
			PED::DELETE_PED(&iLocal_568);
		}
		else
		{
			func_96(&iLocal_567, &iLocal_568);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_567);
		}
	}
}

void func_96(int iParam0, var uParam1)//Position - 0x56D6
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *iParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 1.4E-43f, 7E-44f, true);
				}
			}
		}
	}
}

