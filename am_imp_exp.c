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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
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
	struct<15> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	bool bLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 16;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_319 = 0;
	bool bLocal_320 = 0;
	bool bLocal_321 = 0;
	bool bLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	float fLocal_329 = 0f;
	float fLocal_330 = 0f;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356[4] = { 0, 0, 0, 0 };
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_378 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_390 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	struct<4> Local_466[32];
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	int iLocal_597 = 0;
	char* sLocal_598 = NULL;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_59 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	iLocal_124 = 1;
	bLocal_126 = true;
	bLocal_128 = true;
	iLocal_133 = -1;
	bLocal_321 = true;
	bLocal_322 = true;
	iLocal_325 = -1;
	iLocal_326 = -1;
	iLocal_350 = -1;
	iLocal_353 = -1;
	if (!func_569(ScriptParam_0))
	{
		func_565();
	}
	iLocal_365[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
	iLocal_365[1] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
	iLocal_365[2] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
	iLocal_365[3] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
	iLocal_365[4] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
	iLocal_365[5] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
	iLocal_365[6] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
	iLocal_365[7] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
	iLocal_365[8] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
	iLocal_365[9] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
	iLocal_365[10] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
	iLocal_365[11] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_564();
		bLocal_109 = false;
		bLocal_111 = false;
		bLocal_114 = false;
		bLocal_117 = false;
		bLocal_119 = false;
		Global_2739811.f_1818 = 0;
		if (func_557() || func_556())
		{
			func_565();
		}
		if (func_548())
		{
			if (!func_547())
			{
				if (!func_546())
				{
					if (func_544())
					{
						if (!iLocal_107)
						{
							func_540();
							func_539(&Local_378, 5);
							func_538();
							bLocal_128 = true;
							bLocal_129 = true;
							if (BitTest(uLocal_595, 1))
							{
								MISC::CLEAR_BIT(&uLocal_595, 1);
							}
							iLocal_107 = 1;
							iLocal_353 = -999;
						}
					}
				}
			}
			else if (!func_546())
			{
				if (!bLocal_129)
				{
					if (!func_537(&uLocal_306))
					{
						func_536(&uLocal_306, 0, 0);
					}
					else if (func_535(&uLocal_306, 100, 0))
					{
						if (!BitTest(uLocal_595, 1))
						{
							if (func_544())
							{
								func_525(&Local_378, 5, Global_2359296[func_534() /*5571*/].f_681.f_37);
								bLocal_128 = false;
								bLocal_129 = true;
								iLocal_107 = 1;
								iLocal_353 = -999;
							}
						}
					}
				}
			}
			func_425();
			func_421();
			func_405();
			func_398();
			func_287();
			func_184();
		}
		func_180();
		func_145();
		func_79();
		func_76();
		if (!iLocal_131)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 471.9266f, -1308.5956f, 28.2359f) < 1000f)
			{
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.5956f, 28.2359f, 2f, joaat("v_ilev_uvtext"), true);
				iLocal_131 = 1;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x410
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_126)
	{
	}
	else
	{
		if (iLocal_127 >= 32)
		{
			iLocal_127 = 0;
			MISC::CLEAR_BIT(&uLocal_595, 10);
			MISC::CLEAR_BIT(&(Local_390.f_23), 7);
			MISC::CLEAR_BIT(&uLocal_595, 11);
			MISC::CLEAR_BIT(&uLocal_595, 23);
			if (BitTest(Local_390.f_23, 0))
			{
				MISC::SET_BIT(&(Local_390.f_23), 1);
				MISC::CLEAR_BIT(&(Local_390.f_23), 3);
			}
		}
		iVar0 = iLocal_127;
		if (Local_466[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_390[iVar1] == -1)
				{
					if (!Local_390.f_6[iVar1])
					{
						if (Local_390[iVar1] == Local_466[iVar0 /*4*/])
						{
							if (Local_390[iVar1] == Local_390.f_28)
							{
								func_75();
							}
							Local_390.f_33 = 0;
							Local_390.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (BitTest(Local_390.f_23, 0))
		{
			if (!BitTest(Local_390.f_23, 7))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					if (Local_466[iVar0 /*4*/].f_3 > 0 || func_74(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6))
					{
						if (Local_466[iVar0 /*4*/].f_3 < 3)
						{
							MISC::SET_BIT(&(Local_390.f_23), 7);
						}
					}
				}
			}
		}
		if (BitTest(Local_390.f_23, 0))
		{
			if (!BitTest(uLocal_595, 11))
			{
				if (BitTest(Local_466[iVar0 /*4*/].f_2, 2))
				{
					MISC::SET_BIT(&uLocal_595, 11);
				}
			}
			if (!BitTest(uLocal_595, 21))
			{
				if (!BitTest(uLocal_595, 3))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (BitTest(Local_466[iVar0 /*4*/].f_2, 3))
						{
							MISC::SET_BIT(&uLocal_595, 21);
						}
					}
				}
			}
		}
		iLocal_127++;
		if (iLocal_127 >= 32)
		{
			MISC::SET_BIT(&uLocal_595, 10);
			if (BitTest(Local_390.f_23, 7) || BitTest(uLocal_595, 23))
			{
				MISC::CLEAR_BIT(&(Local_390.f_23), 1);
			}
			if (BitTest(uLocal_595, 11))
			{
				MISC::SET_BIT(&(Local_390.f_23), 3);
			}
			if (BitTest(uLocal_595, 21))
			{
				MISC::SET_BIT(&(Local_390.f_23), 6);
			}
		}
	}
	if (func_73())
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_390.f_29) > 180000)
		{
			func_72();
		}
	}
	switch (Local_390.f_20)
	{
		case 0:
			func_69();
			Local_390.f_32++;
			Local_390.f_20 = 1;
			func_68();
			break;
		
		case 1:
			if (func_67())
			{
				iLocal_349 = NETWORK::GET_NETWORK_TIME();
				Local_390.f_20 = 2;
			}
			else if (Local_390.f_28 == -1)
			{
				func_75();
			}
			break;
		
		case 2:
			if (!Local_390.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_349) > Global_262145.f_11934 /* Tunable: TIME_SIMEON_SENDS_TEXT_MS */)
			{
				Local_390.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()//Position - 0x6B1
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_390.f_26)
	{
		case 0:
			if (!BitTest(Local_390.f_23, 0))
			{
				if (bLocal_321)
				{
					if (bLocal_322)
					{
						if (Global_2739811.f_1791)
						{
							MISC::CLEAR_BIT(&(Local_390.f_23), 2);
							MISC::CLEAR_BIT(&(Local_390.f_23), 6);
							MISC::CLEAR_BIT(&uLocal_595, 21);
							NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
							Local_390.f_34 = 0;
							MISC::SET_BIT(&(Local_390.f_23), 0);
							Global_2739811.f_1791 = 0;
						}
					}
					else if (Local_390.f_27 == -15)
					{
						MISC::CLEAR_BIT(&(Local_390.f_23), 2);
						MISC::CLEAR_BIT(&(Local_390.f_23), 6);
						MISC::CLEAR_BIT(&uLocal_595, 21);
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
						Local_390.f_34 = 0;
						iVar4 = func_66();
						func_52(&(Local_390.f_27), func_65(iVar4), func_64(iVar4), func_63(iVar4), func_62(iVar4), func_61(iVar4), func_59(iVar4));
						func_51(&(Local_390.f_27), 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 8), 1, 0, 0);
					}
					else if (!func_50(6))
					{
						if (!func_537(&uLocal_338))
						{
							func_536(&uLocal_338, 0, 0);
						}
						else if (func_535(&uLocal_338, 10000, 0))
						{
							func_49(&uLocal_338);
							if (func_45(Local_390.f_27))
							{
								MISC::SET_BIT(&(Local_390.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_390.f_67 == 0)
			{
				if (func_39(1, 1, 1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_390.f_24))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_390.f_24);
					}
					Local_390.f_24 = -1;
					iLocal_324 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					iVar5 = func_36();
					if (iVar5 != 0)
					{
						Local_390.f_67 = iVar5;
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
						Local_390.f_34 = 1;
					}
				}
			}
			else if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_390.f_22))
				{
					if (func_23(&Var0, &fVar3))
					{
						if (func_22(Local_390.f_67))
						{
							if (func_19(&(Local_390.f_22), Local_390.f_67, Var0, fVar3, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_390.f_22), "MPBitset"))
									{
										iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_390.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar6, 5);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_390.f_22), "MPBitset", iVar6);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_390.f_22), "MPBitset"))
									{
										iVar7 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_390.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar7, 10);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_390.f_22), "MPBitset", iVar7);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
								{
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_390.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								MISC::SET_BIT(&(Local_390.f_23), 0);
								MISC::CLEAR_BIT(&(Local_390.f_23), 2);
								MISC::CLEAR_BIT(&(Local_390.f_23), 4);
								MISC::CLEAR_BIT(&(Local_390.f_23), 3);
								MISC::CLEAR_BIT(&uLocal_595, 11);
								MISC::CLEAR_BIT(&(Local_390.f_23), 6);
								MISC::SET_BIT(&uLocal_595, 23);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_390.f_67);
								Local_390.f_26 = 1;
								func_49(&(Local_390.f_30));
								func_536(&(Local_390.f_30), 0, 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_390.f_22), 7);
								VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(NETWORK::NET_TO_VEH(Local_390.f_22), true);
								VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, true);
								NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_390.f_22, true);
							}
							else
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_390.f_67);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(Local_390.f_23, 2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_390.f_22), false))
					{
						Local_92.f_3 = -1117941225;
						func_17(Local_92, func_18(1));
						MISC::SET_BIT(&(Local_390.f_23), 2);
					}
				}
			}
			if (BitTest(uLocal_595, 3) || (BitTest(uLocal_595, 10) && BitTest(Local_390.f_23, 1)))
			{
				if (!BitTest(uLocal_595, 3))
				{
					if (!BitTest(Local_390.f_23, 2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_390.f_22), false))
							{
								Local_92.f_3 = -1117941225;
								func_17(Local_92, func_18(1));
								MISC::SET_BIT(&(Local_390.f_23), 2);
							}
						}
					}
				}
				Local_390.f_26 = 2;
			}
			if (func_16(NETWORK::NET_TO_VEH(Local_390.f_22)))
			{
				Local_390.f_26 = 2;
				Local_92.f_3 = -267741801;
				func_17(Local_92, func_18(1));
			}
			if (!BitTest(Local_390.f_23, 4))
			{
				if (func_535(&(Local_390.f_30), 360000, 0))
				{
					MISC::SET_BIT(&(Local_390.f_23), 4);
					func_49(&(Local_390.f_30));
					func_536(&(Local_390.f_30), 0, 0);
				}
			}
			else if (BitTest(uLocal_595, 10))
			{
				if (!BitTest(Local_390.f_23, 3))
				{
					if (func_537(&(Local_390.f_30)))
					{
						if (func_535(&(Local_390.f_30), 120000, 0))
						{
							Local_390.f_26 = 2;
							Local_92.f_3 = -267741801;
							func_17(Local_92, func_18(1));
						}
					}
					else
					{
						func_536(&(Local_390.f_30), 0, 0);
					}
				}
				else if (func_537(&(Local_390.f_30)))
				{
					func_49(&(Local_390.f_30));
				}
			}
			if (BitTest(Local_390.f_23, 6))
			{
				if (!BitTest(uLocal_595, 3))
				{
					if (Local_390.f_26 == 1)
					{
						Local_390.f_26 = 2;
					}
				}
			}
			if (func_12(6))
			{
				if (Local_390.f_26 == 1)
				{
					Local_390.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
			{
				if (func_11(Local_390.f_22))
				{
					func_10(&(Local_390.f_22));
					Local_390.f_26 = 3;
				}
			}
			else
			{
				Local_390.f_26 = 3;
			}
			break;
		
		case 3:
			if (BitTest(uLocal_595, 10))
			{
				if (BitTest(Local_390.f_23, 1))
				{
					Local_390.f_26 = 0;
					MISC::CLEAR_BIT(&(Local_390.f_23), 0);
					Local_390.f_27 = -15;
					if (Local_390.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, false);
					}
					Local_390.f_67 = 0;
					if (bLocal_322)
					{
						func_7(func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()//Position - 0xC75
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_390.f_69)
		{
			case 0:
				if (BitTest(Local_390.f_23, 8))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
					{
						if (!func_6())
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_VEH(Local_390.f_22)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_390.f_22), 1204.0526f, -3102.3105f, 1.770506f, 1204.2653f, -3121.9736f, 17.920322f, 31.625f, false, true, 0))
								{
									if (!BitTest(Local_390.f_23, 9))
									{
										MISC::SET_BIT(&(Local_390.f_23), 9);
									}
								}
							}
						}
						else if (BitTest(Local_390.f_23, 9))
						{
							MISC::CLEAR_BIT(&(Local_390.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (BitTest(Local_390.f_23, 9))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
		{
			if (func_4(Local_390.f_22))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_390.f_22))
				{
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_VEH(Local_390.f_22), true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_390.f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_390.f_22), false);
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_390.f_22), true, 1);
					MISC::CLEAR_BIT(&(Local_390.f_23), 9);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_390.f_22);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_390.f_23), 9);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_390.f_23), 9);
		}
	}
}

int func_4(int iParam0)//Position - 0xDCA
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_5(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_5(int iParam0)//Position - 0xDEA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
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

int func_6()//Position - 0xE23
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_390.f_22), -1, false);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)//Position - 0xE5F
{
	struct<4> Var0;
	
	Var0.f_0 = -390379542;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iParam0, Var0.f_0);
	}
}

int func_8(int iParam0)//Position - 0xE93
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)//Position - 0xEAE
{
	int iVar0;
	
	iVar0 = iParam0;
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

void func_10(var uParam0)//Position - 0xED0
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_11(int iParam0)//Position - 0xEF4
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_12(int iParam0)//Position - 0xF16
{
	return !func_13(iParam0);
}

int func_13(int iParam0)//Position - 0xF25
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7192 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7193 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7194 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7195 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_14(4))
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_14(4))
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_14(4))
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_14(4))
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 0) || BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_14(4))
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_14(4))
			{
				return 0;
			}
			if (func_74(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_14(bool bParam0)//Position - 0x1259
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_15(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657991[iVar0 /*467*/].f_221, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2)//Position - 0x129C
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
				if (iVar0 == Global_2672939.f_3)
				{
					return Global_2672939.f_2;
				}
				else if (Global_2657991[iVar0 /*467*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x12FC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_17(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)//Position - 0x1360
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_18(int iParam0)//Position - 0x138F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_15(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x13EC
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka") || iParam1 == joaat("titan2"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2739811.f_6838 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_20(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_20(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x1504
{
	int iVar0;
	
	if (func_21(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635516.f_3231[1 /*6*/].f_5 == iParam5 && Global_2635516.f_3231[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635516.f_3231[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635516.f_3231[iVar0 /*6*/] = { Global_2635516.f_3231[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635516.f_3231[1 /*6*/] = { Param0 };
		Global_2635516.f_3231[1 /*6*/].f_3 = fParam3;
		Global_2635516.f_3231[1 /*6*/].f_4 = iParam4;
		Global_2635516.f_3231[1 /*6*/].f_5 = iParam5;
	}
}

int func_21(int iParam0, struct<3> Param1, int iParam4)//Position - 0x15D7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_22(int iParam0)//Position - 0x1675
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_23(var uParam0, var uParam1)//Position - 0x1693
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_35(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_324)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.2933f, 0.0005f };
			Var3 = { -797.881f, -1310.9979f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.0051f, 25.6205f };
			Var3 = { -189.4078f, -1945.2478f, 28.6205f };
			Var6 = { -191.5592f, -1950.2394f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.8748f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.8867f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.7422f, 322.7591f };
			Var3 = { -411.9892f, 1220.3464f, 326.6421f };
			Var6 = { -416.0102f, 1219.7706f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.7076f, -890.849f, 6.97f };
			Var3 = { -1633.9034f, -879.869f, 9.1264f };
			Var6 = { -1634.0059f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.2432f, 255.0715f, 82.8556f };
			Var6 = { 1093.6864f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.8231f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.3242f, -1656.8137f, 2.0412f };
			Var3 = { -1226.4288f, -1648.1426f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!func_35(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_324 < 10)
		{
			if (Local_390.f_24 == -1)
			{
				Local_390.f_24 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var3);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_390.f_24))
			{
				if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Local_390.f_24))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_390.f_24))
					{
						if (!func_24(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_390.f_24);
							Local_390.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_324++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_390.f_24);
							Local_390.f_24 = -1;
						}
					}
					else
					{
						iLocal_324++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_390.f_24);
						Local_390.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_324 = 0;
		}
	}
	return 0;
}

int func_24(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x1A66
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_15(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_29(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_15(iVar1, 1, 1))
		{
			if (!func_26(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_25(iVar1) || !bParam10) && !Global_2657991[iVar1 /*467*/].f_273)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_29(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_29(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1C1E
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657991[iParam0 /*467*/].f_258)
	{
		return 1;
	}
	return 0;
}

bool func_26(int iParam0, int iParam1)//Position - 0x1C4A
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_27(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845221[iParam0 /*889*/].f_206 == 8;
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

int func_27(int iParam0, bool bParam1)//Position - 0x1CA3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
	}
	if (Global_1575064[iVar1] == 1)
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

int func_28()//Position - 0x1CE4
{
	return Global_1574926;
}

Vector3 func_29(int iParam0)//Position - 0x1CF0
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_34() && Global_1845221[iVar0 /*889*/].f_866) && !func_33(Global_1845221[iVar0 /*889*/].f_867))
	{
		return Global_1845221[iVar0 /*889*/].f_867;
	}
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_32(0)) && func_31())
	{
		return CAM::GET_FINAL_RENDERED_CAM_COORD();
	}
	return func_30(iParam0);
}

Vector3 func_30(int iParam0)//Position - 0x1D65
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

var func_31()//Position - 0x1D78
{
	return BitTest(Global_1957675, 5);
}

bool func_32(bool bParam0)//Position - 0x1D86
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

int func_33(struct<3> Param0)//Position - 0x1D97
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_34()//Position - 0x1DC1
{
	return Global_2684718.f_19;
}

bool func_35(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x1DCF
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_36()//Position - 0x1E16
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2330 /* Tunable: HIGH_PRIORITY_IMPORT_EXPORT_VEHICLE */ != 0)
	{
		iVar1 = Global_262145.f_2330 /* Tunable: HIGH_PRIORITY_IMPORT_EXPORT_VEHICLE */;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			if (STREAMING::IS_MODEL_A_VEHICLE(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_38(&Local_390);
		iVar0 = func_37(iVar2);
	}
	return iVar0;
}

int func_37(int iParam0)//Position - 0x1E64
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_38(var uParam0)//Position - 0x1F8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_39(int iParam0, bool bParam1, bool bParam2)//Position - 0x1FE3
{
	return func_40(1, iParam0, 1, bParam1, bParam2);
}

int func_40(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1FF7
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1686501, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_44(iParam0) - func_43(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_43(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_44(iParam0) - func_42(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_43(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_44(iParam0) - func_43(iParam0, 1));
		}
		if (!bParam4 && Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 3)
		{
			iVar1 = (iVar1 - func_41(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x20BD
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x20F7
{
	switch (iParam0)
	{
		case 0:
			return Global_1686501.f_1;
			break;
		
		case 1:
			return Global_1686501.f_2;
			break;
		
		case 2:
			return Global_1686501.f_3;
			break;
	}
	return 0;
}

int func_43(int iParam0, bool bParam1)//Position - 0x213D
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x21DA
{
	switch (iParam0)
	{
		case 0:
			return Global_1686509;
			break;
		
		case 1:
			return Global_1686510;
			break;
		
		case 2:
			return Global_1686511;
			break;
	}
	return 0;
}

bool func_45(int iParam0)//Position - 0x221A
{
	return func_46(func_66(), iParam0);
}

int func_46(int iParam0, int iParam1)//Position - 0x222C
{
	int iVar0;
	int iVar1;
	
	if (!func_47(iParam1) || !func_47(iParam0))
	{
		return 1;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	iVar1 = func_63(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_64(iParam0);
	iVar1 = func_64(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_65(iParam0);
	iVar1 = func_65(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x2338
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
	iVar0 = func_65(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_64(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_63(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_59(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_61(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_62(iParam0);
	if (iVar5 < 1 || iVar5 > func_48(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0, int iParam1)//Position - 0x2414
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

void func_49(var uParam0)//Position - 0x24B6
{
	uParam0->f_1 = 0;
}

bool func_50(int iParam0)//Position - 0x24C3
{
	return !func_13(iParam0);
}

void func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x24D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_59(*uParam0);
	iVar1 = func_61(*uParam0);
	iVar2 = func_62(*uParam0);
	iVar3 = func_63(*uParam0);
	iVar4 = func_64(*uParam0);
	iVar5 = func_65(*uParam0);
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
	iVar6 = func_48(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_48(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_52(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2654
{
	func_58(uParam0, iParam1);
	func_57(uParam0, iParam2);
	func_56(uParam0, iParam3);
	func_55(uParam0, iParam5);
	func_54(uParam0, iParam4);
	func_53(uParam0, iParam6);
}

void func_53(var uParam0, int iParam1)//Position - 0x268C
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

void func_54(var uParam0, int iParam1)//Position - 0x2712
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_61(*uParam0);
	iVar1 = func_59(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_55(var uParam0, int iParam1)//Position - 0x2763
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_56(var uParam0, int iParam1)//Position - 0x2796
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_57(var uParam0, int iParam1)//Position - 0x27D0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_58(var uParam0, int iParam1)//Position - 0x280B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_59(int iParam0)//Position - 0x2847
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_60(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_60(bool bParam0, int iParam1, int iParam2)//Position - 0x2869
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_61(int iParam0)//Position - 0x2880
{
	return iParam0 & 15;
}

int func_62(int iParam0)//Position - 0x288D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_63(int iParam0)//Position - 0x289F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_64(int iParam0)//Position - 0x28B2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_65(int iParam0)//Position - 0x28C5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_66()//Position - 0x28D8
{
	var uVar0;
	
	func_58(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_57(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_56(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_54(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_55(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_53(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_67()//Position - 0x291E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_390.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_68()//Position - 0x294A
{
	int iVar0;
	
	if (!BitTest(Local_390.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_390.f_35[iVar0] = -1;
			iVar0++;
		}
		MISC::SET_BIT(&(Local_390.f_23), 5);
	}
}

void func_69()//Position - 0x2984
{
	int iVar0;
	
	func_539(&Local_390, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_390.f_12[iVar0] = func_70();
		iVar0++;
	}
	Local_390.f_33 = 1;
}

int func_70()//Position - 0x29B9
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	while (func_71(iVar0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	return iVar0;
}

int func_71(int iParam0)//Position - 0x29E1
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_390.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_72()//Position - 0x2A16
{
	int iVar0;
	
	iVar0 = func_38(&Local_390);
	if (iVar0 != Local_390.f_28)
	{
		Local_390.f_28 = iVar0;
		Local_390.f_29 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_73()//Position - 0x2A41
{
	if (Local_390.f_20 > 0)
	{
		if (Local_390[0] != Local_390[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_74(int iParam0, int iParam1)//Position - 0x2A66
{
	return BitTest(Global_2657991[iParam0 /*467*/].f_221, iParam1);
}

void func_75()//Position - 0x2A7C
{
	Local_390.f_29 = 0;
}

void func_76()//Position - 0x2A8A
{
	int iVar0;
	
	if (func_73())
	{
		if (Global_2739811.f_4519 == 0 || BitTest(Global_2739811.f_4520, 0))
		{
			if (!func_537(&uLocal_344) || func_535(&uLocal_344, 2000, 0))
			{
				iVar0 = func_38(&Local_378);
				if (iVar0 > -1)
				{
					Global_2739811.f_4519 = func_37(iVar0);
					func_49(&uLocal_342);
					func_536(&uLocal_342, 0, 0);
					if (BitTest(Global_2739811.f_4520, 0))
					{
						MISC::CLEAR_BIT(&(Global_2739811.f_4520), 0);
					}
				}
				else
				{
					func_49(&uLocal_344);
					func_536(&uLocal_344, 0, 0);
				}
			}
		}
		else if (Global_2739811.f_4519 != 0)
		{
			if (func_535(&uLocal_342, 20000, 0))
			{
				if (!func_77(&Local_378, Global_2739811.f_4519))
				{
					Global_2739811.f_4519 = 0;
				}
				func_49(&uLocal_342);
				func_536(&uLocal_342, 0, 0);
			}
		}
	}
}

int func_77(var uParam0, int iParam1)//Position - 0x2B6D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_78(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x2BBF
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_79()//Position - 0x2CA3
{
	int iVar0;
	
	if (((((bLocal_113 || bLocal_114) || bLocal_115) || bLocal_117) || bLocal_116) || bLocal_118)
	{
		if (((((Global_2739811.f_28.f_41 || func_142(PLAYER::PLAYER_ID(), 1, 0)) || func_141(PLAYER::PLAYER_ID())) || !func_139()) || func_127()) || func_122())
		{
			bLocal_113 = false;
			bLocal_115 = false;
			bLocal_114 = false;
			bLocal_117 = false;
			bLocal_116 = false;
			func_121();
		}
	}
	if ((func_120("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */) || func_120("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */)) || func_120("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */))
	{
		if (!func_119() || func_122())
		{
			func_121();
		}
	}
	if (bLocal_118)
	{
		if (!func_120("FM_IHELP_LCP" /* GXT: Lose the Cops. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_102())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_101())
						{
							func_95("FM_IHELP_LCP" /* GXT: Lose the Cops. */, 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_595, 18))
	{
		if (func_120("FM_IHELP_LCP" /* GXT: Lose the Cops. */))
		{
			func_88("FM_IHELP_LCP" /* GXT: Lose the Cops. */);
		}
	}
	if (bLocal_113)
	{
		if (!func_120("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_102())
				{
					if (BitTest(uLocal_348, 2))
					{
						if (func_101())
						{
							func_95("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */, 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_595, 18))
	{
		if (func_120("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */))
		{
			func_88("FM_CTUT_MOD" /* GXT: Go to Los Santos Customs. */);
		}
	}
	if (bLocal_115)
	{
		if (!func_120("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_142(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_101())
							{
								if (func_119())
								{
									func_95("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_595, 18))
	{
		if (func_120("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */))
		{
			func_88("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */);
		}
	}
	if (bLocal_116)
	{
		if (!func_120("FM_CTUT_RSP" /* GXT: Get your vehicle resprayed. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_142(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_101())
							{
								if (func_119())
								{
									func_95("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_595, 18))
	{
		if (func_120("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */))
		{
			func_88("FM_CTUT_REP" /* GXT: Get your vehicle repaired. */);
		}
	}
	if (bLocal_117)
	{
		if (!func_120("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_102() || func_80())
				{
					if (func_101())
					{
						if (func_119())
						{
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_595, 18))
	{
		if (func_120("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */))
		{
			func_88("FM_CTUT_LLS" /* GXT: Leave Los Santos Customs. */);
		}
	}
	if (bLocal_114)
	{
		if (!func_120("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_102() || func_80())
				{
					if (BitTest(uLocal_348, 3))
					{
						if (!iLocal_120)
						{
							if (func_101())
							{
								func_95("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */, 0);
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iLocal_363 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar0 != iLocal_363)
								{
									iLocal_120 = 0;
									func_49(&uLocal_346);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_537(&uLocal_346))
		{
			func_536(&uLocal_346, 0, 0);
		}
		else if (func_535(&uLocal_346, 20000, 0))
		{
			func_121();
			iLocal_120 = 1;
		}
	}
	else if (!BitTest(uLocal_595, 18))
	{
		if (func_120("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */))
		{
			func_88("FM_IMP_SIM" /* GXT: Go to Simeon's Garage. */);
		}
	}
}

bool func_80()//Position - 0x3035
{
	return (((((func_81(39) || func_81(40)) || func_81(41)) || func_81(42)) || func_81(43)) || func_81(44));
}

int func_81(int iParam0)//Position - 0x307F
{
	return func_82(iParam0, 6, 1);
}

int func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x308F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101740.f_1421[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_87() == 0)
		{
			return BitTest(func_83(func_86(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114135.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_83(int iParam0, int iParam1)//Position - 0x30EF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_84(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_84(int iParam0, var uParam1)//Position - 0x311E
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_85(uParam1));
}

int func_85(var uParam0)//Position - 0x3133
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
		if (iVar1 > -1)
		{
			Global_2751934 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2751934 = 1;
		}
	}
	return iVar0;
}

int func_86(int iParam0)//Position - 0x3167
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
			return 13519;
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
		
		case 61:
			return 12447;
			break;
		
		default:
			break;
	}
	return 15468;
}

int func_87()//Position - 0x351E
{
	return Global_33087;
}

void func_88(char* sParam0)//Position - 0x3529
{
	bool bVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_94())
	{
		if (Global_1574765 == 11)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
		}
		else
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_89();
}

void func_89()//Position - 0x35A2
{
	func_91();
	func_90(0);
}

void func_90(bool bParam0)//Position - 0x35B3
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_91()//Position - 0x3645
{
	if (!func_93())
	{
	}
	if (func_94())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574765.f_12));
		func_92();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_92()//Position - 0x366E
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

bool func_93()//Position - 0x38E0
{
	if (!func_94())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574765.f_12));
	func_92();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_94()//Position - 0x3906
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

void func_95(char* sParam0, bool bParam1)//Position - 0x391C
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_99(sParam0))
	{
		return;
	}
	func_89();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_98();
	func_97(bParam1);
	func_96();
}

void func_96()//Position - 0x3987
{
	MISC::SET_BIT(&(Global_1574765.f_59), 1);
}

void func_97(bool bParam0)//Position - 0x399A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574765.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574765.f_59), 0);
}

void func_98()//Position - 0x39C0
{
	Global_1574765.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_99(char* sParam0)//Position - 0x39E5
{
	if (!func_94())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_100(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
}

bool func_100(char* sParam0)//Position - 0x3A29
{
	if (!func_94())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

bool func_101()//Position - 0x3A5B
{
	bool bVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22)))
				{
				}
			}
		}
	}
	if (!BitTest(uLocal_596, 0))
	{
		if (!BitTest(uLocal_596, 1))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_596, 2))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_596, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			MISC::SET_BIT(&uLocal_596, 0);
		}
	}
	return bVar0;
}

int func_102()//Position - 0x3ADE
{
	if ((((((((((((((((((!func_15(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_118(8, -1)) || func_118(15, -1)) || func_117()) || func_118(3, -1)) || func_142(PLAYER::PLAYER_ID(), 1, 0)) || func_116()) || func_119()) || func_115()) || func_114()) || func_112()) || func_111()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || func_110() > 0) || !func_139()) || func_103()) || func_122())
	{
		return 0;
	}
	return 1;
}

int func_103()//Position - 0x3BC7
{
	if (func_74(PLAYER::PLAYER_ID(), 8))
	{
		return 1;
	}
	if (func_74(PLAYER::PLAYER_ID(), 10))
	{
		return 1;
	}
	if (func_74(PLAYER::PLAYER_ID(), 12))
	{
		return 1;
	}
	if (func_74(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (func_74(PLAYER::PLAYER_ID(), 13))
	{
		return 1;
	}
	if (func_109())
	{
		return 1;
	}
	if (func_108())
	{
		return 1;
	}
	if (!func_107() && !func_106())
	{
		if (!func_105())
		{
			if (!func_104())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104()//Position - 0x3C61
{
	int iVar0;
	
	if (BitTest(Global_2739811.f_1862, 7))
	{
		return 1;
	}
	iVar0 = func_83(1304, -1);
	if (BitTest(iVar0, 6))
	{
		MISC::SET_BIT(&(Global_2739811.f_1862), 7);
		return 1;
	}
	if (func_107())
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	return 0;
}

bool func_105()//Position - 0x3CB1
{
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_140, 2);
}

bool func_106()//Position - 0x3CC8
{
	return Global_1575072;
}

bool func_107()//Position - 0x3CD4
{
	return Global_1575074;
}

int func_108()//Position - 0x3CE0
{
	if (BitTest(Global_2739811.f_1862, 28) && !BitTest(Global_2739811.f_1862, 29))
	{
		return 1;
	}
	return 0;
}

bool func_109()//Position - 0x3D0A
{
	return BitTest(Global_2739811.f_1863, 3);
}

int func_110()//Position - 0x3D1B
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_194;
}

int func_111()//Position - 0x3D30
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_112()//Position - 0x3D52
{
	return func_113();
}

bool func_113()//Position - 0x3D5E
{
	return Global_1668409.f_40 == 3;
}

bool func_114()//Position - 0x3D6E
{
	return Global_2672939.f_2914.f_582;
}

bool func_115()//Position - 0x3D80
{
	return Global_101740.f_400 > 0;
}

bool func_116()//Position - 0x3D91
{
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 0);
}

var func_117()//Position - 0x3DAA
{
	return Global_2625240;
}

bool func_118(int iParam0, int iParam1)//Position - 0x3DB6
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1673654.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1673654.f_1048, iParam0);
}

bool func_119()//Position - 0x3DEE
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

int func_120(char* sParam0)//Position - 0x3E03
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_94())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_99(sParam0);
}

void func_121()//Position - 0x3E54
{
	if (!func_94())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574765.f_9)
	{
		return;
	}
	func_89();
}

int func_122()//Position - 0x3E81
{
	if (func_126(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_123(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x3EA9
{
	if (iParam0 != func_125())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_124(Global_2657991[iParam0 /*467*/].f_324.f_8) == 14;
			}
		}
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x3EF0
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
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
		
		case 172:
			return 30;
			break;
		
		case 173:
			return 31;
			break;
	}
	return -1;
}

int func_125()//Position - 0x4515
{
	return -1;
}

int func_126(int iParam0, int iParam1)//Position - 0x451E
{
	if (func_9(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_127()//Position - 0x4562
{
	if (func_131())
	{
		return 1;
	}
	if (func_128(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_126(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)//Position - 0x4596
{
	if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 && func_129(Global_1887549[iParam0 /*611*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1)
	{
		if (func_129(Global_1887549[iParam0 /*611*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x45FC
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_130(iParam0, 0);
	return 0;
}

int func_130(int iParam0, int iParam1)//Position - 0x4656
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_131()//Position - 0x46AB
{
	if (!func_138(PLAYER::PLAYER_ID()))
	{
		if (func_134(PLAYER::PLAYER_ID()) || func_133(PLAYER::PLAYER_ID()) != -1)
		{
			return 1;
		}
		if (func_132(PLAYER::PLAYER_ID()) && Global_1836970.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

var func_132(int iParam0)//Position - 0x46FC
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_1, 4);
}

int func_133(int iParam0)//Position - 0x4711
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887549[iVar0 /*611*/];
	}
	return -1;
}

int func_134(int iParam0)//Position - 0x4730
{
	if (func_137(iParam0))
	{
		return 1;
	}
	if (func_135(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x4753
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_136(iParam0, 9);
	}
	return 0;
}

var func_136(int iParam0, int iParam1)//Position - 0x4771
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_137(var uParam0)//Position - 0x4789
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 0);
	}
	return 0;
}

bool func_138(int iParam0)//Position - 0x47AC
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_1, 2);
}

int func_139()//Position - 0x47C1
{
	if (func_140() == 0)
	{
		return 1;
	}
	return 0;
}

int func_140()//Position - 0x47D6
{
	return Global_1574633.f_18;
}

int func_141(int iParam0)//Position - 0x47E4
{
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2);
}

int func_142(int iParam0, bool bParam1, bool bParam2)//Position - 0x480C
{
	if (bParam1)
	{
		if (func_143(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845221[iParam0 /*889*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_143(int iParam0)//Position - 0x483E
{
	return func_144(iParam0);
}

var func_144(int iParam0)//Position - 0x484C
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_11.f_1, 0);
}

void func_145()//Position - 0x4863
{
	if (bLocal_111)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_1928759))
		{
			Global_1928759 = HUD::ADD_BLIP_FOR_COORD(Global_1928760);
			HUD::SET_BLIP_SPRITE(Global_1928759, 293 /*RADAR_SIMEON_FAMILY*/);
			HUD::SET_BLIP_SCALE(Global_1928759, 1f);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1928759, false);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1928759, "IMPEX_BLIP_FM" /* GXT: Simeon */);
			if (func_179())
			{
				HUD::SET_BLIP_FLASHES(Global_1928759, true);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Global_1928759))
	{
		HUD::REMOVE_BLIP(&Global_1928759);
		if (bLocal_320)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_174(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("MP_GAR_SIMEON"), &uLocal_351, 0, 500, 1, 0))
					{
						if (func_122())
						{
							func_173("IMPEX_HIPR_DAM" /* GXT: This vehicle is no longer required by Simeon as it's too damaged. */, -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_112)
	{
		if (iLocal_133 == -1)
		{
			iLocal_133 = func_152(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, -1);
			if (iLocal_133 != -1)
			{
				func_146(iLocal_133, 1);
			}
		}
	}
	else if (iLocal_133 != -1)
	{
		func_146(iLocal_133, 0);
		iLocal_133 = -1;
	}
}

void func_146(int iParam0, bool bParam1)//Position - 0x495E
{
	switch (iParam0)
	{
		case 39:
			func_147(39, bParam1);
			break;
		
		case 40:
			func_147(40, bParam1);
			break;
		
		case 41:
			func_147(41, bParam1);
			break;
		
		case 42:
			func_147(42, bParam1);
			break;
		
		case 43:
			func_147(43, bParam1);
			break;
		
		case 44:
			func_147(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_147(int iParam0, bool bParam1)//Position - 0x49D6
{
	if (bParam1)
	{
		if (!func_82(iParam0, 8, 0))
		{
			func_151(iParam0, 8, 0);
			func_150(iParam0);
		}
	}
	else if (func_82(iParam0, 8, 0))
	{
		func_148(iParam0, 8, 0);
		func_150(iParam0);
	}
}

void func_148(int iParam0, int iParam1, bool bParam2)//Position - 0x4A1D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101740.f_1421[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_87() == 0)
		{
			iVar0 = func_83(func_86(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_149(func_86(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114135.f_668[iParam0]), iParam1);
	}
}

void func_149(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4A8D
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_84(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

void func_150(int iParam0)//Position - 0x4ABB
{
	Global_101740.f_208[iParam0] = 1;
	Global_101740.f_207 = 1;
}

void func_151(int iParam0, int iParam1, bool bParam2)//Position - 0x4AD5
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101740.f_1421[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_87() == 0)
		{
			iVar0 = func_83(func_86(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_149(func_86(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114135.f_668[iParam0]), iParam1);
	}
}

int func_152(struct<3> Param0, int iParam3, int iParam4)//Position - 0x4B45
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (iParam3 == 6 || iParam3 == func_172(iVar0))
		{
			iVar4 = iVar0;
			if (func_171(iVar4))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_153(iVar0, 0), true);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_153(int iParam0, bool bParam1)//Position - 0x4BC6
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
			break;
		
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
			break;
		
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
			break;
		
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
			break;
		
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
			break;
		
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
			break;
		
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
			break;
		
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
			break;
		
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
			break;
		
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
			break;
		
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
			break;
		
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.1127f, 30.296f;
			}
			break;
		
		case 45:
			return func_168(Global_103852);
			break;
		
		case 46:
			if (Global_1845051 != func_125())
			{
				if (func_167(Global_1845051))
				{
					return func_160(2, 2);
				}
				else if (func_159(Global_1845051))
				{
					return func_160(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_157(-9.9f, -0.5f, 1f);
			break;
		
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1965191;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
			break;
		
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
			break;
		
		case 56:
			switch (func_156())
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_154();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
			break;
		
		case 61:
			return 756.7726f, -993.5798f, -47.3777f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_154()//Position - 0x5340
{
	if (!func_33(Global_1950373))
	{
		return Global_1950373;
	}
	switch (func_155())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_155()//Position - 0x563B
{
	return Global_2652568.f_2706;
}

int func_156()//Position - 0x564A
{
	return Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

Vector3 func_157(struct<3> Param0)//Position - 0x5662
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_158(), 0f, Param0);
}

Vector3 func_158()//Position - 0x5677
{
	return -880f, -2770f, -50f;
}

int func_159(int iParam0)//Position - 0x568E
{
	if (iParam0 != func_125())
	{
		if ((BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 0) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 1)) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_160(int iParam0, int iParam1)//Position - 0x56E6
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845051 != func_125())
	{
		if (iParam1 == 3)
		{
			if (func_161(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845221[Global_1845051 /*889*/].f_268.f_294, 4))
			{
				if (func_161(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1845221[Global_1845051 /*889*/].f_268.f_294, 5))
			{
				if (func_161(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x5790
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_166(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_166(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_164(iParam0) };
	}
	else
	{
		Var12 = { func_163(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_162(Var18, -Var0.f_3.f_2) };
	Var18 = { func_162(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_162(struct<3> Param0, float fParam3)//Position - 0x5825
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

struct<6> func_163(int iParam0)//Position - 0x5869
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_164(int iParam0)//Position - 0x59ED
{
	return func_165(iParam0);
}

struct<6> func_165(int iParam0)//Position - 0x59FB
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
		
		case 9:
			Var0 = { 1105.6648f, -3012.3345f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.9282f, -3012.6934f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.9421f, -3011.315f, -37.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.9943f, -3012.8777f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.1519f, -3013.0325f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.9167f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.9218f, -3010.8872f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.6818f, -3009.227f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.4534f, -3008.5105f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.3401f, -3008.6982f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.3442f, -3009.618f, -37.981716f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.4595f, -3009.7935f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.7828f, -3010.433f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.0251f, -3007.3157f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.1602f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.1749f, -3005.818f, -37.919476f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.5996f, -3000.8472f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.6013f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.4756f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.5928f, -3008.2698f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_166(int iParam0, var uParam1)//Position - 0x64C2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x6544
{
	if (iParam0 != func_125())
	{
		if ((BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 3) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 4)) || BitTest(Global_1845221[iParam0 /*889*/].f_268.f_294, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_168(int iParam0)//Position - 0x659C
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.0908f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.5624f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.1116f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
			break;
		
		case 13:
			return func_158();
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
			break;
		
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
			break;
		
		case 23:
			return 745.7956f, -993.11926f, -47.376743f;
			break;
		
		case 17:
			if (func_169() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_169()//Position - 0x6823
{
	return func_170(PLAYER::PLAYER_ID());
}

int func_170(int iParam0)//Position - 0x6833
{
	return MISC::GET_BITS_IN_RANGE(Global_2657991[iParam0 /*467*/].f_324.f_3, 28, 31);
}

bool func_171(int iParam0)//Position - 0x6850
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_101740.f_271[39]);
			break;
		
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_101740.f_271[40]);
			break;
		
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_101740.f_271[41]);
			break;
		
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_101740.f_271[42]);
			break;
		
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_101740.f_271[43]);
			break;
		
		case 44:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_101740.f_271[44]);
			break;
	}
	return bVar0;
}

int func_172(int iParam0)//Position - 0x68FD
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
		
		case 61:
			return 3;
			break;
	}
	return 6;
}

void func_173(char* sParam0, int iParam1)//Position - 0x6C40
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_174(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x6C57
{
	if (!func_537(uParam2))
	{
		func_536(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_175(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)//Position - 0x6C8F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_537(uParam3))
	{
		func_536(uParam3, 0, 0);
	}
	func_178(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (func_176(iParam0, iParam1, 30))
			{
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
							if (bParam2)
							{
								if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
								{
									if (uParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2) && !(Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								if (bParam2)
								{
									if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) || ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
				{
					if (bParam2)
					{
						if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_49(uParam3);
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2)//Position - 0x7292
{
	if (iParam1 != -1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), func_177(iParam1), true) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_177(int iParam0)//Position - 0x72BE
{
	switch (iParam0)
	{
		case joaat("MP_GAR_SIMEON"):
			return 1204.4286f, -3110.847f, 4.3988f;
			break;
		
		case joaat("MP_GAR_PNS_2"):
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case joaat("MP_GAR_PNS_3"):
			return -1164.8867f, -2011.1052f, 12.253714f;
			break;
		
		case joaat("MP_GAR_PNS_4"):
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case joaat("MP_GAR_PNS_5"):
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case joaat("MP_GAR_PNS_6"):
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_178(var uParam0, int iParam1)//Position - 0x7372
{
	switch (iParam1)
	{
		case 0:
		case joaat("MP_GAR_SIMEON"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_SIMEON");
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.4286f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.4019f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.4019f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.1573f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case joaat("MP_GAR_PNS_2"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_2");
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.7905f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.0035f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.88574f, -1088.5156f, 20.559574f };
			uParam0->f_27.f_3 = { 718.61304f, -1088.7799f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case joaat("MP_GAR_PNS_3"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_3");
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.8867f, -2011.1052f, 12.253714f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.7738f, -2010.2699f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.6388f, -2010.2107f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.7228f, -2015.9226f, 11.504413f };
			uParam0->f_27.f_3 = { -1160.5583f, -2007.0046f, 15.680271f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case joaat("MP_GAR_PNS_4"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_4");
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.79984f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.34323f, -141.7261f, 40.759644f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case joaat("MP_GAR_PNS_5"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_5");
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.3223f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.0483f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.97591f, 6625.0464f, 30.603012f };
			uParam0->f_27.f_3 = { 111.252235f, 6615.6567f, 33.629288f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case joaat("MP_GAR_PNS_6"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_6");
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.3448f, 2644.4177f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.8348f, 2634.7754f, 36.550064f };
			uParam0->f_27.f_3 = { 1182.5776f, 2647.9546f, 39.586018f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_179()//Position - 0x78E5
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_83(1200, -1);
	if (!BitTest(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!BitTest(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_180()//Position - 0x7912
{
	if (bLocal_109)
	{
		if (!iLocal_110)
		{
			func_182(joaat("MP_GAR_SIMEON"), 1, 0);
			func_181(1);
			iLocal_110 = 1;
		}
	}
	else if (iLocal_110)
	{
		func_182(joaat("MP_GAR_SIMEON"), 0, 0);
		func_181(0);
		iLocal_110 = 0;
	}
}

void func_181(bool bParam0)//Position - 0x7953
{
	if (Global_2739811.f_4654 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2739811.f_4654 = bParam0;
	}
}

void func_182(int iParam0, bool bParam1, bool bParam2)//Position - 0x7978
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (bParam1)
	{
		if (!BitTest(Global_2739811.f_4633, func_183(iParam0)))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_2739811.f_4633.f_1), func_183(iParam0));
			}
			MISC::SET_BIT(&(Global_2739811.f_4633), func_183(iParam0));
		}
	}
	else if (BitTest(Global_2739811.f_4633, func_183(iParam0)))
	{
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_2739811.f_4633.f_1), func_183(iParam0));
		}
		MISC::CLEAR_BIT(&(Global_2739811.f_4633), func_183(iParam0));
	}
}

int func_183(int iParam0)//Position - 0x7A08
{
	switch (iParam0)
	{
		case joaat("MP_GAR_SIMEON"):
			return 0;
			break;
		
		case joaat("MP_GAR_PNS_2"):
			return 1;
			break;
		
		case joaat("MP_GAR_PNS_3"):
			return 2;
			break;
		
		case joaat("MP_GAR_PNS_4"):
			return 3;
			break;
		
		case joaat("MP_GAR_PNS_5"):
			return 4;
			break;
		
		case joaat("MP_GAR_PNS_6"):
			return 5;
			break;
	}
	return 0;
}

void func_184()//Position - 0x7A66
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_390.f_23, 0))
	{
		if (iLocal_354 >= 32)
		{
			MISC::CLEAR_BIT(&uLocal_595, 5);
			iLocal_354 = 0;
			iLocal_326 = -1;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_354)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_354));
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (func_15(iVar0, 0, 1))
			{
				if (!BitTest(uLocal_595, 3))
				{
					if (BitTest(Local_466[iLocal_354 /*4*/].f_2, 1))
					{
						MISC::SET_BIT(&uLocal_595, 3);
					}
				}
				if (iLocal_326 == -1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
					{
						if (func_4(Local_390.f_22))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_390.f_22)))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_390.f_22), -1, false) == iVar1)
									{
										iLocal_326 = iLocal_354;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_354++;
		if (iLocal_354 >= 32)
		{
			MISC::SET_BIT(&uLocal_595, 5);
		}
		func_285();
		if (!BitTest(uLocal_595, 3))
		{
			if (!BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
			{
				if (!BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					if (func_283())
					{
						MISC::SET_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_323 != Local_390.f_34)
	{
		if (Local_390.f_34 == 0)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
			{
				iLocal_323 = Local_390.f_34;
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_323);
			}
		}
		else
		{
			iLocal_323 = Local_390.f_34;
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_323);
		}
	}
	if (BitTest(Local_390.f_23, 0))
	{
		switch (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (!Global_2739811.f_1790)
				{
				}
				if (BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
				{
					MISC::CLEAR_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
				}
				if (BitTest(uLocal_595, 21))
				{
					MISC::CLEAR_BIT(&uLocal_595, 21);
				}
				if (BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					MISC::CLEAR_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
				}
				if (((!func_142(PLAYER::PLAYER_ID(), 1, 0) && !func_116()) && !func_282(PLAYER::PLAYER_ID(), 1, 0)) || func_74(PLAYER::PLAYER_ID(), 6))
				{
					if (BitTest(uLocal_595, 3))
					{
						MISC::CLEAR_BIT(&uLocal_595, 3);
					}
					if (BitTest(uLocal_595, 19))
					{
						MISC::CLEAR_BIT(&uLocal_595, 19);
					}
					if (BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
					{
						MISC::CLEAR_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
					if (iLocal_325 != -1)
					{
						iLocal_325 = -1;
					}
					if (BitTest(Local_390.f_23, 0))
					{
						if (!BitTest(uLocal_595, 16))
						{
							MISC::SET_BIT(&uLocal_595, 16);
							func_281(6, 1);
							MISC::SET_BIT(&uLocal_595, 7);
							Global_2739811.f_1789 = 1;
							Global_2739811.f_1790 = 0;
						}
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
							{
								if (func_275())
								{
									if (Local_390.f_67 != 0)
									{
										VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, true);
									}
									Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
									Global_1928770 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_390.f_22));
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_390.f_22))))
									{
										HUD::SET_BLIP_SPRITE(Global_1928770, 348 /*RADAR_GANG_BIKE*/);
										func_173("IMPEX_HIPB_INT" /* GXT: Simeon wants a specific vehicle ~HUD_COLOUR_GREEN~~BLIP_GANG_BIKE~ ~s~delivered. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */, -1);
									}
									else
									{
										HUD::SET_BLIP_SPRITE(Global_1928770, 225 /*RADAR_GANG_VEHICLE*/);
										func_173("IMPEX_HIPR_INT" /* GXT: Simeon wants a specific vehicle ~HUD_COLOUR_GREEN~~BLIP_GANG_VEHICLE~ ~s~delivered. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */, -1);
									}
									HUD::SET_BLIP_COLOUR(Global_1928770, 2);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1928770, "IMPEX_HIPR_BLP" /* GXT: High Priority Vehicle */);
									func_281(6, 1);
									MISC::SET_BIT(&uLocal_595, 7);
									Global_2739811.f_1789 = 1;
									if (func_122())
									{
										HUD::SET_BLIP_DISPLAY(Global_1928770, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2739811.f_1790)
				{
					Global_2739811.f_1790 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_390.f_22), false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22)))
							{
								func_274(1);
								if (func_273())
								{
									func_268(2, 0, 1);
								}
								if (HUD::DOES_BLIP_EXIST(Global_1928770))
								{
									HUD::REMOVE_BLIP(&Global_1928770);
								}
							}
							else
							{
								func_274(0);
								if (!func_267(NETWORK::NET_TO_VEH(Local_390.f_22), 0))
								{
									if (!HUD::DOES_BLIP_EXIST(Global_1928770))
									{
										if (!iLocal_132)
										{
											func_266();
										}
									}
								}
							}
						}
						if (!BitTest(uLocal_595, 19))
						{
							if (func_275())
							{
								if (func_264())
								{
									if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22)))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_390.f_22), true)) < 2500f)
										{
											if (func_122())
											{
												func_173("FM_IMP_JAC" /* GXT: You can jack another player from a vehicle by holding ~INPUT_ENTER~ while stood next to the vehicle. */, -1);
											}
											MISC::SET_BIT(&uLocal_595, 19);
										}
									}
								}
							}
						}
						if (func_263())
						{
						}
						func_261();
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_1928770))
						{
							HUD::REMOVE_BLIP(&Global_1928770);
						}
						func_281(6, 0);
						MISC::CLEAR_BIT(&uLocal_595, 7);
						Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_390.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, false);
					}
					if (HUD::DOES_BLIP_EXIST(Global_1928770))
					{
						HUD::REMOVE_BLIP(&Global_1928770);
					}
					func_281(6, 0);
					MISC::CLEAR_BIT(&uLocal_595, 7);
					Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (BitTest(uLocal_595, 3))
				{
					func_281(6, 0);
					MISC::CLEAR_BIT(&uLocal_595, 7);
					if (HUD::DOES_BLIP_EXIST(Global_1928770))
					{
						HUD::REMOVE_BLIP(&Global_1928770);
					}
					Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (Local_390.f_26 == 3)
				{
					if (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1)
					{
						if (Local_390.f_67 != 0)
						{
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, false);
						}
						if (HUD::DOES_BLIP_EXIST(Global_1928770))
						{
							HUD::REMOVE_BLIP(&Global_1928770);
						}
						if (BitTest(uLocal_595, 16))
						{
							MISC::CLEAR_BIT(&uLocal_595, 16);
						}
						func_281(6, 0);
						MISC::CLEAR_BIT(&uLocal_595, 7);
						Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_274(0);
				break;
		}
		if (func_258())
		{
			if (func_257("IMPEX_HIPR_INT" /* GXT: Simeon wants a specific vehicle ~HUD_COLOUR_GREEN~~BLIP_GANG_VEHICLE~ ~s~delivered. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (HUD::DOES_BLIP_EXIST(Global_1928770))
			{
				HUD::REMOVE_BLIP(&Global_1928770);
			}
			if (Local_390.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, false);
			}
			Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			func_281(6, 0);
			MISC::CLEAR_BIT(&uLocal_595, 7);
			if (BitTest(uLocal_595, 16))
			{
				MISC::CLEAR_BIT(&uLocal_595, 16);
			}
			func_274(0);
		}
		func_200();
		if (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3)
		{
			func_197();
		}
	}
	else
	{
		if (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != 0)
		{
			if (Local_390.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_67, false);
			}
			Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
		}
		if (BitTest(uLocal_595, 21))
		{
			MISC::CLEAR_BIT(&uLocal_595, 21);
		}
		if (Global_2739811.f_1789)
		{
			if (!func_537(&uLocal_336))
			{
				func_536(&uLocal_336, 0, 0);
			}
			else if (func_535(&uLocal_336, 5000, 0))
			{
				func_49(&uLocal_336);
				Global_2739811.f_1789 = 0;
			}
		}
		if (BitTest(uLocal_595, 16))
		{
			if (Local_390.f_34 == 0)
			{
				MISC::CLEAR_BIT(&uLocal_595, 16);
			}
		}
	}
	func_185();
}

void func_185()//Position - 0x8156
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	bool bVar8;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (!func_264())
			{
				if (!func_537(&uLocal_601))
				{
					func_536(&uLocal_601, 0, 0);
				}
				if (func_535(&uLocal_601, 1000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_390.f_22))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_390.f_22), true) };
						if (func_193(Var3, func_194(39), func_153(39, 0)))
						{
							if (func_188(39, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_193(Var3, func_194(40), func_153(40, 0)))
						{
							if (func_188(40, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_193(Var3, func_194(41), func_153(41, 0)))
						{
							if (func_188(41, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_193(Var3, func_194(42), func_153(42, 0)))
						{
							if (func_188(42, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_193(Var3, func_194(43), func_153(43, 0)))
						{
							if (func_188(43, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_193(Var3, func_194(44), func_153(44, 0)))
						{
							if (func_188(44, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
					}
					func_49(&uLocal_601);
				}
				if (bVar8)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_390.f_22))
					{
						if (func_186(NETWORK::NET_TO_VEH(Local_390.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_VEH(Local_390.f_22), Var0, false, false, true);
							ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_390.f_22), fVar6);
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_390.f_22), true, 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_390.f_22), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_390.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_186(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x8353
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_187(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_125()) && func_15(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_187(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x8437
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

bool func_188(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x84D2
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.4912f, -1991.1274f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.2526f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.8751f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.3292f, -2001.5482f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.2858f, -2006.2626f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.4692f, -2012.3073f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.5621f, -2015.4457f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.6904f, -2000.2299f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.5887f, -2006.4545f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.6481f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.3206f, -1978.1239f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.2635f, -1975.9711f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.2931f, -1984.8282f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.3458f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.0131f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.2635f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.2042f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.5344f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.9674f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.0941f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.2853f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.3582f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.6115f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.5365f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.9111f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.6154f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.2264f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.7983f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.2144f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.5327f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.2925f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.5444f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.3574f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.4976f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.4977f, 2653.5815f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.6785f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.7334f, 2669.6602f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.4663f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.5857f, 2667.1362f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.6979f, 2666.5916f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.5735f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.1273f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.4586f, 2689.2036f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.6628f, 2677.4583f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.8584f, 2677.1252f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.3582f, 2677.2256f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.6898f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.8677f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.6356f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.8219f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.8916f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.7721f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.5962f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.7463f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.0707f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.3108f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_192(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_191(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.9066f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.9828f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.2893f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.8304f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.5239f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.3655f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.2131f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.4478f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6001f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.0588f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576.7544f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.5612f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.6373f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.9438f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387.1785f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388.8677f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.1023f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.2546f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.7134f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.3265f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.4089f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_190(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.8616f, -1737.3851f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_189(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.3127f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.3127f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.3127f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.3127f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.3127f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.3127f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.3127f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.3127f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.3127f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.3127f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.3127f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.3127f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_35(*uParam2, 0f, 0f, 0f, 0);
}

int func_189(int iParam0, int iParam1)//Position - 0xA109
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)//Position - 0xA124
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0, int iParam1)//Position - 0xA13F
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_192(int iParam0, int iParam1)//Position - 0xA172
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_193(struct<3> Param0, char* sParam3, struct<3> Param4)//Position - 0xA19F
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_194(int iParam0)//Position - 0xA1E3
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_196(Global_103852);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return func_195();
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
		
		case 58:
			return "";
			break;
		
		case 59:
			return "xm3_dlc_int_03_xm3";
			break;
		
		case 60:
			return "sm_smugdlc_int_01";
			break;
		
		case 61:
			return "m24_2_int_hacker_basement";
			break;
	}
	return "";
}

char* func_195()//Position - 0xA5E6
{
	return "M23_1_dlc_int_01_M23_1";
}

char* func_196(int iParam0)//Position - 0xA5F2
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return func_195();
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 23:
			return "m24_2_int_hacker_basement";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_169() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		case 21:
			return "xm3_dlc_int_03_xm3";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_197()//Position - 0xA761
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_326 > -1)
	{
		if (iLocal_326 != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_326)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_326));
				bVar1 = true;
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iVar0, PLAYER::PLAYER_ID()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22), false))
				{
					if (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_198(NETWORK::NET_TO_VEH(Local_390.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_198(int iParam0, int iParam1, int iParam2)//Position - 0xA816
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_199(iParam0) == 0)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
				{
					if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
					{
						GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
						GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, iVar0, iVar1, iVar2, 190);
						GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, true);
					}
				}
			}
		}
	}
}

int func_199(int iParam0)//Position - 0xA891
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) == 0 && VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_200()//Position - 0xA8CB
{
	int iVar0;
	
	if (BitTest(uLocal_595, 5))
	{
		if (iLocal_325 != iLocal_326)
		{
			if (iLocal_326 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_326)))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_326));
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						if (!func_282(PLAYER::PLAYER_ID(), 1, 0))
						{
							func_201("IMPEX_TICK_DHPV" /* GXT: ~a~ ~s~has taken the high priority Import/Export vehicle. */, iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (!BitTest(Local_390.f_23, 8))
						{
							MISC::SET_BIT(&(Local_390.f_23), 8);
						}
					}
				}
			}
			iLocal_325 = iLocal_326;
		}
	}
}

int func_201(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA951
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (func_9(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
			}
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
			if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
			{
				if (Global_4718592.f_122769[iVar1] != -1)
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_255(iVar1, iParam1, 0));
				}
				else
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_210(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_210(iParam1, -2, 1, 0, 0));
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_208(&Var2));
			if (!bParam4)
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				Global_2707651 = { func_207(iParam1) };
				if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707581, 35, &Global_2707651))
				{
					bVar18 = false;
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2707581.f_22), "Leader") && Global_2707581.f_30 == 0)
					{
						bVar18 = true;
					}
					if (Global_2707581.f_21 > 0)
					{
						bVar19 = false;
					}
					else
					{
						bVar19 = true;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_206(&Var2) };
						}
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707581, 35), &(Global_2707581.f_17), Global_2707581.f_30, bVar18, false, Global_2707581, &Var2, Global_1576241, Global_1576242, Global_1576243);
					}
					else
					{
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707581, 35), &(Global_2707581.f_17), Global_2707581.f_30, bVar18, false, Global_2707581, Global_1576241, Global_1576242, Global_1576243);
					}
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
			func_202(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_202(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xAB1D
{
	int iVar0;
	
	if ((!func_205() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_26(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_203(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937688.f_5[iVar0 /*53*/] = iParam0;
		Global_1937688.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937688.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937688.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937688.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937688.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937688.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937688.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_203(int iParam0)//Position - 0xAC25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937688 - 1))
	{
		if (iParam0 > Global_1937688.f_5[iVar0 /*53*/].f_1)
		{
			func_204(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937688++;
	if (Global_1937688 > 5)
	{
		Global_1937688 = 5;
		return Global_1937688;
	}
	return (Global_1937688 - 1);
}

void func_204(int iParam0)//Position - 0xAC87
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937688.f_5[iVar0 /*53*/] = { Global_1937688.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_205()//Position - 0xACC0
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_206(char* sParam0)//Position - 0xACD1
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_207(int iParam0)//Position - 0xACFC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_208(char* sParam0)//Position - 0xAD13
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_209(&cVar0);
}

var func_209(char[4] cParam0)//Position - 0xAD37
{
	return cParam0;
}

int func_210(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xAD41
{
	int iVar0;
	int iVar1;
	
	if (!func_9(iParam0))
	{
		return 1;
	}
	if (func_253(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_122769[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_253(PLAYER::PLAYER_ID()) || (func_252() && func_251())) && !BitTest(Global_2739811.f_4728, 31)) && !bParam4)
	{
		iVar1 = func_250();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_15(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_122769[iParam1] != -1)
							{
								return func_255(iParam1, iParam0, 0);
							}
							else
							{
								return func_226(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_226(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_122769[iParam1] != -1)
				{
					return func_255(iParam1, iParam0, 0);
				}
				else
				{
					return func_211(0, -1, 0);
				}
			}
			else
			{
				return func_211(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_122769[iParam1] != -1)
		{
			return func_255(iParam1, iParam0, 0);
		}
		else
		{
			return func_226(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_226(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_211(bool bParam0, int iParam1, bool bParam2)//Position - 0xAF2C
{
	return func_212(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_212(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xAF42
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_225() || (func_224() && func_222())) && Global_1685172.f_1)
	{
		if (bParam1)
		{
			return func_221(iParam2, iVar0);
		}
		else
		{
			return func_221(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_218(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_217(1);
				}
				else
				{
					return func_217(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_213(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_213(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_217(1);
	}
	return func_217(0);
}

int func_213(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB044
{
	int iVar0;
	
	iVar0 = func_216(iParam0, iParam1, iParam3);
	if (func_214(Global_4718592.f_128476, 1, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_214(int iParam0, bool bParam1, bool bParam2)//Position - 0xB15D
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_187633 == 65)
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (func_215(Global_4718592.f_187633, 0))
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_215(int iParam0, bool bParam1)//Position - 0xB1C9
{
	if (iParam0 == 93)
	{
		if (bParam1)
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
			{
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

int func_216(int iParam0, int iParam1, int iParam2)//Position - 0xB1F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_218(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_217(bool bParam0)//Position - 0xB23D
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB254
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25921, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_219(iParam0, bVar0, iParam1, bVar1) || !func_219(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_219(iParam0, bVar0, iParam1, bVar1) || !func_219(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_219(iParam0, bVar0, iParam1, bVar1) || !func_219(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_219(iParam0, bVar0, iParam1, bVar1) || !func_219(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_219(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xB59F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25922, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*26190*/].f_25922, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_15(iVar1, 1, 1) || func_26(iVar1, 0)) || BitTest(Global_2657991[iVar1 /*467*/].f_202, 2)) || func_220(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_220(int iParam0)//Position - 0xB6CB
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_36.f_18, 14);
}

int func_221(int iParam0, int iParam1)//Position - 0xB6E3
{
	if (iParam0 == -1)
	{
		iParam0 = func_216(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_222()//Position - 0xB731
{
	if (func_223())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_192395, 4);
}

bool func_223()//Position - 0xB750
{
	return BitTest(Global_4718592.f_180429, 12);
}

bool func_224()//Position - 0xB765
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_192395, 0);
	}
	return ((BitTest(Global_4718592.f_192395, 0) || Global_1920266) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_225()//Position - 0xB7AC
{
	if (func_223() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB7C9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845221[iVar2 /*889*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_235())
			{
				iVar3 = func_231(iParam0);
				if (!iVar3 == -1)
				{
					return func_229(iVar3);
				}
			}
			if ((func_228(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_218(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_217(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_227(1);
			}
			else
			{
				return func_212(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836691 || Global_1836681) || Global_1845221[iParam0 /*889*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836691 == 1 && Global_1836701 == 0))
			{
				return func_217(1);
			}
			else
			{
				return func_212(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836685 && Global_1836156.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_231(iParam0);
	if (!iVar4 == -1)
	{
		return func_229(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_227(bool bParam0)//Position - 0xB961
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_228(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB978
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_229(int iParam0)//Position - 0xB9F0
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_230(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_230(int iParam0)//Position - 0xBAB3
{
	return Global_2648914.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_231(int iParam0)//Position - 0xBACA
{
	if (func_9(iParam0))
	{
		if (func_233(iParam0, 1))
		{
			return Global_2648914.f_818.f_11[func_232(iParam0)];
		}
	}
	return -1;
}

int func_232(int iParam0)//Position - 0xBAFA
{
	if (func_9(iParam0))
	{
		return Global_1887549[iParam0 /*611*/].f_10;
	}
	return func_125();
}

int func_233(int iParam0, bool bParam1)//Position - 0xBB1D
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_234(iParam0))
		{
			return 0;
		}
	}
	return func_9(Global_1887549[iParam0 /*611*/].f_10);
}

int func_234(int iParam0)//Position - 0xBB55
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_235()//Position - 0xBB8A
{
	if ((((((((func_249() || func_248()) || func_34()) || func_247()) || func_246()) || func_244()) || func_242()) || func_239()) || func_236())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_236()//Position - 0xBC06
{
	return func_237(Global_4718592.f_128476);
}

int func_237(int iParam0)//Position - 0xBC1C
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_238(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_238(int iParam0)//Position - 0xBC50
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_239()//Position - 0xBC6F
{
	return func_240(Global_4718592.f_128476);
}

int func_240(int iParam0)//Position - 0xBC85
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_241(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0xBCB9
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_242()//Position - 0xBCD8
{
	return func_243(Global_4718592.f_128476);
}

int func_243(int iParam0)//Position - 0xBCEE
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_244()//Position - 0xBD27
{
	return func_245(Global_4718592.f_128476);
}

int func_245(int iParam0)//Position - 0xBD3D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_246()//Position - 0xBD77
{
	return Global_2684718.f_24;
}

var func_247()//Position - 0xBD85
{
	return Global_2684718.f_21;
}

var func_248()//Position - 0xBD93
{
	return Global_2684718.f_18;
}

var func_249()//Position - 0xBDA1
{
	return Global_2684718.f_17;
}

var func_250()//Position - 0xBDAF
{
	return Global_2621446.f_2;
}

var func_251()//Position - 0xBDBD
{
	return BitTest(Global_2621446, 4);
}

var func_252()//Position - 0xBDCB
{
	return BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18, 14);
}

int func_253(int iParam0)//Position - 0xBDE5
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_254())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657991[iParam0 /*467*/].f_202, 2))
	{
		return 1;
	}
	return 0;
}

bool func_254()//Position - 0xBE24
{
	return BitTest(Global_2621446, 3);
}

int func_255(int iParam0, int iParam1, bool bParam2)//Position - 0xBE32
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_235())
	{
		iVar2 = func_231(iParam1);
		if (!iVar2 == -1)
		{
			return func_229(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_8540[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_125())
	{
		if (Global_4718592.f_122769[iParam0] != -1 && Global_4718592.f_122769[iParam0] <= 4)
		{
			if (Global_4718592.f_122769[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_122769[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_122769[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_122769[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_122769[iParam0];
			}
		}
		else
		{
			iVar0 = func_212(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_256(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_218(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_227(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_256(int iParam0)//Position - 0xBFB2
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_187824;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_187825;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_187826;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_187827;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

bool func_257(char* sParam0)//Position - 0xC089
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_258()//Position - 0xC09C
{
	if ((Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_74(PLAYER::PLAYER_ID(), 6)))
	{
		if (func_142(PLAYER::PLAYER_ID(), 1, 0) || func_116())
		{
			if ((!func_259(PLAYER::PLAYER_ID(), 5) && !func_259(PLAYER::PLAYER_ID(), 32)) && !func_259(PLAYER::PLAYER_ID(), 148))
			{
				return 1;
			}
			else if (!iLocal_132)
			{
				if (HUD::DOES_BLIP_EXIST(Global_1928770))
				{
					HUD::REMOVE_BLIP(&Global_1928770);
				}
				iLocal_132 = 1;
			}
		}
		else if (iLocal_132)
		{
			func_266();
			iLocal_132 = 0;
		}
		if (Local_390.f_26 == 3)
		{
			if (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_74(PLAYER::PLAYER_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1)//Position - 0xC189
{
	int iVar0;
	
	if (func_87() != 0)
	{
		return 0;
	}
	if (!func_260(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1845221[iVar0 /*889*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)//Position - 0xC1C2
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672939.f_1, iParam0);
}

void func_261()//Position - 0xC1E1
{
	if (HUD::DOES_BLIP_EXIST(Global_1928770))
	{
		if (func_122() || func_262())
		{
			HUD::SET_BLIP_DISPLAY(Global_1928770, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(Global_1928770, 4);
		}
		if (!iLocal_121)
		{
			if (func_282(PLAYER::PLAYER_ID(), 1, 0))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_1928770, true);
				iLocal_121 = 1;
			}
		}
		else if (!func_282(PLAYER::PLAYER_ID(), 1, 0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1928770, false);
			iLocal_121 = 0;
		}
	}
}

var func_262()//Position - 0xC256
{
	return Global_2647037.f_1870;
}

int func_263()//Position - 0xC265
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_390.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_390.f_22), 1, 40000))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_390.f_22))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_390.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_390.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_390.f_22), 0f);
					}
					return 1;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_11(Local_390.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_390.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_390.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
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

int func_264()//Position - 0xC336
{
	int iVar0;
	int iVar1;
	
	if (iLocal_326 == -1 && BitTest(uLocal_595, 5))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22)))
				{
					if (func_265(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_326 >= 0)
			{
				if (iLocal_326 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_326)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_326));
						if (func_15(iVar0, 1, 1))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_390.f_22)))
							{
								if (func_265(iVar1, NETWORK::NET_TO_VEH(Local_390.f_22), -1))
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
	return 0;
}

int func_265(int iParam0, int iParam1, int iParam2)//Position - 0xC40E
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_266()//Position - 0xC44C
{
	Global_1928770 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_390.f_22));
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_390.f_22))))
	{
		HUD::SET_BLIP_SPRITE(Global_1928770, 348 /*RADAR_GANG_BIKE*/);
	}
	else
	{
		HUD::SET_BLIP_SPRITE(Global_1928770, 225 /*RADAR_GANG_VEHICLE*/);
	}
	HUD::SET_BLIP_COLOUR(Global_1928770, 2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1928770, "IMPEX_HIPR_BLP" /* GXT: High Priority Vehicle */);
	if (func_122())
	{
		HUD::SET_BLIP_DISPLAY(Global_1928770, 0);
	}
}

int func_267(int iParam0, int iParam1)//Position - 0xC4B6
{
	if (func_174(iParam0, joaat("MP_GAR_SIMEON"), &uLocal_351, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_268(int iParam0, int iParam1, bool bParam2)//Position - 0xC4DB
{
	if (func_273())
	{
		if (iParam1 == 1)
		{
			if (Global_2739811.f_4530 == -1)
			{
				Global_2739811.f_4530 = Global_262145.f_26734 /* Tunable: VC_PASSIVE_COOLDOWN_REENABLE */;
			}
			func_272(&(Global_2739811.f_4528), 0, 0);
			if (bParam2)
			{
				if (Global_2739811.f_4533 == -1)
				{
					Global_2739811.f_4533 = Global_262145.f_26735 /* Tunable: VC_PASSIVE_TIME_AFTER_DISABLE */;
				}
				func_272(&(Global_2739811.f_4531), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
				func_271(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
			func_271(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_270()) && !func_269(PLAYER::PLAYER_ID()))
		{
			Global_1057439 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_269(int iParam0)//Position - 0xC5A5
{
	if (func_142(iParam0, 1, 0))
	{
		if (Global_1845221[iParam0 /*889*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_270()//Position - 0xC5CA
{
	return Global_2684718.f_844;
}

void func_271(bool bParam0)//Position - 0xC5D9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_273())
		{
			if (func_15(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_15(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_272(var uParam0, bool bParam1, bool bParam2)//Position - 0xC6D2
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

bool func_273()//Position - 0xC70F
{
	return Global_1574582;
}

void func_274(int iParam0)//Position - 0xC71B
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2739811.f_4728, 28))
		{
			MISC::SET_BIT(&(Global_2739811.f_4728), 28);
		}
	}
	else if (BitTest(Global_2739811.f_4728, 28))
	{
		MISC::CLEAR_BIT(&(Global_2739811.f_4728), 28);
	}
}

int func_275()//Position - 0xC761
{
	if (func_122())
	{
		return 0;
	}
	if (!func_276(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_276(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xC785
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_111())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_142(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_280(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_114())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836454)
	{
		return 0;
	}
	if (func_279())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (Global_76640)
	{
		return 0;
	}
	if (Global_2750841)
	{
		return 0;
	}
	if (func_277())
	{
		return 0;
	}
	return 1;
}

bool func_277()//Position - 0xC87E
{
	return Global_2708409;
}

bool func_278()//Position - 0xC88A
{
	return Global_2684718.f_693;
}

bool func_279()//Position - 0xC899
{
	return Global_2684718.f_848;
}

int func_280(int iParam0)//Position - 0xC8A8
{
	if (Global_2657991[iParam0 /*467*/].f_221 == 0)
	{
		return 0;
	}
	return 1;
}

void func_281(bool bParam0, bool bParam1)//Position - 0xC8C4
{
	if (bParam1)
	{
		if (!BitTest(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221, bParam0))
		{
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221), bParam0);
		}
	}
	else if (BitTest(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_221), bParam0);
	}
}

int func_282(int iParam0, bool bParam1, bool bParam2)//Position - 0xC921
{
	if (iParam0 == func_125())
	{
		return 0;
	}
	if (BitTest(Global_1845221[iParam0 /*889*/].f_268.f_34, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845221[iParam0 /*889*/].f_268.f_34, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_283()//Position - 0xC985
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (!func_264())
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_390.f_22), true) };
				if (func_284(Var0, joaat("MP_GAR_SIMEON"), 18))
				{
					if (func_267(NETWORK::NET_TO_VEH(Local_390.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_284(struct<3> Param0, int iParam3, int iParam4)//Position - 0xC9E7
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_177(iParam3), true) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_285()//Position - 0xCA0A
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
	{
		if (func_4(Local_390.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22), false))
				{
					if (!BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (func_286(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22), 1) < 180f)
				{
					if (!BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (BitTest(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
				{
					MISC::CLEAR_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_286(int iParam0, int iParam1, bool bParam2)//Position - 0xCACE
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

void func_287()//Position - 0xCB2C
{
	int iVar0;
	
	if (iLocal_107)
	{
		func_394();
		if (!BitTest(uLocal_595, 1))
		{
			if (Global_2739811.f_1814 > 0)
			{
				if (Global_2739811.f_1817 == 0)
				{
					Global_2739811.f_1817 = NETWORK::GET_NETWORK_TIME();
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2739811.f_1817) > Global_262145.f_11934 /* Tunable: TIME_SIMEON_SENDS_TEXT_MS */)
				{
					if (!func_111())
					{
						if (func_73())
						{
							if (func_275())
							{
								if (!func_393())
								{
									if (!func_392(0) && !func_127())
									{
										Global_23530 = 0;
										iVar0 = func_83(1200, -1);
										if (!BitTest(iVar0, 0))
										{
											if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2739811.f_1817) > 20000)
											{
												if (func_391(18, "CELL_CLTEST6" /* GXT: Hello soldier, here is shopping list. Keep them looking nice yes? */, 2, "NULL", Global_2739811.f_1814, "TestSender1", 4, 0, 1, 0, 0, bLocal_128, 0, 0, 0, 0, 0))
												{
													MISC::SET_BIT(&iVar0, 0);
													func_149(1200, iVar0, -1, 1);
													MISC::SET_BIT(&uLocal_595, 1);
													func_389(0f, 0f, 0f, func_390(19), "");
													Global_2739811.f_1816 = 1;
													iLocal_107 = 0;
												}
											}
										}
										else if (func_391(18, "CELL_CLTEST1" /* GXT: Grab these vehicles: */, 2, "NULL", Global_2739811.f_1814, "TestSender1", 4, 0, 1, 0, 0, bLocal_128, 0, 0, 0, 0, 0))
										{
											func_389(0f, 0f, 0f, func_390(19), "");
											MISC::SET_BIT(&uLocal_595, 1);
											Global_2739811.f_1816 = 1;
											iLocal_107 = 0;
										}
									}
								}
								else
								{
									Global_2739811.f_1817 = NETWORK::GET_NETWORK_TIME();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (BitTest(uLocal_595, 1))
	{
		if (!BitTest(uLocal_348, 5))
		{
			if (func_275())
			{
				if (bLocal_128)
				{
					func_173("IMPEX_HELP_LNCH" /* GXT: Check your phone for details of vehicles required at the Import/Export Garage. */, -1);
				}
				MISC::SET_BIT(&uLocal_348, 5);
				func_536(&uLocal_334, 0, 0);
			}
		}
	}
	if (iLocal_130)
	{
		if (func_544())
		{
			if (!func_537(&uLocal_138))
			{
				func_536(&uLocal_138, 0, 0);
			}
			else if (func_535(&uLocal_138, 10000, 0))
			{
				if (func_288(18, "CELL_IMPT" /* GXT: Good work on that last delivery my friend, when I have more orders I will let you know. */, 0, 0))
				{
					iLocal_130 = 0;
					func_49(&uLocal_138);
				}
			}
		}
	}
}

bool func_288(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xCD18
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_289(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_289(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)//Position - 0xCD41
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_290(&uVar0, iParam0, func_388(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_290(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xCD7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_387(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_386(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_382(uParam6))
	{
		return 0;
	}
	if (func_379(iVar0, iVar1, iVar2))
	{
		if (func_378())
		{
			return 0;
		}
		func_377();
		return func_297(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_296(iParam4))
	{
		return 0;
	}
	func_291(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_291(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0xCE5F
{
	Global_1668409.f_40.f_1 = iParam0;
	Global_1668409.f_40.f_2 = iParam1;
	Global_1668409.f_40.f_3 = iParam2;
	StringCopy(&(Global_1668409.f_40.f_4), sParam3, 16);
	Global_1668409.f_40.f_8 = iParam4;
	Global_1668409.f_40.f_9 = iParam5;
	Global_1668409.f_40.f_14 = uParam6;
	func_292(iParam4);
	func_377();
	Global_1668409.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_292(int iParam0)//Position - 0xCECC
{
	if (func_295(iParam0))
	{
		func_294();
		return;
	}
	func_293();
}

void func_293()//Position - 0xCEE8
{
	Global_1668409.f_40.f_10 = 0;
}

void func_294()//Position - 0xCEF9
{
	Global_1668409.f_40.f_10 = 1;
}

int func_295(int iParam0)//Position - 0xCF0A
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_296(int iParam0)//Position - 0xCF52
{
	return iParam0 > Global_1668409.f_40.f_8;
}

int func_297(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xCF65
{
	struct<2> Var0;
	
	func_376();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_373(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_370(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_373(uParam0, sParam3, sParam4);
		}
		return func_353(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_352(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_341(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_340(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_298(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_298(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xD05F
{
	bool bVar0;
	
	func_339();
	bVar0 = true;
	if (func_300(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_299(120000);
		return 1;
	}
	return 0;
}

void func_299(int iParam0)//Position - 0xD096
{
	Global_1668409.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1668409.f_40.f_12 = 1;
}

int func_300(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xD0B9
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_125();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_333(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1668409.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_332(sParam5, bParam6, &iVar3);
	uVar5 = func_330(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_329(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_304(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_303();
	}
	func_339();
	func_302();
	func_301();
	return 1;
}

void func_301()//Position - 0xD202
{
	Global_1668409.f_57 = 0;
	Global_1668409.f_57.f_1 = 0;
}

void func_302()//Position - 0xD21A
{
	Global_1668409.f_40 = 3;
}

void func_303()//Position - 0xD229
{
	MISC::SET_BIT(&Global_8919, 8);
}

int func_304(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xD23A
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_305(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9643 = iParam6;
			MISC::SET_BIT(&Global_4546023, 0);
		}
		return 1;
	}
	return 0;
}

int func_305(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xD2A6
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_322();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_21066 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_21066 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_21066 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4546008 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_321() == 0)
	{
		func_319();
		return 0;
	}
	func_318(Global_4546007);
	StringCopy(&(Global_4542454[Global_4546007 /*296*/]), sParam1, 64);
	Global_4542454[Global_4546007 /*296*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4542454[Global_4546007 /*296*/].f_24 = iParam2;
	}
	Global_4542454[Global_4546007 /*296*/].f_25 = iParam7;
	Global_4542454[Global_4546007 /*296*/].f_26 = uParam8;
	Global_4542454[Global_4546007 /*296*/].f_29 = uParam9;
	Global_4542454[Global_4546007 /*296*/].f_30 = uParam12;
	Global_4542454[Global_4546007 /*296*/].f_31 = uParam11;
	Global_4542454[Global_4546007 /*296*/].f_28 = 0;
	Global_4542454[Global_4546007 /*296*/].f_32 = iParam3;
	StringCopy(&(Global_4542454[Global_4546007 /*296*/].f_33), sParam4, 64);
	Global_4542454[Global_4546007 /*296*/].f_49 = iParam6;
	StringCopy(&(Global_4542454[Global_4546007 /*296*/].f_50), sParam5, 64);
	Global_4542454[Global_4546007 /*296*/].f_66 = iParam13;
	StringCopy(&(Global_4542454[Global_4546007 /*296*/].f_67), sParam14, 64);
	StringCopy(&(Global_4542454[Global_4546007 /*296*/].f_83), sParam15, 64);
	func_322();
	switch (iParam16)
	{
		case 3:
			Global_4542454[Global_4546007 /*296*/].f_291[Global_21066] = 1;
			break;
		
		case 0:
			Global_4542454[Global_4546007 /*296*/].f_291[0] = 1;
			break;
		
		case 2:
			Global_4542454[Global_4546007 /*296*/].f_291[2] = 1;
			break;
		
		case 1:
			Global_4542454[Global_4546007 /*296*/].f_291[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_21066)
		{
			case 0:
				func_317(0);
				break;
			
			case 1:
				func_317(1);
				break;
			
			case 2:
				func_317(2);
				break;
			
			case 3:
				func_317(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4546008 = 1;
				break;
			
			case 0:
				Global_4546008 = 1;
				break;
			
			case 2:
				Global_4546008 = 1;
				break;
			
			case 1:
				Global_4546008 = 1;
				break;
			}
	}
	Global_23494[Global_4546007] = 0;
	if (bParam10)
	{
		func_322();
		if (Global_21009)
		{
			StringCopy(&Global_21055, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21066)
			{
				case 0:
					StringCopy(&Global_21055, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_21055, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_21055, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_21055, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_316())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21055, true);
			}
		}
	}
	if (!Global_21285 && !BitTest(Global_8921, 9))
	{
		if (Global_21066.f_1 == 6)
		{
			func_315(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_310(1);
			func_315(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1972247 != -1 && iParam0 == Global_1972247)
	{
		bVar1 = true;
	}
	func_306(iParam0, sParam1, bVar1, func_309(PLAYER::PLAYER_ID()));
	return 1;
}

void func_306(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xD6B7
{
	struct<14> Var0;
	
	if (!func_307())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1972230.f_7;
	Var0.f_7 = Global_1972230.f_8;
	Var0.f_8 = Global_1972230.f_9;
	Var0.f_9 = Global_1972230.f_10;
	Var0.f_10 = Global_1972230.f_11;
	Var0.f_11 = Global_1972230.f_12;
	Var0.f_12 = Global_1972230.f_13;
	Var0.f_13 = Global_1972230.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1972247 = -1;
	}
}

int func_307()//Position - 0xD752
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79539)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_125())
	{
		return 0;
	}
	if (func_308(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_308(int iParam0)//Position - 0xD7B5
{
	return func_136(iParam0, 20);
}

var func_309(int iParam0)//Position - 0xD7C5
{
	return Global_1845221[iParam0 /*889*/].f_206.f_6;
}

void func_310(int iParam0)//Position - 0xD7DA
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
	
	Global_23493 = 0;
	Global_9541 = iParam0;
	func_314();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_313(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar2 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_312(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696411)
							{
								if (iVar1 == 14)
								{
									func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114135.f_14145[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114135.f_14145[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114135.f_14145[iVar3 /*104*/].f_99[Global_21066] == 1)
											{
												Global_23493++;
											}
										}
									}
									iVar3++;
								}
								func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23493), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79539)
								{
									iVar4 = 0;
									iVar4 = Global_4542452;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4542454[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4542454[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4542454[iVar5 /*296*/].f_291[Global_21066] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case 0:
											iVar6 = Global_45403;
											break;
										
										case 1:
											iVar6 = Global_45404;
											break;
										
										case 2:
											iVar6 = Global_45405;
											break;
										
										default:
											break;
									}
									func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_312(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8920, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_312(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar8 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_312(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_312(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_8926[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_312(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882240.f_1;
								func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_311(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_311(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xDD61
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_312(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_312(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_312(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_312(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_312(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_312(char* sParam0)//Position - 0xDE14
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_313(int iParam0)//Position - 0xDE26
{
	return Global_44181 == iParam0;
}

void func_314()//Position - 0xDE34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9504[iVar0] = 0;
		iVar0++;
	}
}

void func_315(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xDE57
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_316()//Position - 0xDEBA
{
	return Global_1575084;
}

void func_317(int iParam0)//Position - 0xDEC6
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_114135.f_14055[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_318(int iParam0)//Position - 0xDEE5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4542454[iParam0 /*296*/].f_18 = iVar0;
	Global_4542454[iParam0 /*296*/].f_18.f_1 = iVar1;
	Global_4542454[iParam0 /*296*/].f_18.f_2 = iVar2;
	Global_4542454[iParam0 /*296*/].f_18.f_3 = iVar3;
	Global_4542454[iParam0 /*296*/].f_18.f_4 = uVar4;
	Global_4542454[iParam0 /*296*/].f_18.f_5 = iVar5;
}

void func_319()//Position - 0xDF6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4546007 = 11;
	Global_4542454[Global_4546007 /*296*/].f_18 = -1;
	Global_4542454[Global_4546007 /*296*/].f_18.f_1 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_2 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_3 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_320(Global_4542454[iVar2 /*296*/].f_18, Global_4542454[Global_4546007 /*296*/].f_18))
		{
			Global_4546007 = iVar2;
		}
		iVar2++;
	}
	Global_4542454[Global_4546007 /*296*/].f_24 = 1;
}

int func_320(struct<6> Param0, struct<6> Param6)//Position - 0xE01D
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_321()//Position - 0xE108
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4542454[iVar2 /*296*/].f_24 == 0)
		{
			Global_4546007 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4546007 = 11;
	Global_4542454[Global_4546007 /*296*/].f_18 = -1;
	Global_4542454[Global_4546007 /*296*/].f_18.f_1 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_2 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_3 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4542454[iVar2 /*296*/].f_24 == 0 || Global_4542454[iVar2 /*296*/].f_24 == 1)
		{
			if (!func_320(Global_4542454[iVar2 /*296*/].f_18, Global_4542454[Global_4546007 /*296*/].f_18))
			{
				Global_4546007 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4546007 == 11)
	{
		return 0;
	}
	Global_4542454[Global_4546007 /*296*/].f_291[0] = 0;
	Global_4542454[Global_4546007 /*296*/].f_291[1] = 0;
	Global_4542454[Global_4546007 /*296*/].f_291[2] = 0;
	return 1;
}

void func_322()//Position - 0xE243
{
	if (func_313(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_323();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

var func_323()//Position - 0xE2E5
{
	func_324();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_324()//Position - 0xE2FE
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_327(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_326(PLAYER::PLAYER_PED_ID());
			if (func_325(iVar0) && (!func_313(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_325(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_325(int iParam0)//Position - 0xE3FB
{
	return iParam0 < 3;
}

int func_326(int iParam0)//Position - 0xE407
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_327(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_327(int iParam0)//Position - 0xE444
{
	if (func_325(iParam0))
	{
		return func_328(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_328(int iParam0)//Position - 0xE469
{
	return Global_2201[iParam0 /*29*/];
}

int func_329(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xE478
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_305(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9643 = iParam10;
			MISC::SET_BIT(&Global_4546023, 0);
		}
		return 1;
	}
	return 0;
}

int func_330(int iParam0, int iParam1)//Position - 0xE4FA
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_331(2, iParam1);
	return iParam0;
}

void func_331(int iParam0, var uParam1)//Position - 0xE519
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_332(char* sParam0, bool bParam1, int iParam2)//Position - 0xE5CA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_331(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_333(int iParam0)//Position - 0xE607
{
	int iVar0;
	
	iVar0 = func_336(iParam0);
	if (iVar0 == -1)
	{
		func_334(iParam0, 1);
		return 0;
	}
	Global_1686278[iVar0 /*5*/].f_4 = 1;
	return Global_1686278[iVar0 /*5*/].f_2;
}

void func_334(int iParam0, bool bParam1)//Position - 0xE63D
{
	if (!func_15(iParam0, 0, 1))
	{
		return;
	}
	if (func_336(iParam0) != -1)
	{
		return;
	}
	if (Global_1686441)
	{
		if (iParam0 == Global_1686441.f_1)
		{
			return;
		}
	}
	if (func_335(iParam0))
	{
		return;
	}
	if (Global_1686479 >= 32)
	{
		return;
	}
	Global_1686446[Global_1686479] = iParam0;
	Global_1686479++;
	if (bParam1)
	{
	}
}

int func_335(int iParam0)//Position - 0xE6A9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1686479)
	{
		if (Global_1686446[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_336(int iParam0)//Position - 0xE6DB
{
	int iVar0;
	
	if (!func_15(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1686439 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1686439)
	{
		if (Global_1686278[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1686278[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1686278[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_337(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_337(int iParam0)//Position - 0xE75A
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1686439)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1686278[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1686278[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1686278[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1686278[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1686439)
	{
		Global_1686278[iVar32 /*5*/] = { Global_1686278[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_338(&(Global_1686278[iVar32 /*5*/]));
	Global_1686439 = (Global_1686439 - 1);
}

void func_338(var uParam0)//Position - 0xE810
{
	*uParam0 = 0;
	uParam0->f_1 = func_125();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_339()//Position - 0xE83D
{
	Global_1668409.f_40.f_9 = 4;
}

int func_340(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xE84E
{
	bool bVar0;
	
	func_339();
	bVar0 = false;
	return func_300(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_341(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xE875
{
	bool bVar0;
	
	bVar0 = false;
	return func_342(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_342(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xE898
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_125();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_333(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1668409.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23486 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_332(sParam5, bParam6, &iVar3);
	uVar5 = func_330(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_391(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_344(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_303();
	}
	func_343();
	func_302();
	func_301();
	return 1;
}

void func_343()//Position - 0xE9E6
{
	Global_1668409.f_40.f_9 = 3;
}

int func_344(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xE9F7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8919, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_346(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9643 = iParam6;
			Global_9546[3 /*6*/] = { func_345(iParam0) };
			Global_9623 = iParam0;
			MISC::SET_BIT(&Global_8919, 1);
			MISC::SET_BIT(&Global_8919, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_345(int iParam0)//Position - 0xEA86
{
	return Global_2201[iParam0 /*29*/].f_3;
}

int func_346(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xEA99
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_322();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_21066 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_21066 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_21066 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_114135.f_14055[Global_21066 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_351() == 0)
	{
		func_349();
		return 0;
	}
	func_348(Global_23492);
	StringCopy(&(Global_114135.f_14145[Global_23492 /*104*/]), sParam1, 64);
	Global_114135.f_14145[Global_23492 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114135.f_14145[Global_23492 /*104*/].f_24 = iParam2;
	}
	Global_114135.f_14145[Global_23492 /*104*/].f_25 = iParam7;
	Global_114135.f_14145[Global_23492 /*104*/].f_26 = uParam8;
	Global_114135.f_14145[Global_23492 /*104*/].f_29 = uParam9;
	Global_114135.f_14145[Global_23492 /*104*/].f_30 = uParam12;
	Global_114135.f_14145[Global_23492 /*104*/].f_31 = uParam11;
	Global_114135.f_14145[Global_23492 /*104*/].f_28 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_114135.f_14145[Global_23492 /*104*/].f_33), sParam4, 64);
	Global_114135.f_14145[Global_23492 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_114135.f_14145[Global_23492 /*104*/].f_50), sParam5, 64);
	Global_114135.f_14145[Global_23492 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_114135.f_14145[Global_23492 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_114135.f_14145[Global_23492 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8919, 10))
	{
		Global_114135.f_14145[Global_23492 /*104*/].f_99[0] = 1;
		Global_114135.f_14145[Global_23492 /*104*/].f_99[1] = 1;
		Global_114135.f_14145[Global_23492 /*104*/].f_99[2] = 1;
		Global_9642 = 4;
		func_317(0);
		func_317(2);
		func_317(1);
	}
	else
	{
		func_322();
		switch (iParam16)
		{
			case 3:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[Global_21066] = 1;
				break;
			
			case 0:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_21066)
			{
				case 0:
					func_317(0);
					Global_9642 = 0;
					break;
				
				case 1:
					func_317(1);
					Global_9642 = 1;
					break;
				
				case 2:
					func_317(2);
					Global_9642 = 2;
					break;
				
				case 3:
					func_317(3);
					Global_9642 = 3;
					break;
				
				default:
					Global_9642 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8919, 10))
		{
			Global_114135.f_14055[0 /*20*/].f_17 = 1;
			Global_114135.f_14055[1 /*20*/].f_17 = 1;
			Global_114135.f_14055[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114135.f_14055[Global_21066 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_114135.f_14055[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_114135.f_14055[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_114135.f_14055[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23494[Global_23492] = 0;
	if (bParam10)
	{
		func_322();
		if (Global_21009)
		{
			StringCopy(&Global_21055, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21066)
			{
				case 0:
					StringCopy(&Global_21055, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_21055, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_21055, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_21055, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_316())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21055, true);
			}
		}
	}
	if (!Global_21285 && !BitTest(Global_8921, 9))
	{
		if (Global_21066.f_1 == 6)
		{
			func_315(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_310(1);
			func_315(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1972247 != -1 && iParam0 == Global_1972247)
	{
		bVar1 = true;
	}
	func_347(iParam0, sParam1, bVar1, func_309(PLAYER::PLAYER_ID()));
	return 1;
}

void func_347(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xEF80
{
	struct<14> Var0;
	
	if (!func_307())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1972230.f_7;
	Var0.f_7 = Global_1972230.f_8;
	Var0.f_8 = Global_1972230.f_9;
	Var0.f_9 = Global_1972230.f_10;
	Var0.f_10 = Global_1972230.f_11;
	Var0.f_11 = Global_1972230.f_12;
	Var0.f_12 = Global_1972230.f_13;
	Var0.f_13 = Global_1972230.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1972247 = -1;
	}
}

void func_348(int iParam0)//Position - 0xF01B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_114135.f_14145[iParam0 /*104*/].f_18 = iVar0;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_349()//Position - 0xF0AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79539)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23492 = 34;
	Global_114135.f_14145[Global_23492 /*104*/].f_18 = -1;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_1 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_2 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_3 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_350(Global_114135.f_14145[iVar2 /*104*/].f_18, Global_114135.f_14145[Global_23492 /*104*/].f_18))
		{
			Global_23492 = iVar2;
		}
		iVar2++;
	}
	Global_114135.f_14145[Global_23492 /*104*/].f_24 = 1;
}

int func_350(struct<6> Param0, struct<6> Param6)//Position - 0xF178
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_351()//Position - 0xF263
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79539)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_114135.f_14145[iVar2 /*104*/].f_24 == 0)
		{
			Global_23492 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23492 = 34;
	Global_114135.f_14145[Global_23492 /*104*/].f_18 = -1;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_1 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_2 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_3 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_114135.f_14145[iVar2 /*104*/].f_24 == 0 || Global_114135.f_14145[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_350(Global_114135.f_14145[iVar2 /*104*/].f_18, Global_114135.f_14145[Global_23492 /*104*/].f_18))
			{
				Global_23492 = iVar2;
			}
		}
		if (Global_114135.f_14145[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23492 == 34)
	{
		return 0;
	}
	Global_114135.f_14145[Global_23492 /*104*/].f_99[0] = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_99[1] = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_99[2] = 0;
	return 1;
}

int func_352(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xF3CB
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_343();
	bVar0 = true;
	if (func_342(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_299(120000);
		return 1;
	}
	return 0;
}

int func_353(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0xF41D
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_369(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_359(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_358(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_357(1);
		}
		func_356();
		func_302();
		func_355();
		func_354();
		return 1;
	}
	return 0;
}

void func_354()//Position - 0xF4B4
{
	Global_2750357 = 0;
}

void func_355()//Position - 0xF4C1
{
	Global_1668409.f_57 = 1;
	Global_1668409.f_57.f_1 = 0;
}

void func_356()//Position - 0xF4D9
{
	Global_1668409.f_40.f_9 = 1;
}

void func_357(int iParam0)//Position - 0xF4EA
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8921, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8921, 0);
	}
}

void func_358(int iParam0)//Position - 0xF50B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 20);
	}
}

int func_359(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xF52E
{
	func_368(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22473 = 0;
	Global_22432 = 1;
	Global_22439 = 0;
	Global_22434 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_22430 = 0;
	Global_22477 = 0;
	Global_22479 = 0;
	Global_2883585 = 0;
	return func_360(sParam3, iParam4, bParam7);
}

int func_360(char* sParam0, int iParam1, bool bParam2)//Position - 0xF57C
{
	Global_22426 = 0;
	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = 0;
					Global_21065 = 0;
				}
				else
				{
					func_367();
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
		if (func_118(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_366();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
			if (bParam2)
			{
				func_322();
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21066.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21032 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_365())
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
				if (!Global_79539)
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
			if (func_364())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
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
				if (BitTest(Global_8919, 9))
				{
					return 0;
				}
			}
			func_363();
			Global_22435 = bParam2;
		}
		Global_22427 = iParam1;
		StringCopy(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_362();
		func_361();
		return 1;
	}
	if (Global_22425 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22427 || iParam1 == Global_22427)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_367();
	}
	return 0;
}

void func_361()//Position - 0xF84A
{
	if (!func_307())
	{
		return;
	}
	if (Global_22431)
	{
		MemCopy(&(Global_1972230.f_1), {Global_22044}, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}
}

void func_362()//Position - 0xF881
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21293[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
}

void func_363()//Position - 0xF8B2
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
}

int func_364()//Position - 0xF947
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_365()//Position - 0xF96E
{
	int iVar0;
	int iVar1;
	
	if (Global_79539)
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

void func_366()//Position - 0xFA07
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21714[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21714[iVar0 /*10*/].f_1), "", 24);
		Global_21714[iVar0 /*10*/].f_7 = 0;
		Global_21714[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
}

void func_367()//Position - 0xFA5E
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9) || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

void func_368(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xFAB5
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	StringCopy(&Global_22495, sParam2, 24);
	Global_23414 = iParam5;
	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}
}

int func_369(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xFB0B
{
	func_368(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22473 = 1;
	Global_22432 = 1;
	Global_22439 = 0;
	Global_22434 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_22430 = 0;
	Global_22477 = 0;
	Global_22479 = 0;
	Global_2883585 = 0;
	return func_360(sParam3, iParam4, bParam7);
}

int func_370(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0xFB59
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_372(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_371();
		func_356();
		func_302();
		func_355();
		func_354();
		return 1;
	}
	return 0;
}

void func_371()//Position - 0xFBAB
{
	Global_23443 = 0;
}

bool func_372(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xFBB7
{
	func_368(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22473 = 0;
	Global_22432 = 1;
	Global_22439 = 0;
	Global_22434 = 1;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_22430 = 0;
	Global_22477 = 1;
	Global_22479 = 0;
	StringCopy(&Global_22573, sParam5, 24);
	Global_2883585 = 0;
	return func_360(sParam3, iParam4, bParam8);
}

int func_373(var uParam0, char* sParam1, char* sParam2)//Position - 0xFC0C
{
	if (func_375(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_374();
		func_302();
		func_355();
		return 1;
	}
	return 0;
}

void func_374()//Position - 0xFC37
{
	Global_1668409.f_40.f_9 = 2;
}

bool func_375(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFC48
{
	func_368(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_360(sParam2, iParam3, 0);
}

void func_376()//Position - 0xFC96
{
	Global_1668409.f_55 = Global_1668409.f_40.f_1;
	Global_1668409.f_55.f_1 = Global_1668409.f_40.f_10;
}

void func_377()//Position - 0xFCBC
{
	Global_1668409.f_40 = 1;
}

bool func_378()//Position - 0xFCCB
{
	return Global_1668409.f_40 == 1;
}

int func_379(int iParam0, int iParam1, int iParam2)//Position - 0xFCDB
{
	if (!func_380(iParam0))
	{
		return 0;
	}
	if (Global_1668409.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1668409.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_380(int iParam0)//Position - 0xFD1A
{
	if (!func_381())
	{
		return 0;
	}
	if (!Global_1668409.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_381()//Position - 0xFD42
{
	if (Global_1668409.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_382(var uParam0)//Position - 0xFD59
{
	if (func_385())
	{
		return 0;
	}
	if (func_113())
	{
		return 0;
	}
	if (func_392(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928799 || func_384())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_383())
		{
			return 0;
		}
	}
	return 1;
}

bool func_383()//Position - 0xFDBA
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1685088);
}

int func_384()//Position - 0xFDCE
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_385()//Position - 0xFDE6
{
	return func_364();
}

int func_386(int iParam0, int iParam1, int iParam2)//Position - 0xFDF2
{
	if (!func_113())
	{
		return 0;
	}
	return func_379(iParam0, iParam1, iParam2);
}

int func_387(char* sParam0, char* sParam1)//Position - 0xFE10
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_388()//Position - 0xFE2A
{
	return "TXTMSG";
}

int func_389(struct<3> Param0, char* sParam3, char* sParam4)//Position - 0xFE36
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2739811.f_4101[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2739811.f_4101[iVar0 /*26*/].f_4)))
				{
					Global_2739811.f_4101[iVar0 /*26*/] = 1;
					Global_2739811.f_4101[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2739811.f_4101[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2739811.f_4101[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_35(Global_2739811.f_4101[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2739811.f_4101[iVar0 /*26*/] = 1;
				Global_2739811.f_4101[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2739811.f_4101[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2739811.f_4101[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_390(int iParam0)//Position - 0xFF37
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_391(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xFF49
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8919, 10);
	iVar0 = 3;
	if (func_346(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9643 = iParam10;
			Global_9546[3 /*6*/] = { func_345(iParam0) };
			Global_9623 = iParam0;
			StringCopy(&Global_9624, sParam5, 64);
			MISC::SET_BIT(&Global_8919, 1);
			MISC::SET_BIT(&Global_8919, 7);
		}
		return 1;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0xFFF5
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_393()//Position - 0x1004F
{
	return func_381();
}

void func_394()//Position - 0x1005B
{
	if (func_73())
	{
		if (!iLocal_353 == Local_390.f_32)
		{
			Global_2739811.f_1774 = { Local_378 };
			func_395();
			iLocal_353 = Local_390.f_32;
		}
	}
}

void func_395()//Position - 0x10093
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2739811.f_1793[iVar1 /*4*/]), "", 16);
		if (!Global_2739811.f_1774[iVar1] == -1 && Global_2739811.f_1774.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2739811.f_1793[iVar0 /*4*/]), func_396(Global_2739811.f_1774[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2739811.f_1814 = iVar0;
}

char* func_396(int iParam0, bool bParam1)//Position - 0x1010E
{
	switch (iParam0)
	{
		case 0:
			return func_397(bParam1, "IMPEX_2020_0B" /* GXT: Ubermacht Zion */, "IMPEX_2020_0" /* GXT: an Ubermacht Zion */);
		
		case 1:
			return func_397(bParam1, "IMPEX_2020_1B" /* GXT: Benefactor Serrano */, "IMPEX_2020_1" /* GXT: a Benefactor Serrano */);
		
		case 2:
			return func_397(bParam1, "IMPEX_2020_2B" /* GXT: Ocelot Jackal */, "IMPEX_2020_2" /* GXT: an Ocelot Jackal */);
		
		case 3:
			return func_397(bParam1, "IMPEX_2020_3B" /* GXT: Benefactor Schafter */, "IMPEX_2020_3" /* GXT: a Benefactor Schafter */);
		
		case 4:
			return func_397(bParam1, "IMPEX_2020_4B" /* GXT: Benefactor Dubsta */, "IMPEX_2020_4" /* GXT: a Benefactor Dubsta */);
		
		case 5:
			return func_397(bParam1, "IMPEX_2020_5B" /* GXT: Ocelot F620 */, "IMPEX_2020_5" /* GXT: an Ocelot F620 */);
		
		case 6:
			return func_397(bParam1, "IMPEX_2020_6B" /* GXT: Benefactor Schwartzer */, "IMPEX_2020_6" /* GXT: a Benefactor Schwartzer */);
		
		case 7:
			return func_397(bParam1, "IMPEX_2020_7B" /* GXT: Obey Rocoto */, "IMPEX_2020_7" /* GXT: an Obey Rocoto */);
		
		case 8:
			return func_397(bParam1, "IMPEX_2020_8B" /* GXT: Ubermacht Sentinel */, "IMPEX_2020_8" /* GXT: an Ubermacht Sentinel */);
		
		case 9:
			return func_397(bParam1, "IMPEX_2020_9B" /* GXT: Lampadati Felon GT */, "IMPEX_2020_9" /* GXT: a Lampadati Felon GT */);
		
		case 10:
			return func_397(bParam1, "IMPEX_2020_10B" /* GXT: Pfister Comet */, "IMPEX_2020_10" /* GXT: a Pfister Comet */);
		
		case 11:
			return func_397(bParam1, "IMPEX_2020_11B" /* GXT: Bravado Banshee */, "IMPEX_2020_11" /* GXT: a Bravado Banshee */);
		
		case 12:
			return func_397(bParam1, "IMPEX_2020_12B" /* GXT: Benefactor Surano */, "IMPEX_2020_12" /* GXT: a Benefactor Surano */);
		
		case 13:
			return func_397(bParam1, "IMPEX_2020_13B" /* GXT: Invetero Coquette */, "IMPEX_2020_13" /* GXT: an Invetero Coquette */);
		
		case 14:
			return func_397(bParam1, "IMPEX_2020_14B" /* GXT: Grotti Carbonizzare */, "IMPEX_2020_14" /* GXT: a Grotti Carbonizzare */);
		
		case 15:
			return func_397(bParam1, "IMPEX_2020_15B" /* GXT: Dewbauchee Exemplar */, "IMPEX_2020_15" /* GXT: a Dewbauchee Exemplar */);
		
		case 16:
			return func_397(bParam1, "IMPEX_2020_16B" /* GXT: Benefactor Feltzer */, "IMPEX_2020_16" /* GXT: a Benefactor Feltzer */);
		
		case 17:
			return func_397(bParam1, "IMPEX_2020_17B" /* GXT: Vapid Bullet */, "IMPEX_2020_17" /* GXT: a Vapid Bullet */);
		
		case 18:
			return func_397(bParam1, "IMPEX_2020_18B" /* GXT: Enus Super Diamond */, "IMPEX_2020_18" /* GXT: an Enus Super Diamond */);
		
		case 19:
			return func_397(bParam1, "IMPEX_2020_19B" /* GXT: Pegassi Infernus */, "IMPEX_2020_19" /* GXT: a Pegassi Infernus */);
		
		default:
	}
	return "";
}

char* func_397(bool bParam0, char* sParam1, char* sParam2)//Position - 0x102EC
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_398()//Position - 0x10303
{
	int iVar0;
	
	if (!iLocal_122)
	{
		if (!func_403(PLAYER::PLAYER_ID(), 1))
		{
			if (!func_126(PLAYER::PLAYER_ID(), 0))
			{
				if (!Local_390.f_28 == -1)
				{
					if (!iLocal_355 == func_37(Local_390.f_28))
					{
						if (!func_402(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_401(PLAYER::PLAYER_ID()))
							{
								iLocal_355 = func_37(Local_390.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_365)
								{
									ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_365[iVar0], iLocal_355);
									iVar0++;
								}
								iLocal_122 = 1;
								if (Global_1981865)
								{
									STREAMING::REQUEST_MODEL(iLocal_355);
								}
								func_400();
								func_399(iLocal_355);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_403(PLAYER::PLAYER_ID(), 1) || (Local_390.f_28 > -1 && !iLocal_355 == func_37(Local_390.f_28))) || func_402(PLAYER::PLAYER_PED_ID())) || func_126(PLAYER::PLAYER_ID(), 0)) || func_401(PLAYER::PLAYER_ID()))
	{
		if (Global_1981865)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_355);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_365)
		{
			ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_365[iVar0]);
			iVar0++;
		}
		func_400();
		iLocal_355 = 0;
		iLocal_122 = 0;
	}
}

void func_399(int iParam0)//Position - 0x1043B
{
	if (BitTest(Local_390.f_23, 0))
	{
		if (iParam0 == Local_390.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_308[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.5488f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.4104f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.0597f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.5134f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.9534f, -1675.1797f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_319 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_308[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.0012f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.8711f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.0275f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.9534f, -1675.1797f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.6074f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.7593f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.7963f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.5525f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_319 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_308[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.3716f, 3377.2168f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.8566f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.2446f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.3317f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.5525f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.4724f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.8867f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_319 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_308[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.0275f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.9534f, -1675.1797f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.0012f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.8711f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_308[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.1803f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_319 = 1;
			break;
	}
}

void func_400()//Position - 0x10BE3
{
	int iVar0;
	
	if (iLocal_319)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_308[iVar0]))
		{
			VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_308[iVar0]);
		}
		iLocal_308[iVar0] = 0;
		iVar0++;
	}
	iLocal_319 = 0;
}

int func_401(int iParam0)//Position - 0x10C29
{
	if (iParam0 != func_125())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_124(Global_2657991[iParam0 /*467*/].f_324.f_8) == 11;
			}
		}
	}
	return 0;
}

bool func_402(int iParam0)//Position - 0x10C70
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_152811;
}

bool func_403(int iParam0, bool bParam1)//Position - 0x10C9B
{
	if (func_87() != 0)
	{
		return func_404(iParam0) != 0;
	}
	return func_142(iParam0, bParam1, 0);
}

int func_404(int iParam0)//Position - 0x10CC2
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2657991[iParam0 /*467*/].f_1;
	}
	return 0;
}

void func_405()//Position - 0x10CE4
{
	var uVar0;
	
	if (!func_537(&uLocal_340))
	{
		func_536(&uLocal_340, 0, 0);
	}
	else if (func_535(&uLocal_340, 250, 0))
	{
		func_49(&uLocal_340);
		if (func_420(1, 0))
		{
			if (!BitTest(uLocal_348, 5) && !func_419())
			{
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((func_418() || func_419()) || func_414())
				{
					if (!func_413(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (!func_412(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_16(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (func_407(&uVar0))
								{
									if (!BitTest(uLocal_348, 2))
									{
										if (func_275() && SYSTEM::TIMERA() > 500)
										{
											func_173("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */, -1);
											MISC::SET_BIT(&uLocal_348, 2);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!BitTest(uLocal_348, 8))
								{
									if (func_275() && SYSTEM::TIMERA() > 500)
									{
										func_173("IMPEX_CASH_FM" /* GXT: Simeon wants this vehicle but you don't have enough cash for a respray. */, -1);
										MISC::SET_BIT(&uLocal_348, 8);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!BitTest(uLocal_348, 11))
							{
								if (func_275() && SYSTEM::TIMERA() > 500)
								{
									func_173("IMPEX_WANTED_FM" /* GXT: Simeon wants this vehicle but he will not accept delivery if you have a Wanted Level. */, -1);
									MISC::SET_BIT(&uLocal_348, 11);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (!func_406())
							{
								if (!func_16(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!BitTest(uLocal_348, 3))
									{
										MISC::CLEAR_BIT(&uLocal_348, 7);
										if (func_275() && SYSTEM::TIMERA() > 2000)
										{
											if (Global_2739811.f_4653 == 0)
											{
												if (!func_267(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
												{
													func_173("IMPEX_DELIVER_FM" /* GXT: This vehicle is ready for Simeon. Deliver it to ~BLIP_SIMEON_FAMILY~ for cash. */, -1);
													MISC::SET_BIT(&uLocal_348, 3);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!BitTest(uLocal_348, 7))
								{
									if (func_275() && SYSTEM::TIMERA() > 2000)
									{
										func_173("IMPEX_RIG_FM" /* GXT: Simeon doesn't want this vehicle anymore as it's rigged with explosives. */, -1);
										MISC::SET_BIT(&uLocal_348, 7);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!BitTest(uLocal_348, 6))
							{
								if (func_275() && SYSTEM::TIMERA() > 2000)
								{
									func_173("IMPEX_WANTED_P" /* GXT: Simeon wants this vehicle but he will not accept delivery while you are with a prostitute. */, -1);
									MISC::SET_BIT(&uLocal_348, 6);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!BitTest(uLocal_348, 4))
						{
							if (func_275() && SYSTEM::TIMERA() > 5000)
							{
								func_173("IMPEX_WANTED_FM" /* GXT: Simeon wants this vehicle but he will not accept delivery if you have a Wanted Level. */, -1);
								MISC::SET_BIT(&uLocal_348, 4);
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				else
				{
					if (func_257("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
					{
						HUD::CLEAR_HELP(true);
					}
					MISC::CLEAR_BIT(&uLocal_348, 2);
					MISC::CLEAR_BIT(&uLocal_348, 3);
					MISC::CLEAR_BIT(&uLocal_348, 4);
					MISC::CLEAR_BIT(&uLocal_348, 6);
					MISC::CLEAR_BIT(&uLocal_348, 7);
					MISC::CLEAR_BIT(&uLocal_348, 8);
					MISC::CLEAR_BIT(&uLocal_348, 11);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (func_257("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
				{
					HUD::CLEAR_HELP(true);
				}
				MISC::CLEAR_BIT(&uLocal_348, 2);
				MISC::CLEAR_BIT(&uLocal_348, 3);
				MISC::CLEAR_BIT(&uLocal_348, 4);
				MISC::CLEAR_BIT(&uLocal_348, 6);
				MISC::CLEAR_BIT(&uLocal_348, 7);
				MISC::CLEAR_BIT(&uLocal_348, 8);
				MISC::CLEAR_BIT(&uLocal_348, 11);
				if (SYSTEM::TIMERA() > 0)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else if (func_257("IMPEX_FSPRAY_FM" /* GXT: This vehicle is wanted by Simeon. Get it resprayed ~BLIP_CAR_MOD_SHOP~ and deliver it to him at the docks for cash. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_406()//Position - 0x11042
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar3, iVar1, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false), false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false);
					if (!PED::IS_PED_A_PLAYER(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_407(var uParam0)//Position - 0x110B6
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			*uParam0 = func_408(iVar0, 0);
			if (!MONEY::NETWORK_CAN_SPEND_MONEY((400 + *uParam0), false, false, true, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_408(int iParam0, bool bParam1)//Position - 0x11113
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (func_411(PLAYER::PLAYER_ID()) && !bParam1)
	{
		return 0;
	}
	fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (VEHICLE::GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(iParam0))
	{
		iVar8 += 50;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, true))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, true))
	{
		iVar8 += 25;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, false))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, false))
	{
		iVar8 += 25;
	}
	if (!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iParam0))
	{
		iVar10 += 20;
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 4))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (VEHICLE::GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	if (VEHICLE::GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar2, false))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (AUDIO::IS_VEHICLE_AUDIBLY_DAMAGED(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_410(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_12010 /* Tunable: LOW_SUPERMOD_REPAIR_VALUE_MULTI */));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_12010 /* Tunable: LOW_SUPERMOD_REPAIR_VALUE_MULTI */)))
		{
			iVar4 = Global_262145.f_12008 /* Tunable: LOW_SUPERMOD_REPAIR_SERVICE_COST */;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12009 /* Tunable: LOW_SUPERMOD_REPAIR_COST_MAX */)
		{
			iVar0 = Global_262145.f_12009 /* Tunable: LOW_SUPERMOD_REPAIR_COST_MAX */;
		}
	}
	else if (func_409(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_12013 /* Tunable: IE_SV_REPAIR_VALUE_MULTI */));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_12013 /* Tunable: IE_SV_REPAIR_VALUE_MULTI */)))
		{
			iVar4 = Global_262145.f_12011 /* Tunable: IE_SV_REPAIR_SERVICE_COST */;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12012 /* Tunable: IE_SV_REPAIR_COST_MAX */)
		{
			iVar0 = Global_262145.f_12012 /* Tunable: IE_SV_REPAIR_COST_MAX */;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_409(int iParam0)//Position - 0x114AA
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_410(int iParam0, int iParam1)//Position - 0x114FB
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_411(int iParam0)//Position - 0x118DA
{
	if (iParam0 != func_125())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_124(Global_2657991[iParam0 /*467*/].f_324.f_8) == 22;
			}
		}
	}
	return 0;
}

bool func_412(int iParam0)//Position - 0x11921
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_413(int iParam0)//Position - 0x11933
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_414()//Position - 0x11965
{
	int iVar0;
	
	if (func_546())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!func_417(iVar0, 1) && !func_416(iVar0, 1))
		{
			if (func_415(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)//Position - 0x119B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_78(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_390.f_35[iVar1] == iVar0)
			{
				if (!func_535(&(Local_390.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_416(int iParam0, bool bParam1)//Position - 0x11A0A
{
	if (Global_79539)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive"))
				{
					return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_417(int iParam0, bool bParam1)//Position - 0x11A5E
{
	if (Global_79539)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_418()//Position - 0x11A9D
{
	int iVar0;
	
	if (func_546())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_1919412)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!func_417(iVar0, 1) && !func_416(iVar0, 1))
			{
				if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true))
					{
						if (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_36 <= 0)
						{
							if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1919411)
								{
									if (bLocal_320)
									{
										bLocal_320 = false;
									}
									if (func_77(&Local_378, ENTITY::GET_ENTITY_MODEL(iVar0)))
									{
										Global_2739811.f_1818 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_320)
					{
						bLocal_320 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_419()//Position - 0x11B59
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Local_390.f_23, 0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_390.f_22))
			{
				if (func_4(Local_390.f_22))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_390.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_420(bool bParam0, bool bParam1)//Position - 0x11BA7
{
	bool bVar0;
	
	bVar0 = true;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_142(PLAYER::PLAYER_ID(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_116())
		{
			bVar0 = false;
		}
	}
	if (!func_15(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_74(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	if (func_126(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_421()//Position - 0x11C49
{
	int iVar0;
	
	switch (iLocal_135)
	{
		case 0:
			if (!func_142(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (!func_537(&uLocal_136) || func_535(&uLocal_136, 2000, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.4033f, -3113.5908f, 4.5453f) < 400f)
						{
							func_424(&uLocal_140, 4, iLocal_134, "MECHANIC_IMP", 0, 1);
							iLocal_597 = 0;
							iLocal_135++;
						}
					}
					func_49(&uLocal_136);
					func_536(&uLocal_136, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_142(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.4033f, -3113.5908f, 4.5453f) < 600f)
					{
						if (bLocal_119)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1204.2238f, -3121.5332f, 4.357823f, 1204.5209f, -3107.603f, 8.653814f, 5.1875f, false, true, 0))
								{
									if (!iLocal_597)
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										if (func_408(iVar0, 0) > 500)
										{
											sLocal_598 = "FM_IEPOOR";
										}
										else
										{
											sLocal_598 = "FM_IEGOOD";
										}
										iLocal_597 = 1;
									}
									else if (func_423(&uLocal_140, "FM_1AU", sLocal_598, 12, 0, 0, 0))
									{
										iLocal_305 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										iLocal_135++;
										iLocal_597 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_422();
						iLocal_135 = 0;
					}
				}
				else
				{
					func_422();
					iLocal_135 = 0;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_142(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.4033f, -3113.5908f, 4.5453f) < 600f)
					{
						if (bLocal_119)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_305)
								{
									iLocal_135 = 1;
								}
							}
						}
					}
					else
					{
						func_422();
						iLocal_135 = 0;
					}
				}
				else
				{
					func_422();
					iLocal_135 = 0;
				}
			}
			break;
	}
}

void func_422()//Position - 0x11E5E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_XMech_02"));
		iVar0 = iLocal_134;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

bool func_423(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11E82
{
	func_368(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 1;
	return func_360(sParam2, iParam3, 0);
}

void func_424(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x11ED0
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79539)
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

void func_425()//Position - 0x11F6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_420(1, 1))
	{
		switch (Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1)
		{
			case 0:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					bVar7 = func_414();
					if ((func_418() || func_419()) || bVar7)
					{
						if (!func_406())
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (!func_524())
								{
									if (bLocal_118)
									{
										bLocal_118 = false;
									}
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AllowModSprayRepair", 2))
									{
										if (!DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") || (DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") && DECORATOR::DECOR_GET_BOOL(iVar3, "AllowModSprayRepair") == 0))
										{
											DECORATOR::DECOR_SET_BOOL(iVar3, "AllowModSprayRepair", true);
										}
									}
									if (!iLocal_124)
									{
										if (func_523(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_599 = iVar3;
									if (BitTest(uLocal_595, 15))
									{
										MISC::CLEAR_BIT(&uLocal_595, 15);
									}
									if (BitTest(uLocal_348, 9))
									{
										MISC::CLEAR_BIT(&uLocal_348, 9);
									}
									if (BitTest(uLocal_348, 12))
									{
										MISC::CLEAR_BIT(&uLocal_348, 12);
									}
									if (BitTest(uLocal_348, 10))
									{
										MISC::CLEAR_BIT(&uLocal_348, 10);
									}
									if (!BitTest(uLocal_595, 12))
									{
										if (bVar7)
										{
											MISC::SET_BIT(&uLocal_595, 12);
										}
									}
									else if (!bVar7)
									{
										MISC::CLEAR_BIT(&uLocal_595, 12);
									}
									if (func_412(iVar3))
									{
										if (!func_16(iVar3))
										{
											bLocal_111 = true;
											if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (bLocal_117)
												{
													bLocal_117 = false;
												}
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													bLocal_114 = true;
												}
											}
											else if (func_80())
											{
												if (bLocal_114)
												{
													bLocal_114 = false;
												}
												bLocal_117 = true;
											}
											bLocal_112 = false;
											bLocal_113 = false;
											bLocal_115 = false;
											bLocal_116 = false;
											bLocal_118 = false;
											bLocal_119 = true;
											if (func_522(joaat("MP_GAR_SIMEON"), 18))
											{
												bLocal_109 = true;
											}
											iLocal_361 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
											if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_361))
											{
												if (func_267(iLocal_361, 0))
												{
													if (!BitTest(uLocal_595, 17))
													{
														MISC::SET_BIT(&uLocal_595, 17);
													}
													else if (func_267(iLocal_361, 1))
													{
														Var9 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_361) };
														if (ENTITY::GET_ENTITY_SPEED(iLocal_361) < 0.5f || MISC::ABSF(Var9.f_1) < 1.3f)
														{
															func_521();
															func_512(PLAYER::PLAYER_ID(), 0, 16388, 0);
															if (func_419())
															{
																MISC::SET_BIT(&uLocal_595, 4);
																MISC::SET_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
															}
															if (func_418() || func_414())
															{
																MISC::SET_BIT(&uLocal_595, 6);
															}
															if (func_511())
															{
																bLocal_108 = true;
															}
															else
															{
																bLocal_108 = false;
															}
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_361, 2);
															if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_361))
															{
																ENTITY::SET_ENTITY_PROOFS(iLocal_361, true, true, true, true, true, false, false, false);
															}
															Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = func_78(ENTITY::GET_ENTITY_MODEL(iLocal_361));
															Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_356[iVar4] = func_125();
																if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_361, iVar1, false))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_361, iVar1, false)))
																	{
																		if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_361, iVar1, false), false))
																		{
																			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_361, iVar1, false);
																			if (PED::IS_PED_A_PLAYER(iVar0))
																			{
																				if (func_15(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 0))
																				{
																					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
																					{
																						iLocal_356[iVar4] = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_327 = func_510(ENTITY::GET_ENTITY_MODEL(iLocal_361));
															iLocal_328 = func_408(iLocal_361, 0);
															fLocal_329 = SYSTEM::TO_FLOAT((iLocal_327 - iLocal_328));
															fLocal_329 = (fLocal_329 * Global_262145.f_2396 /* Tunable: EARNINGS_IMPORT_EXPORT_MODIFIER */);
															if (BitTest(uLocal_595, 4))
															{
																fLocal_329 = (fLocal_329 * 1.3f);
															}
															fLocal_329 = (fLocal_329 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_330 = 500f;
															func_509();
															func_181(0);
															func_508(1248, 1, -1);
															if (func_257("IMPEX_DELIVER_FM" /* GXT: This vehicle is ready for Simeon. Deliver it to ~BLIP_SIMEON_FAMILY~ for cash. */))
															{
																HUD::CLEAR_HELP(true);
															}
															MISC::CLEAR_BIT(&uLocal_595, 12);
															iVar6 = func_83(1200, -1);
															if (!BitTest(iVar6, 1))
															{
																MISC::SET_BIT(&iVar6, 1);
																func_149(1200, iVar6, -1, 1);
															}
															else if (!BitTest(iVar6, 2))
															{
																MISC::SET_BIT(&iVar6, 2);
																func_149(1200, iVar6, -1, 1);
															}
															func_507();
															iLocal_331 = 0;
															iLocal_331 = SYSTEM::ROUND(fLocal_329);
															iLocal_331 = (iLocal_331 - (iLocal_331 % 25));
															if (iLocal_600 == iVar3)
															{
																iLocal_331 = (iLocal_331 + iLocal_333);
															}
															if (!BitTest(uLocal_595, 4))
															{
																if (iLocal_331 > Global_262145.f_164 /* Tunable: IMP_EXP_EARN_CAP */)
																{
																	iLocal_331 = Global_262145.f_164 /* Tunable: IMP_EXP_EARN_CAP */;
																}
															}
															else if (iLocal_331 > Global_262145.f_164 /* Tunable: IMP_EXP_EARN_CAP */)
															{
																iLocal_331 = Global_262145.f_164 /* Tunable: IMP_EXP_EARN_CAP */;
															}
															iLocal_332 = 0;
															fLocal_330 = (fLocal_330 * Global_262145.f_3931 /* Tunable: XP_TUNABLE_IMPORTEXPORT */);
															iLocal_332 = SYSTEM::ROUND(fLocal_330);
															MISC::CLEAR_BIT(&uLocal_595, 17);
															iLocal_362 = iLocal_361;
															iLocal_364 = ENTITY::GET_ENTITY_MODEL(iLocal_361);
															if (!BitTest(uLocal_595, 4))
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(19, iLocal_332, iLocal_331, iLocal_361);
															}
															else
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(120, iLocal_332, iLocal_331, iLocal_361);
															}
															func_506(19, 1);
															func_505();
															func_540();
														}
														else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
														{
															func_512(PLAYER::PLAYER_ID(), 0, 16388, 0);
														}
													}
												}
												else if (BitTest(uLocal_595, 17))
												{
													MISC::CLEAR_BIT(&uLocal_595, 17);
												}
											}
										}
										else
										{
											if (bLocal_111)
											{
												bLocal_111 = false;
											}
											if (bLocal_119)
											{
												bLocal_119 = false;
											}
											if (bLocal_114)
											{
												bLocal_114 = false;
											}
											if (bLocal_117)
											{
												bLocal_117 = false;
											}
											if (bLocal_118)
											{
												bLocal_118 = false;
											}
										}
									}
									else if (!func_16(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										if (func_407(&iVar8))
										{
											if (!func_413(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
											{
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													if (iLocal_600 != iVar3)
													{
														iLocal_600 = iVar3;
														iLocal_333 = 0;
													}
													else if (iLocal_333 != iVar8)
													{
														if (iLocal_333 < iVar8)
														{
															iLocal_333 = iVar8;
														}
													}
												}
												if (!bLocal_112)
												{
													bLocal_112 = true;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													if (func_80())
													{
														if (bLocal_113)
														{
															bLocal_113 = false;
														}
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															if (func_408(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0) > 0)
															{
																if (!bLocal_116)
																{
																	bLocal_116 = true;
																}
															}
															else
															{
																if (bLocal_116)
																{
																	bLocal_116 = false;
																}
																if (!bLocal_115)
																{
																	bLocal_115 = true;
																}
															}
														}
													}
												}
												else if (!func_80())
												{
													if (bLocal_115)
													{
														bLocal_115 = false;
													}
													if (bLocal_116)
													{
														bLocal_116 = false;
													}
													if (!bLocal_113)
													{
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															bLocal_113 = true;
														}
													}
												}
											}
											else
											{
												func_504();
											}
										}
										else
										{
											func_504();
										}
									}
									else
									{
										func_504();
										if (bLocal_119)
										{
											bLocal_119 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iLocal_599 != iVar3)
								{
									if (!iLocal_124)
									{
										if (func_523(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_599 = iVar3;
								}
								if (!bLocal_118)
								{
									func_504();
									bLocal_118 = true;
								}
							}
						}
					}
					else
					{
						func_504();
						if (bLocal_119)
						{
							bLocal_119 = false;
						}
						if (iLocal_124)
						{
							if (Local_390.f_33)
							{
								if (bLocal_129)
								{
									iLocal_124 = 0;
								}
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if ((func_257("IMPEX_NOT_NEED" /* GXT: ~s~Simeon doesn't need this vehicle. */) || func_257("IMPEX_NO_MORE" /* GXT: ~s~Simeon doesn't need this vehicle anymore. */)) || func_257("IMPEX_NOT_PVEH" /* GXT: ~s~Simeon doesn't want Personal Vehicles. */))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_417(iVar2, 1))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar2, "Player_Vehicle"))
								{
									if (DECORATOR::DECOR_GET_INT(iVar2, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) || iVar2 == iLocal_599)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
										{
											if (func_275())
											{
												if (!BitTest(uLocal_595, 15))
												{
													if (bVar7 || func_77(&Local_378, ENTITY::GET_ENTITY_MODEL(iVar2)))
													{
														func_173("IMPEX_NOT_PVEH" /* GXT: ~s~Simeon doesn't want Personal Vehicles. */, -1);
														MISC::SET_BIT(&uLocal_595, 15);
													}
												}
											}
										}
									}
									else if (BitTest(uLocal_595, 15))
									{
										if (iVar2 != iLocal_599)
										{
											MISC::CLEAR_BIT(&uLocal_595, 15);
										}
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_595, 15))
							{
								if (iVar2 != iLocal_599)
								{
									MISC::CLEAR_BIT(&uLocal_595, 15);
								}
							}
							if (bLocal_125)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_522(joaat("MP_GAR_SIMEON"), 18))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (func_267(iVar2, 0))
									{
										if (!iLocal_123)
										{
											func_181(1);
											iLocal_123 = 1;
										}
										bLocal_109 = true;
									}
								}
								else if (iLocal_123)
								{
									func_181(0);
									iLocal_123 = 0;
									bLocal_109 = false;
								}
							}
						}
						if (func_522(joaat("MP_GAR_SIMEON"), 18))
						{
							if (func_275())
							{
								if (func_417(iVar2, 1))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
									{
										if (!BitTest(uLocal_348, 10))
										{
											func_173("IMPEX_NOT_PVEH" /* GXT: ~s~Simeon doesn't want Personal Vehicles. */, -1);
											MISC::SET_BIT(&uLocal_348, 10);
										}
									}
								}
								else if (func_77(&Local_378, ENTITY::GET_ENTITY_MODEL(iVar2)))
								{
									if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar2, 0))
									{
										if (!BitTest(uLocal_348, 12))
										{
											func_173("IMPEX_NOT_CREW" /* GXT: Simeon doesn't want vehicles with Crew emblems applied. */, -1);
											MISC::SET_BIT(&uLocal_348, 12);
										}
									}
								}
								else if (!BitTest(uLocal_348, 9))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										func_173("IMPEX_NOT_NEED" /* GXT: ~s~Simeon doesn't need this vehicle. */, -1);
										MISC::SET_BIT(&uLocal_348, 9);
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_348, 9))
							{
								MISC::CLEAR_BIT(&uLocal_348, 9);
							}
							if (BitTest(uLocal_348, 10))
							{
								MISC::CLEAR_BIT(&uLocal_348, 10);
							}
							if (BitTest(uLocal_348, 12))
							{
								MISC::CLEAR_BIT(&uLocal_348, 12);
							}
							if (BitTest(uLocal_595, 12))
							{
								if (func_275())
								{
									func_173("IMPEX_NO_MORE" /* GXT: ~s~Simeon doesn't need this vehicle anymore. */, -1);
									MISC::CLEAR_BIT(&uLocal_595, 12);
									func_121();
								}
							}
						}
					}
				}
				else
				{
					func_504();
					if (bLocal_119)
					{
						bLocal_119 = false;
					}
					if (iLocal_124)
					{
						iLocal_124 = 0;
					}
				}
				break;
			
			case 1:
				if (func_15(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_174(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("MP_GAR_SIMEON"), &uLocal_351, 0, 500, 1, 0))
					{
						Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 2;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_595, 4);
					MISC::CLEAR_BIT(&uLocal_595, 6);
					Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_500(17, 1, -1);
					if (BitTest(uLocal_595, 4))
					{
						MISC::SET_BIT(&(Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
						func_499();
					}
					else
					{
						func_497();
					}
					if (bLocal_108)
					{
						if (BitTest(uLocal_595, 6))
						{
							Local_92.f_3 = 2092359122;
						}
						else
						{
							Local_92.f_3 = -1279215969;
						}
						Local_92.f_4 = Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
						Local_92.f_11 = iLocal_356[0];
						Local_92.f_12 = iLocal_356[1];
						Local_92.f_13 = iLocal_356[2];
						Local_92.f_14 = iLocal_356[3];
						if (!BitTest(uLocal_595, 6))
						{
						}
					}
					MISC::CLEAR_BIT(&uLocal_595, 6);
					func_495(4, iLocal_331);
					func_479(&iLocal_331, 1);
					if (iLocal_331 > 0)
					{
						if (func_478())
						{
							func_467(joaat("SERVICE_EARN_IMPORT_EXPORT"), iLocal_331, &iVar12, 0, 0, 0);
							Global_4536600[iVar12 /*84*/].f_3 = iLocal_364;
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_331, iLocal_364);
						}
					}
					if (iLocal_328 > 0)
					{
						func_466("IMPEX_PASS" /* GXT: Cash for vehicle $~1~. */, iLocal_331, 7000, 0);
					}
					else
					{
						func_466("IMPEX_PASS" /* GXT: Cash for vehicle $~1~. */, iLocal_331, 7000, 0);
					}
					func_432(2, "XPT_IMPEXP" /* GXT: ~g~+~1~ ~a~:~s~ Import Export */, joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_IMPORT_EXPORT_DELIVERY"), iLocal_332, 1, -1, 0);
					func_431(29);
					func_429(45, 1);
					func_512(PLAYER::PLAYER_ID(), 1, 0, 0);
					Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
					Local_466[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = -1;
					MISC::CLEAR_BIT(&uLocal_595, 4);
					iLocal_130 = 1;
					func_426(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_403(PLAYER::PLAYER_ID(), 1))
		{
			if (!bLocal_125)
			{
				if (iLocal_123)
				{
					func_181(0);
					iLocal_123 = 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_522(joaat("MP_GAR_SIMEON"), 18))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_267(iVar2, 0))
				{
					if (!iLocal_123)
					{
						func_181(1);
						iLocal_123 = 1;
					}
					bLocal_109 = true;
				}
			}
			else if (iLocal_123)
			{
				func_181(0);
				iLocal_123 = 0;
				bLocal_109 = false;
			}
		}
		if (bLocal_112)
		{
			bLocal_112 = false;
		}
		if (bLocal_113)
		{
			bLocal_113 = false;
		}
		if (bLocal_115)
		{
			bLocal_115 = false;
		}
		if (bLocal_116)
		{
			bLocal_116 = false;
		}
	}
}

void func_426(int iParam0, int iParam1, int iParam2)//Position - 0x12B7F
{
	int iVar0;
	
	if (func_428(iParam1, iParam2))
	{
		iVar0 = func_427();
		Global_2696309[iVar0] = iParam1;
		Global_2696320[iVar0] = iParam0;
	}
}

int func_427()//Position - 0x12BAC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696309[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_428(int iParam0, var uParam1)//Position - 0x12BE1
{
	if (Global_1575072)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575084) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_429(int iParam0, int iParam1)//Position - 0x12C67
{
	int iVar0;
	
	if (!func_430())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2738865[iVar0 /*6*/] == iParam0)
		{
			if (Global_1574749.f_4[iVar0] == -1)
			{
				Global_1574749.f_4[iVar0] = iParam0;
				Global_1574749.f_1 = 1;
				Global_1574749 = iParam1;
				return;
			}
		}
		iVar0++;
	}
}

int func_430()//Position - 0x12CC3
{
	if (Global_262145.f_34959 /* Tunable: 511978708 */)
	{
		return 1;
	}
	return 0;
}

void func_431(int iParam0)//Position - 0x12CDD
{
	int iVar0;
	
	if (Global_262145.f_9090 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_534() /*5571*/].f_681.f_4245[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_432(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12D40
{
	return func_433(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_433(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12D5C
{
	var uVar0;
	
	uVar0 = func_434(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_434(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x12D7F
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_457();
	if (func_456(sParam2))
	{
	}
	if (func_455())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_453(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_452(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_450(0, &iVar1);
					break;
				
				case 3:
					func_450(1, &iVar1);
					break;
				
				case 1:
					func_447(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369 /* Tunable: -9502162 */)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_508(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_442((func_446(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_2 != -1)
				{
					func_508(1166, iVar1, -1);
				}
				func_439(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_435((func_437(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_435((func_437(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_435(int iParam0)//Position - 0x12EED
{
	if (func_455())
	{
		Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_5 = iParam0;
		func_436(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_436(int iParam0, int iParam1)//Position - 0x12F18
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_437(int iParam0)//Position - 0x12F34
{
	if (iParam0 > -1)
	{
		if (func_15(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_438(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845221[iParam0 /*889*/].f_206.f_5;
			}
		}
		else
		{
			return func_438(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x12F85
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_439(int iParam0)//Position - 0x12FA3
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_207(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_440(func_441(&Var0));
			if (iVar13 == 0)
			{
				func_436(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_438(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_436(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_438(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_436(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_438(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_436(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_438(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_436(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_438(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_440(int iParam0)//Position - 0x1306D
{
	if (iParam0 == func_438(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_438(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_438(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_438(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_438(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_441(var* uParam0)//Position - 0x130E3
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2696358;
		}
	}
	return Global_2696358;
}

void func_442(int iParam0, int iParam1, int iParam2)//Position - 0x13106
{
	if (func_455())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_83(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_83(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_INITIALISE"), joaat("XPCATEGORY_LIVE_RP_RESET"));
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_260(PLAYER::PLAYER_ID()))
		{
			Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_1 = iParam0;
			Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_206.f_6 = func_443(iParam0, 1);
		}
		func_149(640, iParam0, -1, 1);
		func_149(641, func_443(iParam0, 1), -1, 1);
		func_426(-1109644434, 7, 0);
	}
}

int func_443(int iParam0, bool bParam1)//Position - 0x13218
{
	if (bParam1)
	{
	}
	return func_444(iParam0, 0);
}

int func_444(int iParam0, int iParam1)//Position - 0x1322C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_445(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_445(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_445(int iParam0)//Position - 0x132E7
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_446(int iParam0)//Position - 0x13822
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_83(640, -1);
			}
			else if (func_260(iParam0))
			{
				return Global_1845221[iParam0 /*889*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_83(640, -1);
	}
	return 0;
}

void func_447(int iParam0)//Position - 0x13879
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_218(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_449(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_448(*iParam0, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_448(*iParam0, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_448(int iParam0, int iParam1)//Position - 0x13965
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_449(int iParam0, int iParam1)//Position - 0x13986
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707651 = { func_207(iParam0) };
		Global_2707664 = { func_207(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707651))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707664))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707581, 35, &Global_2707651);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707616, 35, &Global_2707664);
				if (Global_2707581 == Global_2707616)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_450(bool bParam0, int iParam1)//Position - 0x139F3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_15(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_449(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_15(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_451(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_449(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_448(*iParam1, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_448(*iParam1, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_451(int iParam0, int iParam1)//Position - 0x13B0B
{
	return SYSTEM::VDIST(func_30(iParam0), func_30(iParam1));
	return 0f;
}

int func_452(int iParam0)//Position - 0x13B27
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_448(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_453(int iParam0)//Position - 0x13B5E
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_446(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_446(PLAYER::PLAYER_ID());
		}
	}
	if (func_454(8000, 0, 0) > 0)
	{
		if (func_454(8000, 0, 0) < (iParam0 + func_446(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_454(8000, 0, 0) - func_446(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_454(int iParam0, bool bParam1, int iParam2)//Position - 0x13BC2
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_445(iParam0);
}

int func_455()//Position - 0x13BE8
{
	return 1;
}

int func_456(char* sParam0)//Position - 0x13BF1
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_457()//Position - 0x13C2A
{
	int iVar0;
	
	if (func_465(PLAYER::PLAYER_ID()) || func_464(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_462() || func_459(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_458(Global_4718592.f_187633))
	{
		if (Global_262145.f_7169 /* Tunable: ADVERSARY_LARGE_RP_CAP */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169 /* Tunable: ADVERSARY_LARGE_RP_CAP */;
		}
	}
	else if (Global_262145.f_7168 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_458(int iParam0)//Position - 0x13CF8
{
	return iParam0 == 89;
}

int func_459(int iParam0)//Position - 0x13D05
{
	return func_460(func_461(iParam0));
}

int func_460(int iParam0)//Position - 0x13D17
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_461(int iParam0)//Position - 0x13D31
{
	if (func_9(iParam0))
	{
		if (func_126(iParam0, 0))
		{
			return Global_1887549[iParam0 /*611*/].f_10.f_33;
		}
	}
	return -1;
}

int func_462()//Position - 0x13D5D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_34();
	}
	return func_463(Global_4718592.f_128476);
}

int func_463(int iParam0)//Position - 0x13D81
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_464(int iParam0)//Position - 0x13DBB
{
	return Global_2657991[iParam0 /*467*/].f_123 == 2;
}

bool func_465(int iParam0)//Position - 0x13DD0
{
	return Global_2657991[iParam0 /*467*/].f_123 == 7;
}

void func_466(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13DE5
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_467(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x13E04
{
	int iVar0;
	
	if (!func_478())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_468(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_468(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
		case joaat("SERVICE_SPEND_HACKER_ROBBERY_SETUP"):
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_468(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
		case 2131157548:
		case joaat("SERVICE_EARN_BAIL_OFFICE_PRISONER"):
		case joaat("SERVICE_EARN_BAIL_OFFICE_HIGH_VALUE_PRISONER"):
		case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_BOSS"):
		case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_GOON"):
		case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_BOSS"):
		case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_GOON"):
		case joaat("SERVICE_EARN_BOUNTY24_DISPATCH_WORK"):
		case joaat("SERVICE_EARN_BOUNTY24_PIZZA_DELIVERY"):
		case joaat("SERVICE_EARN_BOUNTY24_UFO_ABDUCTION"):
		case joaat("SERVICE_EARN_BOUNTY24_AWARD"):
		case joaat("SERVICE_EARN_ARMS_TRAFFICKING"):
		case joaat("SERVICE_EARN_OSCAR_GUZMAN_MISSION"):
		case joaat("SERVICE_EARN_HACKER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_HACKER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_MCKENZIE_AWARD"):
		case joaat("SERVICE_EARN_HACKER_DEN_AWARD"):
			func_468(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_468(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1493F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_478())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_28()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4538090 = 1;
			return 0;
		}
		if (Global_2697881)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4538091 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4536600[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_475(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4536600[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4536600[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4538071 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4538089 = 1;
			Global_4538092 = iParam4;
			Global_4538094 = iParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4538092 = iParam4;
			Global_4538094 = iParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_474(1, iParam4);
			Global_4538089 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_469(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14AEC
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_129.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_470(iParam0);
	}
}

void func_470(int iParam0)//Position - 0x14B24
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_478())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_473(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4536600[iParam0 /*84*/].f_65);
		}
		func_471(&(Global_4536600[iParam0 /*84*/]));
	}
}

void func_471(var uParam0)//Position - 0x14B78
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_65.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_65.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_472(&(uParam0->f_13));
	func_472(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_472(var uParam0)//Position - 0x14C7F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_473(int iParam0)//Position - 0x14CC7
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4536600[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_474(int iParam0, int iParam1)//Position - 0x14CF2
{
	Global_2699102 = iParam1;
	Global_2699101 = iParam0;
}

int func_475(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x14D06
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4536600[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_478())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4536600[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4536600[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4536600[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4536600[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4536600[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4536600[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4536600[iVar0 /*84*/].f_65 = iParam0;
			Global_4536600[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4536600[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4536600[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4536600[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4536600[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4536600[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4536600[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4538071 = 0;
			if (bParam6)
			{
				Global_4536600[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_476(Global_4536600[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_476(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x14E43
{
	struct<4> Var0;
	int iVar36;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_65 };
	Var0.f_3.f_32 = iParam84;
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_23711 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_23712 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_23713 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_477();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

void func_477()//Position - 0x14ED7
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_478()//Position - 0x14EE7
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_479(int iParam0, int iParam1)//Position - 0x14EFE
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_494())
		{
			if (func_493(0))
			{
				if (!func_489(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_488()))
					{
						if (func_487() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_487());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_485(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_484("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_488(), iVar0, 0, 0, 1);
						}
						func_483(20);
						func_480(func_488(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_480(int iParam0, int iParam1, int iParam2)//Position - 0x14F9E
{
	struct<9> Var0;
	
	if (func_15(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_482(iParam0);
		func_481(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_8(iParam0), Var0.f_0);
	}
}

void func_481(var uParam0, var uParam1)//Position - 0x14FF6
{
	*uParam0 = Global_1916957.f_9;
	*uParam1 = Global_1916957.f_10;
}

var func_482(int iParam0)//Position - 0x15010
{
	return Global_1887549[iParam0 /*611*/].f_513;
}

void func_483(int iParam0)//Position - 0x15024
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2739811.f_5265.f_7[iVar0]), iVar1);
}

int func_484(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x1504D
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_210(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_208(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_202(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_485(int iParam0, bool bParam1)//Position - 0x150E5
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_486(1);
	}
	else
	{
		iVar1 = func_486(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_486(bool bParam0)//Position - 0x15117
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12843 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_487()//Position - 0x1513D
{
	return Global_262145.f_12842 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_488()//Position - 0x1514C
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

bool func_489(bool bParam0)//Position - 0x15161
{
	return func_490(PLAYER::PLAYER_ID(), bParam0);
}

int func_490(int iParam0, bool bParam1)//Position - 0x15173
{
	return func_491(iParam0, bParam1, 1);
}

int func_491(int iParam0, bool bParam1, int iParam2)//Position - 0x15184
{
	int iVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_492(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887549[iParam0 /*611*/].f_10;
	if (func_9(iVar0) && Global_1887549[iVar0 /*611*/].f_10.f_431 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_492(int iParam0, int iParam1)//Position - 0x151E0
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887549[iParam0 /*611*/].f_10))
		{
			if (Global_1887549[iParam0 /*611*/].f_10 == iParam0 && Global_1887549[iParam0 /*611*/].f_10.f_431 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_493(bool bParam0)//Position - 0x1522F
{
	return func_233(PLAYER::PLAYER_ID(), bParam0);
}

bool func_494()//Position - 0x15241
{
	return func_234(PLAYER::PLAYER_ID());
}

void func_495(int iParam0, int iParam1)//Position - 0x15251
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 /* Tunable: SETTINGFORCASHSHARE */ != -1)
		{
			if (func_496())
			{
				Global_2739811.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2739811.f_284 = iParam1;
				Global_2739811.f_285 = 0;
			}
		}
	}
}

int func_496()//Position - 0x152A6
{
	if (MISC::IS_PC_VERSION() && Global_1980800 == 0)
	{
		return 0;
	}
	return 0;
}

void func_497()//Position - 0x152C5
{
	int iVar0;
	
	iVar0 = func_498(42);
	Global_2645376[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2645376[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_498(int iParam0)//Position - 0x152F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645376[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645376[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_499()//Position - 0x1533F
{
	int iVar0;
	
	iVar0 = func_498(43);
	Global_2645376[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2645376[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_500(int iParam0, int iParam1, int iParam2)//Position - 0x1536C
{
	int iVar0;
	
	iVar0 = func_503(iParam0, func_85(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_501(iParam0, iVar0, iParam2);
}

void func_501(int iParam0, int iParam1, var uParam2)//Position - 0x15393
{
	int iVar0;
	
	iVar0 = func_502(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_502(int iParam0, var uParam1)//Position - 0x153AF
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_85(uParam1));
}

int func_503(int iParam0, int iParam1)//Position - 0x153C5
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_502(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_504()//Position - 0x153E9
{
	if (bLocal_118)
	{
		bLocal_118 = false;
	}
	if (bLocal_113)
	{
		bLocal_113 = false;
	}
	if (bLocal_114)
	{
		bLocal_114 = false;
	}
	if (bLocal_115)
	{
		bLocal_115 = false;
	}
	if (bLocal_117)
	{
		bLocal_117 = false;
	}
	if (bLocal_116)
	{
		bLocal_116 = false;
	}
}

void func_505()//Position - 0x15421
{
	Global_2359296[func_534() /*5571*/].f_681.f_35 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_506(int iParam0, bool bParam1)//Position - 0x1543D
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_534() /*5571*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_534() /*5571*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_534() /*5571*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_534() /*5571*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_534() /*5571*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_534() /*5571*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_534() /*5571*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_534() /*5571*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_534() /*5571*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_534() /*5571*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_534() /*5571*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_534() /*5571*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_534() /*5571*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_534() /*5571*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_534() /*5571*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_534() /*5571*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_534() /*5571*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_534() /*5571*/].f_681.f_30 = iVar0;
			break;
	}
}

void func_507()//Position - 0x1567C
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_83(1200, -1);
	if (!BitTest(iVar0, 3))
	{
		MISC::SET_BIT(&iVar0, 3);
		MISC::SET_BIT(&uLocal_596, 1);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 4))
	{
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&uLocal_596, 2);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 5))
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&uLocal_596, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_149(1200, iVar0, -1, 1);
	}
}

void func_508(int iParam0, int iParam1, int iParam2)//Position - 0x156F2
{
	int iVar0;
	
	iVar0 = func_83(iParam0, func_85(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_149(iParam0, iVar0, iParam2, 1);
}

void func_509()//Position - 0x1571A
{
	if (!Global_2739811.f_4663)
	{
		Global_2739811.f_4663 = 1;
	}
	func_272(&(Global_2739811.f_4664), 0, 0);
}

int func_510(int iParam0)//Position - 0x15742
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_511()//Position - 0x15842
{
	int iVar0;
	
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_512(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x15898
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
	if (func_520())
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
		if (!func_139())
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
				else if (bVar14 || ((!func_26(PLAYER::PLAYER_ID(), 0) && !func_254()) && !func_253(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657991[iParam0 /*467*/].f_257 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_517(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_516(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_515();
					func_514();
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
				Global_2657991[iParam0 /*467*/].f_258 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697787)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697787 = 0;
				}
				if (Global_2635516.f_2982)
				{
					Global_2635516.f_2982 = 0;
				}
			}
			else
			{
				if (!func_516(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_513(Global_4718592.f_187633))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575056)
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

bool func_513(int iParam0)//Position - 0x15D4C
{
	return iParam0 == 17;
}

void func_514()//Position - 0x15D59
{
	struct<3> Var0;
	
	Global_2672939.f_1100 = 0;
	Global_2672939.f_1101 = 0;
	Global_2672939.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672939.f_1107 = -1;
	Global_2672939.f_1108 = 0;
	Global_2635516.f_2993 = { Var0 };
}

void func_515()//Position - 0x15DA6
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
}

int func_516(int iParam0)//Position - 0x15DE4
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

void func_517(bool bParam0, int iParam1, int iParam2)//Position - 0x15E15
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
				func_519();
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
		if (func_26(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_518(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_518(int iParam0, bool bParam1)//Position - 0x15EE5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_519()//Position - 0x15F01
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

int func_520()//Position - 0x15F59
{
	if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2) && !Global_2685658.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_521()//Position - 0x15F8A
{
	func_121();
}

int func_522(int iParam0, int iParam1)//Position - 0x15F96
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_177(iParam0), true) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_523(int iParam0)//Position - 0x15FBE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!func_413(iParam0))
			{
				if (iParam0 != iLocal_599)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_524()//Position - 0x16002
{
	if (Global_2672939.f_63.f_20 || Global_2672939.f_63.f_21)
	{
		return 1;
	}
	return 0;
}

void func_525(var uParam0, int iParam1, var uParam2)//Position - 0x16028
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_526(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_526(int iParam0, int iParam1)//Position - 0x16099
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_533(iParam1);
			break;
		
		case 1:
			iVar0 = func_532(iParam1);
			break;
		
		case 2:
			iVar0 = func_531(iParam1);
			break;
		
		case 3:
			iVar0 = func_530(iParam1);
			break;
		
		case 4:
			iVar0 = func_529(iParam1);
			break;
		
		case 5:
			iVar0 = func_528(iParam1);
			break;
		
		case 6:
			iVar0 = func_527(iParam1);
			break;
	}
	return iVar0;
}

int func_527(int iParam0)//Position - 0x16124
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_528(int iParam0)//Position - 0x1619C
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_529(int iParam0)//Position - 0x16214
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_530(int iParam0)//Position - 0x1628C
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_531(int iParam0)//Position - 0x16304
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_532(int iParam0)//Position - 0x1637C
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_533(int iParam0)//Position - 0x163F4
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_78(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_78(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_78(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_78(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_78(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_534()//Position - 0x1646C
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_535(var uParam0, int iParam1, bool bParam2)//Position - 0x16479
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_536(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_536(var uParam0, bool bParam1, bool bParam2)//Position - 0x164D7
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

bool func_537(var uParam0)//Position - 0x1651C
{
	return uParam0->f_1;
}

void func_538()//Position - 0x16528
{
	Global_2359296[func_534() /*5571*/].f_681.f_36 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_539(var uParam0, int iParam1)//Position - 0x16544
{
	int iVar0;
	int iVar1;
	
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_526(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2359296[func_534() /*5571*/].f_681.f_37 = iVar1;
}

void func_540()//Position - 0x165C9
{
	func_543("CELL_CLTEST1" /* GXT: Grab these vehicles: */, 0);
	func_541("CELL_CLTEST1" /* GXT: Grab these vehicles: */);
	func_543("CELL_CLTEST6" /* GXT: Hello soldier, here is shopping list. Keep them looking nice yes? */, 0);
	func_541("CELL_CLTEST6" /* GXT: Hello soldier, here is shopping list. Keep them looking nice yes? */);
}

void func_541(char* sParam0)//Position - 0x165F3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_114135.f_14145[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_114135.f_14145[iVar0 /*104*/]), sParam0))
			{
				if (Global_114135.f_14145[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_322();
					Global_114135.f_14145[iVar0 /*104*/].f_99[Global_21066] = 0;
					if (func_542(iVar0))
					{
					}
					else
					{
						Global_114135.f_14145[iVar0 /*104*/].f_24 = 0;
						Global_114135.f_14145[iVar0 /*104*/].f_28 = 0;
						Global_114135.f_14145[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_114135.f_14145[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_542(int iParam0)//Position - 0x166A7
{
	if ((Global_114135.f_14145[iParam0 /*104*/].f_99[0] == 1 || Global_114135.f_14145[iParam0 /*104*/].f_99[1] == 1) || Global_114135.f_14145[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_543(char* sParam0, int iParam1)//Position - 0x166FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_114135.f_14145[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_114135.f_14145[iVar0 /*104*/]), sParam0))
			{
				if (Global_114135.f_14145[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_114135.f_14145[iVar0 /*104*/].f_24 = 1;
				if (Global_114135.f_14145[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_114135.f_14145[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_114135.f_14055[0 /*20*/].f_17 = 0;
					}
					if (Global_114135.f_14145[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_114135.f_14055[1 /*20*/].f_17 = 0;
					}
					if (Global_114135.f_14145[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_114135.f_14055[2 /*20*/].f_17 = 0;
					}
					if (Global_114135.f_14145[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_114135.f_14055[3 /*20*/].f_17 = 0;
					}
					Global_114135.f_14145[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_114135.f_14145[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_544()//Position - 0x16814
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_111())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (func_142(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1836454)
	{
		return 0;
	}
	if (func_279())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if (!func_139())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_545()//Position - 0x168FF
{
	return Global_76640;
}

bool func_546()//Position - 0x1690B
{
	if (Global_2359296[func_534() /*5571*/].f_681.f_35 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[func_534() /*5571*/].f_681.f_35) < 86400;
}

bool func_547()//Position - 0x16945
{
	if (Global_2359296[func_534() /*5571*/].f_681.f_36 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[func_534() /*5571*/].f_681.f_36) < 86400;
}

bool func_548()//Position - 0x1697F
{
	if (!BitTest(uLocal_595, 2))
	{
		if (!func_26(PLAYER::PLAYER_ID(), 0))
		{
			if ((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_142(PLAYER::PLAYER_ID(), 1, 0)) && !func_116()) && (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && CAM::IS_SCREEN_FADED_IN()) && func_550(19)) && !func_549(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&uLocal_595, 2);
			}
		}
	}
	return BitTest(uLocal_595, 2);
}

int func_549(int iParam0)//Position - 0x16A09
{
	if (iParam0 != func_125())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324.f_5, 4);
	}
	return 0;
}

int func_550(int iParam0)//Position - 0x16A2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_552(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_551(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_443(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_551(int iParam0, bool bParam1)//Position - 0x16A72
{
	if (bParam1)
	{
	}
	return func_446(iParam0);
}

int func_552(int iParam0)//Position - 0x16A85
{
	if (func_107())
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_553(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_553(int iParam0)//Position - 0x16D4D
{
	return func_554(123, iParam0);
}

int func_554(int iParam0, var uParam1)//Position - 0x16D5D
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_555(iParam0, uParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_555(int iParam0, var uParam1)//Position - 0x16D81
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_85(uParam1));
}

bool func_556()//Position - 0x16D96
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_193 != 0;
}

int func_557()//Position - 0x16DAD
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_563())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_562())
	{
		return 1;
	}
	if (func_561(159))
	{
		if (!func_560())
		{
			return 1;
		}
	}
	if (func_561(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_558() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_558()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_558()//Position - 0x16E31
{
	switch (func_87())
	{
		case 0:
			return func_559();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_559()//Position - 0x16E64
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_560()//Position - 0x16E88
{
	return Global_2684718.f_700;
}

int func_561(int iParam0)//Position - 0x16E97
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_562()//Position - 0x16EAE
{
	return Global_2696416;
}

bool func_563()//Position - 0x16EBA
{
	return Global_2684718.f_695;
}

void func_564()//Position - 0x16EC9
{
	SYSTEM::WAIT(0);
}

void func_565()//Position - 0x16ED6
{
	if (iLocal_133 != -1)
	{
		func_146(iLocal_133, 0);
	}
	func_567(&iLocal_350);
	if (BitTest(uLocal_595, 1))
	{
		func_566(0f, 0f, 0f, func_390(19), 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_390.f_24))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_390.f_24);
			}
			Local_390.f_24 = -1;
		}
	}
	func_400();
	Global_2739811.f_1786 = 0;
	Global_2739811.f_1787 = 0;
	Global_2739811.f_1789 = 0;
	Global_2739811.f_1815 = 0;
	if (BitTest(uLocal_595, 7))
	{
		func_281(6, 0);
	}
	func_422();
	if (HUD::DOES_BLIP_EXIST(Global_1928759))
	{
		HUD::REMOVE_BLIP(&Global_1928759);
	}
	func_274(0);
	if (HUD::DOES_BLIP_EXIST(Global_1928770))
	{
		HUD::REMOVE_BLIP(&Global_1928770);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_110)
		{
			func_182(joaat("MP_GAR_SIMEON"), 0, 0);
			func_181(0);
		}
		if (iLocal_123)
		{
			func_181(0);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_566(struct<3> Param0, char* sParam3, int iParam4)//Position - 0x16FBD
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2739811.f_4101[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_35(Global_2739811.f_4101[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2739811.f_4101[iVar0 /*26*/] = 0;
					Global_2739811.f_4101[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2739811.f_4101[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2739811.f_4101[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_567(int iParam0)//Position - 0x1705D
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_568(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44941[iVar0 /*32*/])
		{
			Global_44941[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_568(int iParam0)//Position - 0x170B4
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
		if (Global_44941[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_569(struct<21> Param0)//Position - 0x170EF
{
	func_574(func_575(Param0.f_0), Param0);
	func_572(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_390, 74, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_466, 129, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_571())
	{
		return 0;
	}
	Global_2739811.f_1789 = 0;
	Global_2739811.f_4519 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (func_74(PLAYER::PLAYER_ID(), 6))
	{
		func_281(6, 0);
	}
	func_570();
	return 1;
}

void func_570()//Position - 0x17161
{
	var uVar0;
	
	uVar0 = func_83(1200, -1);
	if (BitTest(uVar0, 3))
	{
		MISC::SET_BIT(&uLocal_596, 1);
	}
	if (BitTest(uVar0, 4))
	{
		MISC::SET_BIT(&uLocal_596, 2);
	}
	if (BitTest(uVar0, 5))
	{
		MISC::SET_BIT(&uLocal_596, 3);
		MISC::SET_BIT(&uLocal_596, 0);
	}
}

int func_571()//Position - 0x171A8
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_563())
		{
			return 0;
		}
		if (func_561(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_572(int iParam0, int iParam1, bool bParam2)//Position - 0x17201
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_573();
			}
			else
			{
				return 0;
			}
		}
		if (!func_32(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_573();
					}
					else
					{
						return 0;
					}
				}
				if (func_563())
				{
					if (!bParam2)
					{
						func_573();
					}
					else
					{
						return 0;
					}
				}
				if (func_561(157))
				{
					if (!bParam2)
					{
						func_573();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_573();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_573();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_573();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_573()//Position - 0x17317
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_574(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x17323
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_573();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_575(int iParam0)//Position - 0x17342
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 208:
			return 32;
		
		case 209:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 220:
			return 32;
		
		case 221:
			return 32;
		
		case 210:
			return 32;
		
		case 211:
			return 32;
		
		case 215:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 218:
			return 32;
		
		case 219:
			return 32;
		
		case 216:
			return 32;
		
		case 217:
			return 32;
		
		case 222:
			return 32;
		
		case 223:
			return 32;
		
		case 224:
			return 32;
		
		case 225:
			return 32;
		
		case 226:
			return 2;
		
		case 231:
			return 1;
		
		case 227:
			return 2;
		
		case 228:
			return 4;
		
		case 229:
			return 2;
		
		case 230:
			return 2;
		
		case 212:
			return 1;
		
		case 232:
			return 2;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
			return 0;
		
		case 254:
			return 1;
		
		case 239:
			return 4;
		
		case 242:
			return 4;
		
		case 243:
			return 1;
		
		case 244:
			return 1;
		
		case 250:
			return 1;
		
		case 246:
			return 2;
		
		case 251:
			return 1;
		
		case 247:
			return 1;
		
		case 245:
			return 2;
		
		case 248:
			return 8;
		
		case 249:
			return 8;
		
		case 252:
			return 1;
		
		case 253:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 206:
			return 32;
		
		case 240:
			return 16;
		
		case 241:
			return 32;
		
		default:
	}
	switch (func_576(func_577(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_576(int iParam0)//Position - 0x17AE2
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		case 343:
			return 0;
		
		case 344:
			return 0;
		
		case 345:
			return 0;
		
		case 346:
			return 0;
		
		case 347:
			return 0;
		
		case 348:
			return 0;
		
		case 349:
			return 0;
		
		case 350:
			return 0;
		
		case 351:
			return 0;
		
		case 353:
			return 2;
		
		default:
	}
	return -1;
}

int func_577(int iParam0, bool bParam1)//Position - 0x17DFE
{
	switch (iParam0)
	{
		case 226:
			return 15;
		
		case 233:
			return 8;
		
		case 227:
			return 14;
		
		case 231:
			return 122;
		
		case 234:
			return 1;
		
		case 232:
			return 5;
		
		case 235:
			return 6;
		
		case 228:
			return 11;
		
		case 236:
			return 0;
		
		case 237:
			return 2;
		
		case 229:
			return 13;
		
		case 238:
			return 3;
		
		case 230:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		case 197:
			return 343;
		
		case 198:
			return 344;
		
		case 199:
			return 345;
		
		case 200:
			return 346;
		
		case 201:
			return 347;
		
		case 202:
			return 348;
		
		case 203:
			return 349;
		
		case 204:
			return 350;
		
		case 205:
			return 351;
		
		case 206:
			return 352;
		
		case 207:
			return 353;
		
		default:
	}
	if (bParam1)
	{
	}
	return 352;
}

