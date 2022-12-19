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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_95 = -1;
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
	struct<14> Local_111[6];
	struct<14> Local_112[8];
	struct<14> Local_113[4];
	struct<14> Local_114[5];
	struct<14> Local_115[6];
	struct<14> Local_116[6];
	struct<14> Local_117[4];
	struct<14> Local_118[10];
	struct<14> Local_119[4];
	struct<14> Local_120[6];
	struct<14> Local_121[3];
	struct<9> Local_122[8];
	struct<9> Local_123[6];
	struct<9> Local_124[8];
	struct<9> Local_125[2];
	struct<9> Local_126[4];
	struct<9> Local_127[2];
	struct<9> Local_128[6];
	struct<9> Local_129[6];
	struct<9> Local_130[4];
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	struct<57> Local_161 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	struct<16> Local_171 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<7> Local_176 = { 2, 0, 0, 2, 0, 0, -1 } ;
	var uLocal_177 = 16;
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
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 17;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 17;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	float fLocal_394 = 0f;
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	float fLocal_397 = 0f;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	float fLocal_407 = 0f;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_143 = true;
	iLocal_392 = -1;
	fLocal_394 = 3f;
	fLocal_395 = 0f;
	fLocal_396 = 2f;
	fLocal_397 = 100f;
	fLocal_407 = 0.5f;
	StringCopy(&Local_171, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_171 = { Local_171 };
	if (!func_994(&Global_1977693))
	{
		func_982(&Global_1977693);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_981();
		func_976(&Global_1977693);
		switch (func_975())
		{
			case 0:
				if (func_464(&Global_1977693))
				{
					func_462();
					func_461(1);
				}
				break;
			
			case 1:
				func_282(&Global_1977693);
				func_125(&Global_1977693);
				func_1(&Global_1977693);
				break;
			
			case 2:
				func_982(&Global_1977693);
				break;
		}
	}
}

void func_1(var uParam0)//Position - 0x141
{
	func_79(uParam0);
	func_60(uParam0);
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x15B
{
	func_24(uParam0);
	func_3(uParam0);
}

void func_3(var uParam0)//Position - 0x16F
{
	int iVar0;
	
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		if (((uParam0->f_726.f_5 && !iLocal_133) && uParam0->f_806 == 1) && !func_16(uParam0, 0))
		{
			if (func_13(PLAYER::PLAYER_ID()))
			{
				if (!func_12("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */))
				{
					func_11("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */);
				}
			}
			else if (!func_12("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */))
			{
				func_11("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */);
			}
		}
		else if (func_12("HIP_TOOMANY1" /* GXT: This mission can only be started with a maximum of 5 Organization members. */) || func_12("HIP_TOOMANY2" /* GXT: This mission can only be started with a maximum of 5 Motorcycle Club members. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if ((BitTest(Local_176.f_3[(0 / 32)], (0 % 32)) && !func_10()) && !iLocal_144)
		{
			func_9("HIP_TIPTEXT" /* GXT: Access additional information by pressing ~INPUT_FRONTEND_Y~. This includes mission details and the impact completion will have on The Cayo Perico Heist. */, -1);
			iLocal_144 = 1;
		}
		if ((func_8(uParam0->f_806, 2) && !BitTest(uParam0->f_1085, 11)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			iVar0 = func_7(9511, -1, 0);
			if (!BitTest(iVar0, 15))
			{
				func_9("HIF_FINALEINT" /* GXT: Here you can preview the outcome of your scoping and Prep work. Press Start to begin The Cayo Perico Heist alone, or invite other players. */, -1);
				MISC::SET_BIT(&iVar0, 15);
				func_4(9511, iVar0, -1, 1, 0);
			}
			MISC::SET_BIT(&(uParam0->f_1085), 11);
		}
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x28F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_5(var uParam0)//Position - 0x2BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_6()//Position - 0x2F3
{
	return Global_1574918;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x2FF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_5(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8(int iParam0, int iParam1)//Position - 0x33C
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 > 0 && iParam0 <= 29)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam0 >= 36 && iParam0 <= 62)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam0 >= 63 && iParam0 < 109)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_9(char* sParam0, int iParam1)//Position - 0x3A8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_10()//Position - 0x3BF
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_11(char* sParam0)//Position - 0x3E1
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_12(char* sParam0)//Position - 0x3F7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13(int iParam0)//Position - 0x40A
{
	return func_14(iParam0, 1);
}

int func_14(int iParam0, int iParam1)//Position - 0x419
{
	if (iParam0 != func_15())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15()//Position - 0x468
{
	return -1;
}

int func_16(var uParam0, int iParam1)//Position - 0x471
{
	if (iParam1 == 0)
	{
		if (func_20() + 1 > 5)
		{
			return 0;
		}
	}
	else if (func_17(uParam0->f_1084, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_17(int iParam0, int iParam1)//Position - 0x4A3
{
	if (iParam0 != -1)
	{
		return func_18(iParam0, func_19(iParam1));
	}
	return 0;
}

int func_18(int iParam0, int iParam1)//Position - 0x4C1
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_19(int iParam0)//Position - 0x4E0
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_20()//Position - 0x5A3
{
	if (func_23() == func_15())
	{
		return 0;
	}
	return func_21(func_23());
}

int func_21(int iParam0)//Position - 0x5C2
{
	if (func_22(iParam0) == func_15())
	{
		return 0;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_22(int iParam0)//Position - 0x5E8
{
	if (iParam0 != func_15())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_15();
}

int func_23()//Position - 0x60B
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

void func_24(var uParam0)//Position - 0x620
{
	func_49();
	switch (iLocal_150)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_48());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48()))
			{
				return;
			}
			iLocal_151 = func_47();
			iLocal_150 = 2;
			break;
		
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_153);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_46(iLocal_151), 0.5f, 20000, func_45(iLocal_151), 0.05f);
			TASK::TASK_ACHIEVE_HEADING(0, func_45(iLocal_151), 0);
			TASK::TASK_PLAY_ANIM(0, func_48(), func_44(), 1.5f, -8f, -1, 262152, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_48(), func_43(), 8f, -8f, -1, 262153, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_153);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_159, iLocal_153);
			iLocal_150 = 3;
			if (!func_42())
			{
				MISC::SET_BIT(&(uParam0->f_1085), 10);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_159, func_48(), func_43(), 3) && !func_40(&uLocal_155, 6000, 0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_159, func_48(), func_43(), 3))
			{
				PED::PLAY_FACIAL_ANIM(iLocal_159, func_39(), func_48());
			}
			func_38(&uLocal_155);
			uParam0->f_726.f_5 = 1;
			func_34(uParam0, 14);
			iLocal_150 = 4;
			break;
		
		case 4:
			break;
		
		case 5:
			TASK::TASK_PLAY_ANIM(iLocal_159, func_48(), func_25(), 8f, 1.5f, -1, 262152, 0f, false, false, false);
			if (func_42())
			{
				MISC::CLEAR_BIT(&(uParam0->f_1085), 10);
			}
			uParam0->f_726.f_5 = 0;
			iLocal_150 = 6;
			break;
		
		case 6:
			if ((!iLocal_136 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_159, func_48(), func_25(), 3)) && !func_40(&uLocal_155, 6000, 0))
			{
				return;
			}
			if (iLocal_136)
			{
				TASK::CLEAR_PED_TASKS(iLocal_159);
			}
			STREAMING::REMOVE_ANIM_DICT(func_48());
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_153);
			func_38(&uLocal_155);
			iLocal_150 = 0;
			iLocal_136 = 0;
			break;
	}
}

char* func_25()//Position - 0x831
{
	if (func_26(iLocal_159))
	{
		return "exit_heeled";
	}
	return "exit_male";
}

int func_26(int iParam0)//Position - 0x84C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("MP_F_Freemode_01"))
	{
		iVar1 = func_32(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_28(iVar0, iVar1, 6, 4);
			iVar3 = func_27(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x96A
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAD7
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar1 = (iParam1 - func_31(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var3);
		iVar4 = (iParam1 - func_29(iParam0, func_30(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78491.f_26[iParam2] && iParam1 == Global_78491[iParam2]) && Global_78491.f_13[iParam2] != 0)
		{
			return Global_78491.f_13[iParam2];
		}
		iVar5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_30(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
		Global_78491.f_13[iParam2] = Var3.f_1;
		Global_78491[iParam2] = iParam1;
		Global_78491.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_29(int iParam0, int iParam1)//Position - 0xBF1
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_30(int iParam0)//Position - 0xF98
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x1048
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
			break;
		
		case joaat("Player_One"):
			return 175;
			break;
		
		case joaat("Player_Two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
			break;
		
		case joaat("MP_F_Freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_32(int iParam0, int iParam1)//Position - 0x10A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_30(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_33(iParam0, iVar1, iVar2, iParam1);
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1109
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_30(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_34(var uParam0, int iParam1)//Position - 0x1160
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_37(iParam1);
	sVar1 = func_36(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!func_35(uParam0->f_732.f_6))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, sVar0, uParam0->f_732.f_6, sVar1, false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar1, true);
		}
	}
}

int func_35(struct<3> Param0)//Position - 0x11C4
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_36(int iParam0)//Position - 0x11EE
{
	return "DLC_HEI4_PLANNING_BOARD_PLANNING_BOARD_SOUNDSET";
}

char* func_37(int iParam0)//Position - 0x11F9
{
	switch (iParam0)
	{
		case 0:
			return "NAV_UP_DOWN";
		
		case 1:
			return "NAV_LEFT_RIGHT";
		
		case 2:
			return "NAV_UP_DOWN_PHOTO_CHANGE";
		
		case 3:
			return "NAV_LEFT_RIGHT_PHOTO_CHANGE";
		
		case 4:
			return "NAV_BLOCKED";
		
		case 5:
			return "SELECT" /* GXT: Filter List */;
		
		case 6:
			return "BACK";
		
		case 7:
			return "ERROR";
		
		case 8:
			return "DRAW_BOARD";
		
		case 9:
			return "DRAW_DESCRIPTION_TEXT";
		
		case 10:
			return "DRAW_TITLE_TEXT";
		
		case 11:
			return "PAY";
		
		case 12:
			return "INCREASE_LOOT_SHARE";
		
		case 13:
			return "DECREASE_LOOT_SHARE";
		
		case 14:
			return "USE";
		
		case 15:
			return "LAUNCH_MISSION";
		
		case 16:
			return "REMOTE_READY";
		
		case 17:
			return "REMOTE_UNREADY";
		
		case 18:
			return "BOOTUP";
		
		case 19:
			return "BACKGROUND";
		
		case 20:
			return "FINALE_AVAILABLE";
		
		case 21:
			return "CHANGE_DISPLAY_LARGE_BOX_DRAW";
		
		case 22:
			return "CHANGE_DISPLAY_SMALL_BOX_DRAW";
		
		default:
	}
	return "";
}

void func_38(var uParam0)//Position - 0x132D
{
	uParam0->f_1 = 0;
}

char* func_39()//Position - 0x133A
{
	if (func_26(iLocal_159))
	{
		return "idle_heeled_facial";
	}
	return "idle_male_facial";
}

int func_40(var uParam0, int iParam1, bool bParam2)//Position - 0x1357
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_41(uParam0, bParam2, 0);
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

void func_41(var uParam0, bool bParam1, bool bParam2)//Position - 0x13B5
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

bool func_42()//Position - 0x13FA
{
	return BitTest(Global_1977693.f_1085, 10);
}

char* func_43()//Position - 0x140C
{
	if (func_26(iLocal_159))
	{
		return "idle_heeled";
	}
	return "idle_male";
}

char* func_44()//Position - 0x1429
{
	if (func_26(iLocal_159))
	{
		return "enter_heeled";
	}
	return "enter_male";
}

float func_45(int iParam0)//Position - 0x1446
{
	switch (iParam0)
	{
		case 0:
			return 180f;
		
		case 1:
			return 0f;
		
		default:
	}
	return 0f;
}

Vector3 func_46(int iParam0)//Position - 0x146E
{
	switch (iParam0)
	{
		case 0:
			return 1561.0537f, 385.9017f, -50.6854f;
		
		case 1:
			return 1561.0962f, 383.769f, -50.6854f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_47()//Position - 0x14B0
{
	return 0;
}

char* func_48()//Position - 0x14B9
{
	if (func_26(iLocal_159))
	{
		return "anim@scripted@submarine@ig18_sub_screen@heeled@";
	}
	return "anim@scripted@submarine@ig18_sub_screen@male@";
}

void func_49()//Position - 0x14D6
{
	if (iLocal_150 == 0)
	{
		return;
	}
	if (func_59(0))
	{
		func_54(0);
	}
	if (func_53())
	{
		func_52();
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (func_51())
	{
		func_50();
	}
}

void func_50()//Position - 0x1516
{
	if (func_51())
	{
		Global_2672505.f_946.f_16 = 1;
	}
}

int func_51()//Position - 0x152F
{
	if (Global_2672505.f_946.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_52()//Position - 0x1549
{
	Global_75696 = 1;
}

bool func_53()//Position - 0x1556
{
	return Global_75693;
}

void func_54(int iParam0)//Position - 0x1562
{
	if (func_58())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_57())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8254, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8253, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 30);
	}
	if (!func_55())
	{
		Global_20383.f_1 = 3;
	}
}

int func_55()//Position - 0x15EC
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)//Position - 0x1613
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
}

bool func_57()//Position - 0x1687
{
	return BitTest(Global_1962996, 5);
}

bool func_58()//Position - 0x1695
{
	return BitTest(Global_1962996, 19);
}

int func_59(int iParam0)//Position - 0x16A4
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0)//Position - 0x16FB
{
	if (BitTest(uParam0->f_1085, 0))
	{
		if (BitTest(uParam0->f_1085, 9))
		{
			func_61(&(Global_2683862.f_781), -1, 0, 1, 1);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 6);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 3);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 4);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
		}
	}
	else if (BitTest(uParam0->f_1085, 9))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
	}
}

void func_61(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1773
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (CAM::DOES_CAM_EXIST(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
			if (bParam4)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
			}
			CAM::DESTROY_CAM(*uParam0, false);
			*uParam0 = 0;
			func_78();
			if (func_73())
			{
				STREAMING::CLEAR_FOCUS();
			}
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			if (Global_1574534 == 0 && iParam3 == 1)
			{
				func_65(1, 0);
				func_65(1, 0);
			}
			if (!func_64())
			{
				if (func_63() || func_62())
				{
					if (!Global_2692733.f_7)
					{
						HUD::BUSYSPINNER_OFF();
					}
				}
				else
				{
					HUD::BUSYSPINNER_OFF();
				}
			}
		}
	}
}

bool func_62()//Position - 0x1827
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_63()//Position - 0x183D
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_64()//Position - 0x1853
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 0);
}

void func_65(bool bParam0, int iParam1)//Position - 0x186A
{
	if (bParam0)
	{
		func_70(1, 0, 1);
	}
	else
	{
		func_66(iParam1);
	}
}

void func_66(int iParam0)//Position - 0x1887
{
	func_69();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE())
		{
			return;
		}
	}
	if (func_68() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_67(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_67(int iParam0)//Position - 0x18C8
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_68()//Position - 0x18E3
{
	return Global_1574632.f_20;
}

void func_69()//Position - 0x18F1
{
	Global_2696215 = 1;
}

void func_70(int iParam0, bool bParam1, bool bParam2)//Position - 0x18FE
{
	if (func_71())
	{
		return;
	}
	if ((func_68() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_67(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_71()//Position - 0x1949
{
	if (func_72())
	{
		return Global_2694451;
	}
	return 0;
}

int func_72()//Position - 0x1960
{
	if (Global_2694444)
	{
		return Global_2694443;
	}
	return 0;
}

int func_73()//Position - 0x1977
{
	if (func_76(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802 != func_15())
		{
			if (func_75(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, 0, 1))
			{
				if (func_74(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, bool bParam2)//Position - 0x19D3
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A37
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_76(int iParam0, int iParam1)//Position - 0x1A97
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_77(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
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

int func_77(int iParam0, bool bParam1)//Position - 0x1AE2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1575040[iVar1] == 1)
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

void func_78()//Position - 0x1B23
{
	MISC::CLEAR_BIT(&Global_2683862, 15);
}

void func_79(var uParam0)//Position - 0x1B35
{
	func_123(uParam0);
	if (!func_113(uParam0))
	{
		func_112();
		func_111();
		func_110();
		func_109();
		return;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		if (!func_108())
		{
			func_106(0);
			return;
		}
	}
	else if (!func_105(uParam0))
	{
		if (!func_104(uParam0->f_1084))
		{
			func_106(1);
			return;
		}
	}
	if (func_103(uParam0))
	{
		if (func_102())
		{
			func_101();
		}
		else if (!func_100(uParam0))
		{
			func_97();
		}
		else
		{
			func_83(uParam0);
		}
		return;
	}
	if (func_82())
	{
		func_81(uParam0, 1);
		func_112();
		if (Local_161.f_2 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_2);
		}
		else
		{
			func_80(uParam0);
		}
	}
}

void func_80(var uParam0)//Position - 0x1BFB
{
	uParam0->f_726.f_5 = 1;
}

void func_81(var uParam0, int iParam1)//Position - 0x1C0B
{
	if (uParam0->f_820 != iParam1)
	{
	}
	uParam0->f_820 = iParam1;
}

bool func_82()//Position - 0x1C24
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Board. */;
	if (Local_161.f_1 != 0)
	{
		Call_Loc(Local_161.f_1);
		sVar0 = StackVal;
	}
	if (!func_12(sVar0))
	{
		func_11(sVar0);
	}
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
}

void func_83(var uParam0)//Position - 0x1C5A
{
	char* sVar0;
	
	Call_Loc(Local_161.f_33.f_5);
	sVar0 = StackVal;
	if (!func_12(sVar0))
	{
		func_11(sVar0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
	{
		func_110();
		func_84(uParam0, 0);
		uParam0->f_1090 = 1;
	}
}

void func_84(var uParam0, bool bParam1)//Position - 0x1C97
{
	if (bParam1)
	{
		if (uParam0->f_1092)
		{
			func_85(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1092 = 0;
		}
	}
	else if (!uParam0->f_1092)
	{
		func_85(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1092 = 1;
	}
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1CEC
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
	if (func_96())
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
		if (!func_94())
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
				else if (bVar14 || (!func_76(PLAYER::PLAYER_ID(), 0) && !func_93()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_90(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_89(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_88();
					func_87();
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
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_89(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_86(Global_4718592.f_166301))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575035)
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

bool func_86(int iParam0)//Position - 0x217A
{
	return iParam0 == 17;
}

void func_87()//Position - 0x2187
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_88()//Position - 0x21D4
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_89(int iParam0)//Position - 0x2212
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

void func_90(bool bParam0, int iParam1, int iParam2)//Position - 0x2243
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
				func_92();
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
		if (func_76(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_91(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_91(int iParam0, bool bParam1)//Position - 0x2313
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_92()//Position - 0x232F
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

bool func_93()//Position - 0x2387
{
	return BitTest(Global_2621446, 3);
}

int func_94()//Position - 0x2395
{
	if (func_95() == 0)
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0x23AA
{
	return Global_1574632.f_18;
}

int func_96()//Position - 0x23B8
{
	if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_97()//Position - 0x23E9
{
	char* sVar0;
	int iVar1;
	
	if (Local_161.f_33.f_9 != 0 && Local_161.f_33.f_3 != 0)
	{
		Call_Loc(Local_161.f_33.f_9);
		sVar0 = StackVal;
		Call_Loc(Local_161.f_33.f_3);
		iVar1 = StackVal;
		if (!func_99(sVar0, iVar1))
		{
			func_98(sVar0, iVar1);
		}
	}
}

void func_98(char* sParam0, int iParam1)//Position - 0x2433
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_99(char* sParam0, int iParam1)//Position - 0x244F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_100(var uParam0)//Position - 0x2468
{
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Stack.Push(Local_161.f_33.f_3 != 0);
		Call_Loc(Local_161.f_33.f_3);
		if (StackVal && MONEY::NETWORK_CAN_SPEND_MONEY(StackVal, false, true, false, -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101()//Position - 0x24A3
{
	if (Local_161.f_33.f_7 != 0)
	{
		Call_Loc(Local_161.f_33.f_7);
		if (!func_12(StackVal))
		{
			Call_Loc(Local_161.f_33.f_7);
			func_11(StackVal);
		}
	}
}

int func_102()//Position - 0x24D2
{
	if (Local_161.f_33.f_6 != 0)
	{
		Call_Loc(Local_161.f_33.f_6);
		return StackVal;
	}
	return 0;
}

int func_103(var uParam0)//Position - 0x24F1
{
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Call_Loc(Local_161.f_33.f_2);
		Call_Loc(Local_161.f_33);
		if (StackVal && !StackVal)
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)//Position - 0x2521
{
	if (iParam0 != func_15())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_105(var uParam0)//Position - 0x2556
{
	switch (uParam0->f_1082)
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_106(int iParam0)//Position - 0x2579
{
	char* sVar0;
	
	sVar0 = func_107(iParam0);
	func_9(sVar0, -1);
}

char* func_107(int iParam0)//Position - 0x2590
{
	char* sVar0;
	
	sVar0 = "";
	if (Local_161.f_30 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_161.f_30);
		sVar0 = StackVal;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			return "NHPG_HELP_BBOSS" /* GXT: Register as a VIP, CEO or MC President to gain access to the Planning Board. */;
		
		case 1:
			return "NHPG_HELP_BGOON" /* GXT: Unable to use the Planning Board. The leader has not formed an Organization or Motorcycle Club. */;
		
		default:
	}
	return sVar0;
}

bool func_108()//Position - 0x25E3
{
	return func_104(PLAYER::PLAYER_ID());
}

void func_109()//Position - 0x25F3
{
	if (Local_161.f_33.f_9 != 0 && Local_161.f_33.f_3 != 0)
	{
		Call_Loc(Local_161.f_33.f_9);
		Call_Loc(Local_161.f_33.f_3);
		if (func_99(StackVal, StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_110()//Position - 0x2631
{
	if (Local_161.f_33.f_5 != 0)
	{
		Call_Loc(Local_161.f_33.f_5);
		if (func_12(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_111()//Position - 0x2658
{
	if (Local_161.f_33.f_7 != 0)
	{
		Call_Loc(Local_161.f_33.f_7);
		if (func_12(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_112()//Position - 0x267F
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Board. */;
	if (Local_161.f_1 != 0)
	{
		Call_Loc(Local_161.f_1);
		sVar0 = StackVal;
	}
	if (func_12(sVar0))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_113(var uParam0)//Position - 0x26AC
{
	if (uParam0->f_1090 > 0)
	{
		return 0;
	}
	if (uParam0->f_1084 != -1 && Global_1978795[uParam0->f_1084 /*25*/].f_23)
	{
		return 0;
	}
	if (!func_75(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_105(uParam0) && uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 2))
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 3) || BitTest(uParam0->f_1085, 4))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!func_122(PLAYER::PLAYER_ID(), 2))
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 0) && func_119(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (uParam0->f_726 != 3)
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (func_115() == 2 || func_115() == 16)
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (Local_161.f_0 != 0)
	{
		Call_Loc(Local_161.f_0);
		if (!StackVal)
		{
			return 0;
		}
	}
	if (func_114())
	{
		return 0;
	}
	return 1;
}

int func_114()//Position - 0x2805
{
	if (func_12("H4PREP_UNVLB" /* GXT: Freemode Prep mission currently unavailable. Please wait or look for rival crews transporting the Heist Prep Equipment ~HUD_COLOUR_GREEN~~BLIP_ISLAND_HEIST_PREP~~s~ to steal from instead. */))
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x281D
{
	return Global_1057409;
}

bool func_116()//Position - 0x2829
{
	return Global_2683862.f_692;
}

bool func_117()//Position - 0x2838
{
	return Global_2683862.f_691;
}

bool func_118()//Position - 0x2847
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

bool func_119(int iParam0)//Position - 0x285E
{
	return func_122(iParam0, 20);
}

int func_120(int iParam0, int iParam1)//Position - 0x286E
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x28A9
{
	bool bVar0;
	
	bVar0 = ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/));
	if (bVar0)
	{
		iLocal_173 = 1;
		return 1;
	}
	else if (iLocal_173)
	{
		if (func_40(&uLocal_174, 1000, 0))
		{
			func_38(&uLocal_174);
			iLocal_173 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_122(int iParam0, int iParam1)//Position - 0x290F
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_123(var uParam0)//Position - 0x2927
{
	bool bVar0;
	
	switch (uParam0->f_1090)
	{
		case 0:
			break;
		
		case 1:
			if (func_124(uParam0, 0, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_1090 = 2;
				}
				else
				{
					uParam0->f_1090 = 0;
				}
				func_84(uParam0, 1);
			}
			break;
		
		case 2:
			Call_Loc(Local_161.f_33.f_8);
			if (StackVal)
			{
				uParam0->f_1090 = 3;
			}
			break;
		
		case 3:
			Call_Loc(Local_161.f_33);
			if (!StackVal)
			{
				Call_Loc(Local_161.f_33.f_1);
				uParam0->f_1090 = 4;
			}
			else
			{
				uParam0->f_1090 = 4;
			}
			break;
		
		case 4:
			if (Local_161.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_2);
			}
			else
			{
				func_80(uParam0);
			}
			uParam0->f_1090 = 0;
			break;
	}
}

int func_124(var uParam0, int iParam1, var uParam2)//Position - 0x29DF
{
	char cVar0[64];
	char cVar1[64];
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	bool bVar5;
	int iVar6;
	int iVar7;
	
	bVar5 = false;
	iVar7 = 36;
	StringCopy(&cVar0, "HPWARN_CONF" /* GXT: Confirm */, 64);
	switch (iParam1)
	{
		case 0:
			Call_Loc(Local_161.f_33.f_4);
			cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			StringCopy(&cVar4, "HEIST_WARN_2" /* GXT: Do you wish to proceed? */, 64);
			bVar5 = true;
			Call_Loc(Local_161.f_33.f_3);
			iVar6 = StackVal;
			break;
		
		case 1:
			StringCopy(&cVar0, "FM_CSC_QUIT" /* GXT: Confirm */, 64);
			StringCopy(&cVar1, "FM_CSC_QUIT1" /* GXT: Are you sure you want to quit this Job? */, 64);
			break;
		
		case 2:
			if (Local_161.f_56 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56);
				StringCopy(&cVar0, StackVal, 64);
			}
			if (Local_161.f_56.f_1 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_1);
				StringCopy(&cVar1, StackVal, 64);
			}
			if (Local_161.f_56.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_2);
				iVar7 = StackVal;
			}
			if (Local_161.f_56.f_3 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_3);
				StringCopy(&cVar4, StackVal, 64);
			}
			if (Local_161.f_56.f_4 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_4);
				bVar5 = StackVal;
			}
			if (Local_161.f_56.f_5 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_5);
				iVar6 = StackVal;
			}
			if (Local_161.f_56.f_6 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_6);
				StringCopy(&cVar2, StackVal, 64);
			}
			if (Local_161.f_56.f_7 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_7);
				StringCopy(&cVar3, StackVal, 64);
			}
			break;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(&cVar0, &cVar1, iVar7, &cVar4, bVar5, iVar6, &cVar2, &cVar3, true, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		*uParam2 = 0;
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_125(var uParam0)//Position - 0x2B6A
{
	if (BitTest(uParam0->f_1085, 3) && !BitTest(uParam0->f_1085, 4))
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			if (func_281() || func_280())
			{
				func_279();
			}
			else if (!BitTest(uParam0->f_1085, 4))
			{
				if (func_126(uParam0))
				{
					MISC::SET_BIT(&(uParam0->f_1085), 4);
					MISC::SET_BIT(&(uParam0->f_1085), 5);
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1085, 5))
	{
		if (!BitTest(uParam0->f_1085, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1085), 6);
			func_65(0, 0);
			func_65(0, 0);
		}
		MISC::CLEAR_BIT(&(uParam0->f_1085), 5);
	}
}

int func_126(var uParam0)//Position - 0x2C0D
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	var uVar7;
	
	if (Local_161.f_32 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_161.f_32);
	iVar0 = StackVal;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1 = { Global_794709.f_4[iVar0 /*88*/] };
	iVar2 = Global_794709.f_4[iVar0 /*88*/].f_65;
	uVar3 = Global_794709.f_4[iVar0 /*88*/].f_71;
	func_218(func_219(PLAYER::PLAYER_ID()));
	func_85(PLAYER::PLAYER_ID(), 0, 376832, 0);
	Global_2684799.f_3831 = 1;
	func_217(PLAYER::PLAYER_ID(), 0);
	func_216();
	func_215();
	switch (uParam0->f_1082)
	{
		case 0:
			iVar2 = 260;
			func_214(67);
			func_213();
			func_212();
			break;
		
		case 1:
			iVar2 = 274;
			func_214(69);
			func_211();
			func_210();
			break;
	}
	if (func_281() || func_209())
	{
		func_279();
	}
	else
	{
		Global_1950108.f_507 = 1;
		func_208(iVar2);
		if (func_20() <= 3)
		{
			func_207();
		}
		func_204(func_206(PLAYER::PLAYER_ID()));
		func_202(&Var1);
		func_201(uVar3);
		func_200();
		func_198();
		func_197();
		func_78();
		func_196();
		Var6 = { 0f, 0f, 0f };
		MISC::SET_BIT(&uVar7, 6);
		func_127(&(Global_2683862.f_781), 0, 0, Var6, &uVar4, Var6, 1, 0, &uVar4, &iVar5, iVar5, 0, uVar7);
		func_65(0, 0);
		Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95 = 8;
		return 1;
	}
	return 0;
}

void func_127(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, struct<3> Param5, bool bParam6, bool bParam7, var uParam8, var uParam9, int iParam10, bool bParam11, var uParam12)//Position - 0x2D7F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_61(uParam0, iParam1, 1, iParam10, 1);
	if (func_76(PLAYER::PLAYER_ID(), 0))
	{
		if (bParam7)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!func_195() || bParam11)
				{
					func_184(0);
				}
			}
			return;
		}
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	}
	Var1 = { Param5 };
	fVar2 = -1f;
	bVar3 = false;
	fVar4 = 0.2f;
	iVar5 = 1;
	if (func_183(iParam1))
	{
		*uParam4 = { func_182(iParam1, iParam2) };
		Var1 = { func_181(iParam1, iParam2) };
		fVar2 = func_180(iParam1, iParam2);
	}
	if (!func_35(*uParam4))
	{
		Var0 = { *uParam4 };
	}
	if (func_35(Var0))
	{
		if (!bParam6)
		{
			Var0 = { Param3 };
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f)))
			{
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Var0))
		{
			if (func_76(PLAYER::PLAYER_ID(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_177()) && !ENTITY::IS_ENTITY_DEAD(func_177(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_177(), true) };
					Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(func_177()) };
					if (func_74(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_802, 1, 0))
					{
						Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var1 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			}
			if ((func_176(PLAYER::PLAYER_ID()) || func_175(PLAYER::PLAYER_ID())) && func_174())
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
			}
			else if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				if (func_176(PLAYER::PLAYER_ID()))
				{
					Var0.f_2 = (Var0.f_2 + 0.4f);
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 1.5f);
				}
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (BitTest(uParam12, 3))
	{
		Var0 = { 1124.7449f, 263.6554f, -48.8552f };
		Var1 = { -22.4617f, 0f, -75.8431f };
		fVar2 = 50f;
	}
	else if (func_172(PLAYER::PLAYER_ID()))
	{
		Var0 = { 488.6712f, -2623.0745f, -48.1159f };
		Var1 = { -9.1167f, 0f, 130.9763f };
		fVar2 = 50f;
	}
	else if (func_171(Global_4718592.f_113724) || BitTest(uParam12, 2))
	{
		if (func_170(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			Var0.f_2 = (Var0.f_2 + 0.4f);
			fVar2 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		}
		else
		{
			Var0 = { -194.2056f, -1853.7499f, 70.3345f };
			Var1 = { -10.0011f, 0f, 131.0271f };
			fVar2 = 42.6052f;
		}
	}
	else if (func_169(Global_4718592.f_113724) || BitTest(uParam12, 1))
	{
		Var0 = { 347.2638f, 4867.324f, -59.2679f };
		Var1 = { 1.2933f, 0.0747f, -34.6934f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 4) || func_168(Global_4718592.f_113724))
	{
		Var0 = { 2709.3323f, -366.5988f, -52.2786f };
		Var1 = { -19.962f, 0f, -121.3927f };
		fVar2 = 56.6574f;
	}
	else if (BitTest(uParam12, 5))
	{
		iVar6 = func_167(PLAYER::PLAYER_ID());
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_166(iVar6), func_165(iVar6), 3.5688f, 7.9792f, 4.1641f) };
		Var1 = { -21.6791f, 0f, (func_165(iVar6) + 40.237f) };
		fVar2 = 70f;
	}
	else if (BitTest(uParam12, 6) || func_164())
	{
		if (BitTest(uParam12, 6))
		{
			Var0 = { Global_1977693.f_1073 };
			Var1 = { Global_1977693.f_1073.f_3 };
			fVar2 = Global_1977693.f_1073.f_6;
		}
		else
		{
			func_161(&Var0, &Var1, &fVar2);
		}
	}
	else if (BitTest(uParam12, 7))
	{
		Var0 = { -1381.7837f, 38.8164f, 63.1614f };
		Var1 = { -19.0288f, 0f, -35.2577f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 8) || func_160(Global_4718592.f_113724))
	{
	}
	else if (BitTest(uParam12, 9) || (func_158() && func_157(249)))
	{
		Var0 = { -822.1176f, -198.5518f, 40.085f };
		Var1 = { 13.7424f, 0f, 145.7582f };
		fVar2 = 65.2994f;
		bVar3 = true;
		if (!func_116())
		{
			iVar5 = 0;
		}
	}
	else if (BitTest(uParam12, 10))
	{
	}
	else if (func_156(Global_4718592.f_113724))
	{
		Var0 = { 800.2757f, -3051.393f, 10.5728f };
		Var1 = { 3.1956f, 0f, -8.4268f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 11))
	{
		Var0 = { 1403.9072f, 3586.4277f, 41.1676f };
		Var1 = { -8.8877f, 0f, 39.6448f };
		fVar2 = 62f;
	}
	else if (BitTest(uParam12, 12))
	{
		Var0 = { 622.9118f, -396.3098f, 31.0305f };
		Var1 = { -10.3971f, 0f, 133.29f };
		fVar2 = 60f;
	}
	if (func_195() && !bParam11)
	{
		Var0 = { -213.5595f, 316.9778f, 96.9244f };
		Var1 = { -1.0483f, 0f, -127.3989f };
		fVar2 = 25.5102f;
	}
	if (iParam1 == 0 && bParam7)
	{
		func_150();
		func_149(&Var7, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
		if (!func_35(Var7))
		{
			Var0 = { Var7 };
		}
		func_143(&Var7, 144, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
		Var1 = { Var7 };
	}
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_COORD(*uParam0, Var0);
	CAM::SET_CAM_ROT(*uParam0, Var1, 2);
	if (fVar2 > 0f)
	{
		CAM::SET_CAM_FOV(*uParam0, fVar2);
	}
	else
	{
		CAM::SET_CAM_FOV(*uParam0, 40f);
	}
	if (bVar3)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fVar4);
	}
	if (func_195() && !bParam11)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_142(PLAYER::PLAYER_ID()))
			{
				func_85(PLAYER::PLAYER_ID(), 0, 4, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 40000f, 0.1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
		}
		MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, false, false, false, false, false, false, 0);
		func_141(1);
	}
	if (iVar5 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!func_195() || bParam11)
		{
			func_184(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if ((((!func_140() && !func_139()) && !func_138()) && !func_137()) && !func_136())
	{
		func_135(0);
	}
	if (func_73())
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		*uParam8 = { Var0 };
		*uParam9 = 1;
	}
	else
	{
		func_134(Var0);
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	func_128(func_195(), ((BitTest(uParam12, 0) || BitTest(uParam12, 1)) || BitTest(uParam12, 2)));
}

void func_128(bool bParam0, bool bParam1)//Position - 0x3584
{
	if (func_76(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
	if (!bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_131())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (func_130(PLAYER::PLAYER_ID()))
			{
				func_85(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			else if (func_129())
			{
				func_85(PLAYER::PLAYER_ID(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_85(PLAYER::PLAYER_ID(), 0, 319492, 0);
			}
		}
		else
		{
			func_85(PLAYER::PLAYER_ID(), 0, 57348, 0);
		}
	}
}

bool func_129()//Position - 0x3646
{
	return Global_2684799.f_6341;
}

int func_130(int iParam0)//Position - 0x3655
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1890444[iParam0 /*129*/].f_29, 31);
	}
	return 0;
}

int func_131()//Position - 0x3674
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_133(iVar0, 1) && !func_132(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)//Position - 0x36AF
{
	if (Global_78558)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0, bool bParam1)//Position - 0x3703
{
	if (Global_78558)
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

void func_134(struct<3> Param0)//Position - 0x3742
{
	if (!func_73())
	{
		return;
	}
	STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
}

void func_135(int iParam0)//Position - 0x3765
{
	if (func_71())
	{
		return;
	}
	if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

bool func_136()//Position - 0x37B5
{
	return BitTest(Global_2683862.f_3, 17);
}

bool func_137()//Position - 0x37C6
{
	return BitTest(Global_2683862.f_3, 14);
}

bool func_138()//Position - 0x37D7
{
	return BitTest(Global_2683862.f_3, 12);
}

bool func_139()//Position - 0x37E8
{
	return BitTest(Global_2683862.f_3, 9);
}

bool func_140()//Position - 0x37F9
{
	return BitTest(Global_2683862.f_3, 6);
}

void func_141(bool bParam0)//Position - 0x3809
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143), 27);
	}
}

bool func_142(int iParam0)//Position - 0x383F
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_143, 27);
}

int func_143(var uParam0, int iParam1, int iParam2)//Position - 0x3855
{
	struct<4> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_144(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_144(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_144(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_144(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_144(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_144(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_144(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x39F4
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	Var0[0 /*6*/] = { func_148(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_148(iParam0, bParam4) };
	*uParam2 = { func_146(iParam1, iParam3) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_145(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_145(Var1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0[1 /*6*/], 0f, Var1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_145(struct<3> Param0, float fParam1)//Position - 0x4EB2
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

struct<6> func_146(int iParam0, int iParam1)//Position - 0x4EF6
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_147(iParam1, &bVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && MISC::GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(&Var0, &(Var0.f_3), iParam0, bVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_147(int iParam0, var uParam1)//Position - 0x4F38
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_148(int iParam0, bool bParam1)//Position - 0x505E
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_149(var uParam0, int iParam1, int iParam2)//Position - 0x5C14
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_144(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_144(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_144(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_144(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_144(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_144(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_150()//Position - 0x5DA7
{
	int iVar0;
	
	if (func_153())
	{
		return;
	}
	func_152(4, -1);
	if (func_151())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iVar0) == PLAYER::PLAYER_ID())
			{
				if (!func_157(48))
				{
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), false);
				}
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), false);
			}
		}
		iVar0++;
	}
}

bool func_151()//Position - 0x5E19
{
	return BitTest(Global_2683862.f_43.f_4, 0);
}

void func_152(int iParam0, int iParam1)//Position - 0x5E2B
{
	MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1653913.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_153()//Position - 0x5E61
{
	if (func_155() != 2)
	{
		return 0;
	}
	if (!func_151() && !((Global_1943594 || Global_1574964) && func_154()))
	{
		return 0;
	}
	return 1;
}

var func_154()//Position - 0x5E9F
{
	return Global_2683862.f_43.f_57;
}

int func_155()//Position - 0x5EAF
{
	return Global_2683862.f_43.f_40;
}

int func_156(int iParam0)//Position - 0x5EBF
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6211[18])
		{
			if (iParam0 == Global_262145.f_5066[18 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x5F02
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2684799.f_1.f_2813[iVar0], iVar1);
}

int func_158()//Position - 0x5F33
{
	return func_159(Global_4718592.f_113724);
}

int func_159(int iParam0)//Position - 0x5F49
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31722[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x5F78
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_161(var uParam0, var uParam1, float fParam2)//Position - 0x5FA7
{
	if (func_163(Global_4718592.f_113724))
	{
		if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f)) < 0.1f)
		{
			*uParam0 = { 1561.1614f, 384.824f, -48.6215f };
			*uParam1 = { -89.3034f, -0.1435f, 180f };
			*fParam2 = 69f;
		}
		else
		{
			*uParam0 = { 1561.1604f, 384.8204f, -48.9135f };
			*uParam1 = { -89.5003f, -0.204f, 180f };
			*fParam2 = 69f;
		}
	}
	else if (func_162(Global_4718592.f_113724))
	{
		*uParam0 = { -1348.9563f, 138.2791f, -94.7272f };
		*uParam1 = { -2.4593f, 0f, -164.9275f };
		*fParam2 = 70f;
	}
}

int func_162(int iParam0)//Position - 0x6075
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x60AF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29933[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_164()//Position - 0x60DF
{
	if (func_163(Global_4718592.f_113724))
	{
		return 1;
	}
	return 0;
}

float func_165(int iParam0)//Position - 0x60FD
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

Vector3 func_166(int iParam0)//Position - 0x610F
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

var func_167(int iParam0)//Position - 0x6123
{
	return Global_2652258[iParam0 /*3*/];
}

int func_168(int iParam0)//Position - 0x6133
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6087[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_169(int iParam0)//Position - 0x6163
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_170(int iParam0)//Position - 0x619D
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_200, 24);
}

int func_171(int iParam0)//Position - 0x61B3
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6891[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6211[iVar1])
				{
					if (iParam0 == Global_262145.f_5066[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x6219
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_173(int iParam0)//Position - 0x6279
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
	}
	return -1;
}

var func_174()//Position - 0x672D
{
	return BitTest(Global_2683862.f_3, 4);
}

int func_175(int iParam0)//Position - 0x673D
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x6783
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

var func_177()//Position - 0x67E2
{
	if (ENTITY::DOES_ENTITY_EXIST(func_179()))
	{
		return func_179();
	}
	return func_178();
}

var func_178()//Position - 0x6800
{
	return Global_2621446.f_2;
}

var func_179()//Position - 0x680E
{
	return Global_2621446.f_3;
}

float func_180(int iParam0, int iParam1)//Position - 0x681C
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40.4324f;
				
				case 2:
					return 42.2709f;
				
				case 3:
					return 43.6444f;
				
				case 4:
					return 37.3862f;
				
				case 5:
					return 38.6952f;
				
				case 6:
					return 40.9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				
				case 1:
					return 47.4321f;
				
				case 2:
					return 38.6571f;
				
				case 3:
					return 44.0641f;
				
				case 4:
					return 39.2991f;
				
				case 5:
					return 31.7484f;
				
				case 6:
					return 35.6342f;
				
				case 7:
					return 36.0072f;
				
				case 8:
					return 42.5782f;
				
				case 9:
					return 37.4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_181(int iParam0, int iParam1)//Position - 0x6994
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				
				case 1:
					return -5.9341f, 0f, -151.6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				
				case 1:
					return -57.9221f, 0f, 58.3042f;
				
				case 2:
					return -15.4498f, 0f, 161.1361f;
				
				case 3:
					return -1.8386f, 0f, -135.0223f;
				
				case 4:
					return 0.5233f, 0f, -85.7377f;
				
				case 5:
					return -4.2364f, 0f, 173.6634f;
				
				case 6:
					return -3.74f, 0f, -30.7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				
				case 1:
					return 5.4815f, 0f, -127.6695f;
				
				case 2:
					return -4.1889f, 0f, -15.0654f;
				
				case 3:
					return 16.4433f, 0f, -60.3988f;
				
				case 4:
					return 7.8225f, 0f, 39.2409f;
				
				case 5:
					return 2.0405f, 0f, -122.3459f;
				
				case 6:
					return 7.3382f, 0f, 157.6388f;
				
				case 7:
					return 6.481f, 0f, 172.9874f;
				
				case 8:
					return 14.0573f, 0f, 5.0622f;
				
				case 9:
					return -10.1444f, 0f, -131.4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_182(int iParam0, int iParam1)//Position - 0x6BA2
{
	switch (iParam0)
	{
		case 11:
			return -1297.8552f, 84.6478f, 54.6519f;
		
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.7811f, 30.192f;
				
				case 1:
					return 816.6221f, -2160.6592f, 30.3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.5487f, 5.7494f;
				
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				
				case 3:
					return -2884.7537f, 32.9823f, 15.1123f;
				
				case 4:
					return -948.1036f, -1260.2487f, 8.228f;
				
				case 5:
					return -1614.2163f, 302.0945f, 66.0158f;
				
				case 6:
					return -1380.7211f, -107.9713f, 50.6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				
				case 1:
					return 1419.5167f, -2216.0344f, 61.8467f;
				
				case 2:
					return -83.9713f, -1331.6351f, 29.8383f;
				
				case 3:
					return 364.6455f, -2441.8967f, 6.2607f;
				
				case 4:
					return 1237.2067f, 2715.9993f, 37.6424f;
				
				case 5:
					return 1019.1531f, 2680.4268f, 41.2254f;
				
				case 6:
					return 269.5203f, 2617.4104f, 44.7054f;
				
				case 7:
					return -194.2518f, 6295.6875f, 31.0991f;
				
				case 8:
					return 1682.7593f, 4954.088f, 42.6891f;
				
				case 9:
					return 2325.4468f, 3145.91f, 58.4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.6974f, 3049.6675f, 47.7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_183(int iParam0)//Position - 0x6E04
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_184(int iParam0)//Position - 0x6E3C
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_185(0)))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(func_185(iParam0), 0, true);
	}
}

char* func_185(int iParam0)//Position - 0x6E5D
{
	if (func_194(Global_4718592.f_113724))
	{
		return "MenuMGIslandHeistIn";
	}
	if (iParam0 || func_157(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_193())
	{
		return "MenuMGTournamentIn";
	}
	if (func_187(Global_4718592.f_166301))
	{
		return "MenuMGRemixIn";
	}
	if (func_186(Global_4718592.f_166301) && BitTest(Global_4718592.f_167679.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_186(int iParam0)//Position - 0x6EEA
{
	return iParam0 == 998;
}

int func_187(int iParam0)//Position - 0x6EF8
{
	if ((((func_192(iParam0) || func_191(iParam0)) || func_190(iParam0)) || func_189(iParam0)) || func_188(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_188(int iParam0)//Position - 0x6F3E
{
	return iParam0 == 64;
}

bool func_189(int iParam0)//Position - 0x6F4B
{
	return iParam0 == 65;
}

bool func_190(int iParam0)//Position - 0x6F58
{
	return iParam0 == 69;
}

bool func_191(int iParam0)//Position - 0x6F65
{
	return iParam0 == 67;
}

bool func_192(int iParam0)//Position - 0x6F72
{
	return iParam0 == 68;
}

bool func_193()//Position - 0x6F7F
{
	return BitTest(Global_2684799.f_1.f_2809, 12);
}

int func_194(int iParam0)//Position - 0x6F93
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29933[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_195()//Position - 0x6FCD
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 2);
}

void func_196()//Position - 0x6FE4
{
	Global_2683862.f_717 = 1;
}

void func_197()//Position - 0x6FF4
{
	MISC::CLEAR_BIT(&Global_2683862, 7);
}

void func_198()//Position - 0x7005
{
	MISC::SET_BIT(&Global_2683862, 5);
	func_199();
}

void func_199()//Position - 0x701A
{
	MISC::SET_BIT(&Global_2683862, 8);
}

void func_200()//Position - 0x702C
{
	MISC::CLEAR_BIT(&(Global_2683862.f_2), 14);
}

void func_201(var uParam0)//Position - 0x7040
{
	Global_2683862.f_42 = uParam0;
}

void func_202(char* sParam0)//Position - 0x7050
{
	StringCopy(&(Global_2683862.f_860), sParam0, 24);
	if (func_203())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_203()//Position - 0x7074
{
	return BitTest(Global_2684799.f_1.f_2809, 5);
}

void func_204(struct<13> Param0)//Position - 0x7087
{
	if (func_205(Param0))
	{
		Global_2684799.f_6591 = { Param0 };
	}
}

bool func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x70AD
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_206(int iParam0)//Position - 0x70BD
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_207()//Position - 0x70D4
{
	MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 12);
}

void func_208(int iParam0)//Position - 0x70EE
{
	Global_2683862.f_9 = iParam0;
}

var func_209()//Position - 0x70FE
{
	return Global_2683862.f_756;
}

void func_210()//Position - 0x710D
{
	MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 28);
}

void func_211()//Position - 0x7127
{
	MISC::SET_BIT(&(Global_2683862.f_3), 13);
}

void func_212()//Position - 0x713B
{
	MISC::SET_BIT(&(Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_29), 27);
}

void func_213()//Position - 0x7155
{
	MISC::SET_BIT(&(Global_2683862.f_3), 11);
}

void func_214(int iParam0)//Position - 0x7169
{
	Global_1057409 = iParam0;
}

void func_215()//Position - 0x7177
{
	MISC::SET_BIT(&(Global_2683862.f_3), 2);
}

void func_216()//Position - 0x718A
{
	Global_2692733.f_1 = 0;
}

void func_217(int iParam0, int iParam1)//Position - 0x7199
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

void func_218(struct<3> Param0)//Position - 0x71DE
{
	Global_2694511 = { Param0 };
}

Vector3 func_219(int iParam0)//Position - 0x71F0
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(Global_2646729[iParam0]))
	{
		Var0 = { func_278(Global_2646729[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2646729.f_33[iParam0]) && !iParam0 == Global_2672505)
	{
		Var0 = { func_278(Global_2646729.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_220(iParam0);
}

Vector3 func_220(int iParam0)//Position - 0x7264
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	if (Global_2644534)
	{
		if (func_277(iParam0))
		{
			Var1 = { func_276(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657589[iParam0 /*466*/].f_73.f_11)
		{
			if (SYSTEM::VMAG(Global_2657589[iParam0 /*466*/].f_73.f_12) > 0f)
			{
				return Global_2657589[iParam0 /*466*/].f_73.f_12;
			}
		}
	}
	if (Global_1853910[iParam0 /*862*/].f_267.f_33 > 0)
	{
		Var1 = { func_274(func_275(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_271(func_273(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_274(func_275(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_270(iParam0))
	{
		Var1 = { func_223(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_222(iParam0))
	{
		iVar2 = func_221(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1950108.f_542[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2644534)
	{
		if (func_277(iParam0))
		{
			Var1 = { func_276(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657589[iParam0 /*466*/].f_73.f_11)
		{
			if (SYSTEM::VMAG(Global_2657589[iParam0 /*466*/].f_73.f_12) > 0f)
			{
				return Global_2657589[iParam0 /*466*/].f_73.f_12;
			}
		}
	}
	return func_273(iParam0);
}

int func_221(int iParam0)//Position - 0x7437
{
	if (iParam0 != func_15())
	{
		return Global_2657589[iParam0 /*466*/].f_321.f_16;
	}
	return -1;
}

int func_222(int iParam0)//Position - 0x745A
{
	int iVar0;
	
	if (iParam0 != func_15() && (func_75(iParam0, 1, 1) || Global_2635559.f_2680))
	{
		iVar0 = BitTest(Global_2657589[iParam0 /*466*/].f_321, 1);
		return iVar0;
	}
	return 0;
}

Vector3 func_223(int iParam0)//Position - 0x749C
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam0 == func_15())
	{
	}
	if (func_176(iParam0))
	{
		iVar0 = func_269(iParam0);
		if (iVar0 != func_15())
		{
			if (!func_268(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_253[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_253[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2657589[func_269(iParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_265(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1950108.f_542[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_172(iParam0))
	{
		iVar2 = func_264(iParam0);
		if (iVar2 != func_15())
		{
			if (!func_263(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1968145[iVar2]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_1968145[iVar2], false);
				}
				else
				{
					return Global_2657589[func_269(iParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1950108.f_542[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_175(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_308))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_308, false);
		}
	}
	else if (func_262(iParam0) && !func_261(iParam0))
	{
		iVar4 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar4 != func_15())
		{
			iVar5 = func_265(iVar4);
			if (!iVar5 == -1)
			{
				return Global_1950108.f_542[iVar5 /*3*/];
			}
		}
	}
	else if (func_260(iParam0) && !func_259(iParam0))
	{
		if (func_270(iParam0) && func_258())
		{
			return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar6 != func_15())
		{
			if (func_257(iVar6))
			{
				iVar7 = func_254(iVar6);
				if (iVar7 != -1)
				{
					return Global_1950108.f_542[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_253(iParam0))
	{
		iVar8 = func_252(iParam0);
		if (iVar8 != func_15())
		{
			if (!func_251(iVar8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_350[iVar8]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_350[iVar8], false);
				}
				else
				{
					return Global_2657589[func_252(iParam0) /*466*/].f_321.f_20;
				}
			}
			else
			{
				iVar9 = func_254(iVar8);
				if (!iVar9 == -1)
				{
					return Global_1950108.f_542[iVar9 /*3*/];
				}
			}
		}
	}
	else if (func_250(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793044.f_310))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2793044.f_310, false);
		}
	}
	else if (func_249(iParam0) && !func_248(iParam0))
	{
		iVar10 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar10 != func_15())
		{
			if (func_247(iVar10))
			{
				iVar11 = func_244(iVar10);
				if (iVar11 != -1)
				{
					return func_243(iVar11);
				}
			}
		}
	}
	else if (func_242(iParam0) && !func_241(iParam0))
	{
		iVar12 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar12 != func_15())
		{
			if (func_240(iVar12))
			{
				iVar13 = func_237(iVar12);
				if (iVar13 != -1)
				{
					return Global_1950108.f_542[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_236(iParam0, 0))
	{
		iVar14 = func_235(iParam0);
		if (iVar14 != func_15())
		{
			if (!func_234(iVar14))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_383[iVar14]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_383[iVar14], false);
				}
				else
				{
					return Global_1894573[func_235(iParam0) /*608*/].f_590;
				}
			}
			else
			{
				iVar15 = func_237(iVar14);
				if (!iVar15 == -1)
				{
					return Global_1950108.f_542[iVar15 /*3*/];
				}
			}
		}
	}
	else if (func_233(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_232(iParam0))
	{
		iVar16 = func_229(iParam0);
		if (iVar16 != func_15())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_416[iVar16]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_416[iVar16], false);
			}
			else
			{
				return Global_1914091[iVar16 /*297*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_249(iParam0))
	{
		return func_243(Global_2657589[iParam0 /*466*/].f_321.f_7);
	}
	if (func_224(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
}

int func_224(int iParam0)//Position - 0x798B
{
	if (((func_228(iParam0) || func_227(iParam0)) || func_226(iParam0)) || func_225(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x79C5
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x7A0C
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x7A53
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x7A9A
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x7AE1
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	if (func_231(iParam0) != -1)
	{
		iVar0 = func_173(func_231(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_230(iParam0, 0))
			{
				return func_22(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_15();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_15();
}

bool func_230(int iParam0, bool bParam1)//Position - 0x7B70
{
	if (!bParam1)
	{
		if (func_104(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_15();
}

int func_231(int iParam0)//Position - 0x7B9B
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_75(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_232(int iParam0)//Position - 0x7C0A
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_1575060) && iParam0 == PLAYER::PLAYER_ID()) && func_75(iParam0, 1, 0))
		{
			return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x7CA1
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)//Position - 0x7CE8
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x7D0D
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_236(int iParam0, bool bParam1)//Position - 0x7D31
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x7DBF
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_239(iParam0);
		if (iVar0 != 0)
		{
			return func_238(iVar0);
		}
	}
	return -1;
}

int func_238(int iParam0)//Position - 0x7DE8
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_239(int iParam0)//Position - 0x7E66
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_310;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x7E8A
{
	if (iParam0 != func_15())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_310 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x7EB3
{
	if (iParam0 != func_15())
	{
		if (func_242(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)//Position - 0x7EE8
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_243(int iParam0)//Position - 0x7F2F
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1950108.f_542[iParam0 /*3*/];
}

int func_244(int iParam0)//Position - 0x803C
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_246(iParam0);
		if (iVar0 != 0)
		{
			return func_245(iVar0);
		}
	}
	return -1;
}

int func_245(int iParam0)//Position - 0x8065
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_246(int iParam0)//Position - 0x80E3
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353;
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x8107
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353 != 0;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x812D
{
	if (iParam0 != func_15())
	{
		if (func_249(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x8162
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x81A9
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x81F0
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x8215
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_253(int iParam0)//Position - 0x8239
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x8299
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return -1;
	}
	iVar0 = func_256(iParam0);
	if (!iVar0 == 0)
	{
		return func_255(iVar0);
	}
	return -1;
}

int func_255(int iParam0)//Position - 0x82C8
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_256(int iParam0)//Position - 0x8356
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_300;
}

int func_257(int iParam0)//Position - 0x837A
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_300 != 0;
	}
	return 0;
}

int func_258()//Position - 0x83A0
{
	if (BitTest(Global_1950108.f_2, 13) || Global_1950108.f_3347)
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x83C6
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (func_260(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)//Position - 0x83FF
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_261(int iParam0)//Position - 0x8446
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (func_262(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0)//Position - 0x847F
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x84C5
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
	}
	return 0;
}

int func_264(int iParam0)//Position - 0x84EB
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_265(int iParam0)//Position - 0x850F
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return -1;
	}
	iVar0 = func_267(iParam0);
	if (!iVar0 == 0)
	{
		return func_266(iVar0);
	}
	return -1;
}

int func_266(int iParam0)//Position - 0x853E
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_267(int iParam0)//Position - 0x870E
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_268(int iParam0)//Position - 0x8734
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 6);
	}
	return 0;
}

int func_269(int iParam0)//Position - 0x8757
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_270(int iParam0)//Position - 0x877B
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == PLAYER::PLAYER_ID()) && func_75(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_271(struct<3> Param0, var uParam1)//Position - 0x87E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_272(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_272(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_272(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_272(Param0, iVar0, 0))
	{
		if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 > 0)
		{
			*uParam1 = Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
		}
		else if (Global_2635145.f_1 > 0)
		{
			*uParam1 = Global_2635145.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_272(Param0, iVar0, 0))
	{
		if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 > 0)
		{
			*uParam1 = Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33;
		}
		else if (Global_2635145.f_1 > 0)
		{
			*uParam1 = Global_2635145.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_272(struct<3> Param0, int iParam1, float fParam2)//Position - 0x8925
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312228[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312228[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312228[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_272(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_272(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_273(int iParam0)//Position - 0x8C79
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

Vector3 func_274(int iParam0)//Position - 0x8C8C
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 3:
			Var0 = { -1443.0938f, -544.7684f, 33.7424f };
			break;
		
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 14:
			Var0 = { -973.3757f, -1429.4247f, 6.6791f };
			break;
		
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 21:
			Var0 = { -1534.0247f, -324.5247f, 46.5237f };
			break;
		
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 23:
			Var0 = { -1608.8514f, -429.184f, 39.439f };
			break;
		
		case 24:
			Var0 = { 964.3583f, -1034.1991f, 39.8303f };
			break;
		
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 28:
			Var0 = { 844.7289f, -1164.0997f, 24.2681f };
			break;
		
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 30:
			Var0 = { 572.0462f, -1570.7357f, 27.4904f };
			break;
		
		case 31:
			Var0 = { 722.2852f, -1190.6168f, 23.282f };
			break;
		
		case 32:
			Var0 = { 497.6212f, -1494.0845f, 28.2893f };
			break;
		
		case 33:
			Var0 = { 480.3127f, -1549.9368f, 28.2828f };
			break;
		
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 36:
			Var0 = { 2554.1653f, 4668.059f, 33.0233f };
			break;
		
		case 37:
			Var0 = { 2461.2202f, 1589.2552f, 32.0443f };
			break;
		
		case 38:
			Var0 = { -2203.335f, 4244.4272f, 47.3305f };
			break;
		
		case 39:
			Var0 = { 218.0665f, 2601.8171f, 44.7668f };
			break;
		
		case 40:
			Var0 = { 186.1719f, 2786.3425f, 45.0144f };
			break;
		
		case 41:
			Var0 = { 642.0746f, 2791.7295f, 40.9795f };
			break;
		
		case 42:
			Var0 = { -1130.9376f, 2701.1333f, 17.8004f };
			break;
		
		case 43:
			Var0 = { -10.944f, -1646.7601f, 28.3125f };
			break;
		
		case 44:
			Var0 = { 1024.2628f, -2398.4036f, 29.1261f };
			break;
		
		case 45:
			Var0 = { 870.8577f, -2232.3228f, 29.5508f };
			break;
		
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 47:
			Var0 = { -1088.6158f, -2235.0977f, 12.2182f };
			break;
		
		case 48:
			Var0 = { -342.5126f, -1468.6746f, 29.6107f };
			break;
		
		case 49:
			Var0 = { -1241.5399f, -259.8841f, 37.9445f };
			break;
		
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 51:
			Var0 = { -1405.4109f, 526.8572f, 122.8361f };
			break;
		
		case 52:
			Var0 = { 1341.5518f, -1578.0366f, 53.4443f };
			break;
		
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 56:
			Var0 = { 1899.6729f, 3773.1785f, 31.8829f };
			break;
		
		case 57:
			Var0 = { 1662.1211f, 4776.317f, 41.0075f };
			break;
		
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 66:
			Var0 = { -1292.4557f, 440.9454f, 93.7572f };
			break;
		
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 68:
			Var0 = { -1581.5015f, -558.2578f, 33.9528f };
			break;
		
		case 69:
			Var0 = { -1379.5457f, -499.1783f, 32.1574f };
			break;
		
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 72:
			Var0 = { 254.1892f, -1809.1831f, 26.1805f };
			break;
		
		case 73:
			Var0 = { -1472.2778f, -920.0677f, 8.9683f };
			break;
		
		case 74:
			Var0 = { 38.9478f, -1026.6288f, 28.6354f };
			break;
		
		case 75:
			Var0 = { 46.903f, 2789.8247f, 57.1124f };
			break;
		
		case 76:
			Var0 = { -342.3246f, 6065.3164f, 30.4895f };
			break;
		
		case 77:
			Var0 = { 1737.8784f, 3709.0876f, 33.1348f };
			break;
		
		case 78:
			Var0 = { 939.7161f, -1459.2039f, 30.467f };
			break;
		
		case 79:
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 81:
			Var0 = { 2472.2197f, 4110.4927f, 36.9629f };
			break;
		
		case 82:
			Var0 = { -39.3286f, 6420.6025f, 30.7017f };
			break;
		
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

int func_275(int iParam0)//Position - 0x95B3
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

Vector3 func_276(int iParam0)//Position - 0x9AFA
{
	return Global_2657589[iParam0 /*466*/].f_73.f_7;
}

int func_277(int iParam0)//Position - 0x9B11
{
	if (Global_2657589[iParam0 /*466*/].f_73.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_278(int iParam0)//Position - 0x9B2F
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

void func_279()//Position - 0x9B78
{
	Global_2683862.f_756 = 1;
}

var func_280()//Position - 0x9B88
{
	return Global_2683862.f_735;
}

var func_281()//Position - 0x9B97
{
	return BitTest(Global_2683862.f_2, 11);
}

void func_282(var uParam0)//Position - 0x9BA8
{
	if (!func_460(uParam0))
	{
		func_453(uParam0);
		func_452(uParam0);
	}
	func_292(uParam0);
	if (!func_291(uParam0))
	{
		func_284(uParam0);
		func_283(uParam0);
	}
}

void func_283(var uParam0)//Position - 0x9BE2
{
	MISC::CLEAR_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
}

void func_284(var uParam0)//Position - 0x9BFC
{
	if (Local_161.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_4.f_1);
	}
	switch (uParam0->f_726.f_1)
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
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_289(uParam0, 1, 0);
			}
			func_288(uParam0, 0);
			func_287(uParam0);
			func_285(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_285(var uParam0)//Position - 0x9C7E
{
	func_286(&(uParam0->f_741.f_1), 0, 1);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
}

void func_286(var uParam0, bool bParam1, bool bParam2)//Position - 0x9C99
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, bParam1);
	}
	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_287(var uParam0)//Position - 0x9D33
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_712));
	}
}

void func_288(var uParam0, int iParam1)//Position - 0x9D50
{
	if (uParam0->f_704 != iParam1)
	{
	}
	uParam0->f_704 = iParam1;
}

void func_289(var uParam0, bool bParam1, int iParam2)//Position - 0x9D69
{
	if (bParam1)
	{
		if ((uParam0->f_1092 && !func_290(PLAYER::PLAYER_ID())) || iParam2)
		{
			func_85(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1092 = 0;
		}
	}
	else
	{
		func_85(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1092 = 1;
	}
}

int func_290(int iParam0)//Position - 0x9DCB
{
	if (iParam0 != func_15() && func_75(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
	}
	return 0;
}

bool func_291(var uParam0)//Position - 0x9DFC
{
	return !BitTest(uParam0->f_726.f_4, uParam0->f_726.f_1);
}

void func_292(var uParam0)//Position - 0x9E14
{
	if (Local_161.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_4.f_2);
	}
	switch (uParam0->f_726)
	{
		case 0:
			if (!uParam0->f_1091)
			{
				func_451(uParam0);
			}
			break;
		
		case 1:
			func_451(uParam0);
			break;
		
		case 2:
			if (func_450(uParam0) && func_449())
			{
				func_451(uParam0);
			}
			break;
		
		case 3:
			func_357(uParam0);
			if (func_356(uParam0))
			{
				func_451(uParam0);
			}
			break;
		
		case 4:
			func_355(uParam0);
			func_352(uParam0);
			func_357(uParam0);
			func_335(uParam0);
			func_334(uParam0);
			func_329(uParam0);
			func_298(uParam0);
			func_294();
			func_81(uParam0, 0);
			if (!func_356(uParam0))
			{
				func_293(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_293(var uParam0)//Position - 0x9EF8
{
	int iVar0;
	
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0 = (iVar0 - 1);
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 0)
	{
		uParam0->f_726 = 1;
	}
}

void func_294()//Position - 0x9F53
{
	HUD::THEFEED_HIDE_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_297(0);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	CAM::INVALIDATE_IDLE_CAM();
	func_295();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_152(11, -1);
}

void func_295()//Position - 0x9F8B
{
	NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
	func_296();
}

void func_296()//Position - 0x9FA0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != func_15() && iVar1 != PLAYER::PLAYER_ID())
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
		}
		iVar0++;
	}
}

void func_297(int iParam0)//Position - 0x9FED
{
	if (func_58())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_59(0))
		{
			func_54(iParam0);
		}
		MISC::SET_BIT(&Global_8254, 2);
	}
}

void func_298(var uParam0)//Position - 0xA020
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	char cVar3[24];
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_328(uParam0, iVar0) && !func_327(uParam0, iVar0))
		{
			if (func_301(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 61
				if (func_327(uParam0, iVar0))
				{
					Var2 = { func_300() };
					StringCopy(&cVar3, func_299(iVar0), 24);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2) && MISC::ARE_STRINGS_EQUAL(&Var2, &cVar3))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (Local_176.f_6 != iVar1)
					{
						Local_176.f_6 = iVar1;
					}
				}

char* func_299(int iParam0)//Position - 0xA0B8
{
	if (Local_161.f_43.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_161.f_43.f_1);
		return StackVal;
	}
	return "";
}

struct<6> func_300()//Position - 0xA0DC
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_301(var uParam0, int iParam1)//Position - 0xA100
{
	struct<2> Var0;
	
	if (!func_10())
	{
		StringCopy(&Var0, func_299(iParam1), 16);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			func_323(&(Local_176.f_7), func_326(iParam1), func_325(iParam1), func_324(iParam1), 0, 1);
			if (func_303(&(Local_176.f_7), func_322(iParam1), &Var0, 9, 0, 0, 0))
			{
				func_302(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_302(var uParam0, int iParam1)//Position - 0xA167
{
	MISC::SET_BIT(&(Local_176.f_3[(iParam1 / 32)]), (iParam1 % 32));
	if (Local_161.f_43.f_7 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_161.f_43.f_7);
	}
}

bool func_303(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA199
{
	func_321(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_304(sParam2, iParam3, 0);
}

int func_304(char* sParam0, int iParam1, bool bParam2)//Position - 0xA1E7
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_320();
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
		if (func_319(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_318();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
			if (bParam2)
			{
				func_310();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_309())
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
				if (!Global_78558)
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
			if (func_55())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_308();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_307();
		func_305();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_320();
	}
	return 0;
}

void func_305()//Position - 0xA4B5
{
	if (!func_306())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_306()//Position - 0xA4EC
{
	if (!Global_262145.f_28878 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_15())
	{
		return 0;
	}
	if (func_119(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_307()//Position - 0xA54F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
}

void func_308()//Position - 0xA581
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_309()//Position - 0xA616
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
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

void func_310()//Position - 0xA6AF
{
	if (func_317(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_311();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

var func_311()//Position - 0xA751
{
	func_312();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_312()//Position - 0xA76A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_315(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_314(PLAYER::PLAYER_PED_ID());
			if (func_313(iVar0) && (!func_317(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_313(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_313(int iParam0)//Position - 0xA867
{
	return iParam0 < 3;
}

int func_314(int iParam0)//Position - 0xA873
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_315(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_315(int iParam0)//Position - 0xA8B0
{
	if (func_313(iParam0))
	{
		return func_316(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_316(int iParam0)//Position - 0xA8D5
{
	return Global_2028[iParam0 /*29*/];
}

bool func_317(int iParam0)//Position - 0xA8E4
{
	return Global_43257 == iParam0;
}

void func_318()//Position - 0xA8F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_319(int iParam0, int iParam1)//Position - 0xA94A
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_320()//Position - 0xA982
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}
}

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xA9D9
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

char* func_322(var uParam0)//Position - 0xAA2F
{
	if (Local_161.f_43.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_2);
		return StackVal;
	}
	return "";
}

void func_323(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xAA53
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
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

char* func_324(var uParam0)//Position - 0xAAEE
{
	if (Local_161.f_43.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_5);
		return StackVal;
	}
	return "";
}

int func_325(var uParam0)//Position - 0xAB12
{
	if (Local_161.f_43.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_4);
		return StackVal;
	}
	return 0;
}

int func_326(var uParam0)//Position - 0xAB33
{
	if (Local_161.f_43.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_3);
		return StackVal;
	}
	return -1;
}

bool func_327(var uParam0, int iParam1)//Position - 0xAB54
{
	return BitTest(Local_176.f_3[(iParam1 / 32)], (iParam1 % 32));
}

var func_328(var uParam0, int iParam1)//Position - 0xAB6E
{
	return BitTest(Local_176[(iParam1 / 32)], (iParam1 % 32));
}

void func_329(var uParam0)//Position - 0xAB86
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_332(uParam0);
	if (((uParam0->f_741.f_62 || func_331(uParam0)) || uParam0->f_1086 != -1) || uParam0->f_1093)
	{
		return;
	}
	if (Local_161.f_28 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_161.f_28);
	}
	if (BitTest(uVar1, 0))
	{
		if (Local_161.f_3 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_3);
		}
		else
		{
			func_330(uParam0);
		}
	}
}

void func_330(var uParam0)//Position - 0xABFD
{
	uParam0->f_726.f_5 = 0;
}

var func_331(var uParam0)//Position - 0xAC0D
{
	return uParam0->f_820;
}

int func_332(var uParam0)//Position - 0xAC1A
{
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return -1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return -1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || func_333(uParam0, 0, 0))
	{
		return 0;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || func_333(uParam0, 0, 1))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || func_333(uParam0, 0, 2))
	{
		return 2;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || func_333(uParam0, 0, 3))
	{
		return 3;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		return 4;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return 5;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
	{
		return 6;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		return 7;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		return 8;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		return 9;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		return 10;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		return 11;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/))
	{
		return 12;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
	{
		return 13;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		return 14;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
	{
		return 15;
	}
	return -1;
}

int func_333(var uParam0, int iParam1, bool bParam2)//Position - 0xAD86
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
			}
			break;
		
		case 1:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_334(var uParam0)//Position - 0xAFFA
{
	bool bVar0;
	
	if (uParam0->f_1086 == -1)
	{
		return;
	}
	if (func_124(uParam0, uParam0->f_1086, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1086)
			{
				case 1:
					Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_21 = 1;
					break;
				
				case 2:
					if (Local_161.f_56.f_8 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_161.f_56.f_8);
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1086)
			{
				case 2:
					if (Local_161.f_56.f_9 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_161.f_56.f_9);
					}
					break;
				
				default:
					break;
				}
		}
		uParam0->f_1086 = -1;
		uParam0->f_1087 = -1;
		func_81(uParam0, 1);
	}
}

void func_335(var uParam0)//Position - 0xB0A2
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (uParam0->f_741.f_32 != uParam0->f_741.f_33)
	{
		func_351(uParam0, uParam0->f_741.f_33);
		uParam0->f_741.f_62 = 1;
		Var0 = { 0f, 0f, 0f };
		Var1 = { 0f, 0f, 0f };
		uParam0->f_741.f_44 = { func_350(uParam0) };
		uParam0->f_741.f_47 = { func_349(uParam0) };
		uParam0->f_741.f_1.f_17 = func_348(uParam0);
		uParam0->f_741.f_38 = { CAM::GET_CAM_COORD(uParam0->f_741.f_1) };
		uParam0->f_741.f_41 = { CAM::GET_CAM_ROT(uParam0->f_741.f_1, 2) };
		uParam0->f_741.f_1.f_18 = CAM::GET_CAM_FOV(uParam0->f_741.f_1);
		uParam0->f_741.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_741.f_63 = 750;
		if (func_347())
		{
			CAM::SHAKE_CAM(uParam0->f_741.f_1, func_346(), func_345());
		}
		CAM::SET_CAM_PARAMS(uParam0->f_741.f_1, uParam0->f_741.f_38, uParam0->f_741.f_41, uParam0->f_741.f_1.f_18, 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(uParam0->f_741.f_1, uParam0->f_741.f_44, uParam0->f_741.f_47, uParam0->f_741.f_1.f_17, uParam0->f_741.f_63, 1, 1, 2);
	}
	if (uParam0->f_741.f_62)
	{
		uParam0->f_741.f_1.f_18 = func_348(uParam0);
		if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_741.f_1))
		{
			uParam0->f_741.f_38 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_41 = { uParam0->f_741.f_47 };
			uParam0->f_741.f_1.f_1 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_1.f_4 = { uParam0->f_741.f_47 };
			if (func_347())
			{
				CAM::SHAKE_CAM(uParam0->f_741.f_1, func_346(), func_345());
			}
			uParam0->f_741.f_62 = 0;
			func_344(uParam0, uParam0->f_741.f_1.f_18);
			func_340(&(uParam0->f_741.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		func_340(&(uParam0->f_741.f_1), func_339(), func_338(), func_337(), 0, 1045220557, 0, 1065353216, func_336());
	}
}

int func_336()//Position - 0xB2BE
{
	if (Local_161.f_18.f_4.f_2 != 0)
	{
		Call_Loc(Local_161.f_18.f_4.f_2);
		return StackVal;
	}
	return 1;
}

int func_337()//Position - 0xB2E1
{
	if (Local_161.f_18.f_4.f_1 != 0)
	{
		Call_Loc(Local_161.f_18.f_4.f_1);
		return StackVal;
	}
	return 0;
}

int func_338()//Position - 0xB304
{
	if (Local_161.f_18.f_3 != 0)
	{
		Call_Loc(Local_161.f_18.f_3);
		return StackVal;
	}
	return 1;
}

int func_339()//Position - 0xB323
{
	if (Local_161.f_18.f_4 != 0)
	{
		Call_Loc(Local_161.f_18.f_4);
		return StackVal;
	}
	return 1;
}

void func_340(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0xB342
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	func_343(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/) * fParam5) * 127f));
		}
		iVar0[2] = func_342((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_342((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.f_0;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_341(((((Var6.f_0 - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_341(((((Var6.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_341(((((Var6.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_341(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_341(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_341(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_341(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_341(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/);
			iVar0[3] = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
		}
	}
}

float func_341(float fParam0, float fParam1, float fParam2)//Position - 0xB896
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_342(int iParam0, int iParam1, int iParam2)//Position - 0xB8BD
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

void func_343(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xB8E2
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_344(var uParam0, var uParam1)//Position - 0xB9E6
{
	uParam0->f_741.f_1.f_7 = uParam1;
	uParam0->f_741.f_1.f_20 = 15;
	uParam0->f_741.f_1.f_21 = 10;
	uParam0->f_741.f_1.f_22 = 1;
	uParam0->f_741.f_1.f_19 = 10f;
}

float func_345()//Position - 0xBA27
{
	if (Local_161.f_18.f_7.f_2 != 0)
	{
		Call_Loc(Local_161.f_18.f_7.f_2);
		return StackVal;
	}
	return 1f;
}

char* func_346()//Position - 0xBA4A
{
	if (Local_161.f_18.f_7.f_1 != 0)
	{
		Call_Loc(Local_161.f_18.f_7.f_1);
		return StackVal;
	}
	return "HAND_SHAKE";
}

int func_347()//Position - 0xBA70
{
	if (Local_161.f_18.f_7 != 0)
	{
		Call_Loc(Local_161.f_18.f_7);
		return StackVal;
	}
	return 1;
}

var func_348(var uParam0)//Position - 0xBA8F
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_161.f_18.f_2);
	return StackVal;
}

Vector3 func_349(var uParam0)//Position - 0xBAA6
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_161.f_18.f_1);
	return StackVal, StackVal, StackVal;
}

Vector3 func_350(var uParam0)//Position - 0xBABD
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_161.f_18);
	return StackVal, StackVal, StackVal;
}

void func_351(var uParam0, var uParam1)//Position - 0xBAD2
{
	uParam0->f_741.f_32 = uParam1;
}

void func_352(var uParam0)//Position - 0xBAE3
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar0 = uParam0->f_1084;
	if (iVar0 == -1)
	{
		return;
	}
	Stack.Push(Local_161.f_51 == 0);
	Stack.Push(uParam0);
	Call_Loc(Local_161.f_51);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (!func_354(&(Global_1978795[iVar0 /*25*/].f_18)))
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_51.f_1);
			if (StackVal)
			{
				func_41(&(Global_1978795[iVar0 /*25*/].f_18), 0, 0);
			}
		}
	}
	else
	{
		Call_Loc(Local_161.f_51.f_2);
		uParam0->f_823.f_245 = (StackVal - func_353(&(Global_1978795[iVar0 /*25*/].f_18), 0, 0));
		if (uParam0->f_823.f_245 > 0)
		{
			if (uParam0->f_823.f_245 < (uParam0->f_823.f_246 - 1000))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_51.f_3);
				uParam0->f_823.f_246 = uParam0->f_823.f_245;
			}
		}
		else
		{
			uParam0->f_823.f_245 = 0;
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_51.f_4);
		}
	}
}

int func_353(var uParam0, bool bParam1, bool bParam2)//Position - 0xBBCD
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_354(var uParam0)//Position - 0xBC14
{
	return uParam0->f_1;
}

void func_355(var uParam0)//Position - 0xBC20
{
	if (Local_161.f_28.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_28.f_1);
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
}

bool func_356(var uParam0)//Position - 0xBC4F
{
	return uParam0->f_726.f_5;
}

void func_357(var uParam0)//Position - 0xBC5E
{
	if (func_448(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
			switch (func_447())
			{
				case 1:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(uParam0->f_711, true);
					break;
				
				case 0:
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(uParam0->f_711, true);
					break;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_711, func_446(), func_445(), func_444(), func_443(), 255, 255, 255, 255, 0);
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			if (uParam0->f_706)
			{
			}
		}
	}
	else if (func_442(uParam0))
	{
		if (Local_161.f_7.f_2.f_7 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_7.f_2.f_7);
		}
	}
	if (func_441(uParam0))
	{
		func_358(uParam0);
	}
}

void func_358(var uParam0)//Position - 0xBD21
{
	struct<9> Var0;
	
	Var0 = { func_440() };
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (Local_176.f_6 != -1)
	{
		func_438(uParam0);
		return;
	}
	else if (iLocal_344)
	{
		func_437(uParam0, 1);
		iLocal_344 = 0;
	}
	if (!func_436(uParam0))
	{
		func_429(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_428(uParam0, 0.5f);
	}
	else
	{
		func_428(uParam0, 0.7f);
	}
	func_426(uParam0);
	func_359(uParam0);
	func_429(&(uParam0->f_712), &Var0, uParam0, uParam0->f_707);
	func_437(uParam0, 0);
}

void func_359(var uParam0)//Position - 0xBDD0
{
	bool bVar0;
	int iVar1;
	
	bVar0 = uParam0->f_1084 == PLAYER::PLAYER_ID();
	if (func_354(&(Global_1978795[uParam0->f_1084 /*25*/].f_18)))
	{
		func_425("", "HEIST_IB_CONT" /* GXT: Continue (~a~) */, uParam0->f_823.f_245, uParam0, 0);
	}
	iVar1 = uParam0->f_806;
	bLocal_143 = true;
	if (iLocal_154 != 0)
	{
		if (((func_424(iLocal_154) || iLocal_154 == -2) || iLocal_154 == -3) || iLocal_154 == -4)
		{
			func_423(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
		}
		else if (iVar1 == 1002)
		{
			func_423(2, 201, "CH_INSTR_LM" /* GXT: Launch Mission */, uParam0, 1, 363);
		}
		else
		{
			func_423(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
		}
		func_423(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 363);
		if ((iLocal_154 != -2 && iLocal_154 != -3) && iLocal_154 != -4)
		{
			func_422(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
		}
		return;
	}
	if (func_421(uParam0, iVar1))
	{
		func_423(2, 201, "H4P_INSTR_EQU" /* GXT: Equip */, uParam0, 1, 363);
	}
	else if (func_420(uParam0, iVar1))
	{
		func_423(2, 201, "H4P_INSTR_REM" /* GXT: Remove */, uParam0, 1, 363);
	}
	else if (func_419(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_PREV" /* GXT: Preview */, uParam0, 1, 363);
	}
	else if (func_418(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
	}
	else if (bVar0 && func_417(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_LM" /* GXT: Launch Mission */, uParam0, 1, 363);
	}
	else if (bVar0 && func_414(uParam0, iVar1))
	{
		func_423(2, 201, "H4P_INSTR_PUR" /* GXT: Purchase */, uParam0, 1, 363);
	}
	else if (!bVar0 && func_413(uParam0, iVar1))
	{
		func_423(2, 201, "HEIST_IB_RDY" /* GXT: Ready */, uParam0, 1, 363);
	}
	else if (!bVar0 && func_411(uParam0, iVar1))
	{
		func_423(2, 201, "HEIST_IB_UNRDY" /* GXT: Unready */, uParam0, 1, 363);
	}
	else
	{
		bLocal_143 = false;
	}
	if (func_410(iVar1))
	{
		func_423(2, 202, "CH_INSTR_QUIT" /* GXT: Quit */, uParam0, 1, 363);
	}
	else
	{
		func_423(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 363);
	}
	if (func_409(uParam0))
	{
		func_423(2, 203, "HP_MAP" /* GXT: Map */, uParam0, 1, 363);
	}
	if (func_363(uParam0, iVar1))
	{
		func_423(2, 204, "CH_INSTR_INFO" /* GXT: Info */, uParam0, 1, 363);
	}
	if (func_17(uParam0->f_1084, 0))
	{
		func_422(2, 14, "H4P_INSTR_SCR" /* GXT: Screens */, uParam0);
	}
	if (func_17(uParam0->f_1084, 0) || func_362(uParam0->f_1084))
	{
		func_422(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
	}
	if (func_361(iVar1))
	{
		if ((MISC::IS_PS3_VERSION() || func_62()) || MISC::IS_PC_VERSION())
		{
			func_423(2, 217, "HEIST_IB_PSN" /* GXT: View Profile */, uParam0, 1, 363);
		}
		else if (MISC::IS_XBOX360_VERSION() || func_63())
		{
			func_360(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true), "HEIST_IB_XBL" /* GXT: View gamer card */, uParam0, 0);
		}
		else
		{
			func_360(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true), "HEIST_IB_PSNXBL", uParam0, 0);
		}
	}
}

void func_360(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0xC108
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_361(int iParam0)//Position - 0xC158
{
	switch (iParam0)
	{
		case 105:
		case 106:
		case 107:
		case 108:
			return 1;
		
		default:
	}
	return 0;
}

int func_362(int iParam0)//Position - 0xC184
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_363(var uParam0, int iParam1)//Position - 0xC1A2
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_364(uParam0, iParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_364(var uParam0, int iParam1)//Position - 0xC1BE
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_I" /* GXT: Mission Details:~n~Under a disguise, scope the island for the primary target, secondary targets and other areas that may be useful during the heist.~n~~n~Heist Impact:~n~Identifies the locations of the primary target, different routes on and off the island, secondary targets to steal, and other points of interest that can open up extra opportunities during the heist. */;
		
		case 2:
			return "H4P_INT0_LOOT_I" /* GXT: Heist Impact:~n~Secondary targets can be stolen and sold alongside the primary target. Each player will only be able to carry a certain amount in their bag. */;
		
		case 3:
			return "H4P_INT0_ENTR_I" /* GXT: Heist Impact:~n~Opens up additional infiltration points for getting on the island during the Heist. */;
		
		case 4:
			return "H4P_INT0_EXIT_I" /* GXT: Heist Impact:~n~Opens up additional escape points for getting off the island during the Heist. */;
		
		case 5:
			return "H4P_INT0_COMP_I" /* GXT: Heist Impact:~n~Entry points into El Rubio's compound.  Additional equipment may need to be acquired during the heist to access some of these entry points. */;
		
		case 6:
			return "H4P_INT0_ITEM_I" /* GXT: Heist Impact:~n~Areas, equipment and vehicles that can be used during the heist to open up additional opportunities. */;
		
		case 7:
			return "H4P_INT2_CASH_I" /* GXT: Heist Impact:~n~Steal cash from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 8:
			return "H4P_INT2_WEED_I" /* GXT: Heist Impact:~n~Steal weed from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 9:
			return "H4P_INT2_COKE_I" /* GXT: Heist Impact:~n~Steal cocaine from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 10:
			return "H4P_INT2_GOLD_I" /* GXT: Heist Impact:~n~Steal gold from locked storage spaces to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 11:
			return "H4P_INT2_PAIN_I" /* GXT: Heist Impact:~n~Steal paintings from inside El Rubio's compound to increase your overall take.~n~~n~Please note:~n~Each player will only be able to carry a certain amount of this in their bag. */;
		
		case 12:
			return "H4P_INT3_AIRS_I" /* GXT: Heist Impact:~n~Infiltrate the airstrip using one of the following approach vehicles if acquired: ~n~ - Velum */;
		
		case 13:
			return "H4P_INT3_PARA_I" /* GXT: Heist Impact:~n~Infiltrate at high altitude above the island using one of the following approach vehicles if acquired: ~n~ - RO-86 Alkonost */;
		
		case 14:
			return "H4P_INT3_BEAC_I" /* GXT: Heist Impact:~n~Infiltrate the west beach using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat */;
		
		case 15:
			return "H4P_INT3_MDCK_I" /* GXT: Heist Impact:~n~Infiltrate the main dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 16:
			return "H4P_INT3_NDCK_I" /* GXT: Heist Impact:~n~Infiltrate the north dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 17:
			return "H4P_INT3_NDRP_I" /* GXT: Heist Impact:~n~Infiltrate the north drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 18:
			return "H4P_INT3_SDRP_I" /* GXT: Heist Impact:~n~Infiltrate the south drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 19:
			return "H4P_INT3_DTUN_I" /* GXT: Heist Impact:~n~Infiltrate the drainage tunnel using one of the following approach vehicles if acquired: ~n~ - Kosatka */;
		
		case 20:
			return "H4P_INT4_AIRS_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find an aircraft at the airstrip to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 21:
			return "H4P_INT4_MDCK_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the main dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 22:
			return "H4P_INT4_NDCK_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the north dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 23:
			return "H4P_INT4_SUBM_I" /* GXT: Heist Impact:~n~After acquiring the primary target, get back to your Kosatka to escape from the island. ~n~~n~ You can escape by any other means if plans change during the heist.~n~~n~Please note:~n~To escape with your Kosatka, it must also be used as your approach vehicle. */;
		
		case 30:
			return func_407(func_408(uParam0->f_1084), "H4P_INT6_PWRS_I" /* GXT: Heist Impact:~n~Disables security cameras and all lights on the island to reduce the guards' range of sight at night. */, "");
		
		case 31:
			return func_407(func_406(uParam0->f_1084), "H4P_INT6_CTOW_I" /* GXT: Heist Impact:~n~Disables air defenses around the island and allows hired support crew to be called in via the Interaction Menu. */, "");
		
		case 32:
			return func_407(func_400(uParam0->f_1084), "H4P_INT6_BCUT_I" /* GXT: Heist Impact:~n~If stolen during the heist, these can help you break into padlocked storage lockups containing secondary targets without alerting nearby guards. */, "");
		
		case 33:
			return func_407(func_394(uParam0->f_1084), "H4P_INT6_GRAP_I" /* GXT: Heist Impact:~n~If stolen during the heist, this can be used to climb broken parts of the wall into El Rubio's compound. */, "");
		
		case 34:
			return func_407(func_388(uParam0->f_1084), "H4P_INT6_UNIF_I" /* GXT: Heist Impact:~n~If stolen during the heist, the guard clothing can be worn as a disguise and the guards will take longer to spot you. It also allows entry into El Rubio's compound through the main gate without alerting the guards, if used alongside a supply truck. */, "");
		
		case 35:
			return func_407(func_387(uParam0->f_1084), "H4P_INT6_TROJ_I" /* GXT: Heist Impact:~n~If stolen during the heist, this will allow you to enter El Rubio's compound through the main gate without alerting the guards. You must also acquire the guard clothing to avoid detection. */, "");
		
		case 24:
			return "H4P_INT5_MGAT_I" /* GXT: Heist Impact:~n~Enter the courtyard of El Rubio's compound by destroying the main gate or stay undetected under the cover of a disguise. */;
		
		case 25:
			return "H4P_INT5_NWAL_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by climbing the broken wall.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if grappling equipment is acquired during the job. */;
		
		case 26:
			return "H4P_INT5_NSGT_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by unlocking the side gate.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if the code to the gate is acquired from a guard during the job. */;
		
		case 27:
			return "H4P_INT5_SWAL_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by climbing the broken wall.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if grappling equipment is acquired during the job. */;
		
		case 28:
			return "H4P_INT5_SSGT_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected by unlocking the side gate.~n~~n~Please note:~n~This entry point cannot be selected at the start of the heist. It only be used if the code to the gate is acquired from a guard during the job. */;
		
		case 29:
			return "H4P_INT5_DTUN_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected through the underwater drainage tunnel. */;
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "H4P_PRP1_SUBM_I" /* GXT: Mission Details:~n~Steal sonar jamming equipment. This will allow your Kosatka to remain undetected off the coast of Cayo Perico.~n~~n~Heist Impact:~n~With your Kosatka submerged off the coast, approach the island undetected in scuba gear. */;
		
		case 41:
			return "";
		
		case 42:
			return "H4P_PRP1_SPLA_I" /* GXT: Mission Details:~n~Steal one of El Rubio's smuggler planes to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Land on the island's airstrip in the Velum while disguised as one of El Rubio's smugglers. While unarmed, guards will let you travel around the airstrip but will attack if they spot you elsewhere. */;
		
		case 43:
			return "";
		
		case 44:
			return "H4P_PRP1_PBOA_I" /* GXT: Mission Details:~n~Steal a weaponized patrol boat to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Approach your chosen dock in a heavily armed Patrol Boat equipped with heavy machine guns. */;
		
		case 45:
			return "H4P_PRP1_SBOA_I" /* GXT: Mission Details:~n~Steal one of El Rubio's smuggler boats to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Approach your chosen dock in the Longfin while disguised as one of El Rubio's smugglers. While unarmed, some guards will let you travel around select areas of the docks but will attack if they spot you elsewhere. */;
		
		case 46:
			return "H4P_PRP1_BOM1_I" /* GXT: Mission Details:~n~Steal an RO-86 Alkonost to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Parachute from the RO-86 Alkonost's cargo hold as your pilot flies you at high altitude over the island while staying undetected. */;
		
		case 47:
			return "H4P_PRP1_BOM2_I" /* GXT: Mission Details:~n~Help a pilot who can fly you to the island.~n~~n~Heist Impact:~n~The pilot will fly you in undetected to get on to the island. */;
		
		case 48:
			return "H4P_PRP1_HEL1_I" /* GXT: Mission Details:~n~Steal a Stealth Annihilator to use as an approach vehicle when infiltrating the island.~n~~n~Heist Impact:~n~Rappel out of the Stealth Annihilator undetected as your pilot hovers over your chosen drop zone. */;
		
		case 49:
			return "H4P_PRP1_HEL2_I" /* GXT: Mission Details:~n~Help a pilot who can fly you to the island.~n~~n~Heist Impact:~n~The pilot will fly you in undetected to get on to the island. */;
		
		case 50:
			return "H4P_PRP2_DEMC_I" /* GXT: Mission Details:~n~Steal demolition charges that can destroy the reinforced main gate to El Rubio's compound.~n~~n~Heist Impact:~n~Gain access to El Rubio's compound through the main gate and destroy padlocks to access secondary targets. */;
		
		case 53:
			return "H4P_PRP2_ATOR_I" /* GXT: Mission Details:~n~Steal a cutting torch that can burn through metal on land and underwater.~n~~n~Heist Impact:~n~Gain access to the underwater drainage tunnel beneath El Rubio's compound and burn through padlocks to access secondary targets. */;
		
		case 51:
			return func_407(func_386(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_I" /* GXT: Mission Details:~n~Steal the code to the safe in El Rubio's secure vault.~n~~n~Heist Impact:~n~Unlocks the safe in El Rubio's secure vault, allowing you to access the primary target inside. */, "H4P_PRP2_TAR2_I" /* GXT: Mission Details:~n~Steal a plasma cutter that can cut through the reinforced display case in El Rubio's secure vault.~n~~n~Heist Impact:~n~Cuts through the reinforced glass display case in El Rubio's secure vault, allowing you to access the primary target inside. */);
		
		case 52:
			return "H4P_PRP2_FING_I" /* GXT: Mission Details:~n~Steal a fingerprint cloning device that can give you access to El Rubio's secure vault.~n~~n~Heist Impact:~n~Access El Rubio's secure basement via the elevator in his office. */;
		
		case 54:
			return "H4P_PRP3_SHOT_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete */;
		
		case 55:
			return "H4P_PRP3_RIFL_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster */;
		
		case 56:
			return "H4P_PRP3_SNIP_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife */;
		
		case 57:
			return func_407(func_370(uParam0, iParam1), "H4P_PRP3_M2SM_2" /* GXT: Locked:~n~Meet Chester McCoy as the owner of a Bunker or Arena Workshop. */, "H4P_PRP3_M2SM_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife */);
		
		case 58:
			return func_407(func_370(uParam0, iParam1), "H4P_PRP3_M2RI_2" /* GXT: Locked:~n~Meet Chester McCoy as the owner of a Bunker or Arena Workshop. */, "H4P_PRP3_M2RI_I" /* GXT: Mission Details:~n~Steal unmarked weapons that can be used during The Cayo Perico Heist~n~~n~Heist Impact:~n~Access to the following weapons:~n~- Assault Rifle Mk II~n~- Pistol MKII~n~- Pipe Bombs~n~- Machete */);
		
		case 59:
			return "H4P_PRP3_SUPP_I" /* GXT: Mission Details:~n~Purchase suppressors that can be attached to your weapons for The Cayo Perico Heist. ~n~~n~ Cost: $5000~n~~n~Heist Impact:~n~Reduces the range that enemies can hear you shooting. */;
		
		case 60:
			return "H4P_PRP4_WEAP_I" /* GXT: Mission Details:~n~Take out the arms dealers supplying El Rubio with weapons. This prep can only be attempted once.~n~~n~Heist Impact:~n~The weapons used by El Rubio's security will be weakened during the heist. */;
		
		case 61:
			return "H4P_PRP4_ARMR_I" /* GXT: Mission Details:~n~Destroy all the armor shipments that are intended for El Rubio's security on the island. This prep can only be attempted once.~n~~n~Heist Impact:~n~El Rubio's security will not be equipped with body armor during the heist. */;
		
		case 62:
			return "H4P_PRP4_BRES_I" /* GXT: Mission Details:~n~Destroy all the Buzzards that are intended for El Rubio's security on the island. This prep can only be attempted once.~n~~n~Heist Impact:~n~If alerted, El Rubio's security will not have access to Buzzards during the heist. */;
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "H4P_FIN1_SUBM_I" /* GXT: Heist Impact:~n~With your Kosatka submerged off the coast, approach the island undetected in scuba gear. */;
		
		case 72:
			return "H4P_FIN1_BOMB_I" /* GXT: Heist Impact:~n~Parachute from the RO-86 Alkonost's cargo hold as your pilot flies you at high altitude over the island while staying undetected. */;
		
		case 73:
			return "H4P_FIN1_SMPL_I" /* GXT: Heist Impact:~n~Land on the island's airstrip in the Velum while disguised as one of El Rubio's smugglers. While unarmed, guards will let you travel around the airstrip but will attack if they spot you elsewhere.~n~~n~Please note:~n~You must hire the Weapon Stash support crew member to avoid the guard's catching you with weapons when you land. */;
		
		case 74:
			return "H4P_FIN1_SHEL_I" /* GXT: Heist Impact:~n~Rappel out of the Stealth Annihilator undetected as your pilot hovers over your chosen drop zone. */;
		
		case 75:
			return "H4P_FIN1_PBOA_I" /* GXT: Heist Impact:~n~Approach your chosen dock in a heavily armed Patrol Boat equipped with heavy machine guns. */;
		
		case 76:
			return "H4P_FIN1_SBOA_I" /* GXT: Heist Impact:~n~Approach your chosen dock in the Longfin while disguised as one of El Rubio's smugglers. While unarmed, some guards will let you travel around select areas of the docks but will attack if they spot you elsewhere. */;
		
		case 77:
			return "H4P_FIN2_AIRS_I" /* GXT: Heist Impact:~n~Infiltrate the airstrip using one of the following approach vehicles if acquired: ~n~ - Velum */;
		
		case 78:
			return "H4P_FIN2_PARA_I" /* GXT: Heist Impact:~n~Infiltrate from high altitude above the island using one of the following approach vehicles if acquired: ~n~ - RO-86 Alkonost */;
		
		case 79:
			return "H4P_FIN2_WBEA_I" /* GXT: Heist Impact:~n~Infiltrate the west beach using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat */;
		
		case 80:
			return "H4P_FIN2_MDOC_I" /* GXT: Heist Impact:~n~Infiltrate the main dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 81:
			return "H4P_FIN2_NDOC_I" /* GXT: Heist Impact:~n~Infiltrate the north dock using one of the following approach vehicles if acquired: ~n~ - Kosatka ~n~ - Patrol Boat ~n~ - Longfin */;
		
		case 82:
			return "H4P_FIN2_NDRP_I" /* GXT: Heist Impact:~n~Infiltrate the north drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 83:
			return "H4P_FIN2_SDRP_I" /* GXT: Heist Impact:~n~Infiltrate the south drop zone using one of the following approach vehicles if acquired: ~n~ - Stealth Annihilator */;
		
		case 84:
			return "H4P_FIN2_DTUN_I" /* GXT: Heist Impact:~n~Infiltrate the drainage tunnel using one of the following approach vehicles if acquired: ~n~ - Kosatka */;
		
		case 85:
			return "H4P_FIN3_MGAT_I" /* GXT: Heist Impact:~n~Enter the courtyard of El Rubio's compound by destroying the main gate or stay undetected under the cover of a disguise.~n~~n~Please note:~n~You must be driving a supply truck and wearing guard clothing to enter undetected. */;
		
		case 86:
			return "H4P_FIN3_DTUN_I" /* GXT: Heist Impact:~n~Enter El Rubio's compound undetected through the underwater drainage tunnel. */;
		
		case 87:
			return "H4P_FIN4_AIRS_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find an aircraft at the airstrip to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 88:
			return "H4P_FIN4_MDOC_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the main dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 89:
			return "H4P_FIN4_NDOC_I" /* GXT: Heist Impact:~n~After acquiring the primary target, find a boat at the north dock to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist. */;
		
		case 90:
			return "H4P_FIN4_SUBM_I" /* GXT: Heist Impact:~n~After acquiring the primary target, get back to your Kosatka to escape from the island. ~n~~n~You can escape by any other means if plans change during the heist.~n~~n~Please note:~n~To escape with your Kosatka, it must also be used as your approach vehicle. */;
		
		case 91:
			return "H4P_FIN5_TDAY_I" /* GXT: Heist Impact:~n~The guards can see further during the day but will be more visible to you too. */;
		
		case 92:
			return "H4P_FIN5_TNGT_I" /* GXT: Heist Impact:~n~The guards can't see as far at night but they will be less visible to you too. */;
		
		case 93:
			return "H4P_FIN6_SHOT_I" /* GXT: Details:~n~Access to the following weapons:~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete */;
		
		case 94:
			return "H4P_FIN6_RIFL_I" /* GXT: Details:~n~Access to the following weapons:~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster */;
		
		case 95:
			return "H4P_FIN6_SNIP_I" /* GXT: Details:~n~Access to the following weapons:~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife */;
		
		case 96:
			return "H4P_FIN6_MKSM_I" /* GXT: Details:~n~Access to the following weapons:~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife */;
		
		case 97:
			return "H4P_FIN6_MKAR_I" /* GXT: Details:~n~Access to the following weapons:~n~- Assault Rifle Mk II~n~- Pistol Mk II~n~- Pipe Bombs~n~- Machete */;
		
		case 98:
			return "H4P_FIN6_SUPP_I" /* GXT: Heist Impact:~n~Reduces the range at which enemies can hear you shooting. */;
		
		case 99:
			return func_407(func_365(uParam0, iParam1), "H4P_FIN7_AIRS_I" /* GXT: Details:~n~From the Interaction Menu, call in an airstrike at your chosen location. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */, "H4P_FIN7_AIRS_2" /* GXT: Locked:~n~Meet this support crew member as the owner of a Hangar. */);
		
		case 100:
			return "H4P_FIN7_WDRP_I" /* GXT: Details:~n~From the Interaction Menu, call in a weapons supply drop containing a minigun, RPG and explosives. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		
		case 101:
			return "H4P_FIN7_SNIP_I" /* GXT: Details:~n~From the Interaction Menu, call in a temporary support sniper who can silently take out marked enemies.~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		
		case 102:
			return "H4P_FIN7_HELI_I" /* GXT: Details:~n~From the Interaction Menu, call in a temporary piloted helicopter that can take out El Rubio's security.~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */;
		
		case 103:
			return func_407(func_365(uParam0, iParam1), "H4P_FIN7_SPYD_I" /* GXT: Details:~n~From the Interaction Menu, call in an airborne drone to reveal the locations of nearby guards on the island. ~n~~n~Please Note:~n~To use this, the island's air defenses must first be disabled at the control tower during the heist. */, "H4P_FIN7_SPYD_2" /* GXT: Locked:~n~Meet this support crew member as the owner of a Terrorbyte. */);
		
		case 104:
			return "H4P_FIN7_WEAP_I" /* GXT: Details:~n~Have your weapons stashed at the island's airstrip so you don't alert El Rubio's guards when landing in the Velum.~n~~n~Please Note:~n~This only works with the Velum approach vehicle. */;
		
		default:
	}
	return "";
}

int func_365(var uParam0, int iParam1)//Position - 0xC7D3
{
	switch (iParam1)
	{
		case 99:
			return func_366(uParam0->f_1084, 0);
		
		case 103:
			return func_366(uParam0->f_1084, 3);
		
		default:
	}
	return 1;
}

int func_366(int iParam0, int iParam1)//Position - 0xC809
{
	switch (iParam1)
	{
		case 0:
			if (!func_369(iParam0) || !func_368(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_367(iParam0) || !BitTest(Global_1975258[iParam0 /*68*/].f_42, 4))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_367(int iParam0)//Position - 0xC867
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_160064.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_386, 31);
	}
	return 0;
}

int func_368(int iParam0)//Position - 0xC8A3
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_293.f_5;
}

int func_369(int iParam0)//Position - 0xC8C9
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_370(var uParam0, int iParam1)//Position - 0xC8EF
{
	switch (iParam1)
	{
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return !func_385(uParam0->f_1084, 0, 0, 0);
		
		case 8:
			return !func_385(uParam0->f_1084, 1, 0, 0);
		
		case 9:
			return !func_385(uParam0->f_1084, 2, 0, 0);
		
		case 10:
			return !func_385(uParam0->f_1084, 3, 0, 0);
		
		case 11:
			return !func_385(uParam0->f_1084, 4, 0, 0);
		
		case 12:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 13:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 14:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 15:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 16:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 17:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 18:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 19:
			return !func_383(uParam0->f_1084, func_384(iParam1));
		
		case 20:
			return !func_381(uParam0->f_1084, func_382(iParam1));
		
		case 21:
			return !func_381(uParam0->f_1084, func_382(iParam1));
		
		case 22:
			return !func_381(uParam0->f_1084, func_382(iParam1));
		
		case 23:
			return !func_381(uParam0->f_1084, func_382(iParam1));
		
		case 30:
			return !func_408(uParam0->f_1084);
		
		case 31:
			return !func_406(uParam0->f_1084);
		
		case 32:
			return !func_400(uParam0->f_1084);
		
		case 33:
			return !func_394(uParam0->f_1084);
		
		case 34:
			return !func_388(uParam0->f_1084);
		
		case 35:
			return !func_387(uParam0->f_1084);
		
		case 24:
			return !func_379(uParam0->f_1084, func_380(iParam1));
		
		case 25:
			return !func_379(uParam0->f_1084, func_380(iParam1));
		
		case 26:
			return !func_379(uParam0->f_1084, func_380(iParam1));
		
		case 27:
			return !func_379(uParam0->f_1084, func_380(iParam1));
		
		case 28:
			return !func_379(uParam0->f_1084, func_380(iParam1));
		
		case 29:
			return !func_379(uParam0->f_1084, func_380(iParam1));
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
		case 42:
			return 0;
		
		case 43:
			if (!func_383(uParam0->f_1084, 5) && !func_383(uParam0->f_1084, 6))
			{
				return 1;
			}
			return 0;
		
		case 44:
			return !(func_383(uParam0->f_1084, 3) || func_383(uParam0->f_1084, 4));
		
		case 45:
			return !(func_383(uParam0->f_1084, 3) || func_383(uParam0->f_1084, 4));
		
		case 46:
			return 0;
		
		case 47:
			if (func_17(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (func_17(uParam0->f_1084, 1))
			{
				return 0;
			}
			return 1;
		
		case 48:
			return !(func_383(uParam0->f_1084, 5) || func_383(uParam0->f_1084, 6));
		
		case 49:
			if (!func_383(uParam0->f_1084, 5) && !func_383(uParam0->f_1084, 6))
			{
				return 1;
			}
			if (func_17(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (func_17(uParam0->f_1084, 2))
			{
				return 0;
			}
			return 1;
		
		case 50:
			return 0;
		
		case 53:
			return !func_383(uParam0->f_1084, 7);
		
		case 51:
			return 0;
		
		case 52:
			return 0;
		
		case 54:
			return (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 1);
		
		case 55:
			return (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 2);
		
		case 56:
			return (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 3);
		
		case 57:
			if (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 4)
			{
				return 1;
			}
			if (func_377(uParam0->f_1084) && func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return 0;
			}
			if (func_372(uParam0->f_1084) && func_371(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		
		case 58:
			if (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 5)
			{
				return 1;
			}
			if (func_377(uParam0->f_1084) && func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return 0;
			}
			if (func_372(uParam0->f_1084) && func_371(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 0;
		
		case 99:
			return !func_365(uParam0, iParam1);
		
		case 103:
			return !func_365(uParam0, iParam1);
		
		default:
	}
	return 0;
}

int func_371(int iParam0)//Position - 0xCEF3
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_372.f_2, 13);
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xCF1C
{
	if (iParam0 != func_15())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_372 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1)//Position - 0xCF45
{
	int iVar0;
	
	if (func_376(iParam0, iParam1))
	{
		iVar0 = func_374(iParam0, iParam1);
		if (Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_4 > 0 && Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0, int iParam1)//Position - 0xCF99
{
	int iVar0;
	
	if (func_375(iParam1) && iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_375(int iParam0)//Position - 0xCFE5
{
	if (iParam0 == 33 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_376(int iParam0, int iParam1)//Position - 0xD004
{
	int iVar0;
	
	if (func_375(iParam1) && iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_377(int iParam0)//Position - 0xD04F
{
	return func_267(iParam0) != 0;
}

int func_378(int iParam0)//Position - 0xD05F
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_379(int iParam0, int iParam1)//Position - 0xD07D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_2, iParam1);
	}
	return 0;
}

int func_380(int iParam0)//Position - 0xD09E
{
	switch (iParam0)
	{
		case 24:
			return 0;
		
		case 25:
			return 1;
		
		case 26:
			return 2;
		
		case 27:
			return 3;
		
		case 28:
			return 4;
		
		case 29:
			return 5;
		
		default:
	}
	return 6;
}

int func_381(int iParam0, int iParam1)//Position - 0xD0EA
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 0);
			
			case 1:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 3);
			
			case 2:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 4);
			
			case 3:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 2);
			}
		
		default:
	}
	return 0;
}

int func_382(int iParam0)//Position - 0xD15C
{
	switch (iParam0)
	{
		case 20:
		case 87:
			return 0;
		
		case 21:
		case 88:
			return 1;
		
		case 22:
		case 89:
			return 2;
		
		case 23:
		case 90:
			return 3;
		
		default:
	}
	return 4;
}

int func_383(int iParam0, int iParam1)//Position - 0xD1AC
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_384(int iParam0)//Position - 0xD1CD
{
	switch (iParam0)
	{
		case 12:
		case 77:
			return 0;
		
		case 13:
		case 78:
			return 1;
		
		case 14:
		case 79:
			return 2;
		
		case 15:
		case 80:
			return 3;
		
		case 16:
		case 81:
			return 4;
		
		case 17:
		case 82:
			return 5;
		
		case 18:
		case 83:
			return 6;
		
		case 19:
		case 84:
			return 7;
		
		default:
	}
	return 8;
}

int func_385(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xD25E
{
	bool bVar0;
	
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_5, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_13, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_6, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_14, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_7, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_15, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_8, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_16, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 4:
				bVar0 = false;
				while (bVar0 < 7)
				{
					if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_18, bVar0))
					{
						return 1;
					}
					bVar0++;
				}
				break;
			}
	}
	return 0;
}

int func_386(int iParam0)//Position - 0xD453
{
	if (iParam0 != -1)
	{
		switch (Global_1979596[iParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			
			default:
		}
		return 10;
	}
	return -1;
}

int func_387(int iParam0)//Position - 0xD489
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 15);
	}
	return 0;
}

int func_388(int iParam0)//Position - 0xD4A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_389(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_389(int iParam0, int iParam1)//Position - 0xD4D2
{
	switch (iParam1)
	{
		case 0:
			return func_393(iParam0);
		
		case 1:
			return func_392(iParam0);
		
		case 2:
			return func_391(iParam0);
		
		case 3:
			return func_390(iParam0);
		
		default:
	}
	return 0;
}

int func_390(int iParam0)//Position - 0xD51E
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 7);
	}
	return 0;
}

int func_391(int iParam0)//Position - 0xD53C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 6);
	}
	return 0;
}

int func_392(int iParam0)//Position - 0xD55A
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 5);
	}
	return 0;
}

int func_393(int iParam0)//Position - 0xD578
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 4);
	}
	return 0;
}

int func_394(int iParam0)//Position - 0xD596
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_395(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_395(int iParam0, int iParam1)//Position - 0xD5C0
{
	switch (iParam1)
	{
		case 0:
			return func_399(iParam0);
		
		case 1:
			return func_398(iParam0);
		
		case 2:
			return func_397(iParam0);
		
		case 3:
			return func_396(iParam0);
		
		default:
	}
	return 0;
}

int func_396(int iParam0)//Position - 0xD60C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 3);
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xD62A
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 2);
	}
	return 0;
}

int func_398(int iParam0)//Position - 0xD648
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 1);
	}
	return 0;
}

int func_399(int iParam0)//Position - 0xD666
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 0);
	}
	return 0;
}

int func_400(int iParam0)//Position - 0xD684
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_401(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)//Position - 0xD6AE
{
	switch (iParam1)
	{
		case 0:
			return func_405(iParam0);
		
		case 1:
			return func_404(iParam0);
		
		case 2:
			return func_403(iParam0);
		
		case 3:
			return func_402(iParam0);
		
		default:
	}
	return 0;
}

int func_402(int iParam0)//Position - 0xD6FA
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 11);
	}
	return 0;
}

int func_403(int iParam0)//Position - 0xD719
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 10);
	}
	return 0;
}

int func_404(int iParam0)//Position - 0xD738
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 9);
	}
	return 0;
}

int func_405(int iParam0)//Position - 0xD757
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 8);
	}
	return 0;
}

int func_406(int iParam0)//Position - 0xD776
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 16);
	}
	return 0;
}

char* func_407(bool bParam0, char* sParam1, char* sParam2)//Position - 0xD795
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_408(int iParam0)//Position - 0xD7AC
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 14);
	}
	return 0;
}

int func_409(var uParam0)//Position - 0xD7CB
{
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		return 0;
	}
	return 1;
}

int func_410(int iParam0)//Position - 0xD7F5
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 67:
		case 63:
		case 64:
		case 66:
		case 65:
		case 68:
		case 69:
		case 70:
		case 1000:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(var uParam0, int iParam1)//Position - 0xD87B
{
	switch (iParam1)
	{
		case 1000:
			if (func_412(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_823.f_67[func_412(uParam0, PLAYER::PLAYER_ID())] == 1;
			}
			break;
	}
	return 0;
}

int func_412(var uParam0, int iParam1)//Position - 0xD8BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_823.f_51[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_413(var uParam0, int iParam1)//Position - 0xD8EA
{
	switch (iParam1)
	{
		case 1000:
			if (func_412(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_823.f_67[func_412(uParam0, PLAYER::PLAYER_ID())] == 0;
			}
			break;
	}
	return 0;
}

int func_414(var uParam0, int iParam1)//Position - 0xD929
{
	switch (iParam1)
	{
		case 99:
			return !func_416(uParam0->f_1084, 0);
		
		case 100:
			return !func_416(uParam0->f_1084, 4);
		
		case 101:
			return !func_416(uParam0->f_1084, 1);
		
		case 102:
			return !func_416(uParam0->f_1084, 2);
		
		case 103:
			return !func_416(uParam0->f_1084, 3);
		
		case 104:
			return !func_416(uParam0->f_1084, 5);
		
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return 0;
			}
			return !func_415(uParam0->f_1084);
		
		default:
	}
	return 0;
}

int func_415(int iParam0)//Position - 0xD9CF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 12);
	}
	return 0;
}

int func_416(int iParam0, int iParam1)//Position - 0xD9EE
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_45, iParam1);
	}
	return 0;
}

int func_417(var uParam0, int iParam1)//Position - 0xDA0F
{
	if (func_370(uParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 40:
			return !func_17(uParam0->f_1084, 7);
		
		case 42:
			return !func_17(uParam0->f_1084, 5);
		
		case 44:
			return !func_17(uParam0->f_1084, 3);
		
		case 45:
			return !func_17(uParam0->f_1084, 4);
		
		case 46:
			return !func_17(uParam0->f_1084, 1);
		
		case 48:
			return !func_17(uParam0->f_1084, 2);
		
		case 47:
			return !func_17(uParam0->f_1084, 6);
		
		case 49:
			return !func_17(uParam0->f_1084, 6);
		
		case 50:
			return !func_17(uParam0->f_1084, 8);
		
		case 53:
			return !func_17(uParam0->f_1084, 9);
		
		case 51:
			return !func_17(uParam0->f_1084, 11);
		
		case 52:
			return !func_17(uParam0->f_1084, 12);
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_378(uParam0->f_1084) == 0 || !func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
		
		case 60:
			return !func_17(uParam0->f_1084, 14);
		
		case 61:
			return !func_17(uParam0->f_1084, 15);
		
		case 62:
			return !func_17(uParam0->f_1084, 16);
	}
	return 0;
}

int func_418(var uParam0, int iParam1)//Position - 0xDBBB
{
	switch (iParam1)
	{
		case 1000:
			return 1;
		
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 43:
			if (func_370(uParam0, iParam1))
			{
				return 0;
			}
			return 1;
		
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (uParam0->f_1084 != iLocal_160)
			{
				return 0;
			}
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		case 68:
		case 70:
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		case 91:
		case 92:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 98:
		case 105:
		case 106:
		case 107:
		case 108:
			return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == iLocal_160);
		
		default:
	}
	return 0;
}

int func_419(var uParam0, int iParam1)//Position - 0xDD28
{
	switch (iParam1)
	{
		case 67:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
		case 69:
		case 70:
			return !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		default:
	}
	return 0;
}

int func_420(var uParam0, int iParam1)//Position - 0xDD70
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID()) && Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_421(var uParam0, int iParam1)//Position - 0xDDB6
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID()) && !Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_422(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xDDFD
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_423(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xDE61
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 363)
		{
		}
	}
	uParam3->f_693++;
}

int func_424(int iParam0)//Position - 0xDEDE
{
	switch (iParam0)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

void func_425(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)//Position - 0xDF16
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = uParam2;
	MISC::SET_BIT(&(uParam3->f_686), iVar0);
	uParam3->f_694 = iVar0;
	uParam3->f_693++;
}

void func_426(var uParam0)//Position - 0xDF84
{
	func_427(uParam0);
	uParam0->f_692 = 1;
}

void func_427(var uParam0)//Position - 0xDF98
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

void func_428(var uParam0, float fParam1)//Position - 0xE081
{
	uParam0->f_699 = fParam1;
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0xE090
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_435(uParam2);
	}
	if (Global_1577898 < 2)
	{
		func_434(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_433(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 363)
						{
							func_433(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_433(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_432(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_433(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_433(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_432(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_431(*uParam0, uParam1);
	}
	func_430();
}

void func_430()//Position - 0xE42B
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_431(int iParam0, var uParam1)//Position - 0xE449
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_432(char* sParam0)//Position - 0xE468
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_433(char* sParam0)//Position - 0xE47A
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_434(int iParam0)//Position - 0xE488
{
	Global_1577898 = iParam0;
}

void func_435(var uParam0)//Position - 0xE496
{
	uParam0->f_692 = 0;
}

bool func_436(var uParam0)//Position - 0xE4A4
{
	return uParam0->f_707;
}

void func_437(var uParam0, int iParam1)//Position - 0xE4B1
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

void func_438(var uParam0)//Position - 0xE4CA
{
	struct<9> Var0;
	int iVar1;
	
	if (!func_439(Local_176.f_6))
	{
		return;
	}
	Var0 = { func_440() };
	if (iLocal_344 && !uParam0->f_707)
	{
		func_429(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_428(uParam0, 0.5f);
	}
	else
	{
		func_428(uParam0, 0.7f);
	}
	func_426(uParam0);
	iVar1 = uParam0->f_806;
	if (func_419(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_PREV" /* GXT: Preview */, uParam0, 1, 363);
	}
	else if (func_418(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_SEL" /* GXT: Select */, uParam0, 1, 363);
	}
	if (func_410(iVar1))
	{
		func_423(2, 202, "CH_INSTR_QUIT" /* GXT: Quit */, uParam0, 1, 363);
	}
	else
	{
		func_423(2, 202, "CH_INSTR_BACK" /* GXT: Back */, uParam0, 1, 363);
	}
	if (func_409(uParam0))
	{
		func_423(2, 203, "HP_MAP" /* GXT: Map */, uParam0, 1, 363);
	}
	func_422(2, 0, "HEIST_IB_NAV" /* GXT: Navigate */, uParam0);
	func_429(&(uParam0->f_712), &Var0, uParam0, 1);
	if (!iLocal_344)
	{
		iLocal_344 = 1;
	}
	else if (uParam0->f_707)
	{
		uParam0->f_707 = 0;
	}
}

int func_439(int iParam0)//Position - 0xE604
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 19:
		case 37:
			return 1;
		
		default:
	}
	return 0;
}

struct<9> func_440()//Position - 0xE642
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_441(var uParam0)//Position - 0xE686
{
	return uParam0->f_704;
}

bool func_442(var uParam0)//Position - 0xE693
{
	if (Local_161.f_7.f_2.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_7.f_2.f_6);
		return StackVal;
	}
	return uParam0->f_703;
}

float func_443()//Position - 0xE6BC
{
	if (Local_161.f_7.f_2.f_5 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_5);
		return StackVal;
	}
	return 1f;
}

float func_444()//Position - 0xE6DF
{
	if (Local_161.f_7.f_2.f_4 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_4);
		return StackVal;
	}
	return 1f;
}

float func_445()//Position - 0xE702
{
	if (Local_161.f_7.f_2.f_3 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_3);
		return StackVal;
	}
	return 0.5f;
}

float func_446()//Position - 0xE729
{
	if (Local_161.f_7.f_2.f_2 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_2);
		return StackVal;
	}
	return 0.5f;
}

int func_447()//Position - 0xE750
{
	if (Local_161.f_7.f_2.f_1 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_1);
		return StackVal;
	}
	return 1;
}

bool func_448(var uParam0)//Position - 0xE773
{
	return uParam0->f_702;
}

var func_449()//Position - 0xE780
{
	return Global_2692733.f_6;
}

int func_450(var uParam0)//Position - 0xE78E
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		return 0;
	}
	return 1;
}

void func_451(var uParam0)//Position - 0xE7B9
{
	int iVar0;
	
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0++;
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 7)
	{
		uParam0->f_726 = 5;
	}
}

void func_452(var uParam0)//Position - 0xE814
{
	MISC::SET_BIT(&(uParam0->f_726.f_3), uParam0->f_726);
}

void func_453(var uParam0)//Position - 0xE82C
{
	if (Local_161.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_4);
	}
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			func_457(uParam0);
			break;
		
		case 3:
			uParam0->f_1096 = 0;
			uParam0->f_1097 = 0;
			break;
		
		case 4:
			func_454(uParam0);
			func_288(uParam0, 1);
			func_437(uParam0, 1);
			func_289(uParam0, 0, 0);
			break;
		
		case 5:
			break;
	}
}

void func_454(var uParam0)//Position - 0xE8B3
{
	uParam0->f_741.f_35 = 0f;
	uParam0->f_741.f_35.f_1 = 0f;
	uParam0->f_741.f_35.f_2 = -180f;
	func_456(uParam0, 0);
	func_455(&(uParam0->f_741.f_1), func_350(uParam0), func_349(uParam0), func_348(uParam0), 20, 10, 3, 10f, 1, 0, -1f, 1);
	if (func_347())
	{
		CAM::SHAKE_CAM(uParam0->f_741.f_1, func_346(), func_345());
	}
	func_344(uParam0, func_348(uParam0));
	CAM::SET_WIDESCREEN_BORDERS(true, 0);
	uParam0->f_741.f_38 = { func_350(uParam0) };
	uParam0->f_741.f_41 = { func_349(uParam0) };
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
}

void func_455(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0xE96E
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = uParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam3;
	uParam0->f_18 = uParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_456(var uParam0, int iParam1)//Position - 0xEA66
{
	uParam0->f_741.f_33 = iParam1;
}

void func_457(var uParam0)//Position - 0xEA77
{
	uParam0->f_711 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_459(uParam0));
	uParam0->f_712 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_458(uParam0));
}

char* func_458(var uParam0)//Position - 0xEA9D
{
	if (Local_161.f_7.f_10 != 0)
	{
		Call_Loc(Local_161.f_7.f_10);
		return StackVal;
	}
	return "INSTRUCTIONAL_BUTTONS";
}

char* func_459(var uParam0)//Position - 0xEABF
{
	if (Local_161.f_7.f_2 != 0)
	{
		Call_Loc(Local_161.f_7.f_2);
		return StackVal;
	}
	return "";
}

bool func_460(var uParam0)//Position - 0xEAE1
{
	return BitTest(uParam0->f_726.f_3, uParam0->f_726);
}

void func_461(int iParam0)//Position - 0xEAF6
{
	if (iLocal_172 != iParam0)
	{
	}
	iLocal_172 = iParam0;
}

void func_462()//Position - 0xEB0B
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_463() == 25)
	{
		Global_1978795[PLAYER::PLAYER_ID() /*25*/].f_20 = 1;
	}
}

int func_463()//Position - 0xEB33
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192;
}

int func_464(var uParam0)//Position - 0xEB48
{
	if (!func_471(uParam0))
	{
		return 0;
	}
	if (!func_466(uParam0))
	{
		return 0;
	}
	if (!func_465())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() != -1 && !Global_1978795[PLAYER::PLAYER_ID() /*25*/].f_20)
	{
		Global_1978795[PLAYER::PLAYER_ID() /*25*/].f_20 = 1;
	}
	return 1;
}

int func_465()//Position - 0xEBA1
{
	return 1;
}

int func_466(var uParam0)//Position - 0xEBAA
{
	char* sVar0;
	int iVar1;
	
	if (!BitTest(uParam0->f_1085, 1))
	{
		Call_Loc(Local_161.f_7);
		sVar0 = StackVal;
		Call_Loc(Local_161.f_7.f_1);
		iVar1 = StackVal;
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return 0;
		}
		if (iVar1 == 0)
		{
			return 0;
		}
		if (func_468(sVar0, iVar1))
		{
			uParam0->f_700 = func_467(sVar0);
			MISC::SET_BIT(&(uParam0->f_1085), 1);
		}
	}
	return BitTest(uParam0->f_1085, 1);
}

int func_467(char* sParam0)//Position - 0xEC0D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sParam0);
	}
	return -1;
}

bool func_468(char* sParam0, int iParam1)//Position - 0xEC29
{
	return (func_470(sParam0) && func_469(iParam1));
}

int func_469(int iParam0)//Position - 0xEC42
{
	if (iParam0 != 0)
	{
		if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0))
		{
			HUD::LINK_NAMED_RENDERTARGET(iParam0);
		}
		return 1;
	}
	return 0;
}

int func_470(char* sParam0)//Position - 0xEC6B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(sParam0, false);
		}
		return 1;
	}
	return 0;
}

bool func_471(var uParam0)//Position - 0xEC9A
{
	if (!BitTest(uParam0->f_1085, 0))
	{
		uParam0->f_1082 = func_974();
		uParam0->f_732 = { func_972() };
		uParam0->f_732.f_6 = { uParam0->f_732 };
		uParam0->f_741.f_33 = func_971();
		if (func_970() == 0)
		{
			uParam0->f_1073 = { 1561.1614f, 384.824f, -48.6215f };
			uParam0->f_1073.f_3 = { -89.3034f, -0.1435f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		else
		{
			uParam0->f_1073 = { 1561.1604f, 384.8204f, -48.9135f };
			uParam0->f_1073.f_3 = { -89.5003f, -0.204f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			uParam0->f_1084 = func_969();
		}
		Local_161.f_0 = 144975/*func_967*/;
		Local_161.f_1 = 144931/*func_966*/;
		Local_161.f_2 = 144912/*func_965*/;
		Local_161.f_3 = 144893/*func_964*/;
		Local_161.f_4 = 126188/*func_858*/;
		Local_161.f_4.f_1 = 126103/*func_857*/;
		Local_161.f_4.f_2 = 74750/*func_567*/;
		Local_161.f_7 = 74738/*func_566*/;
		Local_161.f_7.f_1 = 74725/*func_565*/;
		Local_161.f_7.f_2 = 74713/*func_564*/;
		Local_161.f_7.f_2.f_1 = 74704/*func_563*/;
		Local_161.f_7.f_2.f_2 = 74691/*func_562*/;
		Local_161.f_7.f_2.f_3 = 74678/*func_561*/;
		Local_161.f_7.f_2.f_4 = 74665/*func_560*/;
		Local_161.f_7.f_2.f_5 = 74652/*func_559*/;
		Local_161.f_7.f_2.f_7 = 74525/*func_558*/;
		Local_161.f_28 = 71598/*func_542*/;
		Local_161.f_18 = 71530/*func_541*/;
		Local_161.f_18.f_1 = 71462/*func_540*/;
		Local_161.f_18.f_2 = 71432/*func_539*/;
		Local_161.f_18.f_3 = 71423/*func_538*/;
		Local_161.f_18.f_4 = 71414/*func_537*/;
		Local_161.f_18.f_7.f_2 = 71401/*func_536*/;
		Local_161.f_30 = 71337/*func_535*/;
		Local_161.f_31 = 71204/*func_534*/;
		Local_161.f_32 = 71114/*func_531*/;
		Local_161.f_33.f_2 = 71101/*func_530*/;
		Local_161.f_33 = 71023/*func_527*/;
		Local_161.f_33.f_1 = 68095/*func_509*/;
		Local_161.f_33.f_3 = 68080/*func_508*/;
		Local_161.f_33.f_5 = 68068/*func_507*/;
		Local_161.f_33.f_4 = 68028/*func_506*/;
		Local_161.f_33.f_6 = 68012/*func_505*/;
		Local_161.f_33.f_7 = 68000/*func_504*/;
		Local_161.f_33.f_8 = 63219/*func_488*/;
		Local_161.f_33.f_9 = 63207/*func_487*/;
		Local_161.f_43 = 63195/*func_486*/;
		Local_161.f_43.f_1 = 62487/*func_485*/;
		Local_161.f_43.f_2 = 62475/*func_484*/;
		Local_161.f_43.f_3 = 62466/*func_483*/;
		Local_161.f_43.f_5 = 62454/*func_482*/;
		Local_161.f_43.f_6 = 62408/*func_481*/;
		Local_161.f_43.f_7 = 62300/*func_479*/;
		Local_161.f_51 = 62291/*func_478*/;
		Local_161.f_51.f_1 = 62153/*func_477*/;
		Local_161.f_51.f_2 = 62141/*func_476*/;
		Local_161.f_51.f_3 = 62127/*func_475*/;
		Local_161.f_51.f_4 = 61309/*func_472*/;
		MISC::SET_BIT(&(uParam0->f_1085), 0);
	}
	return BitTest(uParam0->f_1085, 0);
}

void func_472(var uParam0)//Position - 0xEF7D
{
	func_474(uParam0);
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_473(uParam0);
		Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_22 = 1;
	}
}

void func_473(var uParam0)//Position - 0xEFAA
{
	uParam0->f_823.f_67[0] = 1;
	Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[0] = 1;
}

void func_474(var uParam0)//Position - 0xEFCD
{
	int iVar0;
	int iVar1;
	
	switch (uParam0->f_823.f_49)
	{
		case 1:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 100;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 0;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 0;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 2:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 85;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 0;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 3:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 70;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 15;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 4:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 55;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 15;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 15;
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_823.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2684799.f_6589 = uParam0->f_823.f_56[iVar1];
	Global_1948392.f_29 = Global_2684799.f_6589;
}

void func_475(var uParam0)//Position - 0xF2AF
{
	uParam0->f_707 = 1;
}

int func_476()//Position - 0xF2BD
{
	return 120000;
}

int func_477(var uParam0)//Position - 0xF2C9
{
	if (((((uParam0->f_1084 == -1 || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39 == 0) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40 == -1) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41 == -1) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42 == -1) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
	{
		return 0;
	}
	return 1;
}

int func_478(var uParam0)//Position - 0xF353
{
	return 1;
}

void func_479(int iParam0)//Position - 0xF35C
{
	int iVar0;
	
	if (func_480(iParam0) != 14192)
	{
		iVar0 = func_7(func_480(iParam0), -1, 0);
		MISC::SET_BIT(&iVar0, (iParam0 % 32));
		func_4(func_480(iParam0), iVar0, -1, 1, 0);
	}
}

int func_480(int iParam0)//Position - 0xF39B
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 9541;
		
		case 1:
			return 9542;
		
		default:
	}
	return 14192;
}

int func_481(int iParam0)//Position - 0xF3C8
{
	if (func_480(iParam0) != 14192)
	{
		if (BitTest(func_7(func_480(iParam0), -1, 0), (iParam0 % 32)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_482(var uParam0)//Position - 0xF3F6
{
	return "HS4_PAVEL";
}

int func_483(var uParam0)//Position - 0xF402
{
	return 2;
}

char* func_484(var uParam0)//Position - 0xF40B
{
	return "HS4PAAU";
}

char* func_485(int iParam0)//Position - 0xF417
{
	switch (iParam0)
	{
		case 0:
			return "HS4PA_PS_1";
		
		case 1:
			return "HS4PA_PS_2";
		
		case 2:
			return "HS4PA_PS_3";
		
		case 3:
			return "HS4PA_PS_49";
		
		case 4:
			return "HS4PA_PS_50";
		
		case 5:
			return "HS4PA_PS_4";
		
		case 6:
			return "HS4PA_PS_5";
		
		case 7:
			return "HS4PA_PS_6";
		
		case 8:
			return "HS4PA_PS_7";
		
		case 9:
			return "HS4PA_PS_8";
		
		case 10:
			return "HS4PA_PS_15";
		
		case 11:
			return "HS4PA_PS_9";
		
		case 12:
			return "HS4PA_PS_10";
		
		case 13:
			return "HS4PA_PS_11";
		
		case 14:
			return "HS4PA_PS_51";
		
		case 15:
			return "HS4PA_PS_12";
		
		case 16:
			return "HS4PA_PS_52";
		
		case 17:
			return "HS4PA_PS_13";
		
		case 18:
			return "HS4PA_PS_14";
		
		case 19:
			return "HS4PA_PS_16";
		
		case 20:
			return "HS4PA_PS_17";
		
		case 21:
			return "HS4PA_PS_18";
		
		case 22:
			return "HS4PA_PS_19";
		
		case 23:
			return "HS4PA_PS_20";
		
		case 24:
			return "HS4PA_PS_21";
		
		case 25:
			return "HS4PA_PS_22";
		
		case 26:
			return "HS4PA_PS_23";
		
		case 27:
			return "HS4PA_PS_24";
		
		case 28:
			return "HS4PA_PS_25";
		
		case 29:
			return "HS4PA_PS_53";
		
		case 30:
			return "HS4PA_PS_26";
		
		case 31:
			return "HS4PA_PS_27";
		
		case 32:
			return "HS4PA_PS_28";
		
		case 33:
			return "HS4PA_PS_29";
		
		case 34:
			return "HS4PA_PS_30";
		
		case 35:
			return "HS4PA_PS_31";
		
		case 36:
			return "HS4PA_PS_32";
		
		case 37:
			return "HS4PA_PS_33";
		
		case 38:
			return "HS4PA_PS_34";
		
		case 39:
			return "HS4PA_PS_35";
		
		case 40:
			return "HS4PA_PS_36";
		
		case 41:
			return "HS4PA_PS_37";
		
		case 42:
			return "HS4PA_PS_38";
		
		case 43:
			return "HS4PA_PS_39";
		
		case 44:
			return "HS4PA_PS_40";
		
		case 45:
			return "HS4PA_PS_41";
		
		case 46:
			return "HS4PA_PS_42";
		
		case 47:
			return "HS4PA_PS_43";
		
		case 48:
			return "HS4PA_PS_44";
		
		case 49:
			return "HS4PA_PS_45";
		
		case 50:
			return "HS4PA_PS_46";
		
		case 51:
			return "HS4PA_PS_47";
		
		case 52:
			return "HS4PA_PS_48";
		
		default:
	}
	return "";
}

var func_486()//Position - 0xF6DB
{
	return Global_1579631;
}

char* func_487()//Position - 0xF6E7
{
	return "HIP_SETUP_CASH" /* GXT: You do not have enough cash. The setup cost for The Cayo Perico Heist is $~1~. */;
}

int func_488()//Position - 0xF6F3
{
	var uVar0;
	struct<10> Var1;
	
	if (func_503())
	{
		if (func_502())
		{
			func_490(joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"), Global_262145.f_29930 /* Tunable: H4_REPLAY_COST */, &uVar0, 0, 1, 0);
		}
		else
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_5 = -1;
			Var1.f_6 = -1;
			Var1.f_7 = -1;
			Var1.f_8 = -1;
			Var1.f_9 = -1;
			func_489(&Var1);
			Var1.f_7 = Global_262145.f_29930 /* Tunable: H4_REPLAY_COST */;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_262145.f_29930 /* Tunable: H4_REPLAY_COST */, 0, 1, &Var1);
		}
		return 1;
	}
	return 0;
}

void func_489(var uParam0)//Position - 0xF783
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

void func_490(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xF7BC
{
	int iVar0;
	
	if (!func_502())
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
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_491(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_ROCKSTAR"):
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
			func_491(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_491(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			func_491(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_491(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x10392
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_502())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_6()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_498(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_497(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_492(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_492(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1053F
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_493(iParam0);
	}
}

void func_493(int iParam0)//Position - 0x10577
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_502())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_496(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_494(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_494(var uParam0)//Position - 0x105CB
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_495(&(uParam0->f_14));
	func_495(&(uParam0->f_14.f_13));
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

void func_495(var uParam0)//Position - 0x106DB
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

int func_496(int iParam0)//Position - 0x10723
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_497(int iParam0, int iParam1)//Position - 0x1074E
{
	Global_2697013 = iParam1;
	Global_2697012 = iParam0;
}

int func_498(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x10762
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_502())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_499(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_499(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x1089F
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_501(Var0.f_1);
	if ((Global_262145.f_24076 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24077 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24078 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_500();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_500()//Position - 0x10931
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_501(int iParam0)//Position - 0x10941
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_502()//Position - 0x10959
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_503()//Position - 0x10970
{
	int iVar0;
	int iVar1;
	
	if (STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&iVar0, &iVar1))
	{
		func_4(9571, iVar0, -1, 1, 0);
		func_4(9572, iVar1, -1, 1, 0);
		return 1;
	}
	return 0;
}

char* func_504()//Position - 0x109A0
{
	return "HIP_COOLDOWN" /* GXT: Pavel will contact you when The Cayo Perico Heist is available again. */;
}

var func_505()//Position - 0x109AC
{
	return BitTest(Global_1981293.f_10, 6);
}

struct<16> func_506()//Position - 0x109BC
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HIP_WARN_SETUP" /* GXT: The setup cost for The Cayo Perico Heist is $~1~. */, 64);
	if (BitTest(Global_1981293.f_10, 7))
	{
		StringCopy(&Var0, "HIP_WARN_SETUP2" /* GXT: The setup cost for The Cayo Perico Heist is $~1~. Setting up now will set the heist to Hard Mode. */, 64);
	}
	return Var0;
}

char* func_507()//Position - 0x109E4
{
	return "HIP_PROMPT_S" /* GXT: Press ~INPUT_CONTEXT~ to set up The Cayo Perico Heist. */;
}

var func_508()//Position - 0x109F0
{
	return Global_262145.f_29930 /* Tunable: H4_REPLAY_COST */;
}

void func_509()//Position - 0x109FF
{
	if (BitTest(Global_1981293.f_10, 7))
	{
		func_514(0);
		func_510(1, 1);
		MISC::SET_BIT(&(Global_1977693.f_1085), 7);
		Global_1977693.f_1096 = 1;
	}
	else
	{
		func_514(1);
	}
}

void func_510(bool bParam0, bool bParam1)//Position - 0x10A39
{
	int iVar0;
	
	iVar0 = func_7(9511, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	func_4(9511, iVar0, -1, 1, 0);
	if (bParam1)
	{
		func_511(-1713398555, 18, 0);
	}
}

void func_511(int iParam0, int iParam1, int iParam2)//Position - 0x10AA5
{
	int iVar0;
	
	if (func_513(iParam1, iParam2))
	{
		iVar0 = func_512();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_512()//Position - 0x10AD2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_513(int iParam0, var uParam1)//Position - 0x10B07
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_514(bool bParam0)//Position - 0x10B8D
{
	int iVar0;
	
	iVar0 = func_7(9511, -1, 0);
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_1), 0);
	func_4(9511, iVar0, -1, 1, 0);
	func_526(6);
	func_525();
	func_521();
	func_516();
	func_515(1);
	if (bParam0)
	{
		func_511(-1713398555, 18, 0);
	}
}

void func_515(bool bParam0)//Position - 0x10BEB
{
	int iVar0;
	
	iVar0 = func_7(9511, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 5);
		MISC::CLEAR_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	func_4(9511, iVar0, -1, 1, 0);
}

void func_516()//Position - 0x10C42
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17[24];
	int iVar18[8];
	int iVar19[7];
	int iVar20;
	int iVar21;
	float fVar22;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29748 /* Tunable: 544918928 */, Global_262145.f_29749 /* Tunable: -1055680280 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar17[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar20 = iVar17[iVar1];
		iVar17[iVar1] = iVar17[iVar2];
		iVar17[iVar2] = iVar20;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar17[iVar1])
		{
			iVar21 = func_520(iVar1, 1);
			switch (iVar21)
			{
				case 0:
					MISC::SET_BIT(&iVar3, iVar1);
					break;
				
				case 1:
					MISC::SET_BIT(&iVar5, iVar1);
					break;
				
				case 2:
					MISC::SET_BIT(&iVar7, iVar1);
					break;
				
				case 3:
					MISC::SET_BIT(&iVar9, iVar1);
					break;
				}
		}
		iVar1++;
	}
	if (!func_362(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&iVar3, 6);
		MISC::CLEAR_BIT(&iVar3, 7);
		MISC::SET_BIT(&iVar5, 6);
		MISC::SET_BIT(&iVar5, 7);
		MISC::CLEAR_BIT(&iVar7, 6);
		MISC::CLEAR_BIT(&iVar7, 7);
		MISC::CLEAR_BIT(&iVar9, 6);
		MISC::CLEAR_BIT(&iVar9, 7);
		MISC::CLEAR_BIT(&iVar3, 11);
		MISC::CLEAR_BIT(&iVar3, 12);
		MISC::CLEAR_BIT(&iVar5, 11);
		MISC::CLEAR_BIT(&iVar5, 12);
		MISC::CLEAR_BIT(&iVar7, 11);
		MISC::CLEAR_BIT(&iVar7, 12);
		MISC::CLEAR_BIT(&iVar9, 11);
		MISC::CLEAR_BIT(&iVar9, 12);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29750 /* Tunable: -577933166 */, Global_262145.f_29751 /* Tunable: 740148171 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar18[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		iVar20 = iVar18[iVar1];
		iVar18[iVar1] = iVar18[iVar2];
		iVar18[iVar2] = iVar20;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar18[iVar1])
		{
			iVar21 = func_520(iVar1, 0);
			switch (iVar21)
			{
				case 0:
					MISC::SET_BIT(&iVar4, iVar1);
					break;
				
				case 1:
					MISC::SET_BIT(&iVar6, iVar1);
					break;
				
				case 2:
					MISC::SET_BIT(&iVar8, iVar1);
					break;
				
				case 3:
					MISC::SET_BIT(&iVar10, iVar1);
					break;
				}
		}
		iVar1++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29752 /* Tunable: -1215396560 */, Global_262145.f_29753 /* Tunable: 2086011134 */);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar19[iVar1] = 1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iVar20 = iVar19[iVar1];
		iVar19[iVar1] = iVar19[iVar2];
		iVar19[iVar2] = iVar20;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (iVar19[iVar1])
		{
			MISC::SET_BIT(&iVar11, iVar1);
		}
		iVar1++;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29754 /* Tunable: 229746245 */, Global_262145.f_29755 /* Tunable: -350111103 */ + 1);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29756 /* Tunable: 1897994891 */, Global_262145.f_29757 /* Tunable: 1269668093 */ + 1);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29758 /* Tunable: 1066525008 */, Global_262145.f_29759 /* Tunable: 1534393449 */ + 1);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29760 /* Tunable: -1226549566 */, Global_262145.f_29761 /* Tunable: -1483535037 */ + 1);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29762 /* Tunable: -878110459 */, Global_262145.f_29763 /* Tunable: -1667139927 */ + 1);
	iVar12 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar12) / 100f)) * 100;
	iVar13 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar13) / 100f)) * 100;
	iVar14 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar14) / 100f)) * 100;
	iVar15 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar15) / 100f)) * 100;
	iVar16 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar16) / 100f)) * 100;
	fVar22 = func_517();
	if (fVar22 != 1f)
	{
		iVar12 = SYSTEM::CEIL((IntToFloat(iVar12) * fVar22));
		iVar13 = SYSTEM::CEIL((IntToFloat(iVar13) * fVar22));
		iVar14 = SYSTEM::CEIL((IntToFloat(iVar14) * fVar22));
		iVar15 = SYSTEM::CEIL((IntToFloat(iVar15) * fVar22));
		iVar16 = SYSTEM::CEIL((IntToFloat(iVar16) * fVar22));
	}
	func_4(9495, iVar3, -1, 1, 0);
	func_4(9496, iVar4, -1, 1, 0);
	func_4(9497, iVar12, -1, 1, 0);
	func_4(9498, iVar5, -1, 1, 0);
	func_4(9499, iVar6, -1, 1, 0);
	func_4(9500, iVar13, -1, 1, 0);
	func_4(9501, iVar7, -1, 1, 0);
	func_4(9502, iVar8, -1, 1, 0);
	func_4(9503, iVar14, -1, 1, 0);
	func_4(9504, iVar9, -1, 1, 0);
	func_4(9505, iVar10, -1, 1, 0);
	func_4(9506, iVar15, -1, 1, 0);
	func_4(9507, iVar11, -1, 1, 0);
	func_4(9508, iVar16, -1, 1, 0);
}

float func_517()//Position - 0x11116
{
	switch (func_518(1))
	{
		case 0:
			return Global_262145.f_29905 /* Tunable: -1387641161 */;
		
		case 1:
			return Global_262145.f_29906 /* Tunable: -1977209208 */;
		
		case 2:
			return Global_262145.f_29907 /* Tunable: -651044344 */;
		
		case 3:
			return Global_262145.f_29908 /* Tunable: 593471001 */;
		
		case 4:
			return Global_262145.f_29909 /* Tunable: 2057499252 */;
		
		case 5:
			return Global_262145.f_29910 /* Tunable: -982681546 */;
		
		default:
	}
	return 1f;
}

int func_518(bool bParam0)//Position - 0x11189
{
	if (bParam0)
	{
		return func_7(9489, -1, 0);
	}
	return func_519(PLAYER::PLAYER_ID());
}

int func_519(int iParam0)//Position - 0x111AA
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_9;
	}
	return -1;
}

int func_520(int iParam0, bool bParam1)//Position - 0x111C8
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (bParam1)
	{
		uVar0[0] = Global_262145.f_29766[iParam0];
		uVar0[1] = Global_262145.f_29791[iParam0];
		uVar0[2] = Global_262145.f_29816[iParam0];
		uVar0[3] = Global_262145.f_29841[iParam0];
	}
	else
	{
		uVar0[0] = Global_262145.f_29866[iParam0];
		uVar0[1] = Global_262145.f_29875[iParam0];
		uVar0[2] = Global_262145.f_29884[iParam0];
		uVar0[3] = Global_262145.f_29893[iParam0];
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			iVar5 = iVar4;
			return iVar5;
		}
		iVar4++;
	}
	return -1;
}

void func_521()//Position - 0x112B2
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if (!func_524(0))
	{
		func_4(9489, 4, -1, 1, 0);
		return;
	}
	if (Global_262145.f_29922 /* Tunable: 637051746 */ != 0)
	{
		if (func_523(9360, -1) != Global_262145.f_29922 /* Tunable: 637051746 */)
		{
			func_4(9489, 5, -1, 1, 0);
			return;
		}
	}
	if (func_522())
	{
		uVar0[0] = Global_262145.f_29916 /* Tunable: H4_TARGET_WEIGHTING_TEQUILA_BOOST */;
		uVar0[1] = Global_262145.f_29917 /* Tunable: H4_TARGET_WEIGHTING_PEARL_NECKLACE_BOOST */;
		uVar0[2] = Global_262145.f_29918 /* Tunable: H4_TARGET_WEIGHTING_BEARER_BONDS_BOOST */;
		uVar0[3] = Global_262145.f_29919 /* Tunable: H4_TARGET_WEIGHTING_PINK_DIAMOND_BOOST */;
	}
	else
	{
		uVar0[0] = Global_262145.f_29911 /* Tunable: H4_TARGET_WEIGHTING_TEQUILA */;
		uVar0[1] = Global_262145.f_29912 /* Tunable: H4_TARGET_WEIGHTING_PEARL_NECKLACE */;
		uVar0[2] = Global_262145.f_29913 /* Tunable: H4_TARGET_WEIGHTING_BEARER_BONDS */;
		uVar0[3] = Global_262145.f_29914 /* Tunable: H4_TARGET_WEIGHTING_PINK_DIAMOND */;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			func_4(9489, iVar4, -1, 1, 0);
			return;
		}
		iVar4++;
	}
}

int func_522()//Position - 0x113C5
{
	if (Global_262145.f_29921 /* Tunable: H4_TARGET_WEIGHTING_POSIX_TIME */ == -1)
	{
		return 0;
	}
	if (BitTest(Global_1981293.f_10, 21))
	{
		return 0;
	}
	return 1;
}

int func_523(int iParam0, int iParam1)//Position - 0x113ED
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_524(bool bParam0)//Position - 0x11409
{
	if (bParam0)
	{
		return BitTest(func_7(9511, -1, 0), 1);
	}
	return func_362(PLAYER::PLAYER_ID());
}

void func_525()//Position - 0x1142C
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	func_4(9490, iVar1, -1, 1, 0);
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	func_4(9491, iVar1, -1, 1, 0);
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	if (!func_362(PLAYER::PLAYER_ID()))
	{
		iVar0 = 6;
	}
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, iVar0);
	func_4(9492, iVar1, -1, 1, 0);
}

void func_526(int iParam0)//Position - 0x1154B
{
	if (iParam0 == 6)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0 + 1, 6);
	}
	func_4(9493, iParam0, -1, 1, 0);
}

int func_527()//Position - 0x1156F
{
	return func_528(1);
}

int func_528(bool bParam0)//Position - 0x1157C
{
	if (bParam0)
	{
		return BitTest(func_7(9511, -1, 0), 0);
	}
	return func_529(PLAYER::PLAYER_ID());
}

int func_529(int iParam0)//Position - 0x1159F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

bool func_530()//Position - 0x115BD
{
	return func_524(1);
}

int func_531(var uParam0)//Position - 0x115CA
{
	return func_532(0);
}

int func_532(int iParam0)//Position - 0x115D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_533(iParam0);
	iVar1 = MISC::GET_CONTENT_ID_INDEX(iVar0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_533(int iParam0)//Position - 0x115FB
{
	if (iParam0 == -1 || iParam0 == 11)
	{
		return 0;
	}
	return Global_262145.f_29933[iParam0];
}

int func_534()//Position - 0x11624
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_159) && func_75(iLocal_160, 1, 1))
	{
		if ((!func_118() && !func_117()) && !func_116())
		{
			if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_159) != joaat("Rm_Command") && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_159) != joaat("Rm_Stair1")) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_159) != joaat("Rm_Room2"))
			{
				return 1;
			}
		}
	}
	if (Global_1950108.f_3693 == 147)
	{
		return 1;
	}
	return 0;
}

char* func_535(int iParam0)//Position - 0x116A9
{
	switch (iParam0)
	{
		case 0:
			if (!func_362(iLocal_160) && !func_17(iLocal_160, 0))
			{
				return "HIP_HELP_BBOSS2" /* GXT: Register as a VIP, CEO or MC President to access the Planning Screen ~HUD_COLOUR_GREEN~~BLIP_MP_HEIST~~s~ and begin the setup for The Cayo Perico Heist. */;
			}
			return "HIP_HELP_BBOSS" /* GXT: Register as a VIP, CEO or MC President to gain access to the Planning Screen. */;
		
		default:
	}
	return "";
}

float func_536()//Position - 0x116E9
{
	return 0.1f;
}

int func_537()//Position - 0x116F6
{
	return 0;
}

int func_538()//Position - 0x116FF
{
	return 0;
}

float func_539(int iParam0)//Position - 0x11708
{
	switch (iParam0)
	{
		case 0:
			return 69f;
		
		default:
	}
	return 0f;
}

Vector3 func_540(int iParam0)//Position - 0x11726
{
	switch (iParam0)
	{
		case 0:
			if (func_970() == 0)
			{
				return -89.3034f, -0.1435f, 180f;
			}
			return -89.5003f, -0.204f, 180f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_541(int iParam0)//Position - 0x1176A
{
	switch (iParam0)
	{
		case 0:
			if (func_970() == 0)
			{
				return 1561.1614f, 384.824f, -48.6215f;
			}
			return 1561.1604f, 384.8204f, -48.9135f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_542(var uParam0, int iParam1, int* iParam2)//Position - 0x117AE
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	
	if ((iLocal_133 || iLocal_134) || (Local_176.f_6 != -1 && !func_439(Local_176.f_6)))
	{
		return;
	}
	iVar0 = uParam0->f_806;
	func_554(uParam0, iParam1, iVar0);
	switch (iParam1)
	{
		case 0:
			if (iLocal_154 != 0)
			{
				return;
			}
			func_553(uParam0->f_711, 188);
			func_552(uParam0->f_711);
			break;
		
		case 1:
			if (iLocal_154 != 0)
			{
				return;
			}
			func_553(uParam0->f_711, 187);
			func_552(uParam0->f_711);
			break;
		
		case 2:
			if (func_361(iVar0))
			{
				func_549(uParam0, iVar0, iParam1);
			}
			else
			{
				func_553(uParam0->f_711, 189);
				func_552(uParam0->f_711);
			}
			break;
		
		case 3:
			if (func_361(iVar0))
			{
				func_549(uParam0, iVar0, iParam1);
			}
			else
			{
				func_553(uParam0->f_711, 190);
				func_552(uParam0->f_711);
			}
			break;
		
		case 8:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_553(uParam0->f_711, 205);
			func_552(uParam0->f_711);
			break;
		
		case 9:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_553(uParam0->f_711, 206);
			func_552(uParam0->f_711);
			break;
		
		case 4:
			if (func_548(uParam0, iVar0))
			{
				func_553(uParam0->f_711, 201);
				func_547(uParam0->f_711);
				func_552(uParam0->f_711);
			}
			if (iVar0 == 5 || iVar0 == 65)
			{
				if (!bLocal_139)
				{
					bLocal_139 = true;
				}
			}
			break;
		
		case 5:
			if (iLocal_154 != 0)
			{
				func_545(uParam0);
			}
			else if (func_410(iVar0))
			{
				if (Local_176.f_6 == -1)
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						uParam0->f_1086 = 1;
					}
					else
					{
						MISC::SET_BIT(iParam2, 0);
					}
				}
			}
			else
			{
				func_553(uParam0->f_711, 202);
				func_552(uParam0->f_711);
				if (func_544(iVar0))
				{
					if (bLocal_139)
					{
						bLocal_139 = false;
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_154 != 0)
			{
				return;
			}
			if (!func_409(uParam0))
			{
				return;
			}
			bLocal_139 = !bLocal_139;
			break;
		
		case 7:
			if (iLocal_154 != 0)
			{
				return;
			}
			if (Local_176.f_6 != -1)
			{
				return;
			}
			iLocal_137 = !iLocal_137;
			break;
		
		case 15:
			if (func_361(iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_823.f_51[func_543(iVar0)]);
				Var2 = { func_206(iVar1) };
				func_34(uParam0, 5);
				NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
			}
			break;
	}
}

int func_543(int iParam0)//Position - 0x11A48
{
	switch (iParam0)
	{
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		default:
	}
	return -1;
}

int func_544(int iParam0)//Position - 0x11A80
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

void func_545(var uParam0)//Position - 0x11AC4
{
	iLocal_154 = 0;
	uParam0->f_707 = 1;
	func_546(uParam0->f_711);
}

void func_546(int iParam0)//Position - 0x11ADF
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_OVERLAY");
}

void func_547(int iParam0)//Position - 0x11AF1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_SELECTION");
	iLocal_132 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_134 = 1;
}

int func_548(var uParam0, int iParam1)//Position - 0x11B0F
{
	switch (iParam1)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 != iLocal_160)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_549(var uParam0, int iParam1, int iParam2)//Position - 0x11B59
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (uParam0->f_823.f_49 == 1)
	{
		func_34(uParam0, 4);
		return;
	}
	if (func_551(3))
	{
		func_9("CUTS_LOCKED" /* GXT: Changing your crew cuts is unavailable right now. */, -1);
		func_34(uParam0, 7);
		return;
	}
	switch (iParam2)
	{
		case 2:
			iVar0 = -5;
			break;
		
		case 3:
			if (uParam0->f_823.f_56[4] >= 5)
			{
				iVar0 = 5;
			}
			break;
	}
	iVar1 = func_543(iParam1);
	func_550(uParam0, iVar1, iVar0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar1++;
	}
}

void func_550(var uParam0, int iParam1, int iParam2)//Position - 0x11BF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_823.f_49 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_823.f_56[iParam1];
		if (iVar2 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_823.f_56[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_823.f_56[iParam1]);
			uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + iVar3);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar0)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] <= (100 - MISC::ABSI(iParam2)))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + MISC::ABSI(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] - MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 13);
			}
		}
		if (uParam0->f_823.f_56[iParam1] <= iVar0)
		{
			if (!func_12("HEIST_NOTE_6" /* GXT: The selected Heist member is at minimum cut. */))
			{
				HUD::CLEAR_HELP(true);
				func_9("HEIST_NOTE_6" /* GXT: The selected Heist member is at minimum cut. */, 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_823.f_56[4];
		if (iVar4 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_823.f_56[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_823.f_56[iParam1] - iVar1);
			uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + iVar5);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar1)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] >= MISC::ABSI(iParam2))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] - MISC::ABSI(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 12);
			}
		}
		if (uParam0->f_823.f_56[iParam1] >= iVar1)
		{
			if (!func_12("HEIST_NOTE_5" /* GXT: The selected Heist member is at maximum cut. */))
			{
				HUD::CLEAR_HELP(true);
				func_9("HEIST_NOTE_5" /* GXT: The selected Heist member is at maximum cut. */, 5000);
			}
		}
	}
}

int func_551(int iParam0)//Position - 0x11E2B
{
	if (Global_262145.f_33902 /* Tunable: 1308841934 */ == -1)
	{
		return 0;
	}
	if (BitTest(Global_1983551, 4))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_1983551, 0);
		
		case 1:
			return BitTest(Global_1983551, 1);
		
		case 2:
			return BitTest(Global_1983551, 2);
		
		case 3:
			return BitTest(Global_1983551, 3);
		
		default:
	}
	return 0;
}

void func_552(int iParam0)//Position - 0x11E96
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_ROLLOVER");
	iLocal_131 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_133 = 1;
}

void func_553(int iParam0, int iParam1)//Position - 0x11EB4
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iParam0, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
}

void func_554(var uParam0, int iParam1, int iParam2)//Position - 0x11EE0
{
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 8:
			case 9:
				func_34(uParam0, 4);
				return;
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			if (func_361(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_154 == 0)
			{
				func_34(uParam0, 0);
				if (!func_361(iParam2))
				{
					if (func_557(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		
		case 1:
			if (func_361(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_154 == 0)
			{
				func_34(uParam0, 0);
				if (!func_361(iParam2))
				{
					if (func_557(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		
		case 2:
			if (iLocal_154 == 0)
			{
				if (iParam2 == 1000)
				{
					func_34(uParam0, 1);
				}
				else if (!func_361(iParam2))
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_154 > 0)
			{
				if (iParam2 == 1002)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		
		case 3:
			if (iLocal_154 == 0)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if ((func_8(iParam2, 2) && !func_361(iParam2)) && func_555(uParam0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 4);
					}
				}
				else if (func_8(iParam2, 2) && iParam2 != 1000)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_154 > 0)
			{
				if (iParam2 == 1001)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		
		case 8:
			func_34(uParam0, 1);
			break;
		
		case 9:
			func_34(uParam0, 1);
			break;
		
		case 4:
			if (bLocal_143)
			{
				func_34(uParam0, 5);
			}
			else
			{
				func_34(uParam0, 7);
			}
			break;
		
		case 5:
			if (!func_410(iParam2))
			{
				func_34(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_409(uParam0) && iLocal_154 == 0)
			{
				func_34(uParam0, 8);
			}
			break;
		
		case 7:
			if (func_363(uParam0, iParam2) && iLocal_154 == 0)
			{
				func_34(uParam0, 9);
			}
			break;
	}
}

int func_555(var uParam0)//Position - 0x12197
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_806;
	if (func_556(iVar0) != 2)
	{
		return 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39 == 0)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40 == -1)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41 == -1)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42 == -1)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
		{
			return 0;
		}
		if (Global_1978795[uParam0->f_1084 /*25*/].f_12[4] > 0)
		{
			return 0;
		}
		iVar1 = 1;
		while (iVar1 <= 3)
		{
			if (uParam0->f_823.f_51[iVar1] == -1)
			{
			}
			else if (uParam0->f_823.f_67[iVar1] == 0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_556(int iParam0)//Position - 0x1228D
{
	if (func_8(iParam0, 0))
	{
		return 0;
	}
	else if (func_8(iParam0, 1))
	{
		return 1;
	}
	return 2;
}

int func_557(int iParam0)//Position - 0x122B5
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 91:
		case 92:
			return 0;
		
		default:
	}
	return 1;
}

void func_558(var uParam0)//Position - 0x1231D
{
	char* sVar0;
	char* sVar1;
	
	if (BitTest(Global_1944833.f_233, 1))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_2";
	}
	else if (BitTest(Global_1944833.f_233, 0))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_3";
	}
	HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_SPRITE_NAMED_RENDERTARGET(sVar1, sVar0, 0.5f, 0.75f, 1f, 0.5f, 0f, 255, 255, 255, 255, 0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

float func_559()//Position - 0x1239C
{
	return 0.5f;
}

float func_560()//Position - 0x123A9
{
	return 0.5f;
}

float func_561()//Position - 0x123B6
{
	return 0.75f;
}

float func_562()//Position - 0x123C3
{
	return 0.25f;
}

int func_563()//Position - 0x123D0
{
	return 1;
}

char* func_564()//Position - 0x123D9
{
	return "ISLAND_HEIST_BOARD";
}

int func_565()//Position - 0x123E5
{
	return joaat("h4_int_sub_command_table");
}

char* func_566()//Position - 0x123F2
{
	return "submarine_table";
}

void func_567(var uParam0)//Position - 0x123FE
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !iLocal_145)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HS4F_INT", false);
				iLocal_145 = 1;
			}
			func_853(uParam0);
			break;
		
		case 3:
			func_830(uParam0);
			break;
		
		case 4:
			func_826(uParam0);
			func_601(uParam0);
			func_830(uParam0);
			func_568(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_568(var uParam0)//Position - 0x12487
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar2 = uParam0->f_1084;
	if (iVar2 == -1)
	{
		return;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (Global_1978795[iVar3 /*25*/].f_12[4] != uParam0->f_823.f_56[4])
				{
					Global_1978795[iVar3 /*25*/].f_12[4] = uParam0->f_823.f_56[4];
				}
			}
			else
			{
				if (Global_1978795[iVar3 /*25*/].f_12[iVar0] != uParam0->f_823.f_56[iVar0])
				{
					Global_1978795[iVar3 /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
					if (uParam0->f_823.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
					{
						Global_2684799.f_6589 = Global_1978795[iVar3 /*25*/].f_12[iVar0];
						Global_1948392.f_29 = Global_2684799.f_6589;
					}
					iLocal_149 = 1;
				}
				if (Global_1978795[iVar3 /*25*/].f_2[iVar0] != uParam0->f_823.f_51[iVar0])
				{
					Global_1978795[iVar3 /*25*/].f_2[iVar0] = uParam0->f_823.f_51[iVar0];
				}
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if (uParam0->f_823.f_51[iVar0] != iVar1 || uParam0->f_823.f_51[iVar0] == uParam0->f_1084)
					{
					}
					else if (uParam0->f_823.f_67[iVar0] != Global_1978795[iVar1 /*25*/].f_7[iVar0])
					{
						uParam0->f_823.f_67[iVar0] = Global_1978795[iVar1 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						Global_1978795[iVar3 /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
						iLocal_149 = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39)
		{
			func_596(uParam0, func_600(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39));
		}
		if (Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40)
		{
			func_579(uParam0, func_595(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40));
		}
		if (Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41)
		{
			func_576(uParam0, func_578(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41));
		}
		if (Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42)
		{
			func_573(uParam0, func_575(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42));
		}
		if (Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43)
		{
			func_569(uParam0, func_572(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43));
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (uParam0->f_823.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
			{
			}
			else
			{
				Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
				iVar4 = iVar0;
			}
			iVar0++;
		}
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Global_1978795[iVar2 /*25*/].f_2[iVar0] != 0)
			{
				bVar5 = false;
			}
			iVar0++;
		}
		if (bVar5)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (uParam0->f_823.f_56[4] != Global_1978795[iVar2 /*25*/].f_12[4])
				{
					uParam0->f_823.f_56[4] = Global_1978795[iVar2 /*25*/].f_12[4];
				}
			}
			else
			{
				if (uParam0->f_823.f_56[iVar0] != Global_1978795[iVar2 /*25*/].f_12[iVar0])
				{
					uParam0->f_823.f_56[iVar0] = Global_1978795[iVar2 /*25*/].f_12[iVar0];
					if (iVar4 == iVar0)
					{
						Global_2684799.f_6589 = Global_1978795[iVar2 /*25*/].f_12[iVar0];
						Global_1948392.f_29 = Global_2684799.f_6589;
					}
					iLocal_149 = 1;
				}
				if (uParam0->f_823.f_51[iVar0] != Global_1978795[iVar2 /*25*/].f_2[iVar0])
				{
					uParam0->f_823.f_51[iVar0] = Global_1978795[iVar2 /*25*/].f_2[iVar0];
				}
				if (uParam0->f_823.f_67[iVar0] != Global_1978795[iVar2 /*25*/].f_7[iVar0])
				{
					if (iVar4 != iVar0)
					{
						uParam0->f_823.f_67[iVar0] = Global_1978795[iVar2 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						iLocal_149 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_569(var uParam0, int iParam1)//Position - 0x12939
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_571(uParam0);
	func_570(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 91:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 1;
			break;
		
		case 92:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 2;
			break;
	}
}

void func_570(int iParam0, int iParam1, bool bParam2)//Position - 0x12995
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_ITEM_SELECTED");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_571(var uParam0)//Position - 0x129B8
{
	func_570(uParam0->f_711, 91, 0);
	func_570(uParam0->f_711, 92, 0);
}

int func_572(int iParam0)//Position - 0x129D8
{
	switch (iParam0)
	{
		case 1:
			return 91;
		
		case 2:
			return 92;
		
		default:
	}
	return 0;
}

void func_573(var uParam0, int iParam1)//Position - 0x129FE
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_574(uParam0);
	func_570(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 87:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 0;
			break;
		
		case 88:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 1;
			break;
		
		case 89:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 2;
			break;
		
		case 90:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 3;
			break;
	}
}

void func_574(var uParam0)//Position - 0x12A8A
{
	func_570(uParam0->f_711, 87, 0);
	func_570(uParam0->f_711, 88, 0);
	func_570(uParam0->f_711, 89, 0);
	func_570(uParam0->f_711, 90, 0);
}

int func_575(int iParam0)//Position - 0x12AC2
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 88;
		
		case 2:
			return 89;
		
		case 3:
			return 90;
		
		default:
	}
	return 0;
}

void func_576(var uParam0, int iParam1)//Position - 0x12AFE
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_577(uParam0);
	func_570(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 85:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 0;
			break;
		
		case 86:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 5;
			break;
	}
}

void func_577(var uParam0)//Position - 0x12B5A
{
	func_570(uParam0->f_711, 85, 0);
	func_570(uParam0->f_711, 86, 0);
}

int func_578(int iParam0)//Position - 0x12B7A
{
	switch (iParam0)
	{
		case 0:
			return 85;
		
		case 5:
			return 86;
		
		default:
	}
	return 0;
}

void func_579(var uParam0, int iParam1)//Position - 0x12BA0
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_594(uParam0);
	func_570(uParam0->f_711, iParam1, 1);
	if (iParam1 == 84)
	{
		func_593(uParam0);
	}
	else
	{
		func_580(uParam0);
	}
	switch (iParam1)
	{
		case 77:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 0;
			break;
		
		case 78:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 1;
			break;
		
		case 79:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 2;
			break;
		
		case 80:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 3;
			break;
		
		case 81:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 4;
			break;
		
		case 82:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 5;
			break;
		
		case 83:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 6;
			break;
		
		case 84:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 7;
			break;
	}
}

void func_580(var uParam0)//Position - 0x12CA2
{
	struct<9> Var0;
	int iVar1;
	int iVar2;
	
	func_570(uParam0->f_711, 85, 0);
	func_592(uParam0->f_711, 85);
	func_570(uParam0->f_711, 86, 0);
	func_592(uParam0->f_711, 86);
	Local_125[0 /*9*/] = { Var0 };
	Local_125[1 /*9*/] = { Var0 };
	if (func_17(uParam0->f_1084, 8))
	{
		func_583(uParam0, &(Local_125[iVar1 /*9*/]), 65, 85);
		iVar1++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		func_583(uParam0, &(Local_125[iVar1 /*9*/]), 65, 86);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		func_581(uParam0->f_711, Local_125[iVar2 /*9*/], 0);
		iVar2++;
	}
	Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = -1;
}

void func_581(int iParam0, struct<9> Param1, bool bParam2)//Position - 0x12D72
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	if (bParam2)
	{
		func_582(Param1.f_3);
	}
	else
	{
		func_432(Param1.f_3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_4);
		func_432(Param1.f_5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_6);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_582(char* sParam0)//Position - 0x12DD9
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_583(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x12DE7
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_4 = func_591(uParam0, iParam3);
	uParam1->f_3 = func_590(uParam0, iParam3);
	uParam1->f_5 = func_588(uParam0, iParam3);
	uParam1->f_6 = func_586(uParam0, iParam3);
	if (func_370(uParam0, iParam3))
	{
		uParam1->f_7 = func_585(uParam0, iParam3);
	}
	else
	{
		uParam1->f_7 = 0;
	}
	uParam1->f_8 = func_584(iParam3);
}

int func_584(int iParam0)//Position - 0x12E58
{
	switch (iParam0)
	{
		case 59:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

int func_585(var uParam0, int iParam1)//Position - 0x12E96
{
	switch (iParam1)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 99:
		case 103:
			return 1;
		
		case 47:
			return 1;
		
		case 49:
			if (!func_383(uParam0->f_1084, 5) && !func_383(uParam0->f_1084, 6))
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return 2;
}

char* func_586(var uParam0, int iParam1)//Position - 0x12F0A
{
	switch (iParam1)
	{
		case 1:
			return func_587(uParam0);
		
		case 2:
			return "ADDITIONAL_LOOT";
		
		case 3:
			return "INFILTRATION_POINTS";
		
		case 4:
			return "ESCAPE_POINTS";
		
		case 5:
			return "COMPOUND_ENTRY_POINTS";
		
		case 6:
			return "POINTS_OF_INTEREST";
		
		case 7:
			return "CASH";
		
		case 8:
			return "WEED";
		
		case 9:
			return "COCAINE";
		
		case 10:
			return "GOLD" /* GXT: Gold */;
		
		case 11:
			return "PAINTINGS";
		
		case 12:
			return "AIRSTRIP";
		
		case 13:
			return "PARACHUTING";
		
		case 14:
			return "WEST_BEACH";
		
		case 15:
			return "MAIN_DOCK";
		
		case 16:
			return "NORTH_DOCK";
		
		case 17:
			return "NORTH_DROP_ZONE";
		
		case 18:
			return "SOUTH_DROP_ZONE";
		
		case 19:
			return "DRAINAGE_TUNNEL";
		
		case 20:
			return "AIRSTRIP";
		
		case 21:
			return "MAIN_DOCK";
		
		case 22:
			return "NORTH_DOCK";
		
		case 23:
			return "SUBMARINE";
		
		case 30:
			return "POWER_STATION";
		
		case 31:
			return "CONTROL_TOWER";
		
		case 32:
			return "BOLT_CUTTERS";
		
		case 33:
			return "GRAPPLING_EQUIPMENT";
		
		case 34:
			return "GUARD_UNIFORM";
		
		case 35:
			return "GUARD_TRUCK";
		
		case 24:
			return "MAIN_GATE";
		
		case 25:
			return "NORTH_WALL";
		
		case 26:
			return "NORTH_SIDE_GATE";
		
		case 27:
			return "SOUTH_WALL";
		
		case 28:
			return "SOUTH_SIDE_GATE";
		
		case 29:
			return "DRAINAGE_TUNNEL";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "SUBMARINE";
		
		case 41:
			return "BOMBER";
		
		case 42:
			return "PLANE";
		
		case 43:
			return "HELICOPTER";
		
		case 44:
			return "PATROL_BOAT";
		
		case 45:
			return "SMUGGLER_BOAT";
		
		case 46:
			return "BOMBER";
		
		case 47:
			return "PILOT";
		
		case 48:
			return "HELICOPTER";
		
		case 49:
			return "PILOT";
		
		case 50:
			return "DEMOLITION_CHARGES";
		
		case 53:
			return "ACETYLENE_TORCH";
		
		case 51:
			return func_407(func_386(uParam0->f_1084) == 11, "SAFE_CODE", "PLASMA_CUTTER");
		
		case 52:
			return "FINGERPRINT";
		
		case 54:
			return "SHOTGUN";
		
		case 55:
			return "BULLPUP_RIFLE";
		
		case 56:
			return "SNIPER";
		
		case 57:
			return "SMG";
		
		case 58:
			return "ASSAULT_RIFLE";
		
		case 59:
			return "SUPPRESSORS";
		
		case 60:
			return "WEAPONS";
		
		case 61:
			return "ARMOR";
		
		case 62:
			return "BACKUP";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "SUBMARINE";
		
		case 72:
			return "BOMBER";
		
		case 73:
			return "PLANE";
		
		case 74:
			return "HELICOPTER";
		
		case 75:
			return "PATROL_BOAT";
		
		case 76:
			return "SMUGGLER_BOAT";
		
		case 77:
			return "AIRSTRIP";
		
		case 78:
			return "PARACHUTING";
		
		case 79:
			return "WEST_BEACH";
		
		case 80:
			return "MAIN_DOCK";
		
		case 81:
			return "NORTH_DOCK";
		
		case 82:
			return "NORTH_DROP_ZONE";
		
		case 83:
			return "SOUTH_DROP_ZONE";
		
		case 84:
			return "DRAINAGE_TUNNEL";
		
		case 85:
			return "MAIN_GATE";
		
		case 86:
			return "DRAINAGE_TUNNEL";
		
		case 87:
			return "AIRSTRIP";
		
		case 88:
			return "MAIN_DOCK";
		
		case 89:
			return "NORTH_DOCK";
		
		case 90:
			return "SUBMARINE";
		
		case 91:
			return "";
		
		case 92:
			return "";
		
		case 93:
			return "SHOTGUN";
		
		case 94:
			return "BULLPUP_RIFLE";
		
		case 95:
			return "SNIPER";
		
		case 96:
			return "SMG";
		
		case 97:
			return "ASSAULT_RIFLE";
		
		case 98:
			return "SUPPRESSORS";
		
		case 99:
			return "AIRSTRIKE_SUPPORT";
		
		case 100:
			return "HEAVY_WEAPON_SUPPORT";
		
		case 101:
			return "SNIPER_SUPPORT";
		
		case 102:
			return "HELICOPTER_SUPPORT";
		
		case 103:
			return "SPY_DRONE_SUPPORT";
		
		case 104:
			return "WEAPON_STASH_SUPPORT";
		
		default:
	}
	return "";
}

char* func_587(var uParam0)//Position - 0x1347B
{
	if (func_17(uParam0->f_1084, 0))
	{
		switch (func_519(uParam0->f_1084))
		{
			case 0:
				return "GATHER_INTEL_TEQUILA";
			
			case 1:
				return "GATHER_INTEL_NECKLACE";
			
			case 2:
				return "GATHER_INTEL_BONDS";
			
			case 3:
				return "GATHER_INTEL_DIAMOND";
			
			case 4:
				return "GATHER_INTEL_FILES";
			
			case 5:
				return "GATHER_INTEL_STATUE";
			}
		
		default:
	}
	return "GATHER_INTEL";
}

char* func_588(var uParam0, int iParam1)//Position - 0x134F0
{
	switch (iParam1)
	{
		case 1:
			if (!func_362(uParam0->f_1084))
			{
				if (!func_17(uParam0->f_1084, 0))
				{
					return "H4P_INT0_GAT_D1" /* GXT: Find the Madrazo Files on Cayo Perico. */;
				}
			}
			else if (!func_17(uParam0->f_1084, 0))
			{
				return "H4P_INT0_GAT_D2" /* GXT: Find the primary target on Cayo Perico. */;
			}
			return "H4P_INT0_GAT_D3" /* GXT: Gather additional intel on Cayo Perico. */;
		
		case 2:
			return "H4P_INT0_LOOT_D" /* GXT: Secondary targets scoped */;
		
		case 3:
			return "H4P_INT0_ENTR_D" /* GXT: Infiltration points scoped */;
		
		case 4:
			return "H4P_INT0_EXIT_D" /* GXT: Escape points scoped */;
		
		case 5:
			return "H4P_INT0_COMP_D" /* GXT: Compound entry points scoped */;
		
		case 6:
			return "H4P_INT0_ITEM_D" /* GXT: Points of interest scoped */;
		
		case 7:
			return "H4P_INT2_CASH_D" /* GXT: Secondary target scoped: Cash */;
		
		case 8:
			return "H4P_INT2_WEED_D" /* GXT: Secondary target scoped: Weed */;
		
		case 9:
			return "H4P_INT2_COKE_D" /* GXT: Secondary target scoped: Cocaine */;
		
		case 10:
			return "H4P_INT2_GOLD_D" /* GXT: Secondary target scoped: Gold */;
		
		case 11:
			return "H4P_INT2_PAIN_D" /* GXT: Secondary target scoped: Painting */;
		
		case 12:
			return "H4P_INT3_AIRS_D" /* GXT: Infiltration Point: Airstrip */;
		
		case 13:
			return "H4P_INT3_PARA_D" /* GXT: Infiltration Point: HALO Jump */;
		
		case 14:
			return "H4P_INT3_BEAC_D" /* GXT: Infiltration Point: West Beach */;
		
		case 15:
			return "H4P_INT3_MDCK_D" /* GXT: Infiltration Point: Main Dock */;
		
		case 16:
			return "H4P_INT3_NDCK_D" /* GXT: Infiltration Point: North Dock */;
		
		case 17:
			return "H4P_INT3_NDRP_D" /* GXT: Infiltration Point: North Drop Zone */;
		
		case 18:
			return "H4P_INT3_SDRP_D" /* GXT: Infiltration Point: South Drop Zone */;
		
		case 19:
			return "H4P_INT3_DTUN_D" /* GXT: Infiltration Point: Drainage Tunnel */;
		
		case 20:
			return "H4P_INT4_AIRS_D" /* GXT: Escape point: Airstrip */;
		
		case 21:
			return "H4P_INT4_MDCK_D" /* GXT: Escape point: Main Dock */;
		
		case 22:
			return "H4P_INT4_NDCK_D" /* GXT: Escape point: North Dock */;
		
		case 23:
			return "H4P_INT4_SUBM_D" /* GXT: Escape point: Kosatka */;
		
		case 30:
			return "H4P_INT6_PWRS_D" /* GXT: Point of interest: Power Station */;
		
		case 31:
			return "H4P_INT6_CTOW_D" /* GXT: Point of interest: Control Tower */;
		
		case 32:
			return "H4P_INT6_BCUT_D" /* GXT: Point of interest: Bolt Cutters */;
		
		case 33:
			return "H4P_INT6_GRAP_D" /* GXT: Point of interest: Grappling Equipment */;
		
		case 34:
			return "H4P_INT6_UNIF_D" /* GXT: Point of interest: Guard Clothing */;
		
		case 35:
			return "H4P_INT6_TROJ_D" /* GXT: Point of interest: Supply Truck */;
		
		case 24:
			return "H4P_INT5_MGAT_D" /* GXT: Compound entry point: Main Gate */;
		
		case 25:
			return "H4P_INT5_NWAL_D" /* GXT: Compound entry point: North Wall */;
		
		case 26:
			return "H4P_INT5_NSGT_D" /* GXT: Compound entry point: North Gate */;
		
		case 27:
			return "H4P_INT5_SWAL_D" /* GXT: Compound entry point: South Wall */;
		
		case 28:
			return "H4P_INT5_SSGT_D" /* GXT: Compound entry point: South Gate */;
		
		case 29:
			return "H4P_INT5_DTUN_D" /* GXT: Compound entry point: Drainage Tunnel */;
		
		case 36:
			return "H4P_PRP0_APVH_D" /* GXT: Acquire an approach vehicle to get to Cayo Perico */;
		
		case 37:
			return "H4P_PRP0_EQUI_D" /* GXT: Acquire the equipment needed for the heist */;
		
		case 38:
			return "H4P_PRP0_WEPL_D" /* GXT: Acquire a weapon loadout to be used during the heist */;
		
		case 39:
			return "H4P_PRP0_DISR_D" /* GXT: Disrupt El Rubio's security on Cayo Perico */;
		
		case 40:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 41:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 42:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 43:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 44:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 45:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 46:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 47:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 48:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 49:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 50:
			return func_407(func_17(uParam0->f_1084, 9), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 53:
			return func_407(func_17(uParam0->f_1084, 8), "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */, "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */);
		
		case 51:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 52:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 54:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 55:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 56:
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 57:
			if (!func_377(uParam0->f_1084) || !func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */;
			}
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 58:
			if (!func_377(uParam0->f_1084) || !func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */;
			}
			return "H4P_PREP_MAND" /* GXT: PREP: MANDATORY */;
		
		case 59:
			return "H4P_PRP3_SUPP_D" /* GXT: SUPPRESSORS. Cost: $5,000 */;
		
		case 60:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		
		case 61:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		
		case 62:
			return "H4P_PREP_OPT" /* GXT: PREP: OPTIONAL */;
		
		case 63:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_APRV_2" /* GXT: Select your approach vehicle */, "H4P_FIN0_APRV_D" /* GXT: Approach vehicles acquired */);
		
		case 64:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_INFI_2" /* GXT: Select your infiltration point */, "H4P_FIN0_INFI_D" /* GXT: Infiltration points scoped */);
		
		case 65:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_CENT_2" /* GXT: Select your compound entry point */, "H4P_FIN0_CENT_D" /* GXT: Compound entry points scoped */);
		
		case 66:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_ESCA_2" /* GXT: Select your escape point */, "H4P_FIN0_ESCA_D" /* GXT: Escape points scoped */);
		
		case 67:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_TIMD_2" /* GXT: Select time of day */, "H4P_FIN0_TIMD_D" /* GXT: Time of day */);
		
		case 68:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_WEAP_2" /* GXT: Weapon loadout acquired */, "H4P_FIN0_WEAP_D" /* GXT: Weapon loadout acquired */);
		
		case 69:
			return "H4P_FIN0_SUPP_D" /* GXT: Hire Support Crew */;
		
		case 70:
			return "H4P_FIN0_CREW_D" /* GXT: Assign crew cuts */;
		
		case 71:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SUBM_D" /* GXT: Select Kosatka */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 72:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_BOMB_D" /* GXT: Select Alkonost */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 73:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SMPL_D" /* GXT: Select Velum */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 74:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SHEL_D" /* GXT: Select Stealth Annihilator */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 75:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_PBOA_D" /* GXT: Select Patrol Boat */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 76:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SBOA_D" /* GXT: Select Longfin */, "H4P_FIN1_APRV_D" /* GXT: Approach vehicle acquired */);
		
		case 77:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_AIRS_D" /* GXT: Select airstrip */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 78:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_PARA_D" /* GXT: Select HALO jump */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 79:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_WBEA_D" /* GXT: Select west beach */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 80:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_MDOC_D" /* GXT: Select main dock */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 81:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDOC_D" /* GXT: Select north dock */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 82:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDRP_D" /* GXT: Select north drop zone */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 83:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_SDRP_D" /* GXT: Select south drop zone */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 84:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_DTUN_D" /* GXT: Select drainage tunnel */, "H4P_FIN2_INFI_D" /* GXT: Infiltration point scoped */);
		
		case 85:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_MGAT_D" /* GXT: Select main gate */, "H4P_FIN3_CENT_D" /* GXT: Compound entry point scoped */);
		
		case 86:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_DTUN_D" /* GXT: Select drainage tunnel */, "H4P_FIN3_CENT_D" /* GXT: Compound entry point scoped */);
		
		case 87:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_AIRS_D" /* GXT: Select airstrip */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 88:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_MDOC_D" /* GXT: Select main dock */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 89:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_NDOC_D" /* GXT: Select north dock */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 90:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_SUBM_D" /* GXT: Select Kosatka */, "H4P_FIN4_ESCA_D" /* GXT: Escape points scoped */);
		
		case 91:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TDAY_D" /* GXT: Select day */, "H4P_FIN5_TIMD_D" /* GXT: Time of day */);
		
		case 92:
			return func_407(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TNGT_D" /* GXT: Select night */, "H4P_FIN5_TIMD_D" /* GXT: Time of day */);
		
		case 93:
			return "H4P_FIN6_SHOT_D" /* GXT: Acquired Aggressor loadout */;
		
		case 94:
			return "H4P_FIN6_RIFL_D" /* GXT: Acquired Conspirator loadout */;
		
		case 95:
			return "H4P_FIN6_SNIP_D" /* GXT: Acquired Crack Shot loadout */;
		
		case 96:
			return "H4P_FIN6_MKSM_D" /* GXT: Acquired Saboteur loadout */;
		
		case 97:
			return "H4P_FIN6_MKAR_D" /* GXT: Acquired Marksman loadout */;
		
		case 98:
			return "H4P_FIN6_SUPP_D" /* GXT: Choose to use suppressors */;
		
		case 99:
			return func_407(func_370(uParam0, iParam1), "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */, "H4P_FIN7_AIRS_D" /* GXT: AIRSTRIKE. Cost: $12,000 */);
		
		case 100:
			return "H4P_FIN7_WDRP_D" /* GXT: SUPPLY DROP. Cost: $15,000 */;
		
		case 101:
			return "H4P_FIN7_SNIP_D" /* GXT: SNIPER. Cost: $25,000 */;
		
		case 102:
			return "H4P_FIN7_HELI_D" /* GXT: HELICOPTER BACKUP. Cost: $30,000 */;
		
		case 103:
			return func_407(func_370(uParam0, iParam1), "H4P_PRP3_UKNW_D" /* GXT: ERROR: UNKNOWN */, "H4P_FIN7_SPYD_D" /* GXT: RECON DRONE. Cost: $25,000 */);
		
		case 104:
			return "H4P_FIN7_WEAP_D" /* GXT: WEAPON STASH. Cost: $10,000 */;
		
		default:
	}
	return "";
}

int func_589(int iParam0, bool bParam1)//Position - 0x13D29
{
	if (((func_17(iParam0, 7) || func_17(iParam0, 5)) || func_17(iParam0, 3)) || func_17(iParam0, 4))
	{
		return 1;
	}
	if (func_17(iParam0, 1) || func_17(iParam0, 2))
	{
		if (bParam1)
		{
			return func_17(iParam0, 6);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_590(var uParam0, int iParam1)//Position - 0x13D94
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_T" /* GXT: GATHER INTEL */;
		
		case 2:
			return "H4P_INT0_LOOT_T" /* GXT: SECONDARY TARGETS */;
		
		case 3:
			return "H4P_INT0_ENTR_T" /* GXT: INFILTRATION POINTS */;
		
		case 4:
			return "H4P_INT0_EXIT_T" /* GXT: ESCAPE POINTS */;
		
		case 5:
			return "H4P_INT0_COMP_T" /* GXT: COMPOUND ENTRY POINTS */;
		
		case 6:
			return "H4P_INT0_ITEM_T" /* GXT: POINTS OF INTEREST */;
		
		case 7:
			return "H4P_INT2_CASH_T" /* GXT: CASH */;
		
		case 8:
			return "H4P_INT2_WEED_T" /* GXT: WEED */;
		
		case 9:
			return "H4P_INT2_COKE_T" /* GXT: COCAINE */;
		
		case 10:
			return "H4P_INT2_GOLD_T" /* GXT: GOLD */;
		
		case 11:
			return "H4P_INT2_PAIN_T" /* GXT: PAINTINGS */;
		
		case 12:
			return "H4P_INT3_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 13:
			return "H4P_INT3_PARA_T" /* GXT: HALO JUMP */;
		
		case 14:
			return "H4P_INT3_BEAC_T" /* GXT: WEST BEACH */;
		
		case 15:
			return "H4P_INT3_MDCK_T" /* GXT: MAIN DOCK */;
		
		case 16:
			return "H4P_INT3_NDCK_T" /* GXT: NORTH DOCK */;
		
		case 17:
			return "H4P_INT3_NDRP_T" /* GXT: NORTH DROP ZONE */;
		
		case 18:
			return "H4P_INT3_SDRP_T" /* GXT: SOUTH DROP ZONE */;
		
		case 19:
			return "H4P_INT3_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 20:
			return "H4P_INT4_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 21:
			return "H4P_INT4_MDCK_T" /* GXT: MAIN DOCK */;
		
		case 22:
			return "H4P_INT4_NDCK_T" /* GXT: NORTH DOCK */;
		
		case 23:
			return "H4P_INT4_SUBM_T" /* GXT: KOSATKA */;
		
		case 30:
			return "H4P_INT6_PWRS_T" /* GXT: POWER STATION */;
		
		case 31:
			return "H4P_INT6_CTOW_T" /* GXT: CONTROL TOWER */;
		
		case 32:
			return "H4P_INT6_BCUT_T" /* GXT: BOLT CUTTERS */;
		
		case 33:
			return "H4P_INT6_GRAP_T" /* GXT: GRAPPLING EQUIPMENT */;
		
		case 34:
			return "H4P_INT6_UNIF_T" /* GXT: GUARD CLOTHING */;
		
		case 35:
			return "H4P_INT6_TROJ_T" /* GXT: SUPPLY TRUCK */;
		
		case 24:
			return "H4P_INT5_MGAT_T" /* GXT: MAIN GATE */;
		
		case 25:
			return "H4P_INT5_NWAL_T" /* GXT: NORTH WALL */;
		
		case 26:
			return "H4P_INT5_NSGT_T" /* GXT: NORTH GATE */;
		
		case 27:
			return "H4P_INT5_SWAL_T" /* GXT: SOUTH WALL */;
		
		case 28:
			return "H4P_INT5_SSGT_T" /* GXT: SOUTH GATE */;
		
		case 29:
			return "H4P_INT5_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 36:
			return "H4P_PRP0_APVH_T" /* GXT: APPROACH VEHICLES */;
		
		case 37:
			return "H4P_PRP0_EQUI_T" /* GXT: EQUIPMENT */;
		
		case 38:
			return "H4P_PRP0_WEPL_T" /* GXT: WEAPON LOADOUT */;
		
		case 39:
			return "H4P_PRP0_DISR_T" /* GXT: DISRUPTION */;
		
		case 40:
			return "H4P_PRP1_SUBM_T" /* GXT: SUBMARINE: KOSATKA */;
		
		case 41:
			return "H4P_PRP1_SBOM_T" /* GXT: PLANE: ALKONOST */;
		
		case 42:
			return "H4P_PRP1_SPLA_T" /* GXT: PLANE: VELUM */;
		
		case 43:
			return "H4P_PRP1_SHEL_T" /* GXT: HELICOPTER: STEALTH ANNIHILATOR */;
		
		case 44:
			return "H4P_PRP1_PBOA_T" /* GXT: BOAT: PATROL BOAT */;
		
		case 45:
			return "H4P_PRP1_SBOA_T" /* GXT: BOAT: LONGFIN */;
		
		case 46:
			return "H4P_PRP1_BOM1_T" /* GXT: PART 1: ALKONOST */;
		
		case 47:
			return "H4P_PRP1_BOM2_T" /* GXT: PART 2: PILOT */;
		
		case 48:
			return "H4P_PRP1_HEL1_T" /* GXT: PART 1: STEALTH ANNIHILATOR */;
		
		case 49:
			return "H4P_PRP1_HEL2_T" /* GXT: PART 2: PILOT */;
		
		case 50:
			return "H4P_PRP2_DEMC_T" /* GXT: DEMOLITION CHARGES */;
		
		case 53:
			return "H4P_PRP2_ATOR_T" /* GXT: CUTTING TORCH */;
		
		case 51:
			return func_407(func_386(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_T" /* GXT: SAFE CODE */, "H4P_PRP2_TAR2_T" /* GXT: PLASMA CUTTER */);
		
		case 52:
			return "H4P_PRP2_FING_T" /* GXT: FINGERPRINT CLONER */;
		
		case 54:
			return "H4P_PRP3_SHOT_T" /* GXT: AGGRESSOR */;
		
		case 55:
			return "H4P_PRP3_RIFL_T" /* GXT: CONSPIRATOR */;
		
		case 56:
			return "H4P_PRP3_SNIP_T" /* GXT: CRACK SHOT */;
		
		case 57:
			return "H4P_PRP3_M2SM_T" /* GXT: SABOTEUR */;
		
		case 58:
			return "H4P_PRP3_M2RI_T" /* GXT: MARKSMAN */;
		
		case 59:
			return "H4P_PRP3_SUPP_T" /* GXT: SUPPRESSORS */;
		
		case 60:
			return "H4P_PRP4_WEAP_T" /* GXT: WEAPONS */;
		
		case 61:
			return "H4P_PRP4_ARMR_T" /* GXT: ARMOR */;
		
		case 62:
			return "H4P_PRP4_BRES_T" /* GXT: AIR SUPPORT */;
		
		case 63:
			return "H4P_FIN0_APRV_T" /* GXT: APPROACH VEHICLE */;
		
		case 64:
			return "H4P_FIN0_INFI_T" /* GXT: INFILTRATION POINT */;
		
		case 65:
			return "H4P_FIN0_CENT_T" /* GXT: COMPOUND ENTRY POINT */;
		
		case 66:
			return "H4P_FIN0_ESCA_T" /* GXT: ESCAPE POINT */;
		
		case 67:
			return "H4P_FIN0_TIMD_T" /* GXT: TIME OF DAY */;
		
		case 68:
			return "H4P_FIN0_WEAP_T" /* GXT: WEAPON LOADOUT */;
		
		case 69:
			return "H4P_FIN0_SUPP_T" /* GXT: HIRE SUPPORT CREW */;
		
		case 70:
			return "H4P_FIN0_CREW_T" /* GXT: ASSIGN CREW CUTS */;
		
		case 71:
			return "H4P_FIN1_SUBM_T" /* GXT: KOSATKA */;
		
		case 72:
			return "H4P_FIN1_BOMB_T" /* GXT: ALKONOST */;
		
		case 73:
			return "H4P_FIN1_SMPL_T" /* GXT: VELUM */;
		
		case 74:
			return "H4P_FIN1_SHEL_T" /* GXT: STEALTH ANNIHILATOR */;
		
		case 75:
			return "H4P_FIN1_PBOA_T" /* GXT: PATROL BOAT */;
		
		case 76:
			return "H4P_FIN1_SBOA_T" /* GXT: LONGFIN */;
		
		case 77:
			return "H4P_FIN2_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 78:
			return "H4P_FIN2_PARA_T" /* GXT: HALO JUMP */;
		
		case 79:
			return "H4P_FIN2_WBEA_T" /* GXT: WEST BEACH */;
		
		case 80:
			return "H4P_FIN2_MDOC_T" /* GXT: MAIN DOCK */;
		
		case 81:
			return "H4P_FIN2_NDOC_T" /* GXT: NORTH DOCK */;
		
		case 82:
			return "H4P_FIN2_NDRP_T" /* GXT: NORTH DROP ZONE */;
		
		case 83:
			return "H4P_FIN2_SDRP_T" /* GXT: SOUTH DROP ZONE */;
		
		case 84:
			return "H4P_FIN2_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 85:
			return "H4P_FIN3_MGAT_T" /* GXT: MAIN GATE */;
		
		case 86:
			return "H4P_FIN3_DTUN_T" /* GXT: DRAINAGE TUNNEL */;
		
		case 87:
			return "H4P_FIN4_AIRS_T" /* GXT: AIRSTRIP */;
		
		case 88:
			return "H4P_FIN4_MDOC_T" /* GXT: MAIN DOCK */;
		
		case 89:
			return "H4P_FIN4_NDOC_T" /* GXT: NORTH DOCK */;
		
		case 90:
			return "H4P_FIN4_SUBM_T" /* GXT: KOSATKA */;
		
		case 91:
			return "H4P_FIN5_TDAY_T" /* GXT: DAY */;
		
		case 92:
			return "H4P_FIN5_TNGT_T" /* GXT: NIGHT */;
		
		case 93:
			return "H4P_FIN6_SHOT_T" /* GXT: AGGRESSOR */;
		
		case 94:
			return "H4P_FIN6_RIFL_T" /* GXT: CONSPIRATOR */;
		
		case 95:
			return "H4P_FIN6_SNIP_T" /* GXT: CRACK SHOT */;
		
		case 96:
			return "H4P_FIN6_MKSM_T" /* GXT: SABOTEUR */;
		
		case 97:
			return "H4P_FIN6_MKAR_T" /* GXT: MARKSMAN */;
		
		case 98:
			return "H4P_FIN6_SUPP_T" /* GXT: SUPPRESSORS */;
		
		case 99:
			return "H4P_FIN7_AIRS_T" /* GXT: AIRSTRIKE */;
		
		case 100:
			return "H4P_FIN7_WDRP_T" /* GXT: SUPPLY DROP */;
		
		case 101:
			return "H4P_FIN7_SNIP_T" /* GXT: SNIPER */;
		
		case 102:
			return "H4P_FIN7_HELI_T" /* GXT: HELICOPTER BACKUP */;
		
		case 103:
			return "H4P_FIN7_SPYD_T" /* GXT: RECON DRONE */;
		
		case 104:
			return "H4P_FIN7_WEAP_T" /* GXT: WEAPON STASH */;
		
		default:
	}
	return "";
}

int func_591(var uParam0, var uParam1)//Position - 0x14568
{
	return 0;
}

void func_592(int iParam0, int iParam1)//Position - 0x14571
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_593(var uParam0)//Position - 0x1458E
{
	struct<9> Var0;
	
	func_592(uParam0->f_711, 85);
	func_592(uParam0->f_711, 86);
	Local_125[0 /*9*/] = { Var0 };
	Local_125[1 /*9*/] = { Var0 };
	func_583(uParam0, &(Local_125[0 /*9*/]), 65, 86);
	func_570(uParam0->f_711, 86, 1);
	func_581(uParam0->f_711, Local_125[0 /*9*/], 0);
}

void func_594(var uParam0)//Position - 0x145F6
{
	func_570(uParam0->f_711, 77, 0);
	func_570(uParam0->f_711, 78, 0);
	func_570(uParam0->f_711, 79, 0);
	func_570(uParam0->f_711, 80, 0);
	func_570(uParam0->f_711, 81, 0);
	func_570(uParam0->f_711, 82, 0);
	func_570(uParam0->f_711, 83, 0);
	func_570(uParam0->f_711, 84, 0);
}

int func_595(int iParam0)//Position - 0x1465E
{
	switch (iParam0)
	{
		case 0:
			return 77;
		
		case 1:
			return 78;
		
		case 2:
			return 79;
		
		case 3:
			return 80;
		
		case 4:
			return 81;
		
		case 5:
			return 82;
		
		case 6:
			return 83;
		
		case 7:
			return 84;
		
		default:
	}
	return 0;
}

void func_596(var uParam0, int iParam1)//Position - 0x146C6
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_599(uParam0);
	func_598(uParam0);
	func_592(uParam0->f_711, 90);
	func_580(uParam0);
	func_570(uParam0->f_711, iParam1, 1);
	switch (iParam1)
	{
		case 71:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 1;
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 79);
			iVar0++;
			if (func_383(uParam0->f_1084, 3))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 4))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 7))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 84);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			func_597(uParam0);
			break;
		
		case 72:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 2;
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 78);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 73:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 3;
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 77);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 74:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 4;
			if (func_383(uParam0->f_1084, 5))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 82);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 6))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 83);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 75:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 5;
			if (func_383(uParam0->f_1084, 3))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 4))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 76:
			Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 6;
			if (func_383(uParam0->f_1084, 3))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 4))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
	}
}

void func_597(var uParam0)//Position - 0x14A06
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_592(uParam0->f_711, 87);
	func_592(uParam0->f_711, 88);
	func_592(uParam0->f_711, 89);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_381(uParam0->f_1084, func_382(iVar2)))
		{
			func_583(uParam0, &(Local_126[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_126.f_0)
	{
		if (Local_126[iVar1 /*9*/])
		{
			func_581(uParam0->f_711, Local_126[iVar1 /*9*/], 0);
		}
		iVar1++;
	}
}

void func_598(var uParam0)//Position - 0x14AA6
{
	int iVar0;
	struct<9> Var1;
	
	func_592(uParam0->f_711, 77);
	func_592(uParam0->f_711, 78);
	func_592(uParam0->f_711, 79);
	func_592(uParam0->f_711, 80);
	func_592(uParam0->f_711, 81);
	func_592(uParam0->f_711, 82);
	func_592(uParam0->f_711, 83);
	func_592(uParam0->f_711, 84);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_124[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
	Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = -1;
}

void func_599(var uParam0)//Position - 0x14B37
{
	func_570(uParam0->f_711, 71, 0);
	func_570(uParam0->f_711, 72, 0);
	func_570(uParam0->f_711, 73, 0);
	func_570(uParam0->f_711, 74, 0);
	func_570(uParam0->f_711, 75, 0);
	func_570(uParam0->f_711, 76, 0);
}

int func_600(int iParam0)//Position - 0x14B87
{
	switch (iParam0)
	{
		case 1:
			return 71;
		
		case 2:
			return 72;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 6:
			return 76;
		
		default:
	}
	return 0;
}

void func_601(var uParam0)//Position - 0x14BD9
{
	int iVar0;
	
	if (!iLocal_134)
	{
		return;
	}
	iVar0 = -1;
	if (func_825(&iVar0))
	{
		uParam0->f_806.f_3 = uParam0->f_806.f_2;
		uParam0->f_806.f_2 = iVar0;
		uParam0->f_707 = 1;
		func_602(uParam0);
		iLocal_134 = 0;
	}
}

void func_602(var uParam0)//Position - 0x14C1E
{
	int iVar0;
	
	iVar0 = uParam0->f_806.f_2;
	if (uParam0->f_1084 != PLAYER::PLAYER_ID() && iVar0 != 1000)
	{
		return;
	}
	switch (iVar0)
	{
		case 1:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_370(uParam0, iVar0))
			{
				return;
			}
			if (func_17(uParam0->f_1084, 0))
			{
				func_814(uParam0);
				return;
			}
			func_630(uParam0, iVar0);
			break;
		
		case 40:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 47:
		case 49:
		case 50:
		case 53:
		case 51:
		case 52:
		case 60:
		case 61:
		case 62:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_370(uParam0, iVar0))
			{
				return;
			}
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_630(uParam0, iVar0);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_370(uParam0, iVar0))
			{
				return;
			}
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_627(uParam0, iVar0);
			break;
		
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			func_625(uParam0);
			break;
		
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			func_596(uParam0, iVar0);
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			func_579(uParam0, iVar0);
			break;
		
		case 85:
		case 86:
			func_576(uParam0, iVar0);
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_573(uParam0, iVar0);
			break;
		
		case 91:
		case 92:
			func_569(uParam0, iVar0);
			break;
		
		case 98:
			func_624(uParam0, iVar0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			if (func_370(uParam0, iVar0))
			{
				return;
			}
			func_618(uParam0, iVar0);
			break;
		
		case 1000:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (uParam0->f_1084 == PLAYER::PLAYER_ID())
				{
					func_617(uParam0);
				}
			}
			else if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				func_473(uParam0);
			}
			else
			{
				func_614(uParam0);
			}
			break;
		
		case 1002:
			func_603(uParam0);
			break;
		
		case 1001:
			func_545(uParam0);
			break;
	}
}

void func_603(var uParam0)//Position - 0x14EF8
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<10> Var3;
	struct<10> Var4;
	
	switch (iLocal_154)
	{
		case -2:
			func_613(uParam0, 0);
			iVar2 = func_7(9511, -1, 0);
			MISC::SET_BIT(&iVar2, 16);
			func_4(9511, iVar2, -1, 1, 0);
			break;
		
		case -3:
			iVar2 = func_7(9511, -1, 0);
			MISC::SET_BIT(&iVar2, 14);
			func_4(9511, iVar2, -1, 1, 0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			iVar0 = func_612(iLocal_154);
			if (func_502())
			{
				func_490(func_611(iLocal_154), iVar0, &uVar1, 0, 1, 0);
			}
			else
			{
				Var3 = -1;
				Var3.f_1 = -1;
				Var3.f_2 = -1;
				Var3.f_3 = -1;
				Var3.f_4 = -1;
				Var3.f_5 = -1;
				Var3.f_6 = -1;
				Var3.f_7 = -1;
				Var3.f_8 = -1;
				Var3.f_9 = -1;
				func_489(&Var3);
				func_610(&Var3, iLocal_154, iVar0);
				MONEY::NETWORK_SPEND_ISLAND_HEIST(iVar0, 0, 1, &Var3);
			}
			func_608(func_609(iLocal_154), 1);
			func_570(uParam0->f_711, iLocal_154, 1);
			func_34(uParam0, 11);
			func_41(&uLocal_157, 0, 0);
			break;
		
		case 1:
			func_630(uParam0, iLocal_154);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_606(func_607(iLocal_154));
			func_630(uParam0, iLocal_154);
			break;
		
		case 59:
			if (func_502())
			{
				func_490(joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"), Global_262145.f_29929 /* Tunable: H4_SUPPRESSORS_COST */, &uVar1, 0, 1, 0);
			}
			else
			{
				Var4 = -1;
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_5 = -1;
				Var4.f_6 = -1;
				Var4.f_7 = -1;
				Var4.f_8 = -1;
				Var4.f_9 = -1;
				func_489(&Var4);
				Var4.f_6 = Global_262145.f_29929 /* Tunable: H4_SUPPRESSORS_COST */;
				MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_262145.f_29929 /* Tunable: H4_SUPPRESSORS_COST */, 0, 1, &Var4);
			}
			func_605(1);
			func_604(uParam0->f_711, 59, 1);
			func_570(uParam0->f_711, 98, 1);
			func_34(uParam0, 11);
			func_41(&uLocal_157, 0, 0);
			break;
	}
	iLocal_154 = 0;
	uParam0->f_707 = 1;
	func_546(uParam0->f_711);
}

void func_604(int iParam0, int iParam1, int iParam2)//Position - 0x1513A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SETUP_ITEM_NUM_COMPLETE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_605(bool bParam0)//Position - 0x1515D
{
	int iVar0;
	
	iVar0 = func_7(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	func_4(9482, iVar0, -1, 1, 0);
}

void func_606(int iParam0)//Position - 0x151B8
{
	func_4(9485, iParam0, -1, 1, 0);
}

int func_607(int iParam0)//Position - 0x151CC
{
	switch (iParam0)
	{
		case 54:
			return 1;
		
		case 55:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 4;
		
		case 58:
			return 5;
		
		default:
	}
	return 0;
}

void func_608(int iParam0, bool bParam1)//Position - 0x1520E
{
	int iVar0;
	
	iVar0 = func_7(9484, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, iParam0);
		MISC::SET_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, iParam0);
		MISC::CLEAR_BIT(&(Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), iParam0);
	}
	func_4(9484, iVar0, -1, 1, 0);
}

int func_609(int iParam0)//Position - 0x1526D
{
	switch (iParam0)
	{
		case 99:
			return 0;
		
		case 100:
			return 4;
		
		case 101:
			return 1;
		
		case 102:
			return 2;
		
		case 103:
			return 3;
		
		case 104:
			return 5;
		
		default:
	}
	return 6;
}

void func_610(var uParam0, int iParam1, int iParam2)//Position - 0x152B9
{
	switch (iParam1)
	{
		case 99:
			*uParam0 = iParam2;
			break;
		
		case 100:
			uParam0->f_1 = iParam2;
			break;
		
		case 101:
			uParam0->f_2 = iParam2;
			break;
		
		case 102:
			uParam0->f_3 = iParam2;
			break;
		
		case 103:
			uParam0->f_4 = iParam2;
			break;
		
		case 104:
			uParam0->f_5 = iParam2;
			break;
	}
}

int func_611(int iParam0)//Position - 0x15321
{
	switch (iParam0)
	{
		case 99:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE");
		
		case 100:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON");
		
		case 101:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER");
		
		case 102:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT");
		
		case 103:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE");
		
		case 104:
			return joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH");
		
		default:
	}
	return joaat("SERVICE_INVALID");
}

int func_612(int iParam0)//Position - 0x15389
{
	switch (iParam0)
	{
		case 99:
			return Global_262145.f_29923 /* Tunable: H4_SUPPORTCREW_AIRSTRIKE_COST */;
		
		case 100:
			return Global_262145.f_29924 /* Tunable: H4_SUPPORTCREW_HEAVY_WEAPON_COST */;
		
		case 101:
			return Global_262145.f_29925 /* Tunable: H4_SUPPORTCREW_SNIPER_COST */;
		
		case 102:
			return Global_262145.f_29926 /* Tunable: H4_SUPPORTCREW_AIR_SUPPORT_COST */;
		
		case 103:
			return Global_262145.f_29927 /* Tunable: H4_SUPPORTCREW_DRONE_COST */;
		
		case 104:
			return Global_262145.f_29928 /* Tunable: H4_SUPPORTCREW_WEAPON_STASH_COST */;
		
		default:
	}
	return 0;
}

void func_613(var uParam0, int iParam1)//Position - 0x153F9
{
	if (uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Local_161.f_43.f_6 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_161.f_43.f_6);
		if (!StackVal)
		{
			return;
		}
	}
	if (!BitTest(Local_176[(iParam1 / 32)], (iParam1 % 32)))
	{
	}
	MISC::SET_BIT(&(Local_176[(iParam1 / 32)]), (iParam1 % 32));
}

void func_614(var uParam0)//Position - 0x15453
{
	int iVar0;
	
	iVar0 = func_412(uParam0, PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (uParam0->f_823.f_67[iVar0] == 0)
		{
			uParam0->f_823.f_67[iVar0] = 1;
		}
		else
		{
			uParam0->f_823.f_67[iVar0] = 0;
		}
		func_615(uParam0->f_711, 1, func_616(uParam0));
		iLocal_149 = 1;
	}
}

void func_615(int iParam0, bool bParam1, char* sParam2)//Position - 0x154AE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_LAUNCH_BUTTON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	func_432(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_616(var uParam0)//Position - 0x154D1
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			return "H4_FINALE_CONT" /* GXT: CONTINUE */;
		}
		else if (func_412(uParam0, PLAYER::PLAYER_ID()) != -1)
		{
			if (uParam0->f_823.f_67[func_412(uParam0, PLAYER::PLAYER_ID())] == 0)
			{
				return "H4_FINALE_RDY" /* GXT: READY */;
			}
			else
			{
				return "H4_FINALE_NRDY" /* GXT: UNREADY */;
			}
		}
	}
	return "CH_FINALE_LBS" /* GXT: START */;
}

void func_617(var uParam0)//Position - 0x15530
{
	MISC::SET_BIT(&(uParam0->f_1085), 3);
	uParam0->f_726.f_5 = 0;
	iLocal_150 = 6;
	iLocal_136 = 1;
	uParam0->f_704 = 0;
	func_34(uParam0, 15);
}

void func_618(var uParam0, int iParam1)//Position - 0x15560
{
	int iVar0;
	
	iVar0 = func_609(iParam1);
	if (iVar0 == 6)
	{
		return;
	}
	if (func_416(PLAYER::PLAYER_ID(), iVar0))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_612(iParam1), false, true, false, -1, 0))
	{
		return;
	}
	func_619(uParam0->f_711, func_623(iParam1), func_622(iParam1), func_621(), func_620());
	uParam0->f_707 = 1;
	iLocal_154 = iParam1;
}

void func_619(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x155C7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_OVERLAY");
	func_432(sParam1);
	func_432(sParam2);
	func_432(sParam3);
	func_432(sParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_620()//Position - 0x155F6
{
	return "H4P_OVERLAY_CAN" /* GXT: CANCEL */;
}

char* func_621()//Position - 0x15602
{
	return "H4P_OVERLAY_CON" /* GXT: CONFIRM */;
}

char* func_622(int iParam0)//Position - 0x1560E
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase an Airstrike?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $12,000~n~&lt;\ */;
		
		case 100:
			return "H4P_OVR_SC2_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Supply Drop?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $15,000~n~&lt;\ */;
		
		case 101:
			return "H4P_OVR_SC3_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Sniper?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $25,000~n~&lt;\ */;
		
		case 102:
			return "H4P_OVR_SC4_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase Helicopter Backup?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $30,000~n~&lt;\ */;
		
		case 103:
			return "H4P_OVR_SC5_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Recon Drone?~n~~n~Please note: To use this, the island's air defenses must first be disabled at the control tower during the heist.~n~~n~Cost: $25,000~n~&lt;\ */;
		
		case 104:
			return "H4P_OVR_SC6_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase the Weapon Stash?~n~~n~Please note: This can only be used with the Velum approach vehicle.~n~~n~Cost: $10,000~n~&lt;\ */;
		
		default:
	}
	return "";
}

char* func_623(int iParam0)//Position - 0x1566F
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_T" /* GXT: SUPPORT CREW */;
		
		case 100:
			return "H4P_OVR_SC2_T" /* GXT: SUPPORT CREW */;
		
		case 101:
			return "H4P_OVR_SC3_T" /* GXT: SUPPORT CREW */;
		
		case 102:
			return "H4P_OVR_SC4_T" /* GXT: SUPPORT CREW */;
		
		case 103:
			return "H4P_OVR_SC5_T" /* GXT: SUPPORT CREW */;
		
		case 104:
			return "H4P_OVR_SC6_T" /* GXT: SUPPORT CREW */;
		
		default:
	}
	return "";
}

void func_624(var uParam0, int iParam1)//Position - 0x156D0
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
	{
		Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 0;
		func_570(uParam0->f_711, iParam1, 0);
	}
	else
	{
		Global_1979596[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 1;
		func_570(uParam0->f_711, iParam1, 1);
	}
}

void func_625(var uParam0)//Position - 0x1572D
{
	if (func_415(uParam0->f_1084))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_29929 /* Tunable: H4_SUPPRESSORS_COST */, false, true, false, -1, 0))
	{
		return;
	}
	func_619(uParam0->f_711, "H4P_OVR_SUP_T" /* GXT: SUPPRESSORS */, "H4P_OVR_SUP_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/Are you sure you wish to purchase suppressors for $5000? You will be given the option to use them when setting up the finale.~n~&lt;\ */, func_626(), func_620());
	uParam0->f_707 = 1;
	iLocal_154 = 59;
}

char* func_626()//Position - 0x1577F
{
	return "H4P_OVERLAY_ACC" /* GXT: ACCEPT */;
}

void func_627(var uParam0, int iParam1)//Position - 0x1578B
{
	if (func_378(uParam0->f_1084) == 0)
	{
		func_619(uParam0->f_711, func_629(iParam1), func_628(iParam1), func_626(), func_620());
		uParam0->f_707 = 1;
		iLocal_154 = iParam1;
	}
	else if (!func_17(uParam0->f_1084, 13))
	{
		func_630(uParam0, iParam1);
	}
}

char* func_628(int iParam0)//Position - 0x157E2
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Aggressor::~n~- Assault Shotgun~n~- Machine Pistol~n~- Grenades~n~- Machete~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 55:
			return "H4P_OVR_WL2_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Conspirator::~n~- Military Rifle~n~- Pistol .50~n~- Sticky Bombs~n~- Knuckle Duster~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 56:
			return "H4P_OVR_WL3_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Crack Shot::~n~- Sniper Rifle~n~- AP Pistol~n~- Molotov Cocktails~n~- Knife~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 57:
			return "H4P_OVR_WL4_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Saboteur::~n~- SMG Mk II~n~- SNS Pistol Mk II~n~- Pipe Bombs~n~- Knife~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		case 58:
			return "H4P_OVR_WL5_M" /* GXT: //Loading...~n~~n~Target confirmation:[unmarked weapons]~n~......................................................................................................~n~&gt;/Loadout: Marksman::~n~- Assault Rifle Mk II~n~- Pistol Mk II~n~- Pipe Bombs~n~- Machete~n~&lt;\ ~n~~n~&gt;/ Confirm Prep work? */;
		
		default:
	}
	return "";
}

char* func_629(int iParam0)//Position - 0x15836
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_T" /* GXT: AGGRESSOR */;
		
		case 55:
			return "H4P_OVR_WL2_T" /* GXT: CONSPIRATOR */;
		
		case 56:
			return "H4P_OVR_WL3_T" /* GXT: CRACK SHOT */;
		
		case 57:
			return "H4P_OVR_WL4_T" /* GXT: SABOTEUR */;
		
		case 58:
			return "H4P_OVR_WL5_T" /* GXT: MARKSMAN */;
		
		default:
	}
	return "";
}

void func_630(var uParam0, int iParam1)//Position - 0x1588A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_813(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_16(uParam0, iVar0))
	{
		return;
	}
	if (func_812(iLocal_160, 0))
	{
		return;
	}
	iVar1 = func_649(PLAYER::PLAYER_ID(), 256, 0);
	if (iVar1 != -1)
	{
		func_646(uParam0, iParam1, iVar1);
		return;
	}
	func_631(iVar0);
	Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_23 = 1;
	Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_24 = 0;
	iLocal_150 = 5;
	func_34(uParam0, 15);
}

void func_631(int iParam0)//Position - 0x1590F
{
	func_632(-1, iParam0);
}

void func_632(int iParam0, var uParam1)//Position - 0x1591E
{
	if (!func_108())
	{
		return;
	}
	if (!func_645(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_644(iParam0);
	}
	func_643(uParam1);
	func_633(256, -1);
}

void func_633(int iParam0, int iParam1)//Position - 0x15957
{
	if ((func_108() || !func_642(1)) || func_641(iParam0) == 3)
	{
		if (!func_640(PLAYER::PLAYER_ID(), 0) && !func_640(PLAYER::PLAYER_ID(), 3))
		{
			func_639(iParam0);
			func_634(iParam0, func_638(1, 1), func_637(), func_636(), func_635(), iParam1);
		}
	}
}

void func_634(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x159BF
{
	struct<7> Var0;
	
	Var0.f_0 = 1311159119;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

var func_635()//Position - 0x15A09
{
	return Global_2793044.f_5225.f_346;
}

var func_636()//Position - 0x15A1B
{
	return Global_2793044.f_5225.f_345;
}

var func_637()//Position - 0x15A2D
{
	return Global_2793044.f_5225.f_344;
}

int func_638(int iParam0, bool bParam1)//Position - 0x15A3F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_75(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_76(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_639(int iParam0)//Position - 0x15AA4
{
	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_32 = iParam0;
}

int func_640(int iParam0, int iParam1)//Position - 0x15ABD
{
	if (func_120(iParam0, 0))
	{
		return func_641(Global_1894573[iParam0 /*608*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_641(int iParam0)//Position - 0x15AE7
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
			return 0;
		
		case 276:
		case 267:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_642(bool bParam0)//Position - 0x15D4D
{
	return func_230(PLAYER::PLAYER_ID(), bParam0);
}

void func_643(var uParam0)//Position - 0x15D5F
{
	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_308 = uParam0;
}

void func_644(int iParam0)//Position - 0x15D79
{
	if (Global_2793044.f_5225.f_344 != iParam0)
	{
		Global_2793044.f_5225.f_344 = iParam0;
	}
}

bool func_645(int iParam0)//Position - 0x15D9C
{
	return func_7(9517, iParam0, 0) != 0;
}

void func_646(var uParam0, int iParam1, int iParam2)//Position - 0x15DB0
{
	switch (iParam2)
	{
		case 15:
			if (func_13(iLocal_160))
			{
				func_9("GENERAL_MLF_G1" /* GXT: Can't launch this mission whilst one of your Club Members is currently at one with the animals. */, -1);
			}
			else if (func_648(iLocal_160))
			{
				func_9("GENERAL_MLF_G2" /* GXT: Can't launch this mission whilst one of your Associates is currently at one with the animals. */, -1);
			}
			else
			{
				func_9("GENERAL_MLF_G3" /* GXT: Can't launch this mission whilst one of your Bodyguards is currently at one with the animals. */, -1);
			}
			break;
		
		case 16:
			if (func_13(iLocal_160))
			{
				func_9("GENERAL_MLF_G4" /* GXT: Can't launch this mission whilst one of your Club Members is playing a casino game. */, -1);
			}
			else if (func_648(iLocal_160))
			{
				func_9("GENERAL_MLF_G5" /* GXT: Can't launch this mission whilst one of your Associates is playing a casino game. */, -1);
			}
			else
			{
				func_9("GENERAL_MLF_G6" /* GXT: Can't launch this mission whilst one of your Bodyguards is playing a casino game. */, -1);
			}
			break;
		
		default:
			if (func_647(func_813(uParam0, iParam1)))
			{
				func_9("CSH_LAUNCHF_0" /* GXT: The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please wait or look for rival Heist crews transporting Heist Prep Equipment ~BLIP_NHP_BAG~ to steal from. */, -1);
			}
			else
			{
				func_9("CSH_LAUNCHF_1" /* GXT: The mission you have selected is currently unavailable. The maximum number of missions with this Heist Prep Equipment have already been sourced in session. Please try again soon. */, -1);
			}
			break;
	}
}

int func_647(int iParam0)//Position - 0x15E62
{
	switch (iParam0)
	{
		case 10:
		case 7:
		case 8:
		case 9:
		case 13:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x15E9A
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}

int func_649(int iParam0, int iParam1, bool bParam2)//Position - 0x15EBD
{
	int iVar0;
	int iVar1;
	
	if (!func_681(func_784(iParam1, -1, -1, -1), func_741(iParam1, -1, 1, -1, -1, iParam0), func_690(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_13(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_679(iParam1) >= func_678(iVar0))
	{
		return 5;
	}
	if (func_677(iParam0))
	{
		return 6;
	}
	if (func_676(iParam0))
	{
		return 14;
	}
	if (func_675(iParam0) && !func_674(iParam0))
	{
		return 17;
	}
	iVar1 = func_669(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_641(iParam1) == 1)
	{
		if ((func_668() || func_667()) || ((!bParam2 && func_666() != 0) && func_641(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_641(iParam1) == 2)
	{
		if (!func_663(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1894573[iParam0 /*608*/].f_10.f_34 != func_15())
			{
				return 9;
			}
		}
		if (func_662(iParam0))
		{
			return 10;
		}
	}
	else if (func_660(iParam1))
	{
		if (func_21(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_659(iParam1))
	{
		if (func_658())
		{
			return 13;
		}
		if (func_655())
		{
			return 12;
		}
	}
	if (func_21(iParam0) + 1 < func_654(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_651(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_650(iParam0, 21) || func_650(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_650(int iParam0, int iParam1)//Position - 0x160AC
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_651(int iParam0, int iParam1)//Position - 0x160C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_652(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_122(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_652(int iParam0, int iParam1, bool bParam2)//Position - 0x16114
{
	if (iParam1 != func_15())
	{
		if (!bParam2)
		{
			if (func_653(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
		{
			return iParam1 == Global_1894573[iParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_653(int iParam0, int iParam1)//Position - 0x1615E
{
	if (iParam1 != func_15())
	{
		if (iParam0 != func_15())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_654(int iParam0)//Position - 0x161A3
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18633 /* Tunable: BIKER_GUNRUNNING_MIN_PLAYERS */;
		
		case 183:
			return Global_262145.f_18641 /* Tunable: BIKER_POW_MIN_PLAYERS */;
		
		case 185:
			return Global_262145.f_18650 /* Tunable: BIKER_GUNS_FOR_HIRE_MIN_PLAYERS */;
		
		case 182:
			return Global_262145.f_18661 /* Tunable: BIKER_BY_THE_POUND_MIN_PLAYERS */;
		
		case 186:
			return Global_262145.f_18670 /* Tunable: BIKER_WEAPON_OF_CHOICE_MIN_PLAYERS */;
		
		case 195:
			return Global_262145.f_18688 /* Tunable: BIKER_NINE_TENTHS_MIN_PLAYERS */;
		
		case 198:
			return Global_262145.f_18698 /* Tunable: BIKER_CRACKED_MIN_PLAYERS */;
		
		case 197:
			return Global_262145.f_18710 /* Tunable: BIKER_JAILBREAK_MIN_PLAYERS */;
		
		case 207:
			return Global_262145.f_18718 /* Tunable: BIKER_FRAGILE_GOODS_MIN_PLAYERS */;
		
		case 209:
			return Global_262145.f_18731 /* Tunable: BIKER_OUTRIDER_MIN_PLAYERS */;
		
		case 208:
			return Global_262145.f_18739 /* Tunable: BIKER_TORCHED_MIN_PLAYERS */;
		
		case 201:
			return Global_262145.f_18772 /* Tunable: BIKER_STAND_YOUR_GROUND_MIN_PLAYERS */;
		
		case 211:
			return Global_262145.f_18840 /* Tunable: BIKER_ON_THE_RUN_MIN_PLAYERS */;
		
		case 193:
			return Global_262145.f_18863 /* Tunable: BIKER_HIT_AND_RIDE_MIN_PLAYERS */;
		
		case 205:
			return Global_262145.f_18881 /* Tunable: BIKER_MISCHIEF_MIN_PLAYERS */;
		
		case 189:
			return Global_262145.f_18846 /* Tunable: BIKER_RACE_MIN_PLAYERS */;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_655()//Position - 0x162C7
{
	if (Global_1949970)
	{
		return 0;
	}
	return func_656();
}

int func_656()//Position - 0x162DE
{
	if (func_657())
	{
		return 1;
	}
	return Global_2683862.f_744;
}

bool func_657()//Position - 0x162F8
{
	return Global_1575018 == 10;
}

bool func_658()//Position - 0x16307
{
	return Global_262145.f_15679 /* Tunable: EXEC_CONTRABAND_DISABLE */;
}

int func_659(int iParam0)//Position - 0x16316
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_660(int iParam0)//Position - 0x1633C
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
	return func_661(iParam0, 0);
	return 0;
}

int func_661(int iParam0, int iParam1)//Position - 0x16396
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

int func_662(int iParam0)//Position - 0x163EB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1894573[iParam0 /*608*/].f_10.f_34 != func_15() && Global_1894573[iParam0 /*608*/].f_10.f_34 == iVar1) && Global_1894573[iVar1 /*608*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_663(int iParam0)//Position - 0x1645B
{
	switch (iParam0)
	{
		case 179:
			if (func_665() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_664() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_664() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_664()//Position - 0x164A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_104(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_665()//Position - 0x164E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_13(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_666()//Position - 0x1651E
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_103;
}

bool func_667()//Position - 0x16535
{
	return Global_1923597.f_11.f_144 != -1;
}

bool func_668()//Position - 0x16547
{
	return Global_1923597.f_11.f_143 != -1;
}

int func_669(int iParam0)//Position - 0x16559
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_671())
	{
		iVar1 = Global_1894573[iParam0 /*608*/].f_10.f_11[iVar0];
		if (iVar1 != func_15())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_677(iVar1))
				{
					return 7;
				}
				if (func_676(iVar1))
				{
					return 15;
				}
				if (func_670(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_670(int iParam0)//Position - 0x165C5
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (((((BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 2) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 3)) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 5)) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 6)) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 7)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_671()//Position - 0x16663
{
	return (func_672() - 1);
}

int func_672()//Position - 0x16671
{
	return func_673(PLAYER::PLAYER_ID());
}

int func_673(int iParam0)//Position - 0x16681
{
	int iVar0;
	
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_15() && Global_1894573[iVar0 /*608*/].f_10.f_428 == 1)
	{
		return 8;
	}
	return 4;
}

int func_674(int iParam0)//Position - 0x166BB
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_675(int iParam0)//Position - 0x16702
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

int func_676(int iParam0)//Position - 0x16727
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2764905;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_677(int iParam0)//Position - 0x16793
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_678(int iParam0)//Position - 0x167B6
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13041 /* Tunable: GB_POINTTOPOINT_INSTANCES_PERMITTED */;
		
		case 155:
			return Global_262145.f_13066 /* Tunable: GB_PROTECTIONRACKET_INSTANCES_PERMITTED */;
		
		case 153:
			return Global_262145.f_13030 /* Tunable: GB_MOSTWANTED_INSTANCES_PERMITTED */;
		
		case 163:
			return Global_262145.f_13006 /* Tunable: GB_CARJACKING_INSTANCES_PERMITTED */;
		
		case 160:
			return Global_262145.f_13019 /* Tunable: GB_FINDERS_KEEPERS_INSTANCES_PERMITTED */;
		
		case 154:
			return Global_262145.f_13076 /* Tunable: GB_SMASHANDGRAB_INSTANCES_PERMITTED */;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15506 /* Tunable: EXEC_CASHING_INSTANCES_PERMITTED */;
		
		case 172:
			return Global_262145.f_15525 /* Tunable: EXEC_SALVAGE_INSTANCES_PERMITTED */;
		
		case 148:
			return Global_262145.f_18747 /* Tunable: BIKER_DEATHMATCH_MAX_INSTANCES */;
		
		case 179:
			return Global_262145.f_18755 /* Tunable: BIKER_JOUST_MAX_INSTANCES */;
		
		case 201:
			return Global_262145.f_18769 /* Tunable: BIKER_STAND_YOUR_GROUND_MAX_INSTANCES */;
		
		case 200:
			return Global_262145.f_18809 /* Tunable: BIKER_CAGED_IN_MAX_INSTANCES */;
		
		case 211:
			return Global_262145.f_18838 /* Tunable: BIKER_ON_THE_RUN_MAX_INSTANCES */;
		
		case 194:
			return Global_262145.f_18850 /* Tunable: BIKER_RIPPIN_MAX_INSTANCES */;
		
		case 193:
			return Global_262145.f_18861 /* Tunable: BIKER_HIT_AND_RIDE_MAX_INSTANCES */;
		
		case 210:
			return Global_262145.f_18873 /* Tunable: BIKER_WHEELIE_MAX_INSTANCES */;
		
		case 205:
			return Global_262145.f_18879 /* Tunable: BIKER_MISCHIEF_MAX_INSTANCES */;
		
		case 199:
			return Global_262145.f_18892 /* Tunable: BIKER_SEARCH_AND_DESTROY_MAX_INSTANCES */;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_679(int iParam0)//Position - 0x16908
{
	return Global_1923597.f_11.f_147[func_680(iParam0)];
}

int func_680(int iParam0)//Position - 0x16920
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		case 267:
			return 80;
		
		case 291:
			return 81;
		
		case 292:
			return 82;
		
		case 293:
			return 83;
		
		case 294:
			return 84;
		
		case 295:
			return 85;
		
		case 296:
			return 86;
		
		case 297:
			return 87;
		
		case 298:
			return 88;
		
		case 299:
			return 89;
		
		case 300:
			return 90;
		
		case 301:
			return 91;
		
		case 304:
			return 92;
		
		case 305:
			return 93;
		
		case 306:
			return 94;
		
		case 307:
			return 95;
		
		case 308:
			return 96;
		
		case 309:
			return 97;
		
		default:
	}
	return -1;
}

int func_681(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x16D5E
{
	if ((func_689(iParam0, bParam3, bParam4) || func_688(iParam1, bParam3, bParam4)) || func_682(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_682(int iParam0, bool bParam1, bool bParam2)//Position - 0x16D98
{
	return func_683(2, iParam0, 0, bParam1, bParam2);
}

int func_683(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x16DAC
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_687(iParam0) - func_686(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_686(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_687(iParam0) - func_685(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_686(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_687(iParam0) - func_686(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_684(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_684(int iParam0)//Position - 0x16E72
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

int func_685(int iParam0)//Position - 0x16EAC
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
			break;
		
		case 1:
			return Global_1666891.f_2;
			break;
		
		case 2:
			return Global_1666891.f_3;
			break;
	}
	return 0;
}

int func_686(int iParam0, bool bParam1)//Position - 0x16EF2
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657589[iVar0 /*466*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657589[iVar0 /*466*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657589[iVar0 /*466*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_687(int iParam0)//Position - 0x16F8F
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
			break;
		
		case 1:
			return Global_1666900;
			break;
		
		case 2:
			return Global_1666901;
			break;
	}
	return 0;
}

int func_688(int iParam0, bool bParam1, bool bParam2)//Position - 0x16FCF
{
	return func_683(1, iParam0, 0, bParam1, bParam2);
}

int func_689(int iParam0, bool bParam1, bool bParam2)//Position - 0x16FE3
{
	return func_683(0, iParam0, 0, bParam1, bParam2);
}

int func_690(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x16FF7
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_740(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_738(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_732(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_720(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_713(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_706(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_703(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_702(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_698(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 158:
			return func_694(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 181:
			return func_691(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_691(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x172CA
{
	int iVar0;
	
	iVar0 = func_693(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_692(iParam0, iParam2));
	return iVar0;
}

int func_692(int iParam0, var uParam1)//Position - 0x172ED
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_693(int iParam0, var uParam1, var uParam2)//Position - 0x17307
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_694(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17321
{
	int iVar0;
	
	iVar0 = func_697(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_695(iParam0, iParam2));
	return iVar0;
}

int func_695(int iParam0, int iParam1)//Position - 0x17344
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_230(iParam1, 1))
			{
				Var0 = { func_696(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_696(int iParam0)//Position - 0x174AB
{
	return Global_1894573[iParam0 /*608*/].f_10.f_305;
}

int func_697(int iParam0, int iParam1, var uParam2)//Position - 0x174C3
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_698(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17726
{
	int iVar0;
	
	iVar0 = func_701(iParam0, iParam1, iParam3);
	if (!func_700(iParam0))
	{
		iVar0 = (iVar0 + func_699(iParam0, iParam2));
	}
	return iVar0;
}

int func_699(int iParam0, int iParam1)//Position - 0x17753
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_21(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_700(int iParam0)//Position - 0x177A5
{
	return 0;
}

int func_701(int iParam0, int iParam1, int iParam2)//Position - 0x177AE
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_702(int iParam0)//Position - 0x1795D
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_703(int iParam0, int iParam1, int iParam2)//Position - 0x179A9
{
	int iVar0;
	
	iVar0 = func_705(iParam0, iParam1);
	if (func_704(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_704(int iParam0)//Position - 0x179CD
{
	return 1;
}

int func_705(int iParam0, int iParam1)//Position - 0x179D6
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_706(int iParam0, int iParam1)//Position - 0x17B25
{
	int iVar0;
	
	iVar0 = func_712(iParam0, iParam1);
	if (!func_711(iParam0))
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	if (iParam0 == 14 || ((((func_711(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_707(int iParam0, int iParam1)//Position - 0x17BB9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_710(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_709(iParam0, iParam1);
			iVar2 = func_708(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_711(iParam0))
		{
			if (iVar0 > Global_262145.f_18384 /* Tunable: BIKER_RESUPPLY_MAX_VEHICLES */)
			{
				iVar0 = Global_262145.f_18384 /* Tunable: BIKER_RESUPPLY_MAX_VEHICLES */;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18383 /* Tunable: BIKER_RESUPPLY_MIN_PACKAGES */)
			{
				iVar0 = Global_262145.f_18383 /* Tunable: BIKER_RESUPPLY_MIN_PACKAGES */;
			}
			if (iVar0 > Global_262145.f_18382 /* Tunable: BIKER_RESUPPLY_MAX_PACKAGES */)
			{
				iVar0 = Global_262145.f_18382 /* Tunable: BIKER_RESUPPLY_MAX_PACKAGES */;
			}
		}
	}
	return iVar0;
}

int func_708(int iParam0)//Position - 0x17C52
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18421 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MIN_PACKAGES */;
		
		case 10:
			return Global_262145.f_18446 /* Tunable: BIKER_RESUPPLY_BANK_MIN_PACKAGES */;
		
		default:
	}
	return 1;
}

int func_709(int iParam0, int iParam1)//Position - 0x17C82
{
	if (func_711(iParam0))
	{
		if (iParam1 >= Global_262145.f_18385 /* Tunable: BIKER_RESUPPLY_SECOND_VEHICLE_THRESHOLD */)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18422 /* Tunable: BIKER_RESUPPLY_MEET_CONTACT_MAX_PACKAGES */;
		
		case 10:
			return Global_262145.f_18447 /* Tunable: BIKER_RESUPPLY_BANK_MAX_PACKAGES */;
		
		default:
	}
	return 8;
}

int func_710(int iParam0)//Position - 0x17CD0
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_711(int iParam0)//Position - 0x17D02
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_712(int iParam0, int iParam1)//Position - 0x17D58
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_713(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17FEA
{
	int iVar0;
	
	iVar0 = func_719(iParam0, iParam1, iParam2, iParam4);
	if (!func_718(iParam0))
	{
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_715(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_714(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_714(int iParam0)//Position - 0x1803E
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_715(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18064
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_718(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_717(iParam0))
	{
		iVar0 = func_717(iParam0);
	}
	else if (iVar0 < func_716(iParam0))
	{
		iVar0 = func_716(iParam0);
	}
	return iVar0;
}

int func_716(int iParam0)//Position - 0x18100
{
	return 1;
}

int func_717(int iParam0)//Position - 0x18109
{
	return 4;
}

int func_718(int iParam0)//Position - 0x18112
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_719(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x18150
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1820B
{
	int iVar0;
	
	iVar0 = func_731(iParam0, iParam1, iParam2, iParam4);
	if (!func_730(iParam0))
	{
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_722(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_721(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_721(int iParam0)//Position - 0x1825E
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_722(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18278
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_729(iParam0))
	{
		iVar1 = func_728(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_727(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_726(iParam2))
		{
			iVar0 = func_726(iParam2);
		}
	}
	if (iVar0 > func_724(iParam0))
	{
		iVar0 = func_724(iParam0);
	}
	else if (iVar0 < func_723(iParam0))
	{
		iVar0 = func_723(iParam0);
	}
	return iVar0;
}

int func_723(int iParam0)//Position - 0x183F6
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_724(int iParam0)//Position - 0x18410
{
	if (!func_729(iParam0))
	{
		if (func_730(iParam0))
		{
			if (func_725(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_725(int iParam0)//Position - 0x1846A
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_726(int iParam0)//Position - 0x18484
{
	if (iParam0 == func_15() || Global_1853910[iParam0 /*862*/].f_267.f_293 == 0)
	{
		return 50;
	}
	return (50 - Global_1853910[iParam0 /*862*/].f_267.f_293.f_3);
}

int func_727(int iParam0)//Position - 0x184C6
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_728(int iParam0)//Position - 0x184E0
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_729(int iParam0)//Position - 0x18502
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_730(int iParam0)//Position - 0x18558
{
	if (func_729(iParam0) || func_727(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_731(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x1857A
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_732(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x186AC
{
	int iVar0;
	
	iVar0 = func_737(iParam0, iParam1, iParam2, iParam3);
	if (!func_736(iParam0))
	{
		iVar0 = (iVar0 + func_734(iParam0, func_20() + 1, -1, iParam2));
	}
	if (func_733(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_733(int iParam0)//Position - 0x186F2
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_734(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18736
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_735(iParam0))
	{
		if (iParam2 <= Global_262145.f_21683 /* Tunable: -1542918426 */)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21684 /* Tunable: -2015624215 */)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_736(iParam0))
	{
		if (iParam1 < Global_262145.f_21643 /* Tunable: 642214211 */)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_735(int iParam0)//Position - 0x18813
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_736(int iParam0)//Position - 0x1884B
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_737(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x188AD
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_738(int iParam0, int iParam1, var uParam2)//Position - 0x18BF9
{
	int iVar0;
	
	iVar0 = func_739(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_739(int iParam0, int iParam1)//Position - 0x18C1A
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_740(int iParam0)//Position - 0x18DDA
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_741(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x18EB2
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_783(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_779(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_775(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_769(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_763(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_762(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_761(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_760(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_754(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_748(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_742(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_742(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x191A1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_747(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_746(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_745(func_21(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_744(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_743(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_743(int iParam0, int iParam1)//Position - 0x19217
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_744(int iParam0, int iParam1)//Position - 0x19231
{
	return func_743(iParam0, iParam1) > 0;
}

int func_745(var uParam0, int iParam1, int iParam2)//Position - 0x19243
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_746(int iParam0, int iParam1)//Position - 0x1925D
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_747(int iParam0, int iParam1)//Position - 0x19291
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_748(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x192AB
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_753(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_752(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_751(func_21(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_750(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_749(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_749(int iParam0, int iParam1)//Position - 0x19636
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_750(int iParam0, int iParam1)//Position - 0x196BC
{
	return func_749(iParam0, iParam1) > 0;
}

int func_751(int iParam0, int iParam1, int iParam2)//Position - 0x196CE
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_15())
			{
				if (func_230(iParam2, 1))
				{
					Var0 = { func_696(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_752(int iParam0, int iParam1)//Position - 0x19766
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_753(int iParam0, int iParam1)//Position - 0x19A45
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_754(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x19A5F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_700(iParam0))
		{
			iVar0 = (iVar0 + func_699(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_759(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_758(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_757(func_21(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_756(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_755(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_755(int iParam0, int iParam1)//Position - 0x19D3A
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_756(int iParam0, int iParam1)//Position - 0x19D71
{
	return func_755(iParam0, iParam1) > 0;
}

int func_757(int iParam0, int iParam1)//Position - 0x19D83
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_758(int iParam0, int iParam1)//Position - 0x19DAD
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_759(int iParam0, int iParam1)//Position - 0x19EDF
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_760(int iParam0)//Position - 0x19EF9
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_761(int iParam0, int iParam1, int iParam2)//Position - 0x19F45
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_704(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_762(int iParam0, int iParam1)//Position - 0x1A0E6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_711(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	return iVar0;
}

int func_763(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1A6CD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_718(iParam0))
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_715(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_768(iParam0, func_21(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_767(0, iParam1) != -1)
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_766(func_21(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_765(iParam0))
		{
			iVar0 = (iVar0 + func_764(iParam0));
		}
	}
	return iVar0;
}

int func_764(int iParam0)//Position - 0x1A843
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_765(int iParam0)//Position - 0x1A887
{
	return func_764(iParam0) > 0;
}

int func_766(var uParam0, int iParam1)//Position - 0x1A897
{
	return 2;
}

int func_767(int iParam0, int iParam1)//Position - 0x1A8A0
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_768(int iParam0, int iParam1)//Position - 0x1A8E8
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_7(5329, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_769(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1A948
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_730(iParam0))
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_722(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_774(iParam0, func_21(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_773(0, iParam1) != -1)
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_772(func_21(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_771(iParam0))
		{
			iVar0 = (iVar0 + func_770(iParam0));
		}
	}
	return iVar0;
}

int func_770(int iParam0)//Position - 0x1AC0E
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_771(int iParam0)//Position - 0x1AC80
{
	return func_770(iParam0) > 0;
}

int func_772(int iParam0, int iParam1)//Position - 0x1AC90
{
	switch (iParam0)
	{
		case 1:
			if (func_725(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_725(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_773(int iParam0, int iParam1)//Position - 0x1AD88
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_774(int iParam0, int iParam1)//Position - 0x1B128
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_775(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1B221
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_734(iParam0, func_20() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_736(iParam0))
		{
			iVar0 = (iVar0 + func_734(iParam0, func_20() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_778(iParam0, func_20() + 1));
	}
	if (!bParam3)
	{
		if (func_777(iParam0))
		{
			iVar0 = (iVar0 + func_776(iParam0));
		}
	}
	return iVar0;
}

int func_776(int iParam0)//Position - 0x1B5A4
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_777(int iParam0)//Position - 0x1B618
{
	return func_776(iParam0) > 0;
}

int func_778(int iParam0, int iParam1)//Position - 0x1B628
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_779(int iParam0, int iParam1, int iParam2)//Position - 0x1B674
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_782(iParam0, func_20() + 1, iParam2));
	iVar0 = (iVar0 + func_780(iParam0));
	return iVar0;
}

int func_780(int iParam0)//Position - 0x1B97D
{
	if (func_781(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_781(int iParam0)//Position - 0x1B993
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_782(int iParam0, var uParam1, int iParam2)//Position - 0x1B9DD
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_783(int iParam0)//Position - 0x1BA07
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_784(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1BAE0
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_811(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_808(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_805(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_802(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_799(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_798(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_797();
		
		case 218:
			return func_796();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_795(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_794(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_791(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_788(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_785(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_785(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1BDA8
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_744(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_786(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_786(int iParam0, var uParam1)//Position - 0x1BDE6
{
	if (func_744(iParam0, uParam1))
	{
		return (func_743(iParam0, uParam1) + func_787(iParam0, uParam1));
	}
	return 0;
}

int func_787(int iParam0, var uParam1)//Position - 0x1BE0E
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_788(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1BE28
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_750(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_789(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_789(int iParam0, int iParam1)//Position - 0x1C1B8
{
	if (func_750(iParam0, iParam1))
	{
		return (func_749(iParam0, iParam1) + func_790(iParam0, iParam1));
	}
	return 0;
}

int func_790(int iParam0, int iParam1)//Position - 0x1C1E0
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_791(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1C26E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_756(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_792(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_792(int iParam0, int iParam1)//Position - 0x1C491
{
	if (func_756(iParam0, iParam1))
	{
		return (func_755(iParam0, iParam1) + func_793(iParam0, iParam1));
	}
	return 0;
}

int func_793(int iParam0, int iParam1)//Position - 0x1C4B9
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_794(int iParam0, int iParam1)//Position - 0x1C4F0
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_795(int iParam0, int iParam1, int iParam2)//Position - 0x1C561
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_796()//Position - 0x1C71A
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_797()//Position - 0x1C728
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_798(int iParam0, int iParam1)//Position - 0x1C736
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	return iVar0;
}

int func_799(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1CD13
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_765(iParam0))
		{
			iVar0 = (iVar0 + func_800(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_800(int iParam0, var uParam1)//Position - 0x1CE12
{
	if (func_765(iParam0))
	{
		return (func_764(iParam0) + func_801(iParam0, uParam1));
	}
	return 0;
}

int func_801(int iParam0, var uParam1)//Position - 0x1CE36
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_802(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1CE7C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_771(iParam0))
		{
			iVar0 = (iVar0 + func_803(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_803(int iParam0, int iParam1)//Position - 0x1CFF6
{
	if (func_771(iParam0))
	{
		return (func_770(iParam0) + func_804(iParam0, iParam1));
	}
	return 0;
}

int func_804(int iParam0, int iParam1)//Position - 0x1D01A
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_805(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1D094
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_777(iParam0))
		{
			iVar0 = (iVar0 + func_806(iParam0));
		}
	}
	return iVar0;
}

int func_806(int iParam0)//Position - 0x1D3C9
{
	if (func_777(iParam0))
	{
		return (func_776(iParam0) + func_807(iParam0));
	}
	return 0;
}

int func_807(int iParam0)//Position - 0x1D3EB
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_808(int iParam0, int iParam1, var uParam2)//Position - 0x1D467
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_809(iParam0));
	return iVar0;
}

int func_809(int iParam0)//Position - 0x1D72F
{
	if (func_781(iParam0))
	{
		if (func_810(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_810(int iParam0)//Position - 0x1D752
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_811(int iParam0)//Position - 0x1D79C
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_812(int iParam0, int iParam1)//Position - 0x1D87E
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_32 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_813(var uParam0, int iParam1)//Position - 0x1D8B9
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 40:
			return 7;
		
		case 42:
			return 5;
		
		case 44:
			return 3;
		
		case 45:
			return 4;
		
		case 46:
			return 1;
		
		case 48:
			return 2;
		
		case 47:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 8;
		
		case 53:
			return 9;
		
		case 51:
			return func_386(uParam0->f_1084);
		
		case 52:
			return 12;
		
		case 54:
			return 13;
		
		case 55:
			return 13;
		
		case 56:
			return 13;
		
		case 57:
			return 13;
		
		case 58:
			return 13;
		
		case 59:
			return 13;
		
		case 60:
			return 14;
		
		case 61:
			return 15;
		
		case 62:
			return 16;
		
		default:
	}
	return -1;
}

void func_814(var uParam0)//Position - 0x1D9B9
{
	func_619(uParam0->f_711, "H4P_OVR_GAT_T" /* GXT: GATHER INTEL */, func_815(uParam0), func_626(), func_620());
	uParam0->f_707 = 1;
	iLocal_154 = 1;
}

char* func_815(var uParam0)//Position - 0x1D9E6
{
	if (func_816(uParam0->f_1084))
	{
		return "H4P_OVR_GAT_2" /* GXT: //Loading...~n~~n~Stage:[return]~n~......................................................................................................~n~&gt;/Return to Cayo Perico?~n~Data indicates all essential scoping information has been gathered. Continued exploration of the island is optional.~n~&lt;\ */;
	}
	return "H4P_OVR_GAT_M" /* GXT: //Loading...~n~~n~Stage:[return]~n~......................................................................................................~n~&gt;/Return to Cayo Perico?~n~Continue to scope for additional intel. Submit photographic evidence to Pavel to update plans.~n~&lt;\ */;
}

int func_816(int iParam0)//Position - 0x1DA05
{
	if (((func_823(iParam0) && func_822(iParam0)) && func_821(iParam0)) && func_817(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x1DA3C
{
	if (iParam0 != -1)
	{
		if (((((func_820(iParam0) && func_819(iParam0)) && func_818(iParam0)) && func_387(iParam0)) && func_408(iParam0)) && func_406(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_818(int iParam0)//Position - 0x1DA8F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_389(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_819(int iParam0)//Position - 0x1DABA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_395(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_820(int iParam0)//Position - 0x1DAE5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_401(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_821(int iParam0)//Position - 0x1DB10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_379(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_822(int iParam0)//Position - 0x1DB3B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_383(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_823(int iParam0)//Position - 0x1DB67
{
	if (iParam0 != -1)
	{
		if ((((func_824(iParam0, 0) && func_824(iParam0, 1)) && func_824(iParam0, 2)) && func_824(iParam0, 3)) && func_824(iParam0, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_824(int iParam0, int iParam1)//Position - 0x1DBB4
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_1 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_5 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_9 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_13)
				{
					return 1;
				}
				break;
			
			case 1:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_2 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_6 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_10 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_14)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_3 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_7 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_11 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_15)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_4 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_8 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_12 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_16)
				{
					return 1;
				}
				break;
			
			case 4:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_17 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_18)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_825(int iParam0)//Position - 0x1DD32
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_132))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_132);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_826(var uParam0)//Position - 0x1DD57
{
	int iVar0;
	
	if (!iLocal_133)
	{
		return;
	}
	iVar0 = -1;
	if (func_829(&iVar0))
	{
		uParam0->f_806.f_8 = uParam0->f_806;
		uParam0->f_806 = iVar0;
		Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = iVar0;
		uParam0->f_707 = 1;
		if (func_424(uParam0->f_806) && uParam0->f_1098)
		{
			func_828(uParam0);
			uParam0->f_1098 = 0;
		}
		func_827(uParam0, uParam0->f_806);
		iLocal_133 = 0;
		iLocal_137 = 0;
	}
}

void func_827(var uParam0, int iParam1)//Position - 0x1DDD1
{
	switch (iParam1)
	{
		case 36:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 19);
			}
			break;
		
		case 63:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 37);
			}
			break;
		
		case 1000:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 52);
			}
			else
			{
				func_613(uParam0, 50);
			}
			break;
		
		case 105:
		case 106:
		case 107:
		case 108:
			func_613(uParam0, 51);
			break;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		switch (iParam1)
		{
			case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
				func_613(uParam0, 40);
				break;
			
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
				func_613(uParam0, 38);
				break;
			
			case 85:
			case 86:
				func_613(uParam0, 42);
				break;
			
			case 87:
			case 88:
			case 89:
			case 90:
				func_613(uParam0, 39);
				break;
			
			case 91:
			case 92:
				func_613(uParam0, 41);
				break;
			}
	}
}

void func_828(var uParam0)//Position - 0x1DF21
{
	func_619(uParam0->f_711, "H4P_OVR_CRE_T" /* GXT: NEW SUPPORT CREW UNLOCKED */, "H4P_OVR_CRE_M" /* GXT: //Loading...~n~~n~......................................................................................................~n~&gt;/You have unlocked a new support crew member for hire.~n~&lt;\ */, func_621(), "");
	uParam0->f_707 = 1;
	uParam0->f_806 = 1002;
	iLocal_154 = -4;
}

int func_829(int iParam0)//Position - 0x1DF56
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_131))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_131);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_830(var uParam0)//Position - 0x1DF7B
{
	if (iLocal_146 && !func_852(uParam0))
	{
		iLocal_146 = 0;
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_850(uParam0);
		func_845(uParam0);
		func_842(uParam0);
	}
	func_841(uParam0);
	func_837(uParam0);
	func_835(uParam0);
	func_832(uParam0);
	func_831(uParam0);
	iLocal_146 = 1;
}

void func_831(var uParam0)//Position - 0x1DFD7
{
	if (func_852(uParam0))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	}
}

void func_832(var uParam0)//Position - 0x1DFF8
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (iLocal_152 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_45)
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			if (BitTest(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_45, bVar0) && !BitTest(iLocal_152, bVar0))
			{
				MISC::SET_BIT(&iLocal_152, bVar0);
				func_570(uParam0->f_711, func_834(bVar0), 1);
			}
			bVar0++;
		}
	}
	if (bLocal_141 != func_415(uParam0->f_1084))
	{
		bLocal_141 = func_415(uParam0->f_1084);
		func_604(uParam0->f_711, 59, 1);
	}
	if (bLocal_142 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_44)
	{
		bLocal_142 = Global_1979596[uParam0->f_1084 /*53*/].f_5.f_44;
		func_570(uParam0->f_711, 98, bLocal_142);
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (uParam0->f_806 != Global_1979596[uParam0->f_1084 /*53*/].f_4)
	{
		uParam0->f_806 = Global_1979596[uParam0->f_1084 /*53*/].f_4;
		iVar1 = uParam0->f_806;
		if (iVar1 != 1002 && iVar1 != 1001)
		{
			func_833(uParam0->f_711, iVar1);
		}
	}
	if (iLocal_137 != Global_1979596[uParam0->f_1084 /*53*/].f_51)
	{
		iLocal_137 = Global_1979596[uParam0->f_1084 /*53*/].f_51;
	}
	if (bLocal_139 != Global_1979596[uParam0->f_1084 /*53*/].f_52)
	{
		bLocal_139 = Global_1979596[uParam0->f_1084 /*53*/].f_52;
	}
}

void func_833(int iParam0, int iParam1)//Position - 0x1E169
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CURRENT_SELECTION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_834(bool bParam0)//Position - 0x1E186
{
	switch (bParam0)
	{
		case 0:
			return 99;
		
		case 1:
			return 101;
		
		case 2:
			return 102;
		
		case 3:
			return 103;
		
		case 4:
			return 100;
		
		case 5:
			return 104;
		
		default:
	}
	return 0;
}

void func_835(var uParam0)//Position - 0x1E1D8
{
	if (bLocal_139)
	{
		if (!iLocal_140)
		{
			func_836(uParam0->f_711, 1);
			iLocal_140 = 1;
		}
	}
	else if (iLocal_140)
	{
		func_836(uParam0->f_711, 0);
		iLocal_140 = 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 != iLocal_140)
	{
		Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 = iLocal_140;
	}
}

void func_836(int iParam0, int iParam1)//Position - 0x1E243
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MAP_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_837(var uParam0)//Position - 0x1E260
{
	int iVar0;
	
	iVar0 = uParam0->f_806;
	if (iLocal_137)
	{
		if (!iLocal_138)
		{
			if (func_363(uParam0, iVar0))
			{
				func_840(uParam0->f_711, func_364(uParam0, iVar0));
				func_839(uParam0, iVar0);
				iLocal_138 = 1;
			}
			else
			{
				iLocal_137 = 0;
			}
		}
	}
	else if (iLocal_138)
	{
		func_838(uParam0->f_711);
		iLocal_138 = 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 != iLocal_138)
	{
		Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 = iLocal_138;
	}
}

void func_838(int iParam0)//Position - 0x1E2F2
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_TIP_TEXT");
}

void func_839(var uParam0, int iParam1)//Position - 0x1E304
{
	if (func_370(uParam0, iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			if (func_17(uParam0->f_1084, 0))
			{
				func_613(uParam0, 5);
			}
			break;
		
		case 2:
			func_613(uParam0, 8);
			break;
		
		case 3:
			func_613(uParam0, 6);
			break;
		
		case 4:
			func_613(uParam0, 7);
			break;
		
		case 5:
			func_613(uParam0, 10);
			break;
		
		case 6:
			func_613(uParam0, 9);
			break;
		
		case 30:
			func_613(uParam0, 18);
			break;
		
		case 31:
			func_613(uParam0, 17);
			break;
		
		case 32:
			func_613(uParam0, 11);
			break;
		
		case 33:
			func_613(uParam0, 12);
			break;
		
		case 34:
			if (func_387(uParam0->f_1084))
			{
				func_613(uParam0, 14);
			}
			else
			{
				func_613(uParam0, 13);
			}
			break;
		
		case 35:
			if (func_388(uParam0->f_1084))
			{
				func_613(uParam0, 16);
			}
			else
			{
				func_613(uParam0, 15);
			}
			break;
		
		case 40:
			func_613(uParam0, 20);
			break;
		
		case 44:
			func_613(uParam0, 22);
			break;
		
		case 45:
			func_613(uParam0, 23);
			break;
		
		case 42:
			func_613(uParam0, 24);
			break;
		
		case 46:
		case 47:
			func_613(uParam0, 25);
			break;
		
		case 48:
		case 49:
			func_613(uParam0, 21);
			break;
		
		case 50:
			func_613(uParam0, 26);
			break;
		
		case 53:
			func_613(uParam0, 27);
			break;
		
		case 51:
			if (func_386(uParam0->f_1084) == 11)
			{
				if (!func_362(uParam0->f_1084))
				{
					func_613(uParam0, 28);
				}
				else
				{
					func_613(uParam0, 29);
				}
			}
			else
			{
				func_613(uParam0, 30);
			}
			break;
		
		case 52:
			func_613(uParam0, 31);
			break;
		
		case 38:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_613(uParam0, 32);
			break;
		
		case 59:
			func_613(uParam0, 33);
			break;
		
		case 60:
			func_613(uParam0, 34);
			break;
		
		case 61:
			func_613(uParam0, 35);
			break;
		
		case 62:
			func_613(uParam0, 36);
			break;
		
		case 64:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 38);
			}
			break;
		
		case 66:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 39);
			}
			break;
		
		case 63:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 40);
			}
			break;
		
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 41);
			}
			break;
		
		case 65:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_613(uParam0, 42);
			}
			break;
		
		case 69:
			func_613(uParam0, 43);
			break;
		
		case 99:
			func_613(uParam0, 44);
			break;
		
		case 100:
			func_613(uParam0, 45);
			break;
		
		case 101:
			func_613(uParam0, 46);
			break;
		
		case 102:
			func_613(uParam0, 47);
			break;
		
		case 103:
			func_613(uParam0, 48);
			break;
		
		case 104:
			func_613(uParam0, 49);
			break;
	}
}

void func_840(int iParam0, char* sParam1)//Position - 0x1E66E
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iParam0, "SHOW_TIP_TEXT", sParam1, 0, 0, 0, 0);
}

void func_841(var uParam0)//Position - 0x1E686
{
	if (func_555(uParam0))
	{
		if (!iLocal_148)
		{
			func_615(uParam0->f_711, 1, func_616(uParam0));
			iLocal_148 = 1;
		}
	}
	else if (iLocal_148)
	{
		func_615(uParam0->f_711, 0, func_616(uParam0));
		iLocal_148 = 0;
	}
}

void func_842(var uParam0)//Position - 0x1E6CF
{
	if (func_844(uParam0))
	{
		if (!iLocal_147)
		{
			func_843(uParam0->f_711, 1);
			iLocal_147 = 1;
		}
	}
	else if (iLocal_147)
	{
		func_843(uParam0->f_711, 0);
		iLocal_147 = 0;
	}
}

void func_843(int iParam0, bool bParam1)//Position - 0x1E70C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_CUTS_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_844(var uParam0)//Position - 0x1E729
{
	int iVar0;
	
	iVar0 = uParam0->f_806;
	if (func_556(iVar0) != 2)
	{
		return 0;
	}
	return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

void func_845(var uParam0)//Position - 0x1E74A
{
	int iVar0;
	
	if (!iLocal_149)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			func_846(uParam0->f_711, func_849(iVar0), func_848(uParam0, iVar0), uParam0->f_823.f_56[iVar0], uParam0->f_823.f_239[iVar0], func_847(uParam0->f_823.f_67[iVar0]));
		}
		iVar0++;
	}
	iLocal_149 = 0;
}

void func_846(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1E7C3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_MEMBER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	func_582(PLAYER::GET_PLAYER_NAME(iParam2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_847(int iParam0)//Position - 0x1E7FC
{
	return iParam0 == 1;
}

int func_848(var uParam0, int iParam1)//Position - 0x1E808
{
	if (iParam1 != -1 && uParam0->f_823.f_51[iParam1] != -1)
	{
		return PLAYER::INT_TO_PLAYERINDEX(uParam0->f_823.f_51[iParam1]);
	}
	return func_15();
}

int func_849(int iParam0)//Position - 0x1E83F
{
	switch (iParam0)
	{
		case 0:
			return 105;
		
		case 1:
			return 106;
		
		case 2:
			return 107;
		
		case 3:
			return 108;
		
		default:
	}
	return 0;
}

void func_850(var uParam0)//Position - 0x1E87B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			iVar1 = func_851(func_848(uParam0, iVar0));
			if (uParam0->f_823.f_239[iVar0] != iVar1)
			{
				uParam0->f_823.f_239[iVar0] = iVar1;
				iLocal_149 = 1;
			}
		}
		iVar0++;
	}
}

int func_851(int iParam0)//Position - 0x1E8D9
{
	struct<13> Var0;
	
	if (iParam0 != func_15() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { func_206(iParam0) };
		if (func_205(Var0))
		{
			if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var0))
			{
				if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var0))
				{
					return 2;
				}
				else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
	}
	return 0;
}

int func_852(var uParam0)//Position - 0x1E952
{
	switch (iLocal_154)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 59:
			return 1;
			break;
	}
	if (func_354(&uLocal_157))
	{
		if (func_40(&uLocal_157, 4000, 0))
		{
			func_38(&uLocal_157);
		}
		return 1;
	}
	return 0;
}

void func_853(var uParam0)//Position - 0x1E9B7
{
	int iVar0;
	
	uParam0->f_823.f_49 = func_854(uParam0);
	switch (uParam0->f_823.f_49)
	{
		case 1:
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 2:
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 3:
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 4:
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = uParam0->f_823.f_56[4];
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
		}
		if (uParam0->f_823.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			Global_2684799.f_6589 = uParam0->f_823.f_56[iVar0];
			Global_1948392.f_29 = Global_2684799.f_6589;
		}
		iVar0++;
	}
	iLocal_149 = 1;
}

int func_854(var uParam0)//Position - 0x1EB75
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_823.f_51[0] = uParam0->f_1084;
		uParam0->f_823.f_51[1] = -1;
		uParam0->f_823.f_51[2] = -1;
		uParam0->f_823.f_51[3] = -1;
		return 1;
	}
	iVar0 = func_15();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_823.f_51[iVar1] = -1;
		uParam0->f_823.f_67[iVar1] = 0;
		uParam0->f_823.f_239[iVar1] = 0;
		Global_1978795[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_75(iVar0, 1, 1))
		{
			if (iVar0 != func_15())
			{
				if (!func_855(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_823.f_51[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_855(int iParam0)//Position - 0x1EC5D
{
	if (func_76(iParam0, 0) || func_856(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_856(int iParam0)//Position - 0x1EC80
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_96.f_32, 5);
}

void func_857(var uParam0)//Position - 0x1EC97
{
	switch (uParam0->f_726.f_1)
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
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			}
			break;
		
		case 5:
			break;
	}
}

void func_858(var uParam0)//Position - 0x1ECEC
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (!iLocal_135)
			{
				func_962(uParam0);
				func_941(uParam0);
				func_940(uParam0);
				func_938(uParam0);
				func_896(uParam0);
				func_863(uParam0);
				iLocal_135 = 1;
			}
			break;
		
		case 4:
			iLocal_133 = 0;
			iLocal_134 = 0;
			func_862(uParam0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_TIMECYCLE_MODIFIER("h4_sub_commandroom_BloomRedux");
			}
			func_859();
			break;
		
		case 5:
			break;
	}
}

void func_859()//Position - 0x1ED88
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			func_860(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_860(var uParam0, int iParam1)//Position - 0x1EDD3
{
	func_861(uParam0, iParam1);
}

void func_861(var uParam0, var uParam1)//Position - 0x1EDE3
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_862(var uParam0)//Position - 0x1EDF4
{
	int iVar0;
	
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if ((uParam0->f_1084 == iLocal_160 && !func_362(iLocal_160)) && !func_17(iLocal_160, 0))
	{
		iVar0 = func_7(9511, -1, 0);
		if (!BitTest(iVar0, 13))
		{
			func_9("HIF_INTROVIBE" /* GXT: Dave and Keinemusik will allow you to infiltrate El Rubio's island and scope it to prepare for The Cayo Perico Heist. Press ~INPUT_FRONTEND_ACCEPT~ when ready to begin. */, -1);
			MISC::SET_BIT(&iVar0, 13);
			func_4(9511, iVar0, -1, 1, 0);
		}
	}
}

void func_863(var uParam0)//Position - 0x1EE60
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 0))
	{
		func_881(uParam0->f_711, 1, func_892(uParam0), func_884(uParam0), func_883(uParam0), func_882());
		func_880(uParam0->f_711, 99, func_612(99));
		func_880(uParam0->f_711, 100, func_612(100));
		func_880(uParam0->f_711, 101, func_612(101));
		func_880(uParam0->f_711, 102, func_612(102));
		func_880(uParam0->f_711, 103, func_612(103));
		func_880(uParam0->f_711, 104, func_612(104));
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_879(uParam0->f_711, 67, 63, 64, 66, 68, 69, 70, 65);
			func_615(uParam0->f_711, 1, func_616(uParam0));
			iLocal_148 = 1;
		}
		else
		{
			func_879(uParam0->f_711, 67, 63, 64, 66, 68, 69, -1, 65);
		}
		func_877(uParam0->f_711, func_878(uParam0));
	}
	else
	{
		if (func_876(uParam0->f_1084))
		{
			func_613(uParam0, 2);
		}
		else if (func_362(uParam0->f_1084))
		{
			func_613(uParam0, 1);
		}
		if (func_875(uParam0->f_1084))
		{
			func_613(uParam0, 4);
		}
	}
	func_874(uParam0->f_711, func_875(uParam0->f_1084));
	func_871(uParam0->f_711, func_873(0), func_872(uParam0, 0), func_873(1), func_872(uParam0, 1), func_873(2), func_872(uParam0, 2));
	func_869(uParam0->f_711, func_870());
	func_836(uParam0->f_711, 0);
	iVar0 = func_868(uParam0);
	func_867(uParam0->f_711, iVar0);
	if (func_870() == 0)
	{
		uParam0->f_806 = 1;
	}
	else
	{
		uParam0->f_806 = 63;
	}
	if (uParam0->f_1084 == iLocal_160)
	{
		Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = uParam0->f_806;
	}
	else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_806 = 1000;
		func_833(uParam0->f_711, 1000);
	}
	else if (Global_1978795[uParam0->f_1084 /*25*/].f_20)
	{
		uParam0->f_806 = Global_1979596[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4;
		func_833(uParam0->f_711, uParam0->f_806);
	}
	if (iVar0 == 0)
	{
		func_34(uParam0, 18);
	}
	func_866(uParam0);
	func_864(uParam0);
}

void func_864(var uParam0)//Position - 0x1F090
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1084 != iLocal_160)
	{
		return;
	}
	iVar0 = func_7(9511, -1, 0);
	if (func_17(uParam0->f_1084, 0) && !BitTest(iVar0, 16))
	{
		func_619(uParam0->f_711, "H4P_OVR_INT_T" /* GXT: INTEL COMPLETE */, "H4P_OVR_INT_M" /* GXT: //Loading...~n~~n~Stage:[equipment]~n~......................................................................................................~n~&gt;/Madrazo files located.~n~Prep equipment phase can now be initiated.~n~Mandatory Prep work must be completed to unlock the Finale.~n~&lt;\ */, func_626(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_154 = -2;
		return;
	}
	if (func_865(uParam0->f_1084) && !BitTest(iVar0, 14))
	{
		func_619(uParam0->f_711, "H4P_OVR_MAN_T" /* GXT: MANDATORY PREPS COMPLETE */, "H4P_OVR_MAN_M" /* GXT: //Loading...~n~~n~Stage:[finale]~n~......................................................................................................~n~&gt;/Mandatory prep work complete. Finale access granted. Planning phase can now be initiated.~n~To increase chance of success:~n~- Continue scoping for additional intel.~n~- Complete optional prep work.~n~&lt;\ */, func_626(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_154 = -3;
	}
}

int func_865(int iParam0)//Position - 0x1F148
{
	if (!func_589(iParam0, 1))
	{
		return 0;
	}
	if (!func_17(iParam0, 8) && !func_17(iParam0, 9))
	{
		return 0;
	}
	if (!func_18(iParam0, 10))
	{
		return 0;
	}
	if (!func_17(iParam0, 13))
	{
		return 0;
	}
	if (!func_17(iParam0, 12))
	{
		return 0;
	}
	return 1;
}

void func_866(var uParam0)//Position - 0x1F1AE
{
	if (!uParam0->f_1080)
	{
		uParam0->f_1080.f_1 = AUDIO::GET_SOUND_ID();
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1080.f_1, func_37(19), uParam0->f_732.f_6, func_36(19), false, 0, false);
			uParam0->f_1080 = 1;
		}
	}
}

void func_867(int iParam0, int iParam1)//Position - 0x1F204
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_SCREEN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_868(var uParam0)//Position - 0x1F221
{
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1096) || (uParam0->f_1084 != iLocal_160 && Global_1978795[uParam0->f_1084 /*25*/].f_20)) || uParam0->f_1097)
	{
		return 1;
	}
	return 0;
}

void func_869(int iParam0, int iParam1)//Position - 0x1F26C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INITIAL_TAB_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_870()//Position - 0x1F289
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 2;
	}
	return 0;
}

void func_871(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4, char* sParam5, bool bParam6)//Position - 0x1F29D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TABS");
	func_432(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	func_432(sParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	func_432(sParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam6);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_872(var uParam0, int iParam1)//Position - 0x1F2D8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (!func_17(uParam0->f_1084, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_865(uParam0->f_1084))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_873(int iParam0)//Position - 0x1F331
{
	switch (iParam0)
	{
		case 0:
			return "H4P_INTEL_TAB" /* GXT: INTEL */;
		
		case 1:
			return "H4P_PREP_TAB" /* GXT: PREP */;
		
		case 2:
			return "H4P_FINALE_TAB" /* GXT: FINALE */;
		
		default:
	}
	return "";
}

void func_874(int iParam0, bool bParam1)//Position - 0x1F36B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_IS_HARD_MODE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_875(int iParam0)//Position - 0x1F388
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 12);
	}
	return 0;
}

int func_876(int iParam0)//Position - 0x1F3A7
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 3);
	}
	return 0;
}

void func_877(int iParam0, char* sParam1)//Position - 0x1F3C5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_LIST_TITLE");
	func_432(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_878(var uParam0)//Position - 0x1F3E2
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return "H4P_LIST_PREV" /* GXT: PREVIEW SELECTIONS */;
	}
	return "H4P_LIST_MAKE" /* GXT: MAKE SELECTIONS */;
}

void func_879(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1F40D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_MENU_IDS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_880(int iParam0, int iParam1, int iParam2)//Position - 0x1F454
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_COST");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_881(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x1F477
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PAYOUTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	func_432(sParam4);
	func_432(sParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_882()//Position - 0x1F4AC
{
	return "H4_LOOT_ADD" /* GXT: SECONDARY TARGETS */;
}

char* func_883(var uParam0)//Position - 0x1F4B8
{
	switch (func_519(uParam0->f_1084))
	{
		case 0:
			return "H4_LOOT_TEQ" /* GXT: SINSIMITO TEQUILA */;
		
		case 1:
			return "H4_LOOT_NKLC" /* GXT: RUBY NECKLACE */;
		
		case 2:
			return "H4_LOOT_BONDS" /* GXT: BEARER BONDS */;
		
		case 3:
			return "H4_LOOT_DIAM" /* GXT: PINK DIAMOND */;
		
		case 4:
			return "H4_LOOT_FILES" /* GXT: MADRAZO FILES */;
		
		case 5:
			return "H4_LOOT_STAT" /* GXT: PANTHER STATUE */;
		
		default:
	}
	return "";
}

int func_884(var uParam0)//Position - 0x1F520
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + (func_886(uParam0->f_1084, iVar1) * func_885(uParam0->f_1084, iVar1, 0, 0)));
		iVar1++;
	}
	return iVar0;
}

int func_885(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1F55D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_5, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_13, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_6, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_14, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_7, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_15, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_8, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_16, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_18, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_886(int iParam0, int iParam1)//Position - 0x1F768
{
	switch (iParam1)
	{
		case 0:
			return func_891(iParam0);
		
		case 1:
			return func_890(iParam0);
		
		case 2:
			return func_889(iParam0);
		
		case 3:
			return func_888(iParam0);
		
		case 4:
			return func_887(iParam0);
		
		default:
	}
	return 0;
}

int func_887(int iParam0)//Position - 0x1F7C3
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_23;
	}
	return 0;
}

int func_888(int iParam0)//Position - 0x1F7E3
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_22;
	}
	return 0;
}

int func_889(int iParam0)//Position - 0x1F803
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_21;
	}
	return 0;
}

int func_890(int iParam0)//Position - 0x1F823
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_20;
	}
	return 0;
}

int func_891(int iParam0)//Position - 0x1F843
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_19;
	}
	return 0;
}

int func_892(var uParam0)//Position - 0x1F863
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_895(func_519(uParam0->f_1084));
	fVar1 = func_893(func_894(func_875(uParam0->f_1084), 2, 1));
	iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar1));
	return iVar0;
}

float func_893(int iParam0)//Position - 0x1F89D
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_29988 /* Tunable: 1808919381 */;
		
		case 2:
			return Global_262145.f_29989 /* Tunable: 1759346392 */;
		
		default:
	}
	return 1f;
}

int func_894(bool bParam0, int iParam1, int iParam2)//Position - 0x1F8CD
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_895(int iParam0)//Position - 0x1F8E4
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_29982 /* Tunable: IH_PRIMARY_TARGET_VALUE_TEQUILA */;
		
		case 1:
			return Global_262145.f_29983 /* Tunable: IH_PRIMARY_TARGET_VALUE_PEARL_NECKLACE */;
		
		case 2:
			return Global_262145.f_29984 /* Tunable: IH_PRIMARY_TARGET_VALUE_BEARER_BONDS */;
		
		case 3:
			return Global_262145.f_29985 /* Tunable: IH_PRIMARY_TARGET_VALUE_PINK_DIAMOND */;
		
		case 4:
			return Global_262145.f_29986 /* Tunable: IH_PRIMARY_TARGET_VALUE_MADRAZO_FILES */;
		
		case 5:
			return Global_262145.f_29987 /* Tunable: IH_PRIMARY_TARGET_VALUE_SAPPHIRE_PANTHER_STATUE */;
		
		default:
	}
	return 0;
}

void func_896(var uParam0)//Position - 0x1F954
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (func_937(uParam0->f_1084, bVar0) && func_936(uParam0->f_1084, bVar0))
		{
			iVar3 = func_935(uParam0->f_1084, bVar0);
			func_931(uParam0->f_711, func_934(iVar3), -1, func_933(iVar3), 0, func_932(bVar0));
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (func_930(uParam0->f_1084, bVar1) && func_929(uParam0->f_1084, bVar1))
		{
			iVar3 = func_928(uParam0->f_1084, bVar1);
			func_931(uParam0->f_711, func_934(iVar3), -1, func_933(iVar3), 1, func_927(bVar1));
		}
		bVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (func_926(uParam0->f_1084, iVar2) && func_925(uParam0->f_1084, iVar2))
		{
			func_931(uParam0->f_711, 11, -1, 7, 1, func_924(iVar2));
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_395(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, 33, -1, 2, 0, func_918(func_919(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_389(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, 34, -1, 2, 0, func_912(func_913(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_401(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, 32, -1, 2, 0, func_906(func_907(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (func_383(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, func_905(iVar4, 0), func_905(iVar4, 1), func_904(iVar4), 0, func_903(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_381(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, func_902(iVar4, 0), func_902(iVar4, 1), 1, 0, func_901(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (func_379(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, func_900(iVar4, 0), func_900(iVar4, 1), 0, 1, func_899(iVar4));
		}
		iVar4++;
	}
	if (func_406(uParam0->f_1084))
	{
		func_931(uParam0->f_711, 31, -1, 2, 0, 4367.82f, -4579f, 23.06f);
	}
	if (func_408(uParam0->f_1084))
	{
		func_931(uParam0->f_711, 30, -1, 2, 0, 4480.7f, -4588.52f, 4.56f);
	}
	func_931(uParam0->f_711, 5, -1, 8, 0, 5020.6353f, -5746.534f, 31.93707f);
	if (func_387(uParam0->f_1084))
	{
		func_931(uParam0->f_711, 35, -1, 2, 0, func_897(func_898(uParam0->f_1084)));
	}
}

Vector3 func_897(int iParam0)//Position - 0x1FC86
{
	switch (iParam0)
	{
		case 1:
			return 4527.591f, -4526.633f, 3.211f;
		
		case 2:
			return 5152.974f, -4619.487f, 1.752f;
		
		case 3:
			return 5155.974f, -5132.699f, 1.312f;
		
		case 4:
			return 4900.456f, -5210.057f, 1.512f;
		
		case 5:
			return 4970.79f, -5695.73f, 18.888f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_898(int iParam0)//Position - 0x1FD10
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_34;
	}
	return 0;
}

Vector3 func_899(int iParam0)//Position - 0x1FD2E
{
	switch (iParam0)
	{
		case 0:
			return 4982.59f, -5711.01f, 18.86f;
		
		case 1:
			return 5031.86f, -5685.84f, 23.87f;
		
		case 2:
			return 5085.03f, -5732.67f, 14.8f;
		
		case 3:
			return 4992.24f, -5807.17f, 24.87f;
		
		case 4:
			return 4960.13f, -5785.66f, 19.96f;
		
		case 5:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_900(int iParam0, bool bParam1)//Position - 0x1FDD0
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 85;
			
			case 5:
				return 86;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 25;
			
			case 2:
				return 26;
			
			case 3:
				return 27;
			
			case 4:
				return 28;
			
			case 5:
				return 29;
			}
		
		default:
	}
	return -1;
}

Vector3 func_901(int iParam0)//Position - 0x1FE47
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 1:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 2:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 3:
			return 4533.25f, -4278.35f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_902(int iParam0, bool bParam1)//Position - 0x1FEB5
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 87;
			
			case 1:
				return 88;
			
			case 2:
				return 89;
			
			case 3:
				return 90;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 20;
			
			case 1:
				return 21;
			
			case 2:
				return 22;
			
			case 3:
				return 23;
			}
		
		default:
	}
	return -1;
}

Vector3 func_903(int iParam0)//Position - 0x1FF2C
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 3:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 4:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 2:
			return 4891.13f, -4925.02f, 9.31f;
		
		case 5:
			return 4820.73f, -4302.71f, 4.24f;
		
		case 6:
			return 5478.63f, -5847.74f, 19.54f;
		
		case 7:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_904(int iParam0)//Position - 0x1FFE6
{
	switch (iParam0)
	{
		case 1:
			return 9;
		
		default:
	}
	return 0;
}

int func_905(int iParam0, bool bParam1)//Position - 0x20003
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 77;
			
			case 1:
				return 78;
			
			case 2:
				return 79;
			
			case 3:
				return 80;
			
			case 4:
				return 81;
			
			case 5:
				return 82;
			
			case 6:
				return 83;
			
			case 7:
				return 84;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 12;
			
			case 1:
				return 13;
			
			case 2:
				return 14;
			
			case 3:
				return 15;
			
			case 4:
				return 16;
			
			case 5:
				return 17;
			
			case 6:
				return 18;
			
			case 7:
				return 19;
			}
		
		default:
	}
	return -1;
}

Vector3 func_906(int iParam0)//Position - 0x200D2
{
	switch (iParam0)
	{
		case 0:
			return 4534.709f, -4543.447f, 4.53f;
		
		case 1:
			return 4523.664f, -4511.79f, 4.184f;
		
		case 2:
			return 4076.849f, -4667.305f, 4.163f;
		
		case 3:
			return 4505.6f, -4653.089f, 10.456f;
		
		case 4:
			return 4805.025f, -4315.458f, 6.514f;
		
		case 5:
			return 5180.197f, -4670.979f, 6.231f;
		
		case 6:
			return 5098.02f, -4621.306f, 2.594f;
		
		case 7:
			return 5070.327f, -4638.299f, 2.902f;
		
		case 8:
			return 4955.743f, -5181.93f, 4.512f;
		
		case 9:
			return 5216.539f, -5126.448f, 5.984f;
		
		case 10:
			return 4879.029f, -5112.622f, 1.995f;
		
		case 11:
			return 4901.985f, -5348.011f, 9.409f;
		
		case 12:
			return 5362.94f, -5437.508f, 48.491f;
		
		case 13:
			return 5466.287f, -5232.051f, 27.065f;
		
		case 14:
			return 4754.99f, -5541.311f, 18.056f;
		
		case 15:
			return 5326.267f, -5266.071f, 32.237f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_907(int iParam0, int iParam1)//Position - 0x20264
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_911(iParam0);
			
			case 1:
				return func_910(iParam0);
			
			case 2:
				return func_909(iParam0);
			
			case 3:
				return func_908(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_908(int iParam0)//Position - 0x202B6
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 15);
			return 15;
		}
	}
	return -1;
}

int func_909(int iParam0)//Position - 0x20328
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 11);
			return 11;
		}
	}
	return -1;
}

int func_910(int iParam0)//Position - 0x2039A
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 7);
			return 7;
		}
	}
	return -1;
}

int func_911(int iParam0)//Position - 0x20404
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_912(int iParam0)//Position - 0x2046E
{
	switch (iParam0)
	{
		case 0:
			return 5163.384f, -4995.56f, 11.682f;
		
		case 1:
			return 4765.362f, -4778.338f, 2.781f;
		
		case 2:
			return 4502.198f, -4523.357f, 3.396f;
		
		case 3:
			return 4528.522f, -4536.311f, 6.558f;
		
		case 4:
			return 5098.933f, -4609.03f, 1.369f;
		
		case 5:
			return 5060.167f, -4589.7f, 1.9f;
		
		case 6:
			return 5148.113f, -4616.131f, 1.387f;
		
		case 7:
			return 5170.703f, -4675.337f, 1.439f;
		
		case 8:
			return 5116.664f, -5130.588f, 1.143f;
		
		case 9:
			return 5002.533f, -5125.336f, 1.955f;
		
		case 10:
			return 4949.935f, -5321.81f, 7.085f;
		
		case 11:
			return 5012.355f, -5203.456f, 1.516f;
		
		case 12:
			return 4923.873f, -5273.464f, 4.65f;
		
		case 13:
			return 5263.995f, -5435.548f, 64.881f;
		
		case 14:
			return 4886.995f, -5454.333f, 29.731f;
		
		case 15:
			return 5106.183f, -5524.682f, 53.239f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_913(int iParam0, int iParam1)//Position - 0x20600
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_917(iParam0);
			
			case 1:
				return func_916(iParam0);
			
			case 2:
				return func_915(iParam0);
			
			case 3:
				return func_914(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_914(int iParam0)//Position - 0x20652
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 15);
			return 15;
		}
	}
	return -1;
}

int func_915(int iParam0)//Position - 0x206C4
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 11);
			return 11;
		}
	}
	return -1;
}

int func_916(int iParam0)//Position - 0x20736
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 7);
			return 7;
		}
	}
	return -1;
}

int func_917(int iParam0)//Position - 0x207A0
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_918(int iParam0)//Position - 0x2080A
{
	switch (iParam0)
	{
		case 0:
			return 4896.678f, -4791.297f, 2.59f;
		
		case 1:
			return 4529.568f, -4703.347f, 3.134f;
		
		case 2:
			return 4493.661f, -4733.618f, 10.01f;
		
		case 3:
			return 3895.499f, -4695.022f, 5.547f;
		
		case 4:
			return 5103.035f, -4681.288f, 7.702f;
		
		case 5:
			return 5130.433f, -4610.441f, 11.724f;
		
		case 6:
			return 5109.232f, -4578.338f, 28.711f;
		
		case 7:
			return 4879.964f, -4487.782f, 9.922f;
		
		case 8:
			return 4901.395f, -5331.422f, 28.64f;
		
		case 9:
			return 4862.909f, -5158.419f, 2.283f;
		
		case 10:
			return 5124.89f, -5097.902f, 2.192f;
		
		case 11:
			return 4867.519f, -4642.129f, 13.571f;
		
		case 12:
			return 5568.438f, -5185.942f, 10.22f;
		
		case 13:
			return 5406.297f, -5170.91f, 31.198f;
		
		case 14:
			return 5265.993f, -5430.593f, 140.566f;
		
		case 15:
			return 5611.286f, -5654.516f, 9.051f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_919(int iParam0, int iParam1)//Position - 0x2099C
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_923(iParam0);
			
			case 1:
				return func_922(iParam0);
			
			case 2:
				return func_921(iParam0);
			
			case 3:
				return func_920(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_920(int iParam0)//Position - 0x209EE
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 15);
			return 15;
		}
	}
	return -1;
}

int func_921(int iParam0)//Position - 0x20A60
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 11);
			return 11;
		}
	}
	return -1;
}

int func_922(int iParam0)//Position - 0x20AD2
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 7);
			return 7;
		}
	}
	return -1;
}

int func_923(int iParam0)//Position - 0x20B3C
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_924(int iParam0)//Position - 0x20BA6
{
	switch (iParam0)
	{
		case 0:
			return 5081.14f, -5758.794f, 15.981f;
		
		case 1:
			return 5027.032f, -5738.977f, 18.027f;
		
		case 2:
			return 5008.773f, -5783.208f, 17.99f;
		
		case 3:
			return 5014.587f, -5751.069f, 29.006f;
		
		case 4:
			return 5004.83f, -5755.521f, 29.006f;
		
		case 5:
			return 4995.553f, -5748.032f, 15.002f;
		
		case 6:
			return 4997.112f, -5745.52f, 15.001f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_925(int iParam0, int iParam1)//Position - 0x20C60
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_18, iParam1);
	}
	return 0;
}

int func_926(int iParam0, int iParam1)//Position - 0x20C83
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_17, iParam1);
	}
	return 0;
}

Vector3 func_927(bool bParam0)//Position - 0x20CA6
{
	switch (bParam0)
	{
		case 0:
			return 5081.753f, -5754.63f, 15.764f;
		
		case 1:
			return 5082.945f, -5758.447f, 15.765f;
		
		case 2:
			return 5029.346f, -5733.933f, 17.81f;
		
		case 3:
			return 5029.777f, -5737.731f, 17.808f;
		
		case 4:
			return 5012.031f, -5788.325f, 17.773f;
		
		case 5:
			return 5006.233f, -5785.789f, 17.771f;
		
		case 6:
			return 4998.106f, -5752.379f, 14.783f;
		
		case 7:
			return 5003.947f, -5748.77f, 14.787f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_928(int iParam0, bool bParam1)//Position - 0x20D78
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_929(int iParam0, bool bParam1)//Position - 0x20DF0
{
	if (iParam0 != -1)
	{
		switch (func_928(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_13, bParam1);
			
			case 1:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_14, bParam1);
			
			case 2:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_15, bParam1);
			
			case 3:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_16, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_930(int iParam0, bool bParam1)//Position - 0x20E74
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_931(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, float fParam6)//Position - 0x20EEC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_WORLD_MAP_ICON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

Vector3 func_932(bool bParam0)//Position - 0x20F29
{
	switch (bParam0)
	{
		case 0:
			return 4447.822f, -4442.135f, 7.175f;
		
		case 1:
			return 4448.821f, -4444.858f, 7.182f;
		
		case 2:
			return 4435.688f, -4446.595f, 4.25f;
		
		case 3:
			return 4438.332f, -4445.811f, 4.267f;
		
		case 4:
			return 4506.064f, -4555.47f, 4.095f;
		
		case 5:
			return 4503.678f, -4556.323f, 4.096f;
		
		case 6:
			return 5064.635f, -4589.759f, 2.801f;
		
		case 7:
			return 5067.557f, -4590.849f, 2.795f;
		
		case 8:
			return 5092.602f, -4680.137f, 2.35f;
		
		case 9:
			return 5093.195f, -4683.354f, 2.35f;
		
		case 10:
			return 5091.02f, -4685.678f, 2.351f;
		
		case 11:
			return 5136.102f, -4613.863f, 2.401f;
		
		case 12:
			return 5131.834f, -4612.648f, 2.404f;
		
		case 13:
			return 5329.472f, -5272.372f, 33.13f;
		
		case 14:
			return 5328.096f, -5270.587f, 33.129f;
		
		case 15:
			return 5196.664f, -5133.933f, 3.284f;
		
		case 16:
			return 5196.121f, -5136.333f, 3.285f;
		
		case 17:
			return 5000.313f, -5163.344f, 2.697f;
		
		case 18:
			return 5001.3f, -5165.434f, 2.697f;
		
		case 19:
			return 4959.845f, -5107.064f, 2.911f;
		
		case 20:
			return 4962.675f, -5106.771f, 2.913f;
		
		case 21:
			return 4963.856f, -5109.32f, 2.912f;
		
		case 22:
			return 4926.316f, -5244.514f, 2.461f;
		
		case 23:
			return 4924.385f, -5245.882f, 2.461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_933(int iParam0)//Position - 0x2117B
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 3;
		
		case 2:
			return 6;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

int func_934(int iParam0)//Position - 0x211B3
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 8;
		
		case 2:
			return 9;
		
		case 3:
			return 10;
		
		default:
	}
	return -1;
}

int func_935(int iParam0, bool bParam1)//Position - 0x211EE
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_936(int iParam0, bool bParam1)//Position - 0x21266
{
	if (iParam0 != -1)
	{
		switch (func_935(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_5, bParam1);
			
			case 1:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_6, bParam1);
			
			case 2:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_7, bParam1);
			
			case 3:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_8, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_937(int iParam0, bool bParam1)//Position - 0x212EA
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_938(var uParam0)//Position - 0x21362
{
	int iVar0;
	
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		func_939(uParam0->f_711, Local_111[iVar0 /*14*/]);
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (Local_111[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_111[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_112.f_0)
	{
		if (Local_112[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_112[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_113[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_114.f_0)
	{
		if (Local_114[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_114[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_116.f_0)
	{
		if (Local_116[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_116[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_115.f_0)
	{
		if (Local_115[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_115[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_117.f_0)
	{
		if (Local_117[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_117[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_118.f_0)
	{
		if (Local_118[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_118[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_119.f_0)
	{
		if (Local_119[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_119[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_120.f_0)
	{
		if (Local_120[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_120[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_121.f_0)
	{
		if (Local_121[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_121[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_122.f_0)
	{
		if (Local_122[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_122[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_123.f_0)
	{
		if (Local_123[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_123[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_124.f_0)
	{
		if (Local_124[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_124[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_125.f_0)
	{
		if (Local_125[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_125[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_126.f_0)
	{
		if (Local_126[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_126[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_127.f_0)
	{
		if (Local_127[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_127[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_128.f_0)
	{
		if (Local_128[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_128[iVar0 /*9*/], 0);
			if (Local_128[iVar0 /*9*/].f_2 != 98 || func_415(uParam0->f_1084))
			{
				func_570(uParam0->f_711, Local_128[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_129.f_0)
	{
		if (Local_129[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_129[iVar0 /*9*/], 0);
			if (func_416(uParam0->f_1084, func_609(Local_129[iVar0 /*9*/].f_2)))
			{
				func_570(uParam0->f_711, Local_129[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (Local_130[iVar0 /*9*/])
			{
				func_581(uParam0->f_711, Local_130[iVar0 /*9*/], 1);
			}
			iVar0++;
		}
	}
}

void func_939(int iParam0, struct<14> Param1)//Position - 0x217E6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_SETUP_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_3);
	func_432(Param1.f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	func_432(Param1.f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_11);
	if (Param1.f_12 != -2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_12);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_13);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_940(var uParam0)//Position - 0x2186F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_872(uParam0, 2))
	{
		return;
	}
	func_583(uParam0, &(Local_122[0 /*9*/]), 0, 63);
	func_583(uParam0, &(Local_122[1 /*9*/]), 0, 64);
	func_583(uParam0, &(Local_122[2 /*9*/]), 0, 65);
	func_583(uParam0, &(Local_122[3 /*9*/]), 0, 66);
	func_583(uParam0, &(Local_122[4 /*9*/]), 0, 67);
	func_583(uParam0, &(Local_122[5 /*9*/]), 0, 68);
	func_583(uParam0, &(Local_122[6 /*9*/]), 0, 69);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_583(uParam0, &(Local_122[7 /*9*/]), 0, 70);
	}
	iVar0 = 0;
	if (func_17(uParam0->f_1084, 7))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 71);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 1) && func_17(uParam0->f_1084, 6))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 72);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 5))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 73);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 2) && func_17(uParam0->f_1084, 6))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 74);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 3))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 75);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 4))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 76);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar2 = (77 + iVar1);
		if (func_383(uParam0->f_1084, func_384(iVar2)))
		{
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	if (func_17(uParam0->f_1084, 8))
	{
		func_583(uParam0, &(Local_125[iVar0 /*9*/]), 65, 85);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		func_583(uParam0, &(Local_125[iVar0 /*9*/]), 65, 86);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_381(uParam0->f_1084, func_382(iVar2)))
		{
			func_583(uParam0, &(Local_126[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	func_583(uParam0, &(Local_127[0 /*9*/]), 67, 91);
	func_583(uParam0, &(Local_127[1 /*9*/]), 67, 92);
	if (func_378(uParam0->f_1084) == 1)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 93);
	}
	else if (func_378(uParam0->f_1084) == 2)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 94);
	}
	else if (func_378(uParam0->f_1084) == 3)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 95);
	}
	else if (func_378(uParam0->f_1084) == 4)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 96);
	}
	else if (func_378(uParam0->f_1084) == 5)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 97);
	}
	func_583(uParam0, &(Local_128[1 /*9*/]), 68, 98);
	bLocal_141 = func_415(uParam0->f_1084);
	func_583(uParam0, &(Local_129[0 /*9*/]), 69, 99);
	func_583(uParam0, &(Local_129[1 /*9*/]), 69, 100);
	func_583(uParam0, &(Local_129[2 /*9*/]), 69, 101);
	func_583(uParam0, &(Local_129[3 /*9*/]), 69, 102);
	func_583(uParam0, &(Local_129[4 /*9*/]), 69, 103);
	func_583(uParam0, &(Local_129[5 /*9*/]), 69, 104);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_583(uParam0, &(Local_130[0 /*9*/]), 70, 105);
		func_583(uParam0, &(Local_130[1 /*9*/]), 70, 106);
		func_583(uParam0, &(Local_130[2 /*9*/]), 70, 107);
		func_583(uParam0, &(Local_130[3 /*9*/]), 70, 108);
	}
}

void func_941(var uParam0)//Position - 0x21C58
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_872(uParam0, 1))
	{
		return;
	}
	func_942(uParam0, &(Local_117[0 /*14*/]), 1, 0, 36, 0);
	func_942(uParam0, &(Local_117[1 /*14*/]), 1, 0, 37, 0);
	func_942(uParam0, &(Local_117[2 /*14*/]), 1, 0, 38, 0);
	func_942(uParam0, &(Local_117[3 /*14*/]), 1, 0, 39, 0);
	func_942(uParam0, &(Local_118[0 /*14*/]), 1, 36, 40, 0);
	func_942(uParam0, &(Local_118[1 /*14*/]), 1, 36, 41, 0);
	func_942(uParam0, &(Local_118[2 /*14*/]), 1, 36, 42, 0);
	func_942(uParam0, &(Local_118[3 /*14*/]), 1, 36, 43, 0);
	func_942(uParam0, &(Local_118[4 /*14*/]), 1, 36, 44, 0);
	func_942(uParam0, &(Local_118[5 /*14*/]), 1, 36, 45, 0);
	func_942(uParam0, &(Local_118[6 /*14*/]), 1, 41, 46, 0);
	func_942(uParam0, &(Local_118[7 /*14*/]), 1, 41, 47, 0);
	func_942(uParam0, &(Local_118[8 /*14*/]), 1, 43, 48, 0);
	func_942(uParam0, &(Local_118[9 /*14*/]), 1, 43, 49, 0);
	func_942(uParam0, &(Local_119[0 /*14*/]), 1, 37, 50, 0);
	func_942(uParam0, &(Local_119[1 /*14*/]), 1, 37, 51, 0);
	func_942(uParam0, &(Local_119[2 /*14*/]), 1, 37, 52, 0);
	func_942(uParam0, &(Local_119[3 /*14*/]), 1, 37, 53, 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (54 + iVar1);
		if (!func_17(uParam0->f_1084, 13) || func_378(uParam0->f_1084) == func_607(iVar2))
		{
			func_942(uParam0, &(Local_120[iVar0 /*14*/]), 1, 38, iVar2, 0);
			iVar0++;
		}
		iVar1++;
	}
	func_942(uParam0, &(Local_120[iVar0 /*14*/]), 1, 38, 59, 0);
	func_942(uParam0, &(Local_121[0 /*14*/]), 1, 39, 60, 0);
	func_942(uParam0, &(Local_121[1 /*14*/]), 1, 39, 61, 0);
	func_942(uParam0, &(Local_121[2 /*14*/]), 1, 39, 62, 0);
}

void func_942(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x21E3D
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_3 = iParam4;
	if (bParam5)
	{
		uParam1->f_4 = "CH_LIST_BLANK" /* GXT: ??? */;
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 2;
		uParam1->f_8 = 0;
		uParam1->f_9 = "CH_LIST_BLANK" /* GXT: ??? */;
		uParam1->f_10 = "";
		uParam1->f_11 = 0;
		uParam1->f_12 = -1;
		uParam1->f_13 = -1;
	}
	else
	{
		uParam1->f_4 = func_590(uParam0, iParam4);
		uParam1->f_5 = func_960(uParam0, iParam4);
		uParam1->f_6 = func_959(uParam0, iParam4);
		if (func_370(uParam0, iParam4))
		{
			uParam1->f_7 = func_585(uParam0, iParam4);
		}
		else
		{
			uParam1->f_7 = 0;
		}
		uParam1->f_8 = func_958(uParam0, iParam4);
		uParam1->f_9 = func_588(uParam0, iParam4);
		uParam1->f_10 = func_586(uParam0, iParam4);
		uParam1->f_11 = func_584(iParam4);
		if (func_946(uParam0, iParam4) != -2)
		{
			uParam1->f_12 = func_946(uParam0, iParam4);
			uParam1->f_13 = func_943(uParam0, iParam4);
		}
	}
}

int func_943(var uParam0, int iParam1)//Position - 0x21F35
{
	switch (iParam1)
	{
		case 2:
			if (func_823(uParam0->f_1084))
			{
				return func_945(uParam0->f_1084);
			}
			return -1;
		
		case 3:
			return 8;
		
		case 4:
			return 4;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 7:
			if (func_944(uParam0->f_1084, 0, 0, 0) > 0 && func_885(uParam0->f_1084, 0, 0, 0) == func_944(uParam0->f_1084, 0, 0, 0))
			{
				return func_944(uParam0->f_1084, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_944(uParam0->f_1084, 1, 0, 0) > 0 && func_885(uParam0->f_1084, 1, 0, 0) == func_944(uParam0->f_1084, 1, 0, 0))
			{
				return func_944(uParam0->f_1084, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_944(uParam0->f_1084, 2, 0, 0) > 0 && func_885(uParam0->f_1084, 2, 0, 0) == func_944(uParam0->f_1084, 2, 0, 0))
			{
				return func_944(uParam0->f_1084, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_944(uParam0->f_1084, 3, 0, 0) > 0 && func_885(uParam0->f_1084, 3, 0, 0) == func_944(uParam0->f_1084, 3, 0, 0))
			{
				return func_944(uParam0->f_1084, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_944(uParam0->f_1084, 4, 0, 0) > 0 && func_885(uParam0->f_1084, 4, 0, 0) == func_944(uParam0->f_1084, 4, 0, 0))
			{
				return func_944(uParam0->f_1084, 4, 0, 0);
			}
			break;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 33:
			return 4;
		
		case 34:
			return 4;
		
		case 32:
			return 4;
		
		case 35:
			return 1;
		
		case 36:
			if (func_383(uParam0->f_1084, 5) || func_383(uParam0->f_1084, 6))
			{
				return 6;
			}
			return 5;
		
		case 37:
			if (!func_383(uParam0->f_1084, 7))
			{
				return 3;
			}
			return 4;
		
		case 38:
			return 1;
		
		case 39:
			return 3;
	}
	return -2;
}

int func_944(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2218C
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_1, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_9, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_2, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_10, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_3, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_11, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_4, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_12, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_17, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_945(int iParam0)//Position - 0x22397
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = (iVar0 + func_944(iParam0, 0, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 1, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 2, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 3, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 4, 0, 0));
	}
	return iVar0;
}

int func_946(var uParam0, int iParam1)//Position - 0x223ED
{
	switch (iParam1)
	{
		case 2:
			if (func_823(uParam0->f_1084))
			{
				return func_945(uParam0->f_1084);
			}
			return -1;
		
		case 3:
			return func_957(uParam0);
		
		case 4:
			return func_956(uParam0);
		
		case 5:
			return func_955(uParam0);
		
		case 6:
			return func_954(uParam0);
		
		case 7:
			if (func_944(uParam0->f_1084, 0, 0, 0) > 0 && func_885(uParam0->f_1084, 0, 0, 0) == func_944(uParam0->f_1084, 0, 0, 0))
			{
				return func_944(uParam0->f_1084, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_944(uParam0->f_1084, 1, 0, 0) > 0 && func_885(uParam0->f_1084, 1, 0, 0) == func_944(uParam0->f_1084, 1, 0, 0))
			{
				return func_944(uParam0->f_1084, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_944(uParam0->f_1084, 2, 0, 0) > 0 && func_885(uParam0->f_1084, 2, 0, 0) == func_944(uParam0->f_1084, 2, 0, 0))
			{
				return func_944(uParam0->f_1084, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_944(uParam0->f_1084, 3, 0, 0) > 0 && func_885(uParam0->f_1084, 3, 0, 0) == func_944(uParam0->f_1084, 3, 0, 0))
			{
				return func_944(uParam0->f_1084, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_944(uParam0->f_1084, 4, 0, 0) > 0 && func_885(uParam0->f_1084, 4, 0, 0) == func_944(uParam0->f_1084, 4, 0, 0))
			{
				return func_944(uParam0->f_1084, 4, 0, 0);
			}
			break;
		
		case 30:
			return func_953(func_408(uParam0->f_1084));
		
		case 31:
			return func_953(func_406(uParam0->f_1084));
		
		case 33:
			return func_952(uParam0);
		
		case 34:
			return func_951(uParam0);
		
		case 32:
			return func_950(uParam0);
		
		case 35:
			return func_953(func_387(uParam0->f_1084));
		
		case 36:
			return func_949(uParam0);
		
		case 37:
			return func_948(uParam0);
		
		case 38:
			if (func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			return 0;
		
		case 39:
			return func_947(uParam0);
	}
	return -2;
}

int func_947(var uParam0)//Position - 0x22678
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 14))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 15))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 16))
	{
		iVar0++;
	}
	return iVar0;
}

int func_948(var uParam0)//Position - 0x226BE
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 8))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 11))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 12))
	{
		iVar0++;
	}
	return iVar0;
}

int func_949(var uParam0)//Position - 0x22718
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 7))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 1) && func_17(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 5))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 2) && func_17(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 3))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_950(var uParam0)//Position - 0x227B2
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_401(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_951(var uParam0)//Position - 0x227E2
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_389(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_952(var uParam0)//Position - 0x22812
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_395(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_953(bool bParam0)//Position - 0x22842
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_954(var uParam0)//Position - 0x22854
{
	int iVar0;
	
	if (func_820(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_819(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_818(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_387(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_408(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_406(uParam0->f_1084))
	{
		iVar0++;
	}
	return iVar0;
}

int func_955(var uParam0)//Position - 0x228CA
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_379(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_956(var uParam0)//Position - 0x228FB
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_381(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_957(var uParam0)//Position - 0x2292C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_383(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_958(var uParam0, int iParam1)//Position - 0x2295D
{
	if (func_370(uParam0, iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 37:
		case 38:
			return 1;
		
		case 36:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			if (!func_589(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		
		case 50:
		case 53:
			if (!func_17(uParam0->f_1084, 8) && !func_17(uParam0->f_1084, 9))
			{
				return 1;
			}
			break;
		
		case 51:
		case 52:
			return 1;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (!func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_959(var uParam0, int iParam1)//Position - 0x22A42
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 53:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		default:
	}
	return 0;
}

int func_960(var uParam0, int iParam1)//Position - 0x22CBE
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return func_953(func_824(uParam0->f_1084, 0));
		
		case 8:
			return func_953(func_824(uParam0->f_1084, 1));
		
		case 9:
			return func_953(func_824(uParam0->f_1084, 2));
		
		case 10:
			return func_953(func_824(uParam0->f_1084, 3));
		
		case 11:
			return func_953(func_961(uParam0->f_1084));
		
		case 12:
			return func_953(func_383(uParam0->f_1084, 0));
		
		case 13:
			return func_953(func_383(uParam0->f_1084, 1));
		
		case 14:
			return func_953(func_383(uParam0->f_1084, 2));
		
		case 15:
			return func_953(func_383(uParam0->f_1084, 3));
		
		case 16:
			return func_953(func_383(uParam0->f_1084, 4));
		
		case 17:
			return func_953(func_383(uParam0->f_1084, 5));
		
		case 18:
			return func_953(func_383(uParam0->f_1084, 6));
		
		case 19:
			return func_953(func_383(uParam0->f_1084, 7));
		
		case 20:
			return func_953(func_381(uParam0->f_1084, 0));
		
		case 21:
			return func_953(func_381(uParam0->f_1084, 1));
		
		case 22:
			return func_953(func_381(uParam0->f_1084, 2));
		
		case 23:
			return func_953(func_381(uParam0->f_1084, 3));
		
		case 30:
			return func_953(func_408(uParam0->f_1084));
		
		case 31:
			return func_953(func_406(uParam0->f_1084));
		
		case 32:
			return func_953(func_820(uParam0->f_1084));
		
		case 33:
			return func_953(func_819(uParam0->f_1084));
		
		case 34:
			return func_953(func_818(uParam0->f_1084));
		
		case 35:
			return func_953(func_387(uParam0->f_1084));
		
		case 24:
			return func_953(func_379(uParam0->f_1084, 0));
		
		case 25:
			return func_953(func_379(uParam0->f_1084, 1));
		
		case 26:
			return func_953(func_379(uParam0->f_1084, 2));
		
		case 27:
			return func_953(func_379(uParam0->f_1084, 3));
		
		case 28:
			return func_953(func_379(uParam0->f_1084, 4));
		
		case 29:
			return func_953(func_379(uParam0->f_1084, 5));
		
		case 36:
			if (func_589(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (((func_18(uParam0->f_1084, 8) || func_18(uParam0->f_1084, 9)) && func_18(uParam0->f_1084, 10)) && func_18(uParam0->f_1084, 11))
			{
				return 1;
			}
			break;
		
		case 38:
			if (func_18(uParam0->f_1084, 12))
			{
				return 1;
			}
			break;
		
		case 39:
			if ((func_18(uParam0->f_1084, 13) && func_18(uParam0->f_1084, 14)) && func_18(uParam0->f_1084, 15))
			{
				return 1;
			}
			break;
		
		case 40:
			return func_953(func_18(uParam0->f_1084, 1));
		
		case 41:
			if (func_18(uParam0->f_1084, 2) && func_18(uParam0->f_1084, 7))
			{
				return 1;
			}
			break;
		
		case 42:
			return func_953(func_18(uParam0->f_1084, 3));
		
		case 43:
			if (func_18(uParam0->f_1084, 4) && func_18(uParam0->f_1084, 7))
			{
				return 2;
			}
			break;
		
		case 44:
			return func_953(func_18(uParam0->f_1084, 5));
		
		case 45:
			return func_953(func_18(uParam0->f_1084, 6));
		
		case 46:
			return func_953(func_18(uParam0->f_1084, 2));
		
		case 47:
			return func_953(func_18(uParam0->f_1084, 7));
		
		case 48:
			return func_953(func_18(uParam0->f_1084, 4));
		
		case 49:
			return func_953(func_18(uParam0->f_1084, 7));
		
		case 50:
			return func_953(func_18(uParam0->f_1084, 8));
		
		case 53:
			return func_953(func_18(uParam0->f_1084, 9));
		
		case 51:
			return func_953(func_18(uParam0->f_1084, 10));
		
		case 52:
			return func_953(func_18(uParam0->f_1084, 11));
		
		case 54:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 1));
		
		case 55:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 2));
		
		case 56:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 3));
		
		case 57:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 4));
		
		case 58:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 5));
		
		case 59:
			return func_953(func_415(uParam0->f_1084));
		
		case 60:
			return func_953(func_18(uParam0->f_1084, 13));
		
		case 61:
			return func_953(func_18(uParam0->f_1084, 14));
		
		case 62:
			return func_953(func_18(uParam0->f_1084, 15));
	}
	return 0;
}

int func_961(int iParam0)//Position - 0x232EA
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_17 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_18;
	}
	return 0;
}

void func_962(var uParam0)//Position - 0x23319
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_942(uParam0, &(Local_111[0 /*14*/]), 0, 0, 1, 0);
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		return;
	}
	func_942(uParam0, &(Local_111[1 /*14*/]), 0, 0, 2, 0);
	func_942(uParam0, &(Local_111[2 /*14*/]), 0, 0, 3, 0);
	func_942(uParam0, &(Local_111[3 /*14*/]), 0, 0, 4, 0);
	func_942(uParam0, &(Local_111[4 /*14*/]), 0, 0, 5, 0);
	func_942(uParam0, &(Local_111[5 /*14*/]), 0, 0, 6, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar2 = (7 + iVar0);
		if (func_385(uParam0->f_1084, func_963(iVar2), 0, 0))
		{
			func_942(uParam0, &(Local_114[iVar1 /*14*/]), 0, 2, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_942(uParam0, &(Local_114[iVar1 /*14*/]), 0, 2, 7, 1);
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = (12 + iVar0);
		if (func_383(uParam0->f_1084, func_384(iVar2)))
		{
			func_942(uParam0, &(Local_112[iVar1 /*14*/]), 0, 3, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (20 + iVar0);
		if (func_381(uParam0->f_1084, func_382(iVar2)))
		{
			func_942(uParam0, &(Local_113[iVar1 /*14*/]), 0, 4, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = (24 + iVar0);
		if (func_379(uParam0->f_1084, func_380(iVar2)))
		{
			func_942(uParam0, &(Local_116[iVar1 /*14*/]), 0, 5, iVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_408(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 30, 0);
		iVar1++;
	}
	if (func_406(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 31, 0);
		iVar1++;
	}
	if (func_400(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 32, 0);
		iVar1++;
	}
	if (func_394(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 33, 0);
		iVar1++;
	}
	if (func_388(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 34, 0);
		iVar1++;
	}
	if (func_387(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 35, 0);
		iVar1++;
	}
	if (iVar1 == 0)
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 32, 1);
	}
}

int func_963(int iParam0)//Position - 0x235BB
{
	switch (iParam0)
	{
		case 7:
			return 0;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return -1;
}

void func_964(var uParam0)//Position - 0x235FD
{
	if (iLocal_150 == 4)
	{
		iLocal_150 = 5;
	}
}

void func_965(var uParam0)//Position - 0x23610
{
	if (iLocal_150 == 0)
	{
		iLocal_150 = 1;
	}
}

char* func_966()//Position - 0x23623
{
	if (!func_362(iLocal_160) && !func_17(iLocal_160, 0))
	{
		return "HIP_PROMPT2" /* GXT: Press ~INPUT_CONTEXT~ to access the Planning Screen ~HUD_COLOUR_GREEN~~BLIP_MP_HEIST~~s~ and begin the setup for The Cayo Perico Heist. */;
	}
	return "HIP_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to use the Planning Screen. */;
}

int func_967()//Position - 0x2364F
{
	if (iLocal_150 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_159, 1561.1489f, 386.04288f, -49.685326f, 1f, 0.65f, 1f, false, true, 0) && func_968(ENTITY::GET_ENTITY_HEADING(iLocal_159), 180f, 60f))
	{
		return 1;
	}
	return 0;
}

int func_968(float fParam0, float fParam1, float fParam2)//Position - 0x236A4
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_969()//Position - 0x23719
{
	return func_229(PLAYER::PLAYER_ID());
}

int func_970()//Position - 0x23729
{
	if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f)) < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_971()//Position - 0x2374E
{
	return 0;
}

Vector3 func_972()//Position - 0x23757
{
	return func_973();
}

Vector3 func_973()//Position - 0x23763
{
	return 1561.0537f, 385.9017f, -50.6854f;
}

int func_974()//Position - 0x2377A
{
	return 0;
}

int func_975()//Position - 0x23783
{
	return iLocal_172;
}

void func_976(var uParam0)//Position - 0x2378E
{
	if (func_979(uParam0) || func_978())
	{
		if (!uParam0->f_1091 && !func_978())
		{
			func_977(uParam0, 5);
			uParam0->f_1091 = 1;
		}
		else if (uParam0->f_726 == 5 || func_978())
		{
			func_461(2);
			uParam0->f_1091 = 0;
		}
	}
}

void func_977(var uParam0, int iParam1)//Position - 0x237EE
{
	if (uParam0->f_726 != iParam1)
	{
		uParam0->f_726.f_1 = uParam0->f_726;
		MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
		MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
		uParam0->f_726 = iParam1;
		if (uParam0->f_726 == 7)
		{
			uParam0->f_726 = 5;
		}
	}
}

int func_978()//Position - 0x23846
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_117() && func_68() == 1)
	{
		return 1;
	}
	if (Global_1977693.f_1095)
	{
		return 1;
	}
	return 0;
}

int func_979(var uParam0)//Position - 0x2387F
{
	if (BitTest(uParam0->f_1085, 7))
	{
		return 1;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		return 1;
	}
	if (func_980())
	{
		return 1;
	}
	if (Local_161.f_31 != 0)
	{
		Call_Loc(Local_161.f_31);
		if (StackVal)
		{
			return 1;
		}
	}
	return 0;
}

bool func_980()//Position - 0x238C6
{
	return Global_2683862.f_696;
}

void func_981()//Position - 0x238D5
{
	iLocal_159 = PLAYER::PLAYER_PED_ID();
	iLocal_160 = PLAYER::PLAYER_ID();
}

void func_982(var uParam0)//Position - 0x238EB
{
	func_993(uParam0);
	func_991();
	func_984();
	func_112();
	func_983();
	if (PLAYER::PLAYER_ID() != -1 && Global_1978795[PLAYER::PLAYER_ID() /*25*/].f_20)
	{
		Global_1978795[PLAYER::PLAYER_ID() /*25*/].f_20 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_983()//Position - 0x23934
{
	if (Global_1978793)
	{
		Global_1978793 = 0;
	}
	if (iLocal_145)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("HS4F_INT");
	}
}

void func_984()//Position - 0x23956
{
	func_990(&Global_1977693);
	func_989(&(Global_1977693.f_726));
	func_988(&(Global_1977693.f_732));
	func_987(&(Global_1977693.f_741));
	func_986(&(Global_1977693.f_806));
	func_985(&(Global_1977693.f_820));
	Global_1977693.f_1082 = -1;
	Global_1977693.f_1084 = func_15();
	Global_1977693.f_1085 = 0;
	Global_1977693.f_1094 = 0;
	Global_1977693.f_1083 = -1;
	Global_1977693.f_1095 = 0;
}

void func_985(var uParam0)//Position - 0x239D0
{
	struct<3> Var0;
	
	*uParam0 = { Var0 };
}

void func_986(var uParam0)//Position - 0x239E0
{
	struct<14> Var0;
	
	*uParam0 = { Var0 };
}

void func_987(var uParam0)//Position - 0x239F2
{
	struct<65> Var0;
	
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_988(var uParam0)//Position - 0x23A15
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_989(var uParam0)//Position - 0x23A27
{
	struct<6> Var0;
	
	*uParam0 = { Var0 };
}

void func_990(var uParam0)//Position - 0x23A37
{
	struct<726> Var0;
	
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_701 = 1;
	Var0.f_702 = 1;
	*uParam0 = { Var0 };
}

void func_991()//Position - 0x23A70
{
	if (Local_161.f_7 != 0)
	{
		Call_Loc(Local_161.f_7);
		func_992(StackVal);
	}
}

void func_992(char* sParam0)//Position - 0x23A8B
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sParam0);
	}
}

void func_993(var uParam0)//Position - 0x23AA3
{
	if (uParam0->f_1080)
	{
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_1080.f_1);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_1080.f_1);
			uParam0->f_1080.f_1 = -1;
			uParam0->f_1080 = 0;
		}
	}
}

int func_994(var uParam0)//Position - 0x23AE2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 8);
	}
	if (BitTest(uParam0->f_1085, 9))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_995();
	return 1;
}

void func_995()//Position - 0x23B2B
{
	if (!Global_1978793)
	{
		Global_1978793 = 1;
	}
}

