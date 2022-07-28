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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
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
	struct<14> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 16;
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
	int iLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	bool bLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
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
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323[4] = { 0, 0, 0, 0 };
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_329 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_330 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	struct<4> Local_337[32];
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	char* sLocal_341 = NULL;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	struct<21> Local_346 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_101 = 1;
	bLocal_103 = true;
	bLocal_105 = true;
	iLocal_110 = -1;
	bLocal_288 = true;
	bLocal_289 = true;
	iLocal_292 = -1;
	iLocal_293 = -1;
	iLocal_317 = -1;
	iLocal_320 = -1;
	if (!func_546(ScriptParam_346))
	{
		func_542();
	}
	iLocal_328[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
	iLocal_328[1] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
	iLocal_328[2] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
	iLocal_328[3] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
	iLocal_328[4] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
	iLocal_328[5] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
	iLocal_328[6] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
	iLocal_328[7] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
	iLocal_328[8] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
	iLocal_328[9] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
	iLocal_328[10] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
	iLocal_328[11] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_541();
		bLocal_86 = false;
		bLocal_88 = false;
		bLocal_91 = false;
		bLocal_94 = false;
		bLocal_96 = false;
		Global_2815059.f_1750 = 0;
		if (func_534() || func_533())
		{
			func_542();
		}
		if (func_526())
		{
			if (!func_525())
			{
				if (!func_524())
				{
					if (func_522())
					{
						if (!iLocal_84)
						{
							func_518();
							func_517(&Local_329, 5);
							func_516();
							bLocal_105 = true;
							bLocal_106 = true;
							if (BitTest(uLocal_338, 1))
							{
								MISC::CLEAR_BIT(&uLocal_338, 1);
							}
							iLocal_84 = 1;
							iLocal_320 = -999;
						}
					}
				}
			}
			else if (!func_524())
			{
				if (!bLocal_106)
				{
					if (!func_515(&uLocal_283))
					{
						func_514(&uLocal_283, 0, 0);
					}
					else if (func_513(&uLocal_283, 100, 0))
					{
						if (!BitTest(uLocal_338, 1))
						{
							if (func_522())
							{
								func_503(&Local_329, 5, Global_2359296[func_512() /*5567*/].f_681.f_37);
								bLocal_105 = false;
								bLocal_106 = true;
								iLocal_84 = 1;
								iLocal_320 = -999;
							}
						}
					}
				}
			}
			func_405();
			func_401();
			func_385();
			func_378();
			func_268();
			func_175();
		}
		func_171();
		func_141();
		func_76();
		func_73();
		if (!iLocal_108)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), true);
				iLocal_108 = 1;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x40D
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_103)
	{
	}
	else
	{
		if (iLocal_104 >= Local_337.f_0)
		{
			iLocal_104 = 0;
			MISC::CLEAR_BIT(&uLocal_338, 10);
			MISC::CLEAR_BIT(&(Local_330.f_23), 7);
			MISC::CLEAR_BIT(&uLocal_338, 11);
			MISC::CLEAR_BIT(&uLocal_338, 23);
			if (BitTest(Local_330.f_23, 0))
			{
				MISC::SET_BIT(&(Local_330.f_23), 1);
				MISC::CLEAR_BIT(&(Local_330.f_23), 3);
			}
		}
		iVar0 = iLocal_104;
		if (Local_337[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_330[iVar1] == -1)
				{
					if (!Local_330.f_6[iVar1])
					{
						if (Local_330[iVar1] == Local_337[iVar0 /*4*/])
						{
							if (Local_330[iVar1] == Local_330.f_28)
							{
								func_72();
							}
							Local_330.f_33 = 0;
							Local_330.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (BitTest(Local_330.f_23, 0))
		{
			if (!BitTest(Local_330.f_23, 7))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					if (Local_337[iVar0 /*4*/].f_3 > 0 || func_71(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6))
					{
						if (Local_337[iVar0 /*4*/].f_3 < 3)
						{
							MISC::SET_BIT(&(Local_330.f_23), 7);
						}
					}
				}
			}
		}
		if (BitTest(Local_330.f_23, 0))
		{
			if (!BitTest(uLocal_338, 11))
			{
				if (BitTest(Local_337[iVar0 /*4*/].f_2, 2))
				{
					MISC::SET_BIT(&uLocal_338, 11);
				}
			}
			if (!BitTest(uLocal_338, 21))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (BitTest(Local_337[iVar0 /*4*/].f_2, 3))
						{
							MISC::SET_BIT(&uLocal_338, 21);
						}
					}
				}
			}
		}
		iLocal_104++;
		if (iLocal_104 >= Local_337.f_0)
		{
			MISC::SET_BIT(&uLocal_338, 10);
			if (BitTest(Local_330.f_23, 7) || BitTest(uLocal_338, 23))
			{
				MISC::CLEAR_BIT(&(Local_330.f_23), 1);
			}
			if (BitTest(uLocal_338, 11))
			{
				MISC::SET_BIT(&(Local_330.f_23), 3);
			}
			if (BitTest(uLocal_338, 21))
			{
				MISC::SET_BIT(&(Local_330.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_330.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_330.f_20)
	{
		case 0:
			func_66();
			Local_330.f_32++;
			Local_330.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				iLocal_316 = NETWORK::GET_NETWORK_TIME();
				Local_330.f_20 = 2;
			}
			else if (Local_330.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_330.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_316) > Global_262145.f_11941)
			{
				Local_330.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()//Position - 0x6B0
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (Local_330.f_26)
	{
		case 0:
			if (!BitTest(Local_330.f_23, 0))
			{
				if (bLocal_288)
				{
					if (bLocal_289)
					{
						if (Global_2815059.f_1723)
						{
							MISC::CLEAR_BIT(&(Local_330.f_23), 2);
							MISC::CLEAR_BIT(&(Local_330.f_23), 6);
							MISC::CLEAR_BIT(&uLocal_338, 21);
							NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
							Local_330.f_34 = 0;
							MISC::SET_BIT(&(Local_330.f_23), 0);
							Global_2815059.f_1723 = 0;
						}
					}
					else if (Local_330.f_27 == -15)
					{
						MISC::CLEAR_BIT(&(Local_330.f_23), 2);
						MISC::CLEAR_BIT(&(Local_330.f_23), 6);
						MISC::CLEAR_BIT(&uLocal_338, 21);
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
						Local_330.f_34 = 0;
						iVar2 = func_63();
						func_49(&(Local_330.f_27), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_58(iVar2), func_56(iVar2));
						func_48(&(Local_330.f_27), 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_515(&uLocal_305))
						{
							func_514(&uLocal_305, 0, 0);
						}
						else if (func_513(&uLocal_305, 10000, 0))
						{
							func_46(&uLocal_305);
							if (func_42(Local_330.f_27))
							{
								MISC::SET_BIT(&(Local_330.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_330.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_330.f_24))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
					}
					Local_330.f_24 = -1;
					iLocal_291 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					iVar3 = func_33();
					if (iVar3 != 0)
					{
						Local_330.f_67 = iVar3;
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
						Local_330.f_34 = 1;
					}
				}
			}
			else if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (func_32(Local_330.f_67))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_330.f_22))
					{
						if (func_21(&Var0, &fVar1))
						{
							if (func_18(&(Local_330.f_22), Local_330.f_67, Var0, fVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset"))
									{
										iVar4 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar4, 5);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset", iVar4);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset"))
									{
										iVar5 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar5, 10);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "MPBitset", iVar5);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
								{
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_330.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								MISC::SET_BIT(&(Local_330.f_23), 0);
								MISC::CLEAR_BIT(&(Local_330.f_23), 2);
								MISC::CLEAR_BIT(&(Local_330.f_23), 4);
								MISC::CLEAR_BIT(&(Local_330.f_23), 3);
								MISC::CLEAR_BIT(&uLocal_338, 11);
								MISC::CLEAR_BIT(&(Local_330.f_23), 6);
								MISC::SET_BIT(&uLocal_338, 23);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_330.f_67);
								Local_330.f_26 = 1;
								func_46(&(Local_330.f_30));
								func_514(&(Local_330.f_30), 0, 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_330.f_22), 7);
								VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(NETWORK::NET_TO_VEH(Local_330.f_22), true);
								VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, true);
								NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_330.f_22, true);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(Local_330.f_23, 2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_330.f_22), false))
					{
						Local_83.f_2 = -1337074122;
						func_16(Local_83, func_17(1));
						MISC::SET_BIT(&(Local_330.f_23), 2);
					}
				}
			}
			if (BitTest(uLocal_338, 3) || (BitTest(uLocal_338, 10) && BitTest(Local_330.f_23, 1)))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (!BitTest(Local_330.f_23, 2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_330.f_22), false))
							{
								Local_83.f_2 = -1337074122;
								func_16(Local_83, func_17(1));
								MISC::SET_BIT(&(Local_330.f_23), 2);
							}
						}
					}
				}
				Local_330.f_26 = 2;
			}
			if (func_15(NETWORK::NET_TO_VEH(Local_330.f_22)))
			{
				Local_330.f_26 = 2;
				Local_83.f_2 = 1837020641;
				func_16(Local_83, func_17(1));
			}
			if (!BitTest(Local_330.f_23, 4))
			{
				if (func_513(&(Local_330.f_30), 360000, 0))
				{
					MISC::SET_BIT(&(Local_330.f_23), 4);
					func_46(&(Local_330.f_30));
					func_514(&(Local_330.f_30), 0, 0);
				}
			}
			else if (BitTest(uLocal_338, 10))
			{
				if (!BitTest(Local_330.f_23, 3))
				{
					if (func_515(&(Local_330.f_30)))
					{
						if (func_513(&(Local_330.f_30), 120000, 0))
						{
							Local_330.f_26 = 2;
							Local_83.f_2 = 1837020641;
							func_16(Local_83, func_17(1));
						}
					}
					else
					{
						func_514(&(Local_330.f_30), 0, 0);
					}
				}
				else if (func_515(&(Local_330.f_30)))
				{
					func_46(&(Local_330.f_30));
				}
			}
			if (BitTest(Local_330.f_23, 6))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (Local_330.f_26 == 1)
					{
						Local_330.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_330.f_26 == 1)
				{
					Local_330.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
			{
				if (func_10(Local_330.f_22))
				{
					func_9(&(Local_330.f_22));
					Local_330.f_26 = 3;
				}
			}
			else
			{
				Local_330.f_26 = 3;
			}
			break;
		
		case 3:
			if (BitTest(uLocal_338, 10))
			{
				if (BitTest(Local_330.f_23, 1))
				{
					Local_330.f_26 = 0;
					MISC::CLEAR_BIT(&(Local_330.f_23), 0);
					Local_330.f_27 = -15;
					if (Local_330.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
					}
					Local_330.f_67 = 0;
					if (bLocal_289)
					{
						func_7(func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()//Position - 0xC68
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_330.f_69)
		{
			case 0:
				if (BitTest(Local_330.f_23, 8))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
					{
						if (!func_6())
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_VEH(Local_330.f_22)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_330.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, false, true, 0))
								{
									if (!BitTest(Local_330.f_23, 9))
									{
										MISC::SET_BIT(&(Local_330.f_23), 9);
									}
								}
							}
						}
						else if (BitTest(Local_330.f_23, 9))
						{
							MISC::CLEAR_BIT(&(Local_330.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (BitTest(Local_330.f_23, 9))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
		{
			if (func_4(Local_330.f_22))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
				{
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_VEH(Local_330.f_22), true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_330.f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_330.f_22), false);
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22), true, 1);
					MISC::CLEAR_BIT(&(Local_330.f_23), 9);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_330.f_22);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_330.f_23), 9);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_330.f_23), 9);
		}
	}
}

int func_4(int iParam0)//Position - 0xDBD
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_5(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_5(int iParam0)//Position - 0xDDD
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

int func_6()//Position - 0xE16
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_330.f_22), -1, false);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)//Position - 0xE52
{
	struct<3> Var0;
	
	Var0.f_0 = 2144233578;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_8(int iParam0)//Position - 0xE84
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0)//Position - 0xE9C
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_10(int iParam0)//Position - 0xEC0
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_11(int iParam0)//Position - 0xEE2
{
	return !func_12(iParam0);
}

int func_12(int iParam0)//Position - 0xEF1
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
			if (Global_262145.f_7119)
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
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

int func_13(bool bParam0)//Position - 0x1225
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2689235[iVar0 /*453*/].f_216, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0x1268
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0)//Position - 0x12C8
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

void func_16(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x132C
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam13);
	}
}

int func_17(int iParam0)//Position - 0x1359
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
			if (func_14(iVar2, 0, 0))
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

int func_18(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x13B6
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
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_19(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_19(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x14BF
{
	int iVar0;
	
	if (func_20(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_20(int iParam0, struct<3> Param1, int iParam2)//Position - 0x1592
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
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_21(var uParam0, var uParam1)//Position - 0x1630
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_291)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var1 = { -807.2521f, -116.098f, 38f };
			Var2 = { -809.0935f, -121.9038f, 36.504f };
			fVar3 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var1 = { -797.881f, -1310.998f, 7.0005f };
			Var2 = { -801.6295f, -1313.865f, 4.0005f };
			fVar3 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var1 = { -189.4078f, -1945.248f, 28.6205f };
			Var2 = { -191.5592f, -1950.239f, 26.6205f };
			fVar3 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var1 = { -2961.456f, 466.0484f, 16.1725f };
			Var2 = { -2963.887f, 462.7986f, 14.2156f };
			fVar3 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var1 = { -411.9892f, 1220.346f, 326.6421f };
			Var2 = { -416.0102f, 1219.771f, 324.6421f };
			fVar3 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var1 = { -1633.903f, -879.869f, 9.1264f };
			Var2 = { -1634.006f, -885.3531f, 8.0518f };
			fVar3 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var1 = { -331.5926f, -944.408f, 32.0788f };
			Var2 = { -334.8547f, -945.2789f, 30.0788f };
			fVar3 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var1 = { 1094.243f, 255.0715f, 82.8556f };
			Var2 = { 1093.686f, 250.4772f, 79.8556f };
			fVar3 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var1 = { -1400.19f, 63.9074f, 54.3222f };
			Var2 = { -1404.459f, 62.1459f, 52.0258f };
			fVar3 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var1 = { -1226.429f, -1648.143f, 4.1986f };
			Var2 = { -1228.901f, -1652.397f, 3.1204f };
			fVar3 = 305.0972f;
			break;
	}
	if (!func_31(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_291 < 10)
		{
			if (Local_330.f_24 == -1)
			{
				Local_330.f_24 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var1);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_330.f_24))
			{
				if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Local_330.f_24))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_330.f_24))
					{
						if (!func_22(Var2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var2 };
							*uParam1 = fVar3;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
							Local_330.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_291++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
							Local_330.f_24 = -1;
						}
					}
					else
					{
						iLocal_291++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
						Local_330.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_291 = 0;
		}
	}
	return 0;
}

int func_22(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x1A03
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
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
		if (func_14(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_23(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
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

int func_23(int iParam0)//Position - 0x1BBB
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)//Position - 0x1BE6
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
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

int func_25(int iParam0, bool bParam1)//Position - 0x1C31
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1575038[iVar1] == 1)
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

int func_26()//Position - 0x1C72
{
	return Global_1574918;
}

Vector3 func_27(int iParam0)//Position - 0x1C7E
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1853348[iVar0 /*834*/].f_804) && !func_29(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)//Position - 0x1CD1
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_29(struct<3> Param0)//Position - 0x1CE4
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()//Position - 0x1D0E
{
	return Global_2714762.f_19;
}

bool func_31(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x1D1C
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_32(int iParam0)//Position - 0x1D63
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_33()//Position - 0x1D81
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2344 != 0)
	{
		iVar1 = Global_262145.f_2344;
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
		iVar2 = func_35(&Local_330);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)//Position - 0x1DCF
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

int func_35(var uParam0)//Position - 0x1EF7
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

bool func_36(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F4E
{
	return func_37(1, iParam0, 1, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1F62
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x2028
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

int func_39(int iParam0)//Position - 0x2062
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)//Position - 0x20A8
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x2145
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x2185
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)//Position - 0x2197
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 1;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
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
	return 0;
}

int func_44(int iParam0)//Position - 0x22A3
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
	iVar0 = func_62(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 1 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0, int iParam1)//Position - 0x237F
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

void func_46(var uParam0)//Position - 0x2421
{
	uParam0->f_1 = 0;
}

bool func_47(int iParam0)//Position - 0x242E
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x243D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
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
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x25BF
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)//Position - 0x25F7
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

void func_51(var uParam0, int iParam1)//Position - 0x267D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_52(var uParam0, int iParam1)//Position - 0x26CE
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)//Position - 0x2701
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_54(var uParam0, int iParam1)//Position - 0x273B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_55(var uParam0, int iParam1)//Position - 0x2776
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_56(int iParam0)//Position - 0x27B2
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_57(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)//Position - 0x27D4
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)//Position - 0x27EB
{
	return iParam0 & 15;
}

int func_59(int iParam0)//Position - 0x27F8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_60(int iParam0)//Position - 0x280A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_61(int iParam0)//Position - 0x281D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_62(int iParam0)//Position - 0x2830
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_63()//Position - 0x2843
{
	var uVar0;
	
	func_55(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_54(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_53(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_51(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_52(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_50(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_64()//Position - 0x2889
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_330.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()//Position - 0x28B5
{
	int iVar0;
	
	if (!BitTest(Local_330.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_330.f_35[iVar0] = -1;
			iVar0++;
		}
		MISC::SET_BIT(&(Local_330.f_23), 5);
	}
}

void func_66()//Position - 0x28EF
{
	int iVar0;
	
	func_517(&Local_330, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_330.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_330.f_33 = 1;
}

int func_67()//Position - 0x2924
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	return iVar0;
}

int func_68(int iParam0)//Position - 0x294C
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_330.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()//Position - 0x2981
{
	int iVar0;
	
	iVar0 = func_35(&Local_330);
	if (iVar0 != Local_330.f_28)
	{
		Local_330.f_28 = iVar0;
		Local_330.f_29 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_70()//Position - 0x29AC
{
	if (Local_330.f_20 > 0)
	{
		if (Local_330[0] != Local_330[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)//Position - 0x29D1
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

void func_72()//Position - 0x29E7
{
	Local_330.f_29 = 0;
}

void func_73()//Position - 0x29F5
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2815059.f_4451 == 0 || BitTest(Global_2815059.f_4452, 0))
		{
			if (!func_515(&uLocal_311) || func_513(&uLocal_311, 2000, 0))
			{
				iVar0 = func_35(&Local_329);
				if (iVar0 > -1)
				{
					Global_2815059.f_4451 = func_34(iVar0);
					func_46(&uLocal_309);
					func_514(&uLocal_309, 0, 0);
					if (BitTest(Global_2815059.f_4452, 0))
					{
						MISC::CLEAR_BIT(&(Global_2815059.f_4452), 0);
					}
				}
				else
				{
					func_46(&uLocal_311);
					func_514(&uLocal_311, 0, 0);
				}
			}
		}
		else if (Global_2815059.f_4451 != 0)
		{
			if (func_513(&uLocal_309, 20000, 0))
			{
				if (!func_74(&Local_329, Global_2815059.f_4451))
				{
					Global_2815059.f_4451 = 0;
				}
				func_46(&uLocal_309);
				func_514(&uLocal_309, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)//Position - 0x2AD8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam1);
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

int func_75(int iParam0)//Position - 0x2B2A
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

void func_76()//Position - 0x2C0E
{
	int iVar0;
	
	if (((((bLocal_90 || bLocal_91) || bLocal_92) || bLocal_94) || bLocal_93) || bLocal_95)
	{
		if (((((Global_2815059.f_28.f_41 || func_138(PLAYER::PLAYER_ID(), 1, 0)) || func_137(PLAYER::PLAYER_ID())) || !func_135()) || func_123()) || func_118())
		{
			bLocal_90 = false;
			bLocal_92 = false;
			bLocal_91 = false;
			bLocal_94 = false;
			bLocal_93 = false;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_95)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_90)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (BitTest(uLocal_315, 2))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_92)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_138(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_93)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_138(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_94)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_91)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (BitTest(uLocal_315, 3))
					{
						if (!iLocal_97)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iLocal_326 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar0 != iLocal_326)
								{
									iLocal_97 = 0;
									func_46(&uLocal_313);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_515(&uLocal_313))
		{
			func_514(&uLocal_313, 0, 0);
		}
		else if (func_513(&uLocal_313, 20000, 0))
		{
			func_117();
			iLocal_97 = 1;
		}
	}
	else if (!BitTest(uLocal_338, 18))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()//Position - 0x2FA0
{
	return (((((func_78(39) || func_78(40)) || func_78(41)) || func_78(42)) || func_78(43)) || func_78(44));
}

int func_78(int iParam0)//Position - 0x2FEA
{
	return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x2FFA
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			return BitTest(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x305B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_81(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x3098
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_82(int iParam0)//Position - 0x30CC
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
			return 11352;
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
		
		default:
			break;
	}
	return 13122;
}

int func_83()//Position - 0x3447
{
	return Global_31959;
}

void func_84(char* sParam0)//Position - 0x3452
{
	bool bVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1574757 == 11)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
		}
		else
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()//Position - 0x34CB
{
	func_87();
	func_86(0);
}

void func_86(bool bParam0)//Position - 0x34DC
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_87()//Position - 0x356E
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_88();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_88()//Position - 0x3597
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

bool func_89()//Position - 0x3809
{
	if (!func_90())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_88();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_90()//Position - 0x382F
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_91(char* sParam0, bool bParam1)//Position - 0x3845
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()//Position - 0x38B0
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_93(bool bParam0)//Position - 0x38C3
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_94()//Position - 0x38E9
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_95(char* sParam0)//Position - 0x390E
{
	if (!func_90())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_96(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_96(char* sParam0)//Position - 0x3952
{
	if (!func_90())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

bool func_97()//Position - 0x3984
{
	bool bVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
				{
				}
			}
		}
	}
	if (!BitTest(uLocal_339, 0))
	{
		if (!BitTest(uLocal_339, 1))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_339, 2))
		{
			bVar0 = true;
		}
		else if (!BitTest(uLocal_339, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			MISC::SET_BIT(&uLocal_339, 0);
		}
	}
	return bVar0;
}

int func_98()//Position - 0x3A07
{
	if ((((((((((((((((((!func_14(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_138(PLAYER::PLAYER_ID(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || func_106() > 0) || !func_135()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()//Position - 0x3AF0
{
	if (func_71(PLAYER::PLAYER_ID(), 8))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 10))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 12))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 13))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100()//Position - 0x3B8A
{
	var uVar0;
	
	if (BitTest(Global_2815059.f_1794, 7))
	{
		return 1;
	}
	uVar0 = Global_1659747[func_81(-1)];
	if (BitTest(uVar0, 6))
	{
		MISC::SET_BIT(&(Global_2815059.f_1794), 7);
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return 0;
}

bool func_101()//Position - 0x3BDD
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 2);
}

bool func_102()//Position - 0x3BF4
{
	return Global_1575046;
}

bool func_103()//Position - 0x3C00
{
	return Global_1575048;
}

int func_104()//Position - 0x3C0C
{
	if (BitTest(Global_2815059.f_1794, 28) && !BitTest(Global_2815059.f_1794, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()//Position - 0x3C36
{
	return BitTest(Global_2815059.f_1795, 3);
}

int func_106()//Position - 0x3C47
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_193;
}

int func_107()//Position - 0x3C5C
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_108()//Position - 0x3C7E
{
	return func_109();
}

bool func_109()//Position - 0x3C8A
{
	return Global_1641031.f_40 == 3;
}

bool func_110()//Position - 0x3C9A
{
	return Global_2703735.f_2724.f_582;
}

bool func_111()//Position - 0x3CAC
{
	return Global_100493.f_376 > 0;
}

bool func_112()//Position - 0x3CBD
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

var func_113()//Position - 0x3CD6
{
	return Global_2656955;
}

bool func_114(int iParam0, int iParam1)//Position - 0x3CE2
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

bool func_115()//Position - 0x3D1A
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_116(char* sParam0)//Position - 0x3D2F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (Global_1574757 == 11)
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
	return func_95(sParam0);
}

void func_117()//Position - 0x3D80
{
	if (!func_90())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_85();
}

int func_118()//Position - 0x3DAD
{
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_119(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)//Position - 0x3DD5
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_120(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x3E1C
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
	}
	return -1;
}

int func_121()//Position - 0x4480
{
	return -1;
}

int func_122(int iParam0, int iParam1)//Position - 0x4489
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x44C4
{
	if (func_127())
	{
		return 1;
	}
	if (func_124(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)//Position - 0x44F8
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 && func_125(Global_1892703[iParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_125(Global_1892703[iParam0 /*599*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x455E
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
	return func_126(iParam0, 0);
	return 0;
}

int func_126(int iParam0, int iParam1)//Position - 0x45B8
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

int func_127()//Position - 0x460D
{
	if (!func_134(PLAYER::PLAYER_ID()))
	{
		if (func_130(PLAYER::PLAYER_ID()) || func_129(PLAYER::PLAYER_ID()) != -1)
		{
			return 1;
		}
		if (func_128(PLAYER::PLAYER_ID()) && Global_1836844.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

var func_128(int iParam0)//Position - 0x465E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

int func_129(int iParam0)//Position - 0x4673
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

int func_130(int iParam0)//Position - 0x4692
{
	if (func_133(iParam0))
	{
		return 1;
	}
	if (func_131(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x46B5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_132(iParam0, 9);
	}
	return 0;
}

var func_132(int iParam0, int iParam1)//Position - 0x46D3
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_133(var uParam0)//Position - 0x46EB
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_134(int iParam0)//Position - 0x470E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 2);
}

int func_135()//Position - 0x4723
{
	if (func_136() == 0)
	{
		return 1;
	}
	return 0;
}

int func_136()//Position - 0x4738
{
	return Global_1574632.f_18;
}

int func_137(int iParam0)//Position - 0x4746
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

int func_138(int iParam0, bool bParam1, bool bParam2)//Position - 0x476E
{
	if (bParam1)
	{
		if (func_139(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_139(int iParam0)//Position - 0x47A0
{
	return func_140(iParam0);
}

var func_140(int iParam0)//Position - 0x47AE
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_141()//Position - 0x47C5
{
	if (bLocal_88)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_1931386))
		{
			Global_1931386 = HUD::ADD_BLIP_FOR_COORD(Global_1931387);
			HUD::SET_BLIP_SPRITE(Global_1931386, 293);
			HUD::SET_BLIP_SCALE(Global_1931386, 1f);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1931386, false);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1931386, "IMPEX_BLIP_FM");
			if (func_170())
			{
				HUD::SET_BLIP_FLASHES(Global_1931386, true);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Global_1931386))
	{
		HUD::REMOVE_BLIP(&Global_1931386);
		if (bLocal_287)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_165(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_318, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_164("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_89)
	{
		if (iLocal_110 == -1)
		{
			iLocal_110 = func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, -1);
			if (iLocal_110 != -1)
			{
				func_142(iLocal_110, 1);
			}
		}
	}
	else if (iLocal_110 != -1)
	{
		func_142(iLocal_110, 0);
		iLocal_110 = -1;
	}
}

void func_142(int iParam0, bool bParam1)//Position - 0x48C0
{
	switch (iParam0)
	{
		case 39:
			func_143(39, bParam1);
			break;
		
		case 40:
			func_143(40, bParam1);
			break;
		
		case 41:
			func_143(41, bParam1);
			break;
		
		case 42:
			func_143(42, bParam1);
			break;
		
		case 43:
			func_143(43, bParam1);
			break;
		
		case 44:
			func_143(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_143(int iParam0, bool bParam1)//Position - 0x4938
{
	if (bParam1)
	{
		if (!func_79(iParam0, 8, 0))
		{
			func_147(iParam0, 8, 0);
			func_146(iParam0);
		}
	}
	else if (func_79(iParam0, 8, 0))
	{
		func_144(iParam0, 8, 0);
		func_146(iParam0);
	}
}

void func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x497F
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iVar0 = func_80(func_82(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_145(func_82(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

void func_145(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x49F1
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_146(int iParam0)//Position - 0x4A21
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

void func_147(int iParam0, int iParam1, bool bParam2)//Position - 0x4A3B
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iVar0 = func_80(func_82(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_145(func_82(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

int func_148(struct<3> Param0, int iParam1, int iParam2)//Position - 0x4AAD
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == func_163(iVar0))
		{
			iVar4 = iVar0;
			if (func_162(iVar4))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_149(iVar0, 0), true);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
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

Vector3 func_149(int iParam0, bool bParam1)//Position - 0x4B2E
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
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_159(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_121())
			{
				if (func_158(Global_1853185))
				{
					return func_151(2, 2);
				}
				else if (func_150(Global_1853185))
				{
					return func_151(45, 3);
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
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_150(int iParam0)//Position - 0x5253
{
	if (iParam0 != func_121())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_151(int iParam0, int iParam1)//Position - 0x52AB
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_152(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_152(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_152(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_152(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x5355
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_157(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_157(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_155(iParam0) };
	}
	else
	{
		Var2 = { func_154(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_153(Var3, -Var0.f_3.f_2) };
	Var3 = { func_153(Var3, Var1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_153(struct<3> Param0, float fParam1)//Position - 0x53EA
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_154(int iParam0)//Position - 0x542E
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

struct<6> func_155(int iParam0)//Position - 0x55B2
{
	return func_156(iParam0);
}

struct<6> func_156(int iParam0)//Position - 0x55C0
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
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
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
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
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
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
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

int func_157(int iParam0, var uParam1)//Position - 0x6087
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

int func_158(int iParam0)//Position - 0x6109
{
	if (iParam0 != func_121())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_159(int iParam0)//Position - 0x6161
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
			return 974.9542f, -3000.091f, -35f;
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
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_160() == 0)
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
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_160()//Position - 0x63BD
{
	return func_161(PLAYER::PLAYER_ID());
}

int func_161(int iParam0)//Position - 0x63CD
{
	return MISC::GET_BITS_IN_RANGE(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

bool func_162(int iParam0)//Position - 0x63EA
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[39]);
			break;
		
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[40]);
			break;
		
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[41]);
			break;
		
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[42]);
			break;
		
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[43]);
			break;
		
		case 44:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[44]);
			break;
	}
	return bVar0;
}

int func_163(int iParam0)//Position - 0x6491
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
	}
	return 6;
}

void func_164(char* sParam0, int iParam1)//Position - 0x67A0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_165(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x67B7
{
	if (!func_515(uParam2))
	{
		func_514(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_166(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)//Position - 0x67EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_515(uParam3))
	{
		func_514(uParam3, 0, 0);
	}
	func_169(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (func_167(iParam0, iParam1, 30))
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
	func_46(uParam3);
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x6DF2
{
	if (iParam1 != -1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), func_168(iParam1), true) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_168(int iParam0)//Position - 0x6E1E
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_169(var uParam0, int iParam1)//Position - 0x6ED2
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
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
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_170()//Position - 0x7445
{
	int iVar0;
	var uVar1;
	
	uVar1 = func_80(1200, -1, 0);
	if (!BitTest(uVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!BitTest(uVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_171()//Position - 0x7473
{
	if (bLocal_86)
	{
		if (!iLocal_87)
		{
			func_173(1215605247, 1, 0);
			func_172(1);
			iLocal_87 = 1;
		}
	}
	else if (iLocal_87)
	{
		func_173(1215605247, 0, 0);
		func_172(0);
		iLocal_87 = 0;
	}
}

void func_172(bool bParam0)//Position - 0x74B4
{
	if (Global_2815059.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2815059.f_4586 = bParam0;
	}
}

void func_173(int iParam0, bool bParam1, bool bParam2)//Position - 0x74D9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (bParam1)
	{
		if (!BitTest(Global_2815059.f_4565, func_174(iParam0)))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_2815059.f_4565.f_1), func_174(iParam0));
			}
			MISC::SET_BIT(&(Global_2815059.f_4565), func_174(iParam0));
		}
	}
	else if (BitTest(Global_2815059.f_4565, func_174(iParam0)))
	{
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_2815059.f_4565.f_1), func_174(iParam0));
		}
		MISC::CLEAR_BIT(&(Global_2815059.f_4565), func_174(iParam0));
	}
}

int func_174(int iParam0)//Position - 0x7569
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_175()//Position - 0x75C7
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_330.f_23, 0))
	{
		if (iLocal_321 >= 32)
		{
			MISC::CLEAR_BIT(&uLocal_338, 5);
			iLocal_321 = 0;
			iLocal_293 = -1;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_321)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_321));
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!BitTest(uLocal_338, 3))
				{
					if (BitTest(Local_337[iLocal_321 /*4*/].f_2, 1))
					{
						MISC::SET_BIT(&uLocal_338, 3);
					}
				}
				if (iLocal_293 == -1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
					{
						if (func_4(Local_330.f_22))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_330.f_22)))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_330.f_22), -1, false) == iVar1)
									{
										iLocal_293 = iLocal_321;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_321++;
		if (iLocal_321 >= 32)
		{
			MISC::SET_BIT(&uLocal_338, 5);
		}
		func_266();
		if (!BitTest(uLocal_338, 3))
		{
			if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
			{
				if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					if (func_264())
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_290 != Local_330.f_34)
	{
		if (Local_330.f_34 == 0)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
			{
				iLocal_290 = Local_330.f_34;
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_290);
			}
		}
		else
		{
			iLocal_290 = Local_330.f_34;
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_290);
		}
	}
	if (BitTest(Local_330.f_23, 0))
	{
		switch (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (!Global_2815059.f_1722)
				{
				}
				if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
				{
					MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
				}
				if (BitTest(uLocal_338, 21))
				{
					MISC::CLEAR_BIT(&uLocal_338, 21);
				}
				if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
				}
				if (((!func_138(PLAYER::PLAYER_ID(), 1, 0) && !func_112()) && !func_263(PLAYER::PLAYER_ID(), 1, 0)) || func_71(PLAYER::PLAYER_ID(), 6))
				{
					if (BitTest(uLocal_338, 3))
					{
						MISC::CLEAR_BIT(&uLocal_338, 3);
					}
					if (BitTest(uLocal_338, 19))
					{
						MISC::CLEAR_BIT(&uLocal_338, 19);
					}
					if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
					{
						MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
					if (iLocal_292 != -1)
					{
						iLocal_292 = -1;
					}
					if (BitTest(Local_330.f_23, 0))
					{
						if (!BitTest(uLocal_338, 16))
						{
							MISC::SET_BIT(&uLocal_338, 16);
							func_262(6, 1);
							MISC::SET_BIT(&uLocal_338, 7);
							Global_2815059.f_1721 = 1;
							Global_2815059.f_1722 = 0;
						}
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
							{
								if (func_256())
								{
									if (Local_330.f_67 != 0)
									{
										VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, true);
									}
									Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
									Global_1931397 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22));
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_330.f_22))))
									{
										HUD::SET_BLIP_SPRITE(Global_1931397, 348);
										func_164("IMPEX_HIPB_INT", -1);
									}
									else
									{
										HUD::SET_BLIP_SPRITE(Global_1931397, 225);
										func_164("IMPEX_HIPR_INT", -1);
									}
									HUD::SET_BLIP_COLOUR(Global_1931397, 2);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1931397, "IMPEX_HIPR_BLP");
									func_262(6, 1);
									MISC::SET_BIT(&uLocal_338, 7);
									Global_2815059.f_1721 = 1;
									if (func_118())
									{
										HUD::SET_BLIP_DISPLAY(Global_1931397, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2815059.f_1722)
				{
					Global_2815059.f_1722 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_330.f_22), false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
							{
								func_255(1);
								if (func_254())
								{
									func_249(2, 0, 1);
								}
								if (HUD::DOES_BLIP_EXIST(Global_1931397))
								{
									HUD::REMOVE_BLIP(&Global_1931397);
								}
							}
							else
							{
								func_255(0);
								if (!func_248(NETWORK::NET_TO_VEH(Local_330.f_22), 0))
								{
									if (!HUD::DOES_BLIP_EXIST(Global_1931397))
									{
										if (!iLocal_109)
										{
											func_247();
										}
									}
								}
							}
						}
						if (!BitTest(uLocal_338, 19))
						{
							if (func_256())
							{
								if (func_245())
								{
									if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_330.f_22), true)) < 2500f)
										{
											if (func_118())
											{
												func_164("FM_IMP_JAC", -1);
											}
											MISC::SET_BIT(&uLocal_338, 19);
										}
									}
								}
							}
						}
						if (func_244())
						{
						}
						func_242();
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_1931397))
						{
							HUD::REMOVE_BLIP(&Global_1931397);
						}
						func_262(6, 0);
						MISC::CLEAR_BIT(&uLocal_338, 7);
						Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_330.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
					}
					if (HUD::DOES_BLIP_EXIST(Global_1931397))
					{
						HUD::REMOVE_BLIP(&Global_1931397);
					}
					func_262(6, 0);
					MISC::CLEAR_BIT(&uLocal_338, 7);
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (BitTest(uLocal_338, 3))
				{
					func_262(6, 0);
					MISC::CLEAR_BIT(&uLocal_338, 7);
					if (HUD::DOES_BLIP_EXIST(Global_1931397))
					{
						HUD::REMOVE_BLIP(&Global_1931397);
					}
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (Local_330.f_26 == 3)
				{
					if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1)
					{
						if (Local_330.f_67 != 0)
						{
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
						}
						if (HUD::DOES_BLIP_EXIST(Global_1931397))
						{
							HUD::REMOVE_BLIP(&Global_1931397);
						}
						if (BitTest(uLocal_338, 16))
						{
							MISC::CLEAR_BIT(&uLocal_338, 16);
						}
						func_262(6, 0);
						MISC::CLEAR_BIT(&uLocal_338, 7);
						Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_255(0);
				break;
		}
		if (func_239())
		{
			if (func_238("IMPEX_HIPR_INT"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (HUD::DOES_BLIP_EXIST(Global_1931397))
			{
				HUD::REMOVE_BLIP(&Global_1931397);
			}
			if (Local_330.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
			}
			Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			func_262(6, 0);
			MISC::CLEAR_BIT(&uLocal_338, 7);
			if (BitTest(uLocal_338, 16))
			{
				MISC::CLEAR_BIT(&uLocal_338, 16);
			}
			func_255(0);
		}
		func_190();
		if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3)
		{
			func_187();
		}
	}
	else
	{
		if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != 0)
		{
			if (Local_330.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_330.f_67, false);
			}
			Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
		}
		if (BitTest(uLocal_338, 21))
		{
			MISC::CLEAR_BIT(&uLocal_338, 21);
		}
		if (Global_2815059.f_1721)
		{
			if (!func_515(&uLocal_303))
			{
				func_514(&uLocal_303, 0, 0);
			}
			else if (func_513(&uLocal_303, 5000, 0))
			{
				func_46(&uLocal_303);
				Global_2815059.f_1721 = 0;
			}
		}
		if (BitTest(uLocal_338, 16))
		{
			if (Local_330.f_34 == 0)
			{
				MISC::CLEAR_BIT(&uLocal_338, 16);
			}
		}
	}
	func_176();
}

void func_176()//Position - 0x7CB5
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	var uVar3;
	bool bVar4;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (!func_245())
			{
				if (!func_515(&uLocal_344))
				{
					func_514(&uLocal_344, 0, 0);
				}
				if (func_513(&uLocal_344, 1000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_330.f_22), true) };
						if (func_184(Var1, func_185(39), func_149(39, 0)))
						{
							if (func_179(39, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_184(Var1, func_185(40), func_149(40, 0)))
						{
							if (func_179(40, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_184(Var1, func_185(41), func_149(41, 0)))
						{
							if (func_179(41, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_184(Var1, func_185(42), func_149(42, 0)))
						{
							if (func_179(42, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_184(Var1, func_185(43), func_149(43, 0)))
						{
							if (func_179(43, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_184(Var1, func_185(44), func_149(44, 0)))
						{
							if (func_179(44, 0, &Var0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
					}
					func_46(&uLocal_344);
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
					{
						if (func_177(NETWORK::NET_TO_VEH(Local_330.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_VEH(Local_330.f_22), Var0, false, false, true);
							ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_330.f_22), fVar2);
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22), true, 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_330.f_22), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_330.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_177(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x7EB2
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
			iVar2 = func_178(iParam0, (iVar0 - 1), bParam6, bParam7);
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
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
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

int func_178(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7F96
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
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
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

bool func_179(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x8032
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
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
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
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
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
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
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
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
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
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
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
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
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_183(iParam0, iParam5))
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
	else if (func_182(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
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
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
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
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
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
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
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
	else if (func_181(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_180(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0);
}

int func_180(int iParam0, int iParam1)//Position - 0x9C69
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

int func_181(int iParam0, int iParam1)//Position - 0x9C84
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

int func_182(int iParam0, int iParam1)//Position - 0x9C9F
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

int func_183(int iParam0, int iParam1)//Position - 0x9CD2
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

int func_184(struct<3> Param0, char* sParam1, struct<3> Param2)//Position - 0x9CFF
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
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

char* func_185(int iParam0)//Position - 0x9D43
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
			return func_186(Global_102568);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
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
	}
	return "";
}

char* func_186(int iParam0)//Position - 0xA107
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
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_160() == 0)
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
		
		default:
			return "";
			break;
	}
	return "";
}

void func_187()//Position - 0xA256
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_293 > -1)
	{
		if (iLocal_293 != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293));
				bVar1 = true;
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iVar0, PLAYER::PLAYER_ID()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), false))
				{
					if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_188(NETWORK::NET_TO_VEH(Local_330.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_188(int iParam0, int iParam1, int iParam2)//Position - 0xA30B
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
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_189(iParam0) == 0)
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

int func_189(int iParam0)//Position - 0xA386
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

void func_190()//Position - 0xA3C0
{
	int iVar0;
	
	if (BitTest(uLocal_338, 5))
	{
		if (iLocal_292 != iLocal_293)
		{
			if (iLocal_293 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293)))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293));
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						if (!func_263(PLAYER::PLAYER_ID(), 1, 0))
						{
							func_191("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (!BitTest(Local_330.f_23, 8))
						{
							MISC::SET_BIT(&(Local_330.f_23), 8);
						}
					}
				}
			}
			iLocal_292 = iLocal_293;
		}
	}
}

int func_191(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA446
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
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
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_236(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_200(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_200(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_198(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { func_197(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar3 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_196(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_192(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_192(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xA606
{
	int iVar0;
	
	if ((!func_195() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_24(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_193(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_193(int iParam0)//Position - 0xA70E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_194(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_194(int iParam0)//Position - 0xA770
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_195()//Position - 0xA7A9
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_196(char* sParam0)//Position - 0xA7BA
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_197(int iParam0)//Position - 0xA7E5
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_198(char* sParam0)//Position - 0xA7FC
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_199(&cVar0);
}

var func_199(char[4] cParam0)//Position - 0xA820
{
	return cParam0;
}

int func_200(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA82A
{
	int iVar0;
	int iVar1;
	
	if (func_234(iParam0) && !bParam4)
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
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_234(PLAYER::PLAYER_ID()) || (func_233() && func_232())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_231();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_14(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_236(iParam1, iParam0, 0);
							}
							else
							{
								return func_213(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_213(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_236(iParam1, iParam0, 0);
				}
				else
				{
					return func_201(0, -1, 0);
				}
			}
			else
			{
				return func_201(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_236(iParam1, iParam0, 0);
		}
		else
		{
			return func_213(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_213(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_201(bool bParam0, int iParam1, bool bParam2)//Position - 0xAA07
{
	return func_202(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_202(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xAA1D
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_212() || (func_211() && func_209())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_208(iParam2, iVar0);
		}
		else
		{
			return func_208(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_207(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_206(1);
				}
				else
				{
					return func_206(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_203(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_203(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_206(1);
	}
	return func_206(0);
}

int func_203(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xAB1E
{
	int iVar0;
	
	iVar0 = func_205(iParam0, iParam1, iParam3);
	if (func_204(Global_4718592.f_116524, 1))
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

int func_204(int iParam0, bool bParam1)//Position - 0xAC36
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
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
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2)//Position - 0xAC87
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
			if (!func_207(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_206(bool bParam0)//Position - 0xACCE
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_207(int iParam0, int iParam1, int iParam2)//Position - 0xACE5
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)//Position - 0xAE90
{
	if (iParam0 == -1)
	{
		iParam0 = func_205(iParam1, iParam0, 4);
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

int func_209()//Position - 0xAEDE
{
	if (func_210())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_210()//Position - 0xAEFD
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_211()//Position - 0xAF12
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_212()//Position - 0xAF59
{
	if (func_210() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xAF76
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
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_222())
			{
				iVar3 = func_218(iParam0);
				if (!iVar3 == -1)
				{
					return func_216(iVar3);
				}
			}
			if ((func_215(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_207(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_206(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_214(1);
			}
			else
			{
				return func_202(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_206(1);
			}
			else
			{
				return func_202(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_218(iParam0);
	if (!iVar4 == -1)
	{
		return func_216(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_214(bool bParam0)//Position - 0xB10D
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_215(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB124
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

int func_216(int iParam0)//Position - 0xB19C
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_217(iParam0);
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

var func_217(int iParam0)//Position - 0xB25F
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_218(int iParam0)//Position - 0xB276
{
	if (!iParam0 == func_121())
	{
		if (func_220(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_219(iParam0)];
		}
	}
	return -1;
}

int func_219(int iParam0)//Position - 0xB2A8
{
	if (iParam0 != func_121())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_121();
}

bool func_220(int iParam0, bool bParam1)//Position - 0xB2CB
{
	if (!bParam1)
	{
		if (func_221(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_121();
}

int func_221(int iParam0)//Position - 0xB2F6
{
	if (iParam0 != func_121())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_121())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_222()//Position - 0xB32B
{
	if ((((((func_230() || func_229()) || func_30()) || func_228()) || func_227()) || func_225()) || func_223())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xB393
{
	return func_224(Global_4718592.f_116524);
}

int func_224(int iParam0)//Position - 0xB3A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_225()//Position - 0xB3D8
{
	return func_226(Global_4718592.f_116524);
}

int func_226(int iParam0)//Position - 0xB3EE
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_227()//Position - 0xB428
{
	return Global_2714762.f_24;
}

var func_228()//Position - 0xB436
{
	return Global_2714762.f_21;
}

var func_229()//Position - 0xB444
{
	return Global_2714762.f_18;
}

var func_230()//Position - 0xB452
{
	return Global_2714762.f_17;
}

var func_231()//Position - 0xB460
{
	return Global_2621446.f_2;
}

var func_232()//Position - 0xB46E
{
	return BitTest(Global_2621446, 4);
}

var func_233()//Position - 0xB47C
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

int func_234(int iParam0)//Position - 0xB496
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_235())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_235()//Position - 0xB4D5
{
	return BitTest(Global_2621446, 3);
}

int func_236(int iParam0, int iParam1, bool bParam2)//Position - 0xB4E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_222())
	{
		iVar2 = func_218(iParam1);
		if (!iVar2 == -1)
		{
			return func_216(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
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
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_202(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_237(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_207(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_214(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_237(int iParam0)//Position - 0xB662
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
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

bool func_238(char* sParam0)//Position - 0xB737
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_239()//Position - 0xB74A
{
	if ((Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_71(PLAYER::PLAYER_ID(), 6)))
	{
		if (func_138(PLAYER::PLAYER_ID(), 1, 0) || func_112())
		{
			if ((!func_240(PLAYER::PLAYER_ID(), 5) && !func_240(PLAYER::PLAYER_ID(), 32)) && !func_240(PLAYER::PLAYER_ID(), 148))
			{
				return 1;
			}
			else if (!iLocal_109)
			{
				if (HUD::DOES_BLIP_EXIST(Global_1931397))
				{
					HUD::REMOVE_BLIP(&Global_1931397);
				}
				iLocal_109 = 1;
			}
		}
		else if (iLocal_109)
		{
			func_247();
			iLocal_109 = 0;
		}
		if (Local_330.f_26 == 3)
		{
			if (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_71(PLAYER::PLAYER_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_240(int iParam0, int iParam1)//Position - 0xB837
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_241(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853348[iVar0 /*834*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0xB870
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_242()//Position - 0xB892
{
	if (HUD::DOES_BLIP_EXIST(Global_1931397))
	{
		if (func_118() || func_243())
		{
			HUD::SET_BLIP_DISPLAY(Global_1931397, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(Global_1931397, 4);
		}
		if (!iLocal_98)
		{
			if (func_263(PLAYER::PLAYER_ID(), 1, 0))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_1931397, true);
				iLocal_98 = 1;
			}
		}
		else if (!func_263(PLAYER::PLAYER_ID(), 1, 0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1931397, false);
			iLocal_98 = 0;
		}
	}
}

var func_243()//Position - 0xB907
{
	return Global_2678393.f_1865;
}

int func_244()//Position - 0xB916
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_330.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_330.f_22), 1, 40000))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_330.f_22))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_330.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), 0f);
					}
					return 1;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_10(Local_330.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_330.f_22), 0f);
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

int func_245()//Position - 0xB9E7
{
	int iVar0;
	int iVar1;
	
	if (iLocal_293 == -1 && BitTest(uLocal_338, 5))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
				{
					if (func_246(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_293 >= 0)
			{
				if (iLocal_293 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_293));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_330.f_22)))
							{
								if (func_246(iVar1, NETWORK::NET_TO_VEH(Local_330.f_22), -1))
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

int func_246(int iParam0, int iParam1, int iParam2)//Position - 0xBABF
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

void func_247()//Position - 0xBAFD
{
	Global_1931397 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_330.f_22));
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_330.f_22))))
	{
		HUD::SET_BLIP_SPRITE(Global_1931397, 348);
	}
	else
	{
		HUD::SET_BLIP_SPRITE(Global_1931397, 225);
	}
	HUD::SET_BLIP_COLOUR(Global_1931397, 2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1931397, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		HUD::SET_BLIP_DISPLAY(Global_1931397, 0);
	}
}

int func_248(int iParam0, int iParam1)//Position - 0xBB67
{
	if (func_165(iParam0, 1215605247, &uLocal_318, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, bool bParam2)//Position - 0xBB8C
{
	if (func_254())
	{
		if (iParam1 == 1)
		{
			if (Global_2815059.f_4462 == -1)
			{
				Global_2815059.f_4462 = Global_262145.f_27172;
			}
			func_253(&(Global_2815059.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2815059.f_4465 == -1)
				{
					Global_2815059.f_4465 = Global_262145.f_27173;
				}
				func_253(&(Global_2815059.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_252(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_252(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_251()) && !func_250(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_250(int iParam0)//Position - 0xBC56
{
	if (func_138(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_251()//Position - 0xBC7B
{
	return Global_2714762.f_841;
}

void func_252(bool bParam0)//Position - 0xBC8A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_254())
		{
			if (func_14(PLAYER::PLAYER_ID(), 1, 0))
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
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_14(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_253(var uParam0, bool bParam1, bool bParam2)//Position - 0xBD83
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

bool func_254()//Position - 0xBDC0
{
	return Global_1574582;
}

void func_255(int iParam0)//Position - 0xBDCC
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 28))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 28);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 28))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 28);
	}
}

int func_256()//Position - 0xBE12
{
	if (func_118())
	{
		return 0;
	}
	if (!func_257(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_257(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xBE36
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_138(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_261(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_110())
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
	if (Global_1836356)
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (Global_2825428)
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	return 1;
}

bool func_258()//Position - 0xBF2F
{
	return Global_2788198;
}

bool func_259()//Position - 0xBF3B
{
	return Global_2714762.f_691;
}

bool func_260()//Position - 0xBF4A
{
	return Global_2714762.f_845;
}

int func_261(int iParam0)//Position - 0xBF59
{
	if (Global_2689235[iParam0 /*453*/].f_216 == 0)
	{
		return 0;
	}
	return 1;
}

void func_262(bool bParam0, bool bParam1)//Position - 0xBF75
{
	if (bParam1)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216, bParam0))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216), bParam0);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216), bParam0);
	}
}

int func_263(int iParam0, bool bParam1, bool bParam2)//Position - 0xBFD2
{
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_264()//Position - 0xC036
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (!func_245())
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_330.f_22), true) };
				if (func_265(Var0, 1215605247, 18))
				{
					if (func_248(NETWORK::NET_TO_VEH(Local_330.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_265(struct<3> Param0, int iParam1, int iParam2)//Position - 0xC098
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_168(iParam1), true) <= IntToFloat(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_266()//Position - 0xC0BB
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
	{
		if (func_4(Local_330.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), false))
				{
					if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (func_267(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22), 1) < 180f)
				{
					if (!BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (BitTest(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
				{
					MISC::CLEAR_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_267(int iParam0, int iParam1, bool bParam2)//Position - 0xC17F
{
	struct<3> Var0;
	struct<3> Var1;
	
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
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

void func_268()//Position - 0xC1DD
{
	int iVar0;
	
	if (iLocal_84)
	{
		func_374();
		if (!BitTest(uLocal_338, 1))
		{
			if (Global_2815059.f_1746 > 0)
			{
				if (Global_2815059.f_1749 == 0)
				{
					Global_2815059.f_1749 = NETWORK::GET_NETWORK_TIME();
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2815059.f_1749) > Global_262145.f_11941)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_256())
							{
								if (!func_373())
								{
									if (!func_372(0) && !func_123())
									{
										Global_22710 = 0;
										iVar0 = func_80(1200, -1, 0);
										if (!BitTest(iVar0, 0))
										{
											if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2815059.f_1749) > 20000)
											{
												if (func_371(18, "CELL_CLTEST6", 2, "NULL", Global_2815059.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_105, 0, 0, 0, 0, 0))
												{
													MISC::SET_BIT(&iVar0, 0);
													func_145(1200, iVar0, -1, 1, 0);
													MISC::SET_BIT(&uLocal_338, 1);
													func_369(0f, 0f, 0f, func_370(19), "");
													Global_2815059.f_1748 = 1;
													iLocal_84 = 0;
												}
											}
										}
										else if (func_371(18, "CELL_CLTEST1", 2, "NULL", Global_2815059.f_1746, "TestSender1", 4, 0, 1, 0, 0, bLocal_105, 0, 0, 0, 0, 0))
										{
											func_369(0f, 0f, 0f, func_370(19), "");
											MISC::SET_BIT(&uLocal_338, 1);
											Global_2815059.f_1748 = 1;
											iLocal_84 = 0;
										}
									}
								}
								else
								{
									Global_2815059.f_1749 = NETWORK::GET_NETWORK_TIME();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (BitTest(uLocal_338, 1))
	{
		if (!BitTest(uLocal_315, 5))
		{
			if (func_256())
			{
				if (bLocal_105)
				{
					func_164("IMPEX_HELP_LNCH", -1);
				}
				MISC::SET_BIT(&uLocal_315, 5);
				func_514(&uLocal_301, 0, 0);
			}
		}
	}
	if (iLocal_107)
	{
		if (func_522())
		{
			if (!func_515(&uLocal_115))
			{
				func_514(&uLocal_115, 0, 0);
			}
			else if (func_513(&uLocal_115, 10000, 0))
			{
				if (func_269(18, "CELL_IMPT", 0, 0))
				{
					iLocal_107 = 0;
					func_46(&uLocal_115);
				}
			}
		}
	}
}

bool func_269(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xC3CB
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_270(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_270(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)//Position - 0xC3F4
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_271(&uVar0, iParam0, func_368(), sParam1, iVar1, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_271(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xC42D
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
	iVar1 = func_367(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_366(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_362(uParam6))
	{
		return 0;
	}
	if (func_359(iVar0, iVar1, iVar2))
	{
		if (func_358())
		{
			return 0;
		}
		func_357();
		return func_278(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_277(iParam4))
	{
		return 0;
	}
	func_272(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_272(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0xC512
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	func_273(iParam4);
	func_357();
	Global_1641031.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_273(int iParam0)//Position - 0xC57F
{
	if (func_276(iParam0))
	{
		func_275();
		return;
	}
	func_274();
}

void func_274()//Position - 0xC59B
{
	Global_1641031.f_40.f_10 = 0;
}

void func_275()//Position - 0xC5AC
{
	Global_1641031.f_40.f_10 = 1;
}

int func_276(int iParam0)//Position - 0xC5BD
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

bool func_277(int iParam0)//Position - 0xC605
{
	return iParam0 > Global_1641031.f_40.f_8;
}

int func_278(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xC618
{
	struct<2> Var0;
	
	func_356();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_353(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_350(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_353(uParam0, sParam3, sParam4);
		}
		return func_333(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_332(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_321(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_320(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_279(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_279(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xC712
{
	bool bVar0;
	
	func_319();
	bVar0 = true;
	if (func_281(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_280(120000);
		return 1;
	}
	return 0;
}

void func_280(int iParam0)//Position - 0xC749
{
	Global_1641031.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

int func_281(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xC76C
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_313(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
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
	sVar4 = func_312(sParam5, bParam6, &iVar3);
	uVar5 = func_310(iParam7, &iVar3);
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
		bVar12 = func_309(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_285(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_284();
	}
	func_319();
	func_283();
	func_282();
	return 1;
}

void func_282()//Position - 0xC8B5
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_283()//Position - 0xC8CD
{
	Global_1641031.f_40 = 3;
}

void func_284()//Position - 0xC8DC
{
	MISC::SET_BIT(&Global_8136, 8);
}

int func_285(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xC8ED
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
	if (func_286(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			MISC::SET_BIT(&Global_4541229, 0);
		}
		return 1;
	}
	return 0;
}

int func_286(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xC959
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_302();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
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
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_301() == 0)
	{
		func_299();
		return 0;
	}
	func_298(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	func_302();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				func_297(0);
				break;
			
			case 1:
				func_297(1);
				break;
			
			case 2:
				func_297(2);
				break;
			
			case 3:
				func_297(3);
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
				Global_4541214 = 1;
				break;
			
			case 0:
				Global_4541214 = 1;
				break;
			
			case 2:
				Global_4541214 = 1;
				break;
			
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		func_302();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_296())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_295(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_291(1);
			func_295(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_287(iParam0, sParam1, bVar1, func_290(PLAYER::PLAYER_ID()));
	return 1;
}

void func_287(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xCD46
{
	if (!func_288())
	{
		return;
	}
	MONEY::_NETWORK_SPENT_NIGHTCLUB_BATHROOM_ATTENDANT(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_288()//Position - 0xCD79
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_121())
	{
		return 0;
	}
	if (func_289(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_289(int iParam0)//Position - 0xCDDC
{
	return func_132(iParam0, 20);
}

int func_290(int iParam0)//Position - 0xCDEC
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_291(int iParam0)//Position - 0xCE01
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
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_294(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_293(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_292(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xD39B
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
		func_293(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_293(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_293(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_293(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_293(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_293(char* sParam0)//Position - 0xD44E
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_294(int iParam0)//Position - 0xD460
{
	return Global_43052 == iParam0;
}

void func_295(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xD46E
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

bool func_296()//Position - 0xD4D1
{
	return Global_1575058;
}

void func_297(int iParam0)//Position - 0xD4DD
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_298(int iParam0)//Position - 0xD4FC
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
	Global_4539964[iParam0 /*104*/].f_18 = iVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_299()//Position - 0xD57C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_300(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
}

int func_300(struct<6> Param0, struct<6> Param1)//Position - 0xD626
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

int func_301()//Position - 0xD711
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_300(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

void func_302()//Position - 0xD83C
{
	if (func_294(14))
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
		Global_20266 = func_303();
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

var func_303()//Position - 0xD8DE
{
	func_304();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_304()//Position - 0xD8F7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_307(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_306(PLAYER::PLAYER_PED_ID());
			if (func_305(iVar0) && (!func_294(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_305(Global_113386.f_2363.f_539.f_4321))
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

bool func_305(int iParam0)//Position - 0xD9F4
{
	return iParam0 < 3;
}

int func_306(int iParam0)//Position - 0xDA00
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_307(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_307(int iParam0)//Position - 0xDA3D
{
	if (func_305(iParam0))
	{
		return func_308(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_308(int iParam0)//Position - 0xDA62
{
	return Global_1998[iParam0 /*29*/];
}

int func_309(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xDA71
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
	if (func_286(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			MISC::SET_BIT(&Global_4541229, 0);
		}
		return 1;
	}
	return 0;
}

int func_310(int iParam0, int iParam1)//Position - 0xDAF3
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_311(2, iParam1);
	return iParam0;
}

void func_311(int iParam0, var uParam1)//Position - 0xDB12
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

char* func_312(char* sParam0, bool bParam1, int iParam2)//Position - 0xDBC3
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_311(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_313(int iParam0)//Position - 0xDC00
{
	int iVar0;
	
	iVar0 = func_316(iParam0);
	if (iVar0 == -1)
	{
		func_314(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_314(int iParam0, bool bParam1)//Position - 0xDC36
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_316(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_315(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_315(int iParam0)//Position - 0xDCA2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_316(int iParam0)//Position - 0xDCD4
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_317(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_317(int iParam0)//Position - 0xDD53
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1660783[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_318(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_318(var uParam0)//Position - 0xDE09
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_319()//Position - 0xDE36
{
	Global_1641031.f_40.f_9 = 4;
}

int func_320(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xDE47
{
	bool bVar0;
	
	func_319();
	bVar0 = false;
	return func_281(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_321(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xDE6E
{
	bool bVar0;
	
	bVar0 = false;
	return func_322(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_322(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xDE91
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_313(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_312(sParam5, bParam6, &iVar3);
	uVar5 = func_310(iParam7, &iVar3);
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
		bVar12 = func_371(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_324(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_284();
	}
	func_323();
	func_283();
	func_282();
	return 1;
}

void func_323()//Position - 0xDFDF
{
	Global_1641031.f_40.f_9 = 3;
}

int func_324(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xDFF0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_326(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_325(iParam0) };
			Global_8823 = iParam0;
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_325(int iParam0)//Position - 0xE07F
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_326(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xE092
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_302();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
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
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_331() == 0)
	{
		func_329();
		return 0;
	}
	func_328(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_297(0);
		func_297(2);
		func_297(1);
	}
	else
	{
		func_302();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_297(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_297(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_297(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_297(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_302();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_296())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_295(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_291(1);
			func_295(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_327(iParam0, sParam1, bVar1, func_290(PLAYER::PLAYER_ID()));
	return 1;
}

void func_327(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xE56D
{
	if (!func_288())
	{
		return;
	}
	MONEY::_NETWORK_SPENT_NIGHTCLUB_BATHROOM_ATTENDANT(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_328(int iParam0)//Position - 0xE5A0
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
	Global_113386.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_329()//Position - 0xE632
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
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
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_330(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_330(struct<6> Param0, struct<6> Param1)//Position - 0xE6FD
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

int func_331()//Position - 0xE7E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
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
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_330(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_332(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xE950
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_323();
	bVar0 = true;
	if (func_322(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_280(120000);
		return 1;
	}
	return 0;
}

int func_333(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0xE9A2
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
		bVar0 = func_349(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_339(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_338(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_337(1);
		}
		func_336();
		func_283();
		func_335();
		func_334();
		return 1;
	}
	return 0;
}

void func_334()//Position - 0xEA39
{
	Global_2824944 = 0;
}

void func_335()//Position - 0xEA46
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_336()//Position - 0xEA5E
{
	Global_1641031.f_40.f_9 = 1;
}

void func_337(int iParam0)//Position - 0xEA6F
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8138, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8138, 0);
	}
}

void func_338(int iParam0)//Position - 0xEA90
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 20);
	}
}

int func_339(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xEAB3
{
	func_348(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_340(sParam3, iParam4, bParam7);
}

int func_340(char* sParam0, int iParam1, bool bParam2)//Position - 0xEB01
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_347();
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
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_346();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				func_302();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
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
				if (func_345())
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
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
			if (func_344())
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
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_343();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_342();
		func_341();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_347();
	}
	return 0;
}

void func_341()//Position - 0xEDCF
{
	if (!func_288())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

void func_342()//Position - 0xEE06
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

void func_343()//Position - 0xEE37
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

int func_344()//Position - 0xEECC
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_345()//Position - 0xEEF3
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

void func_346()//Position - 0xEF8C
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

void func_347()//Position - 0xEFE3
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xF03A
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
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

int func_349(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xF090
{
	func_348(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_340(sParam3, iParam4, bParam7);
}

int func_350(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0xF0DE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_352(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_351();
		func_336();
		func_283();
		func_335();
		func_334();
		return 1;
	}
	return 0;
}

void func_351()//Position - 0xF130
{
	Global_22623 = 0;
}

bool func_352(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xF13C
{
	func_348(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_340(sParam3, iParam4, bParam8);
}

int func_353(var uParam0, char* sParam1, char* sParam2)//Position - 0xF191
{
	if (func_355(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_354();
		func_283();
		func_335();
		return 1;
	}
	return 0;
}

void func_354()//Position - 0xF1BC
{
	Global_1641031.f_40.f_9 = 2;
}

bool func_355(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF1CD
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_340(sParam2, iParam3, 0);
}

void func_356()//Position - 0xF21B
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_357()//Position - 0xF241
{
	Global_1641031.f_40 = 1;
}

bool func_358()//Position - 0xF250
{
	return Global_1641031.f_40 == 1;
}

int func_359(int iParam0, int iParam1, int iParam2)//Position - 0xF260
{
	if (!func_360(iParam0))
	{
		return 0;
	}
	if (Global_1641031.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1641031.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_360(int iParam0)//Position - 0xF29F
{
	if (!func_361())
	{
		return 0;
	}
	if (!Global_1641031.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_361()//Position - 0xF2C7
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_362(var uParam0)//Position - 0xF2DE
{
	if (func_365())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_372(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1931426 || func_364())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_363())
		{
			return 0;
		}
	}
	return 1;
}

bool func_363()//Position - 0xF33F
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1659413);
}

int func_364()//Position - 0xF353
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_365()//Position - 0xF36B
{
	return func_344();
}

int func_366(int iParam0, int iParam1, int iParam2)//Position - 0xF377
{
	if (!func_109())
	{
		return 0;
	}
	return func_359(iParam0, iParam1, iParam2);
}

int func_367(char* sParam0, char* sParam1)//Position - 0xF395
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_368()//Position - 0xF3AF
{
	return "TXTMSG";
}

int func_369(struct<3> Param0, char* sParam1, char* sParam2)//Position - 0xF3BB
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2815059.f_4033[iVar0 /*26*/].f_4)))
				{
					Global_2815059.f_4033[iVar0 /*26*/] = 1;
					Global_2815059.f_4033[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2815059.f_4033[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2815059.f_4033[iVar0 /*26*/] = 1;
				Global_2815059.f_4033[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), sParam2, 64);
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

char* func_370(int iParam0)//Position - 0xF4BC
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_371(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xF4CE
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
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 3;
	if (func_326(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_325(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xF57A
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

bool func_373()//Position - 0xF5D1
{
	return func_361();
}

void func_374()//Position - 0xF5DD
{
	if (func_70())
	{
		if (!iLocal_320 == Local_330.f_32)
		{
			Global_2815059.f_1706 = { Local_329 };
			func_375();
			iLocal_320 = Local_330.f_32;
		}
	}
}

void func_375()//Position - 0xF615
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2815059.f_1725[iVar1 /*4*/]), "", 16);
		if (!Global_2815059.f_1706[iVar1] == -1 && Global_2815059.f_1706.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2815059.f_1725[iVar0 /*4*/]), func_376(Global_2815059.f_1706[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2815059.f_1746 = iVar0;
}

char* func_376(int iParam0, bool bParam1)//Position - 0xF690
{
	switch (iParam0)
	{
		case 0:
			return func_377(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_377(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_377(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_377(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_377(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_377(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_377(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_377(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_377(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_377(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_377(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_377(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_377(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_377(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_377(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_377(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_377(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_377(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_377(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_377(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_377(bool bParam0, char* sParam1, char* sParam2)//Position - 0xF86E
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_378()//Position - 0xF885
{
	int iVar0;
	
	if (!iLocal_99)
	{
		if (!func_383(PLAYER::PLAYER_ID(), 1))
		{
			if (!func_122(PLAYER::PLAYER_ID(), 0))
			{
				if (!Local_330.f_28 == -1)
				{
					if (!iLocal_322 == func_34(Local_330.f_28))
					{
						if (!func_382(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_381(PLAYER::PLAYER_ID()))
							{
								iLocal_322 = func_34(Local_330.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_328)
								{
									ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_328[iVar0], iLocal_322);
									iVar0++;
								}
								iLocal_99 = 1;
								STREAMING::REQUEST_MODEL(iLocal_322);
								func_380();
								func_379(iLocal_322);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_383(PLAYER::PLAYER_ID(), 1) || (Local_330.f_28 > -1 && !iLocal_322 == func_34(Local_330.f_28))) || func_382(PLAYER::PLAYER_PED_ID())) || func_122(PLAYER::PLAYER_ID(), 0)) || func_381(PLAYER::PLAYER_ID()))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_322);
		iVar0 = 0;
		while (iVar0 < iLocal_328)
		{
			ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_328[iVar0]);
			iVar0++;
		}
		func_380();
		iLocal_322 = 0;
		iLocal_99 = 0;
	}
}

void func_379(int iParam0)//Position - 0xF9AF
{
	if (BitTest(Local_330.f_23, 0))
	{
		if (iParam0 == Local_330.f_67)
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
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_285[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_285[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_286 = 1;
			break;
	}
}

void func_380()//Position - 0x10158
{
	int iVar0;
	
	if (iLocal_286)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_285[iVar0]))
		{
			VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_285[iVar0]);
		}
		iLocal_285[iVar0] = 0;
		iVar0++;
	}
	iLocal_286 = 0;
}

int func_381(int iParam0)//Position - 0x1019E
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_120(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

bool func_382(int iParam0)//Position - 0x101E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_152057;
}

bool func_383(int iParam0, bool bParam1)//Position - 0x10210
{
	if (func_83() != 0)
	{
		return func_384(iParam0) != 0;
	}
	return func_138(iParam0, bParam1, 0);
}

int func_384(int iParam0)//Position - 0x10237
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

void func_385()//Position - 0x10259
{
	var uVar0;
	
	if (!func_515(&uLocal_307))
	{
		func_514(&uLocal_307, 0, 0);
	}
	else if (func_513(&uLocal_307, 250, 0))
	{
		func_46(&uLocal_307);
		if (func_400(1, 0))
		{
			if (!BitTest(uLocal_315, 5) && !func_399())
			{
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((func_398() || func_399()) || func_394())
				{
					if (!func_393(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (!func_392(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (func_387(&uVar0))
								{
									if (!BitTest(uLocal_315, 2))
									{
										if (func_256() && SYSTEM::TIMERA() > 500)
										{
											func_164("IMPEX_FSPRAY_FM", -1);
											MISC::SET_BIT(&uLocal_315, 2);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!BitTest(uLocal_315, 8))
								{
									if (func_256() && SYSTEM::TIMERA() > 500)
									{
										func_164("IMPEX_CASH_FM", -1);
										MISC::SET_BIT(&uLocal_315, 8);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!BitTest(uLocal_315, 11))
							{
								if (func_256() && SYSTEM::TIMERA() > 500)
								{
									func_164("IMPEX_WANTED_FM", -1);
									MISC::SET_BIT(&uLocal_315, 11);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (!func_386())
							{
								if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!BitTest(uLocal_315, 3))
									{
										MISC::CLEAR_BIT(&uLocal_315, 7);
										if (func_256() && SYSTEM::TIMERA() > 2000)
										{
											if (Global_2815059.f_4585 == 0)
											{
												if (!func_248(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
												{
													func_164("IMPEX_DELIVER_FM", -1);
													MISC::SET_BIT(&uLocal_315, 3);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!BitTest(uLocal_315, 7))
								{
									if (func_256() && SYSTEM::TIMERA() > 2000)
									{
										func_164("IMPEX_RIG_FM", -1);
										MISC::SET_BIT(&uLocal_315, 7);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!BitTest(uLocal_315, 6))
							{
								if (func_256() && SYSTEM::TIMERA() > 2000)
								{
									func_164("IMPEX_WANTED_P", -1);
									MISC::SET_BIT(&uLocal_315, 6);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!BitTest(uLocal_315, 4))
						{
							if (func_256() && SYSTEM::TIMERA() > 5000)
							{
								func_164("IMPEX_WANTED_FM", -1);
								MISC::SET_BIT(&uLocal_315, 4);
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
					if (func_238("IMPEX_FSPRAY_FM"))
					{
						HUD::CLEAR_HELP(true);
					}
					MISC::CLEAR_BIT(&uLocal_315, 2);
					MISC::CLEAR_BIT(&uLocal_315, 3);
					MISC::CLEAR_BIT(&uLocal_315, 4);
					MISC::CLEAR_BIT(&uLocal_315, 6);
					MISC::CLEAR_BIT(&uLocal_315, 7);
					MISC::CLEAR_BIT(&uLocal_315, 8);
					MISC::CLEAR_BIT(&uLocal_315, 11);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (func_238("IMPEX_FSPRAY_FM"))
				{
					HUD::CLEAR_HELP(true);
				}
				MISC::CLEAR_BIT(&uLocal_315, 2);
				MISC::CLEAR_BIT(&uLocal_315, 3);
				MISC::CLEAR_BIT(&uLocal_315, 4);
				MISC::CLEAR_BIT(&uLocal_315, 6);
				MISC::CLEAR_BIT(&uLocal_315, 7);
				MISC::CLEAR_BIT(&uLocal_315, 8);
				MISC::CLEAR_BIT(&uLocal_315, 11);
				if (SYSTEM::TIMERA() > 0)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else if (func_238("IMPEX_FSPRAY_FM"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_386()//Position - 0x105B7
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

int func_387(var uParam0)//Position - 0x1062B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			*uParam0 = func_388(iVar0, 0);
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

int func_388(int iParam0, bool bParam1)//Position - 0x10688
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
	
	if (func_391(PLAYER::PLAYER_ID()) && !bParam1)
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
	if (unk_0xE3D43E568F45340A(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_390(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_12023));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_12023)))
		{
			iVar4 = Global_262145.f_12021;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12022)
		{
			iVar0 = Global_262145.f_12022;
		}
	}
	else if (func_389(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_12026));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_12026)))
		{
			iVar4 = Global_262145.f_12024;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_12025)
		{
			iVar0 = Global_262145.f_12025;
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

int func_389(int iParam0)//Position - 0x10A1F
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

int func_390(int iParam0, int iParam1)//Position - 0x10A70
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
		
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
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
			if (Global_262145.f_19186)
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
			if (Global_262145.f_19188)
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
			if (Global_262145.f_19192)
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
			if (Global_262145.f_19189)
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
			if (Global_262145.f_19196)
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
			if (Global_262145.f_19194)
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
			if (Global_262145.f_19199)
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
			if (Global_262145.f_21144)
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
			if (Global_262145.f_21145)
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

int func_391(int iParam0)//Position - 0x10E4F
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_120(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

bool func_392(int iParam0)//Position - 0x10E96
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_393(int iParam0)//Position - 0x10EA8
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_394()//Position - 0x10EDA
{
	int iVar0;
	
	if (func_524())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!func_397(iVar0, 1) && !func_396(iVar0, 1))
		{
			if (func_395(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0)//Position - 0x10F2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_330.f_35[iVar1] == iVar0)
			{
				if (!func_513(&(Local_330.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_396(int iParam0, bool bParam1)//Position - 0x10F7F
{
	if (Global_78319)
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

int func_397(int iParam0, bool bParam1)//Position - 0x10FD3
{
	if (Global_78319)
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

int func_398()//Position - 0x11012
{
	int iVar0;
	
	if (func_524())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_1922044)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!func_397(iVar0, 1) && !func_396(iVar0, 1))
			{
				if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true))
					{
						if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 <= 0)
						{
							if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1922043)
								{
									if (bLocal_287)
									{
										bLocal_287 = false;
									}
									if (func_74(&Local_329, ENTITY::GET_ENTITY_MODEL(iVar0)))
									{
										Global_2815059.f_1750 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_287)
					{
						bLocal_287 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_399()//Position - 0x110CE
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Local_330.f_23, 0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_330.f_22))
			{
				if (func_4(Local_330.f_22))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_330.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_400(bool bParam0, bool bParam1)//Position - 0x1111C
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
		if (func_138(PLAYER::PLAYER_ID(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
		}
	}
	if (!func_14(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_401()//Position - 0x111BE
{
	int iVar0;
	
	switch (iLocal_112)
	{
		case 0:
			if (!func_138(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (!func_515(&uLocal_113) || func_513(&uLocal_113, 2000, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_404(&uLocal_117, 4, iLocal_111, "MECHANIC_IMP", 0, 1);
							iLocal_340 = 0;
							iLocal_112++;
						}
					}
					func_46(&uLocal_113);
					func_514(&uLocal_113, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_138(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_96)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, false, true, 0))
								{
									if (!iLocal_340)
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										if (func_388(iVar0, 0) > 500)
										{
											sLocal_341 = "FM_IEPOOR";
										}
										else
										{
											sLocal_341 = "FM_IEGOOD";
										}
										iLocal_340 = 1;
									}
									else if (func_403(&uLocal_117, "FM_1AU", sLocal_341, 12, 0, 0, 0))
									{
										iLocal_282 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										iLocal_112++;
										iLocal_340 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_402();
						iLocal_112 = 0;
					}
				}
				else
				{
					func_402();
					iLocal_112 = 0;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_138(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_96)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_282)
								{
									iLocal_112 = 1;
								}
							}
						}
					}
					else
					{
						func_402();
						iLocal_112 = 0;
					}
				}
				else
				{
					func_402();
					iLocal_112 = 0;
				}
			}
			break;
	}
}

void func_402()//Position - 0x113D3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_xmech_02"));
		iVar0 = iLocal_111;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

bool func_403(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x113F7
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 1;
	return func_340(sParam2, iParam3, 0);
}

void func_404(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x11445
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

void func_405()//Position - 0x114E0
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
	int iVar10;
	
	if (func_400(1, 1))
	{
		switch (Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1)
		{
			case 0:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					bVar7 = func_394();
					if ((func_398() || func_399()) || bVar7)
					{
						if (!func_386())
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (!func_502())
								{
									if (bLocal_95)
									{
										bLocal_95 = false;
									}
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AllowModSprayRepair", 2))
									{
										if (!DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") || (DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") && DECORATOR::DECOR_GET_BOOL(iVar3, "AllowModSprayRepair") == 0))
										{
											DECORATOR::DECOR_SET_BOOL(iVar3, "AllowModSprayRepair", true);
										}
									}
									if (!iLocal_101)
									{
										if (func_501(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_342 = iVar3;
									if (BitTest(uLocal_338, 15))
									{
										MISC::CLEAR_BIT(&uLocal_338, 15);
									}
									if (BitTest(uLocal_315, 9))
									{
										MISC::CLEAR_BIT(&uLocal_315, 9);
									}
									if (BitTest(uLocal_315, 12))
									{
										MISC::CLEAR_BIT(&uLocal_315, 12);
									}
									if (BitTest(uLocal_315, 10))
									{
										MISC::CLEAR_BIT(&uLocal_315, 10);
									}
									if (!BitTest(uLocal_338, 12))
									{
										if (bVar7)
										{
											MISC::SET_BIT(&uLocal_338, 12);
										}
									}
									else if (!bVar7)
									{
										MISC::CLEAR_BIT(&uLocal_338, 12);
									}
									if (func_392(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_88 = true;
											if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (bLocal_94)
												{
													bLocal_94 = false;
												}
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													bLocal_91 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_91)
												{
													bLocal_91 = false;
												}
												bLocal_94 = true;
											}
											bLocal_89 = false;
											bLocal_90 = false;
											bLocal_92 = false;
											bLocal_93 = false;
											bLocal_95 = false;
											bLocal_96 = true;
											if (func_500(1215605247, 18))
											{
												bLocal_86 = true;
											}
											iLocal_324 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
											if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_324))
											{
												if (func_248(iLocal_324, 0))
												{
													if (!BitTest(uLocal_338, 17))
													{
														MISC::SET_BIT(&uLocal_338, 17);
													}
													else if (func_248(iLocal_324, 1))
													{
														Var9 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_324) };
														if (ENTITY::GET_ENTITY_SPEED(iLocal_324) < 0.5f || MISC::ABSF(Var9.f_1) < 1.3f)
														{
															func_499();
															func_490(PLAYER::PLAYER_ID(), 0, 16388, 0);
															if (func_399())
															{
																MISC::SET_BIT(&uLocal_338, 4);
																MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
															}
															if (func_398() || func_394())
															{
																MISC::SET_BIT(&uLocal_338, 6);
															}
															if (func_489())
															{
																bLocal_85 = true;
															}
															else
															{
																bLocal_85 = false;
															}
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_324, 2);
															if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_324))
															{
																ENTITY::SET_ENTITY_PROOFS(iLocal_324, true, true, true, true, true, false, false, false);
															}
															Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = func_75(ENTITY::GET_ENTITY_MODEL(iLocal_324));
															Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_323[iVar4] = func_121();
																if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_324, iVar1, false))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_324, iVar1, false)))
																	{
																		if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_324, iVar1, false), false))
																		{
																			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_324, iVar1, false);
																			if (PED::IS_PED_A_PLAYER(iVar0))
																			{
																				if (func_14(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 0))
																				{
																					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
																					{
																						iLocal_323[iVar4] = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_294 = func_488(ENTITY::GET_ENTITY_MODEL(iLocal_324));
															iLocal_295 = func_388(iLocal_324, 0);
															fLocal_296 = SYSTEM::TO_FLOAT((iLocal_294 - iLocal_295));
															fLocal_296 = (fLocal_296 * Global_262145.f_2421);
															if (BitTest(uLocal_338, 4))
															{
																fLocal_296 = (fLocal_296 * 1.3f);
															}
															fLocal_296 = (fLocal_296 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_297 = 500f;
															func_487();
															func_172(0);
															func_485(1248, 1, -1);
															if (func_238("IMPEX_DELIVER_FM"))
															{
																HUD::CLEAR_HELP(true);
															}
															MISC::CLEAR_BIT(&uLocal_338, 12);
															iVar6 = func_80(1200, -1, 0);
															if (!BitTest(iVar6, 1))
															{
																MISC::SET_BIT(&iVar6, 1);
																func_145(1200, iVar6, -1, 1, 0);
															}
															else if (!BitTest(iVar6, 2))
															{
																MISC::SET_BIT(&iVar6, 2);
																func_145(1200, iVar6, -1, 1, 0);
															}
															func_484();
															iLocal_298 = 0;
															iLocal_298 = SYSTEM::ROUND(fLocal_296);
															iLocal_298 = (iLocal_298 - (iLocal_298 % 25));
															if (iLocal_343 == iVar3)
															{
																iLocal_298 = (iLocal_298 + iLocal_300);
															}
															if (!BitTest(uLocal_338, 4))
															{
																if (iLocal_298 > Global_262145.f_173)
																{
																	iLocal_298 = Global_262145.f_173;
																}
															}
															else if (iLocal_298 > Global_262145.f_173)
															{
																iLocal_298 = Global_262145.f_173;
															}
															iLocal_299 = 0;
															fLocal_297 = (fLocal_297 * Global_262145.f_4237);
															iLocal_299 = SYSTEM::ROUND(fLocal_297);
															MISC::CLEAR_BIT(&uLocal_338, 17);
															iLocal_325 = iLocal_324;
															iLocal_327 = ENTITY::GET_ENTITY_MODEL(iLocal_324);
															if (!BitTest(uLocal_338, 4))
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(19, iLocal_299, iLocal_298, iLocal_324);
															}
															else
															{
																STATS::PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(120, iLocal_299, iLocal_298, iLocal_324);
															}
															func_483(19, 1);
															func_482();
															func_518();
														}
														else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
														{
															func_490(PLAYER::PLAYER_ID(), 0, 16388, 0);
														}
													}
												}
												else if (BitTest(uLocal_338, 17))
												{
													MISC::CLEAR_BIT(&uLocal_338, 17);
												}
											}
										}
										else
										{
											if (bLocal_88)
											{
												bLocal_88 = false;
											}
											if (bLocal_96)
											{
												bLocal_96 = false;
											}
											if (bLocal_91)
											{
												bLocal_91 = false;
											}
											if (bLocal_94)
											{
												bLocal_94 = false;
											}
											if (bLocal_95)
											{
												bLocal_95 = false;
											}
										}
									}
									else if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										if (func_387(&iVar8))
										{
											if (!func_393(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
											{
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													if (iLocal_343 != iVar3)
													{
														iLocal_343 = iVar3;
														iLocal_300 = 0;
													}
													else if (iLocal_300 != iVar8)
													{
														if (iLocal_300 < iVar8)
														{
															iLocal_300 = iVar8;
														}
													}
												}
												if (!bLocal_89)
												{
													bLocal_89 = true;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													if (func_77())
													{
														if (bLocal_90)
														{
															bLocal_90 = false;
														}
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															if (func_388(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0) > 0)
															{
																if (!bLocal_93)
																{
																	bLocal_93 = true;
																}
															}
															else
															{
																if (bLocal_93)
																{
																	bLocal_93 = false;
																}
																if (!bLocal_92)
																{
																	bLocal_92 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_92)
													{
														bLocal_92 = false;
													}
													if (bLocal_93)
													{
														bLocal_93 = false;
													}
													if (!bLocal_90)
													{
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															bLocal_90 = true;
														}
													}
												}
											}
											else
											{
												func_481();
											}
										}
										else
										{
											func_481();
										}
									}
									else
									{
										func_481();
										if (bLocal_96)
										{
											bLocal_96 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iLocal_342 != iVar3)
								{
									if (!iLocal_101)
									{
										if (func_501(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_342 = iVar3;
								}
								if (!bLocal_95)
								{
									func_481();
									bLocal_95 = true;
								}
							}
						}
					}
					else
					{
						func_481();
						if (bLocal_96)
						{
							bLocal_96 = false;
						}
						if (iLocal_101)
						{
							if (Local_330.f_33)
							{
								if (bLocal_106)
								{
									iLocal_101 = 0;
								}
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if ((func_238("IMPEX_NOT_NEED") || func_238("IMPEX_NO_MORE")) || func_238("IMPEX_NOT_PVEH"))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_397(iVar2, 1))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar2, "Player_Vehicle"))
								{
									if (DECORATOR::DECOR_GET_INT(iVar2, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) || iVar2 == iLocal_342)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
										{
											if (func_256())
											{
												if (!BitTest(uLocal_338, 15))
												{
													if (bVar7 || func_74(&Local_329, ENTITY::GET_ENTITY_MODEL(iVar2)))
													{
														func_164("IMPEX_NOT_PVEH", -1);
														MISC::SET_BIT(&uLocal_338, 15);
													}
												}
											}
										}
									}
									else if (BitTest(uLocal_338, 15))
									{
										if (iVar2 != iLocal_342)
										{
											MISC::CLEAR_BIT(&uLocal_338, 15);
										}
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_338, 15))
							{
								if (iVar2 != iLocal_342)
								{
									MISC::CLEAR_BIT(&uLocal_338, 15);
								}
							}
							if (bLocal_102)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_500(1215605247, 18))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (func_248(iVar2, 0))
									{
										if (!iLocal_100)
										{
											func_172(1);
											iLocal_100 = 1;
										}
										bLocal_86 = true;
									}
								}
								else if (iLocal_100)
								{
									func_172(0);
									iLocal_100 = 0;
									bLocal_86 = false;
								}
							}
						}
						if (func_500(1215605247, 18))
						{
							if (func_256())
							{
								if (func_397(iVar2, 1))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
									{
										if (!BitTest(uLocal_315, 10))
										{
											func_164("IMPEX_NOT_PVEH", -1);
											MISC::SET_BIT(&uLocal_315, 10);
										}
									}
								}
								else if (func_74(&Local_329, ENTITY::GET_ENTITY_MODEL(iVar2)))
								{
									if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar2, 0))
									{
										if (!BitTest(uLocal_315, 12))
										{
											func_164("IMPEX_NOT_CREW", -1);
											MISC::SET_BIT(&uLocal_315, 12);
										}
									}
								}
								else if (!BitTest(uLocal_315, 9))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										func_164("IMPEX_NOT_NEED", -1);
										MISC::SET_BIT(&uLocal_315, 9);
									}
								}
							}
						}
						else
						{
							if (BitTest(uLocal_315, 9))
							{
								MISC::CLEAR_BIT(&uLocal_315, 9);
							}
							if (BitTest(uLocal_315, 10))
							{
								MISC::CLEAR_BIT(&uLocal_315, 10);
							}
							if (BitTest(uLocal_315, 12))
							{
								MISC::CLEAR_BIT(&uLocal_315, 12);
							}
							if (BitTest(uLocal_338, 12))
							{
								if (func_256())
								{
									func_164("IMPEX_NO_MORE", -1);
									MISC::CLEAR_BIT(&uLocal_338, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_481();
					if (bLocal_96)
					{
						bLocal_96 = false;
					}
					if (iLocal_101)
					{
						iLocal_101 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_165(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_318, 0, 500, 1, 0))
					{
						Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 2;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_338, 4);
					MISC::CLEAR_BIT(&uLocal_338, 6);
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_478(17, 1, -1);
					if (BitTest(uLocal_338, 4))
					{
						MISC::SET_BIT(&(Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
						func_477();
					}
					else
					{
						func_475();
					}
					if (bLocal_85)
					{
						if (BitTest(uLocal_338, 6))
						{
							Local_83.f_2 = -579901295;
						}
						else
						{
							Local_83.f_2 = -1559779014;
						}
						Local_83.f_3 = Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
						Local_83.f_10 = iLocal_323[0];
						Local_83.f_11 = iLocal_323[1];
						Local_83.f_12 = iLocal_323[2];
						Local_83.f_13 = iLocal_323[3];
						if (!BitTest(uLocal_338, 6))
						{
						}
					}
					MISC::CLEAR_BIT(&uLocal_338, 6);
					func_474(4, iLocal_298);
					func_458(&iLocal_298, 1);
					if (iLocal_298 > 0)
					{
						if (func_457())
						{
							func_446(941287179, iLocal_298, &iVar10, 0, 0, 0);
							Global_4534105[iVar10 /*85*/].f_3 = iLocal_327;
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_298, iLocal_327);
						}
					}
					if (iLocal_295 > 0)
					{
						func_445("IMPEX_PASS", iLocal_298, 7000, 0);
					}
					else
					{
						func_445("IMPEX_PASS", iLocal_298, 7000, 0);
					}
					func_410(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_299, 1, -1, 0);
					func_409(29);
					func_490(PLAYER::PLAYER_ID(), 1, 0, 0);
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
					Local_337[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = -1;
					MISC::CLEAR_BIT(&uLocal_338, 4);
					iLocal_107 = 1;
					func_406(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_383(PLAYER::PLAYER_ID(), 1))
		{
			if (!bLocal_102)
			{
				if (iLocal_100)
				{
					func_172(0);
					iLocal_100 = 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_500(1215605247, 18))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_248(iVar2, 0))
				{
					if (!iLocal_100)
					{
						func_172(1);
						iLocal_100 = 1;
					}
					bLocal_86 = true;
				}
			}
			else if (iLocal_100)
			{
				func_172(0);
				iLocal_100 = 0;
				bLocal_86 = false;
			}
		}
		if (bLocal_89)
		{
			bLocal_89 = false;
		}
		if (bLocal_90)
		{
			bLocal_90 = false;
		}
		if (bLocal_92)
		{
			bLocal_92 = false;
		}
		if (bLocal_93)
		{
			bLocal_93 = false;
		}
	}
}

void func_406(int iParam0, int iParam1, int iParam2)//Position - 0x120F0
{
	int iVar0;
	
	if (func_408(iParam1, iParam2))
	{
		iVar0 = func_407();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_407()//Position - 0x1211D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_408(int iParam0, var uParam1)//Position - 0x12152
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_409(int iParam0)//Position - 0x121D8
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_512() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_410(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1223B
{
	return func_411(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_411(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12257
{
	var uVar0;
	
	uVar0 = func_412(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_412(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1227A
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_437();
	if (func_436(sParam2))
	{
	}
	if (func_435())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_433(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_432(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_430(0, &iVar1);
					break;
				
				case 3:
					func_430(1, &iVar1);
					break;
				
				case 1:
					func_427(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
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
			func_485(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_422((func_426(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					func_485(1166, iVar1, -1);
				}
				func_417(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_413((func_415(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_413((func_415(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_413(int iParam0)//Position - 0x123E5
{
	if (func_435())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		func_414(joaat("mpply_globalxp"), iParam0);
	}
}

void func_414(int iParam0, int iParam1)//Position - 0x12410
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_415(int iParam0)//Position - 0x1242C
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_416(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_416(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_416(int iParam0)//Position - 0x1247D
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

void func_417(int iParam0)//Position - 0x1249B
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_197(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_420(func_421(&Var0));
			if (iVar1 == 0)
			{
				func_419(&Global_1659614, iParam0);
				func_418(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_419(&Global_1659615, iParam0);
				func_418(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_419(&Global_1659616, iParam0);
				func_418(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_419(&Global_1659617, iParam0);
				func_418(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_419(&Global_1659618, iParam0);
				func_418(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_418(int iParam0, int iParam1)//Position - 0x1256F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_419(var uParam0, int iParam1)//Position - 0x12694
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_420(int iParam0)//Position - 0x126A5
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_421(var* uParam0)//Position - 0x12702
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_422(int iParam0, int iParam1, int iParam2)//Position - 0x12725
{
	if (func_435())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_81(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_81(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_241(PLAYER::PLAYER_ID()))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_6 = func_424(iParam0, 1);
		}
		func_423(640, iParam0, -1, 1);
		func_145(641, func_424(iParam0, 1), -1, 1, 0);
		Global_1659759[func_81(-1)] = iParam0;
		func_406(-1109644434, 7, 0);
	}
}

void func_423(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1284B
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_81(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_81(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_81(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_81(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_81(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_81(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_81(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_81(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_81(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_81(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_81(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_81(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_81(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_81(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_81(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_81(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_81(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_81(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_81(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_81(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_81(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_81(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_81(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_81(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_81(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_424(int iParam0, bool bParam1)//Position - 0x13366
{
	if (bParam1)
	{
	}
	return func_425(iParam0, 0);
}

int func_425(int iParam0, int iParam1)//Position - 0x1337A
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
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
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

int func_426(int iParam0)//Position - 0x13439
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[func_81(-1)];
			}
			else if (func_241(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_81(-1)];
	}
	return 0;
}

void func_427(int iParam0)//Position - 0x13496
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_207(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_429(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_428(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_428(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_428(int iParam0, int iParam1)//Position - 0x13581
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_429(int iParam0, int iParam1)//Position - 0x135A2
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_197(iParam0) };
		Global_2787518 = { func_197(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_430(bool bParam0, int iParam1)//Position - 0x1360F
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
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_429(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_431(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_429(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_428(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_428(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_431(int iParam0, int iParam1)//Position - 0x13727
{
	return SYSTEM::VDIST(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_432(int iParam0)//Position - 0x13743
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_428(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_433(int iParam0)//Position - 0x1377A
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_426(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_426(PLAYER::PLAYER_ID());
		}
	}
	if (func_434(8000, 0, 0) > 0)
	{
		if (func_434(8000, 0, 0) < (iParam0 + func_426(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_434(8000, 0, 0) - func_426(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_434(int iParam0, bool bParam1, int iParam2)//Position - 0x137DE
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
	return Global_295824[iParam0];
}

int func_435()//Position - 0x13806
{
	return 1;
}

int func_436(char* sParam0)//Position - 0x1380F
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

int func_437()//Position - 0x13848
{
	int iVar0;
	
	if (func_444(PLAYER::PLAYER_ID()) || func_443(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_441() || func_438(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_438(int iParam0)//Position - 0x138E0
{
	return func_439(func_440(iParam0));
}

int func_439(int iParam0)//Position - 0x138F2
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0)//Position - 0x1390C
{
	if (func_122(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_441()//Position - 0x1392F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_30();
	}
	return func_442(Global_4718592.f_116524);
}

int func_442(int iParam0)//Position - 0x13953
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_443(int iParam0)//Position - 0x1398D
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_444(int iParam0)//Position - 0x139A2
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_445(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x139B7
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_446(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x139D6
{
	int iVar0;
	
	if (!func_457())
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
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_447(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_447(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_447(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_447(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_447(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1430E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_26()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_454(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_453(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_448(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_448(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x144BB
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_449(iParam0);
	}
}

void func_449(int iParam0)//Position - 0x144F3
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_452(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_450(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_450(var uParam0)//Position - 0x14547
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_451(&(uParam0->f_14));
	func_451(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_451(var uParam0)//Position - 0x14653
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

int func_452(int iParam0)//Position - 0x1469B
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_453(int iParam0, int iParam1)//Position - 0x146C6
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_454(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x146DA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_457())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_455(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_455(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x14817
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_8(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_456();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_456()//Position - 0x148A9
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_457()//Position - 0x148B9
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_458(int iParam0, int iParam1)//Position - 0x148D0
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_473())
		{
			if (func_472(0))
			{
				if (!func_468(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_467()))
					{
						if (func_466() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_466());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_464(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_463("GB_BCUT_TICK1", func_467(), iVar0, 0, 0, 1);
						}
						func_462(20);
						func_459(func_467(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_459(int iParam0, int iParam1, int iParam2)//Position - 0x14970
{
	struct<8> Var0;
	
	if (func_14(iParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_461(iParam0);
		func_460(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_8(iParam0));
	}
}

void func_460(var uParam0, var uParam1)//Position - 0x149C6
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

var func_461(int iParam0)//Position - 0x149E0
{
	return Global_1892703[iParam0 /*599*/].f_510;
}

void func_462(int iParam0)//Position - 0x149F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

int func_463(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x14A1D
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_200(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_198(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_192(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_464(int iParam0, bool bParam1)//Position - 0x14AB5
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_465(1);
	}
	else
	{
		iVar1 = func_465(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_465(bool bParam0)//Position - 0x14AE7
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12862;
}

int func_466()//Position - 0x14B0D
{
	return Global_262145.f_12861;
}

int func_467()//Position - 0x14B1C
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_468(bool bParam0)//Position - 0x14B31
{
	return func_469(PLAYER::PLAYER_ID(), bParam0);
}

int func_469(int iParam0, bool bParam1)//Position - 0x14B43
{
	return func_470(iParam0, bParam1, 1);
}

int func_470(int iParam0, bool bParam1, int iParam2)//Position - 0x14B54
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_471(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_121() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0, int iParam1)//Position - 0x14BB0
{
	if (iParam0 != func_121())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_121())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_472(bool bParam0)//Position - 0x14BFF
{
	return func_220(PLAYER::PLAYER_ID(), bParam0);
}

bool func_473()//Position - 0x14C11
{
	return func_221(PLAYER::PLAYER_ID());
}

void func_474(int iParam0, int iParam1)//Position - 0x14C21
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24025 == 0 || Global_262145.f_24025 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_24025 == 1)
			{
				Global_2815059.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7043)
				{
					iParam1 = Global_262145.f_7043;
				}
				Global_2815059.f_284 = iParam1;
				Global_2815059.f_285 = 0;
			}
		}
	}
}

void func_475()//Position - 0x14C93
{
	int iVar0;
	
	iVar0 = func_476(42);
	Global_2676732[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_476(int iParam0)//Position - 0x14CC0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_477()//Position - 0x14D0D
{
	int iVar0;
	
	iVar0 = func_476(43);
	Global_2676732[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_478(int iParam0, int iParam1, int iParam2)//Position - 0x14D3A
{
	int iVar0;
	
	iVar0 = func_480(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_479(iParam0, iVar0, iParam2);
}

void func_479(int iParam0, int iParam1, int iParam2)//Position - 0x14D61
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_81(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_480(int iParam0, int iParam1)//Position - 0x14D85
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_81(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_481()//Position - 0x14DB1
{
	if (bLocal_95)
	{
		bLocal_95 = false;
	}
	if (bLocal_90)
	{
		bLocal_90 = false;
	}
	if (bLocal_91)
	{
		bLocal_91 = false;
	}
	if (bLocal_92)
	{
		bLocal_92 = false;
	}
	if (bLocal_94)
	{
		bLocal_94 = false;
	}
	if (bLocal_93)
	{
		bLocal_93 = false;
	}
}

void func_482()//Position - 0x14DE9
{
	Global_2359296[func_512() /*5567*/].f_681.f_35 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_483(int iParam0, bool bParam1)//Position - 0x14E05
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
			Global_2359296[func_512() /*5567*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_512() /*5567*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_512() /*5567*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_512() /*5567*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_512() /*5567*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_512() /*5567*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_512() /*5567*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_512() /*5567*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_512() /*5567*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_512() /*5567*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_512() /*5567*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_512() /*5567*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_512() /*5567*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_512() /*5567*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_512() /*5567*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_512() /*5567*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_512() /*5567*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_512() /*5567*/].f_681.f_30 = iVar0;
			break;
	}
}

void func_484()//Position - 0x15044
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1200, -1, 0);
	if (!BitTest(iVar0, 3))
	{
		MISC::SET_BIT(&iVar0, 3);
		MISC::SET_BIT(&uLocal_339, 1);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 4))
	{
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&uLocal_339, 2);
		bVar1 = true;
	}
	else if (!BitTest(iVar0, 5))
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&uLocal_339, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_145(1200, iVar0, -1, 1, 0);
	}
}

void func_485(int iParam0, int iParam1, int iParam2)//Position - 0x150BC
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_486(iParam0))
	{
		func_145(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_423(iParam0, iVar0, iParam2, 1);
	}
}

int func_486(int iParam0)//Position - 0x150FE
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_487()//Position - 0x153C8
{
	if (!Global_2815059.f_4595)
	{
		Global_2815059.f_4595 = 1;
	}
	func_253(&(Global_2815059.f_4596), 0, 0);
}

int func_488(int iParam0)//Position - 0x153F0
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

int func_489()//Position - 0x154F0
{
	int iVar0;
	
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
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

void func_490(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x15546
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
	if (func_498())
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
		if (!func_135())
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
				else if (bVar14 || (!func_24(PLAYER::PLAYER_ID(), 0) && !func_235()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_495(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_494(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_493();
					func_492();
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
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_494(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_491(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
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

bool func_491(int iParam0)//Position - 0x159D4
{
	return iParam0 == 17;
}

void func_492()//Position - 0x159E1
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_493()//Position - 0x15A2E
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_494(int iParam0)//Position - 0x15A6C
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_495(bool bParam0, int iParam1, int iParam2)//Position - 0x15A9D
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
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_497();
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
		if (func_24(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_496(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_496(int iParam0, bool bParam1)//Position - 0x15B6D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_497()//Position - 0x15B89
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

int func_498()//Position - 0x15BE1
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_499()//Position - 0x15C12
{
	func_117();
}

int func_500(int iParam0, int iParam1)//Position - 0x15C1E
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_168(iParam0), true) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)//Position - 0x15C46
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!func_393(iParam0))
			{
				if (iParam0 != iLocal_342)
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

int func_502()//Position - 0x15C8A
{
	if (Global_2703735.f_61.f_16 || Global_2703735.f_61.f_17)
	{
		return 1;
	}
	return 0;
}

void func_503(var uParam0, int iParam1, var uParam2)//Position - 0x15CB0
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
			(*uParam0)[iVar0] = func_504(iVar1, iVar0);
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

int func_504(int iParam0, int iParam1)//Position - 0x15D21
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_511(iParam1);
			break;
		
		case 1:
			iVar0 = func_510(iParam1);
			break;
		
		case 2:
			iVar0 = func_509(iParam1);
			break;
		
		case 3:
			iVar0 = func_508(iParam1);
			break;
		
		case 4:
			iVar0 = func_507(iParam1);
			break;
		
		case 5:
			iVar0 = func_506(iParam1);
			break;
		
		case 6:
			iVar0 = func_505(iParam1);
			break;
	}
	return iVar0;
}

int func_505(int iParam0)//Position - 0x15DAC
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_506(int iParam0)//Position - 0x15E24
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_507(int iParam0)//Position - 0x15E9C
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_508(int iParam0)//Position - 0x15F14
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_509(int iParam0)//Position - 0x15F8C
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_510(int iParam0)//Position - 0x16004
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_511(int iParam0)//Position - 0x1607C
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_512()//Position - 0x160F4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_513(var uParam0, int iParam1, bool bParam2)//Position - 0x16101
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_514(uParam0, bParam2, 0);
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

void func_514(var uParam0, bool bParam1, bool bParam2)//Position - 0x1615F
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

bool func_515(var uParam0)//Position - 0x161A4
{
	return uParam0->f_1;
}

void func_516()//Position - 0x161B0
{
	Global_2359296[func_512() /*5567*/].f_681.f_36 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_517(var uParam0, int iParam1)//Position - 0x161CC
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
			(*uParam0)[iVar0] = func_504(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2359296[func_512() /*5567*/].f_681.f_37 = iVar1;
}

void func_518()//Position - 0x16251
{
	func_521("CELL_CLTEST1", 0);
	func_519("CELL_CLTEST1");
	func_521("CELL_CLTEST6", 0);
	func_519("CELL_CLTEST6");
}

void func_519(char* sParam0)//Position - 0x1627B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_113386.f_14141[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_302();
					Global_113386.f_14141[iVar0 /*104*/].f_99[Global_20266] = 0;
					if (func_520(iVar0))
					{
					}
					else
					{
						Global_113386.f_14141[iVar0 /*104*/].f_24 = 0;
						Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
						Global_113386.f_14141[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_113386.f_14141[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_520(int iParam0)//Position - 0x1632F
{
	if ((Global_113386.f_14141[iParam0 /*104*/].f_99[0] == 1 || Global_113386.f_14141[iParam0 /*104*/].f_99[1] == 1) || Global_113386.f_14141[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_521(char* sParam0, int iParam1)//Position - 0x16384
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				if (Global_113386.f_14141[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_113386.f_14141[iVar0 /*104*/].f_24 = 1;
				if (Global_113386.f_14141[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_113386.f_14051[0 /*20*/].f_17 = 0;
					}
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_113386.f_14051[1 /*20*/].f_17 = 0;
					}
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_113386.f_14051[2 /*20*/].f_17 = 0;
					}
					if (Global_113386.f_14141[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_113386.f_14051[3 /*20*/].f_17 = 0;
					}
					Global_113386.f_14141[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_113386.f_14141[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_522()//Position - 0x1649C
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (func_138(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_110())
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
	if (Global_1836356)
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_523())
	{
		return 0;
	}
	if (!func_135())
	{
		return 0;
	}
	if (func_108())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_523()//Position - 0x16587
{
	return Global_75485;
}

bool func_524()//Position - 0x16593
{
	if (Global_2359296[func_512() /*5567*/].f_681.f_35 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[func_512() /*5567*/].f_681.f_35) < 86400;
}

bool func_525()//Position - 0x165CD
{
	if (Global_2359296[func_512() /*5567*/].f_681.f_36 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2359296[func_512() /*5567*/].f_681.f_36) < 86400;
}

bool func_526()//Position - 0x16607
{
	if (!BitTest(uLocal_338, 2))
	{
		if (!func_24(PLAYER::PLAYER_ID(), 0))
		{
			if ((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_138(PLAYER::PLAYER_ID(), 1, 0)) && !func_112()) && (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && CAM::IS_SCREEN_FADED_IN()) && func_528(19)) && !func_527(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&uLocal_338, 2);
			}
		}
	}
	return BitTest(uLocal_338, 2);
}

int func_527(int iParam0)//Position - 0x16691
{
	if (iParam0 != func_121())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_528(int iParam0)//Position - 0x166B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_530(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_529(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_424(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0, bool bParam1)//Position - 0x166FA
{
	if (bParam1)
	{
	}
	return func_426(iParam0);
}

int func_530(int iParam0)//Position - 0x1670D
{
	if (func_103())
	{
		return 1;
	}
	if (func_102())
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
			if (!func_531(-1))
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
		case 78:
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

bool func_531(int iParam0)//Position - 0x169D5
{
	return func_532(123, iParam0);
}

int func_532(int iParam0, var uParam1)//Position - 0x169E5
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_81(uParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_533()//Position - 0x16A11
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

int func_534()//Position - 0x16A28
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_540())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_539())
	{
		return 1;
	}
	if (func_538(159))
	{
		if (!func_537())
		{
			return 1;
		}
	}
	if (func_538(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_535() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_535()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_535()//Position - 0x16AAC
{
	switch (func_83())
	{
		case 0:
			return func_536();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_536()//Position - 0x16ADF
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_537()//Position - 0x16B03
{
	return Global_2714762.f_698;
}

int func_538(int iParam0)//Position - 0x16B12
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_539()//Position - 0x16B29
{
	return Global_2725403;
}

bool func_540()//Position - 0x16B35
{
	return Global_2714762.f_693;
}

void func_541()//Position - 0x16B44
{
	SYSTEM::WAIT(0);
}

void func_542()//Position - 0x16B51
{
	if (iLocal_110 != -1)
	{
		func_142(iLocal_110, 0);
	}
	func_544(&iLocal_317);
	if (BitTest(uLocal_338, 1))
	{
		func_543(0f, 0f, 0f, func_370(19), 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_330.f_24))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_330.f_24);
			}
			Local_330.f_24 = -1;
		}
	}
	func_380();
	Global_2815059.f_1718 = 0;
	Global_2815059.f_1719 = 0;
	Global_2815059.f_1721 = 0;
	Global_2815059.f_1747 = 0;
	if (BitTest(uLocal_338, 7))
	{
		func_262(6, 0);
	}
	func_402();
	if (HUD::DOES_BLIP_EXIST(Global_1931386))
	{
		HUD::REMOVE_BLIP(&Global_1931386);
	}
	func_255(0);
	if (HUD::DOES_BLIP_EXIST(Global_1931397))
	{
		HUD::REMOVE_BLIP(&Global_1931397);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_87)
		{
			func_173(1215605247, 0, 0);
			func_172(0);
		}
		if (iLocal_100)
		{
			func_172(0);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_543(struct<3> Param0, char* sParam1, int iParam2)//Position - 0x16C38
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_31(Global_2815059.f_4033[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2815059.f_4033[iVar0 /*26*/] = 0;
					Global_2815059.f_4033[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_544(int iParam0)//Position - 0x16CD8
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_545(*iParam0);
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

int func_545(int iParam0)//Position - 0x16D2F
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

int func_546(struct<21> Param0)//Position - 0x16D6A
{
	func_552(func_553(Param0.f_0), Param0);
	func_549(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_330, 74, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_337, 129, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_548())
	{
		return 0;
	}
	Global_2815059.f_1721 = 0;
	Global_2815059.f_4451 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (func_71(PLAYER::PLAYER_ID(), 6))
	{
		func_262(6, 0);
	}
	func_547();
	return 1;
}

void func_547()//Position - 0x16DDC
{
	var uVar0;
	
	uVar0 = func_80(1200, -1, 0);
	if (BitTest(uVar0, 3))
	{
		MISC::SET_BIT(&uLocal_339, 1);
	}
	if (BitTest(uVar0, 4))
	{
		MISC::SET_BIT(&uLocal_339, 2);
	}
	if (BitTest(uVar0, 5))
	{
		MISC::SET_BIT(&uLocal_339, 3);
		MISC::SET_BIT(&uLocal_339, 0);
	}
}

int func_548()//Position - 0x16E24
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
		if (func_540())
		{
			return 0;
		}
		if (func_538(157))
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

int func_549(int iParam0, int iParam1, bool bParam2)//Position - 0x16E7D
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_551();
			}
			else
			{
				return 0;
			}
		}
		if (!func_550(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_551();
					}
					else
					{
						return 0;
					}
				}
				if (func_540())
				{
					if (!bParam2)
					{
						func_551();
					}
					else
					{
						return 0;
					}
				}
				if (func_538(157))
				{
					if (!bParam2)
					{
						func_551();
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
					func_551();
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
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_551();
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
			func_551();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_550(bool bParam0)//Position - 0x16F93
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_551()//Position - 0x16FA4
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_552(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x16FB0
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_551();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_553(int iParam0)//Position - 0x16FCF
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
		
		case 163:
			return 32;
		
		case 164:
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
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_554(func_555(iParam0, 1)))
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

int func_554(int iParam0)//Position - 0x17746
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
		
		default:
	}
	return -1;
}

int func_555(int iParam0, bool bParam1)//Position - 0x178AA
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

