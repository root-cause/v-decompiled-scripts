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
	int iLocal_63 = 0;
	struct<6> Local_64 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 32;
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
	var uLocal_107 = 32;
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
	int iLocal_143 = 0;
	int iLocal_144[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_202 = 16;
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
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
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
	int iLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
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
	iLocal_63 = 600000;
	iLocal_367 = -1;
	func_321(ScriptParam_0);
	while (true)
	{
		func_320();
		if (func_313() || !func_312(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_310();
		}
		switch (func_309(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_308() == 2)
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
				}
				else if (func_308() == 6)
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 2:
				if (func_308() == 2)
				{
					if (!func_307())
					{
						if (func_35(&uLocal_177))
						{
						}
					}
					else
					{
						if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 4))
						{
							func_34(1);
							func_33(0);
							func_26();
						}
						func_25(8, 0);
					}
				}
				else if (func_308() == 6)
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 5:
				func_24(&(Local_64.f_3));
				if (func_23(&(Local_64.f_3)))
				{
					iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
				}
				break;
			
			case 3:
				iLocal_144[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
			
			case 6:
				func_310();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_308())
			{
				case 0:
					Local_64.f_0 = 2;
					break;
				
				case 2:
					func_22();
					func_2();
					if (func_1())
					{
						Local_64.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1DC
{
	if (BitTest(Local_64.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1F2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_64.f_5.f_2)
		{
			case 0:
				if (!BitTest(Local_64.f_5.f_3, 1))
				{
					bVar0 = false;
					while (bVar0 <= 31)
					{
						Local_64.f_5.f_5[bVar0] = -1;
						Local_64.f_5.f_38[bVar0] = -1;
						bVar0++;
					}
					MISC::SET_BIT(&(Local_64.f_5.f_3), 1);
				}
				if (Global_2794162.f_1825)
				{
					MISC::SET_BIT(&(Local_64.f_5.f_3), 0);
					Global_2794162.f_1825 = 0;
				}
				if (BitTest(Local_64.f_5.f_3, 1))
				{
					if (BitTest(Local_64.f_5.f_3, 0))
					{
						if (!func_21(&(Local_64.f_5)) || func_20(&(Local_64.f_5), 5000, 0))
						{
							if (Local_64.f_5.f_4 == 0)
							{
								Local_64.f_5.f_72 = 0;
								MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 2);
								MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 3);
							}
							bVar0 = Local_64.f_5.f_4;
							iVar1 = bVar0;
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (BitTest(Global_1853988[bVar0 /*867*/].f_143, 0))
								{
									MISC::SET_BIT(&(Local_64.f_5.f_73), iVar1);
									Local_64.f_5.f_72++;
									if (BitTest(Global_1853988[bVar0 /*867*/].f_143, 6))
									{
										Local_64.f_5.f_5[bVar0] = -1;
									}
								}
							}
							Local_64.f_5.f_4++;
							if (Local_64.f_5.f_4 == 32)
							{
								func_19(&(Local_64.f_5));
								func_18(&(Local_64.f_5), 0, 0);
								if (Local_64.f_5.f_72 >= 1)
								{
									Local_64.f_5.f_2 = 1;
									MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 2);
								}
								Local_64.f_5.f_4 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Local_64.f_5.f_4 == 0)
				{
					MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 2);
				}
				bVar0 = Local_64.f_5.f_4;
				if (BitTest(Local_64.f_5.f_73, bVar0))
				{
					if (func_312(bVar0, 1, 1))
					{
						if (!BitTest(Global_1853988[bVar0 /*867*/].f_143, 8))
						{
							if (BitTest(Global_1853988[bVar0 /*867*/].f_143, 0))
							{
								if (Local_64.f_5.f_5[bVar0] == -1)
								{
									if (BitTest(Global_1853988[bVar0 /*867*/].f_143, 6))
									{
										Local_64.f_5.f_5[bVar0] = -1;
									}
									iVar2 = func_17(bVar0, &(Local_64.f_5.f_73));
									if (iVar2 > -1)
									{
										Local_64.f_5.f_5[bVar0] = iVar2;
										Local_64.f_5.f_5[iVar2] = bVar0;
										MISC::SET_BIT(&(Local_64.f_5.f_3), 2);
									}
								}
								else
								{
									MISC::SET_BIT(&(Local_64.f_5.f_3), 2);
								}
							}
						}
					}
				}
				Local_64.f_5.f_4++;
				if (Local_64.f_5.f_4 == 32)
				{
					if (BitTest(Local_64.f_5.f_3, 2))
					{
					}
					Local_64.f_5.f_4 = 0;
					Local_64.f_5.f_2 = 2;
					MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 3);
					func_16();
				}
				break;
			
			case 2:
				if (Local_64.f_5.f_4 == 0)
				{
					MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 3);
				}
				bVar0 = Local_64.f_5.f_4;
				if (BitTest(Local_64.f_5.f_73, bVar0))
				{
					if (BitTest(Global_1853988[bVar0 /*867*/].f_143, 0))
					{
						if (func_312(bVar0, 1, 1))
						{
							if (Local_64.f_5.f_38[bVar0] == -1)
							{
								iVar3 = Local_64.f_5.f_5[bVar0];
								if (iVar3 > -1)
								{
									if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 0))
									{
										if (Local_64.f_5.f_38[bVar0] == -1)
										{
											iVar2 = func_10(bVar0, &(Local_64.f_5.f_71));
											if (iVar2 > -1)
											{
												Local_64.f_5.f_38[bVar0] = iVar2;
												Local_64.f_5.f_38[iVar3] = iVar2;
												MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
												func_9(iVar2);
											}
										}
										else if (Local_64.f_5.f_38[bVar0] == Local_64.f_5.f_38[iVar3] || Local_64.f_5.f_38[iVar3] == -1)
										{
											MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
										}
										else if (!BitTest(Global_1853988[bVar0 /*867*/].f_143, 3))
										{
											Local_64.f_5.f_38[bVar0] = Local_64.f_5.f_38[iVar3];
										}
										else if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 3))
										{
											Local_64.f_5.f_38[iVar3] = Local_64.f_5.f_38[bVar0];
										}
									}
									else
									{
										Local_64.f_5.f_5[bVar0] = -1;
										Local_64.f_5.f_5[iVar3] = -1;
									}
								}
								else
								{
									iVar2 = func_10(bVar0, &(Local_64.f_5.f_71));
									if (iVar2 > -1)
									{
										MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
										Local_64.f_5.f_38[bVar0] = iVar2;
										func_9(iVar2);
									}
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_64.f_5.f_3), 3);
							}
						}
					}
				}
				Local_64.f_5.f_4++;
				if (Local_64.f_5.f_4 == 32)
				{
					if (BitTest(Local_64.f_5.f_3, 3))
					{
						func_3();
						MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 0);
						Local_64.f_5.f_2 = 0;
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_64.f_5.f_3), 0);
						Local_64.f_5.f_2 = 0;
					}
					Local_64.f_5.f_4 = 0;
				}
				break;
			}
	}
}

void func_3()//Position - 0x687
{
	struct<2> Var0;
	
	Var0.f_0 = 54884912;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, func_4(1, 1));
}

int func_4(int iParam0, bool bParam1)//Position - 0x6AC
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_312(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_5(int iParam0, int iParam1)//Position - 0x711
{
	bool bVar0;
	
	if (!func_8(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_6(-1, 0) == 8;
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

int func_6(int iParam0, bool bParam1)//Position - 0x76A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()//Position - 0x7AB
{
	return Global_1574918;
}

int func_8(var uParam0)//Position - 0x7B7
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

void func_9(int iParam0)//Position - 0x7D9
{
	MISC::SET_BIT(&(Local_64.f_2), iParam0);
}

bool func_10(bool bParam0, int* iParam1)//Position - 0x7EB
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar2 = -1;
	iVar3 = Local_64.f_5.f_5[bParam0];
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = (200f * 200f);
	iVar10 = bParam0;
	iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
	if (iVar3 > -1)
	{
		if (iVar3 != bParam0)
		{
			if (Local_64.f_5.f_38[iVar3] == -1)
			{
				iVar12 = iVar3;
				iVar13 = PLAYER::GET_PLAYER_PED(iVar12);
				bVar1 = false;
				while (bVar1 <= 19)
				{
					if (!bVar0)
					{
						if (BitTest(*iParam1, bVar1))
						{
							if (!func_14(bVar1))
							{
								MISC::CLEAR_BIT(iParam1, bVar1);
							}
						}
						if (func_13(bVar1))
						{
							iVar14 = func_12(bVar1);
							if (iVar14 != -1)
							{
								if (Global_2657533.f_87[iVar14] == 0)
								{
									if (!BitTest(*iParam1, bVar1))
									{
										if (!PED::IS_PED_INJURED(iVar11))
										{
											if (!PED::IS_PED_INJURED(iVar13))
											{
												Var7 = { func_11(bVar1) };
												fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar11, true), Var7);
												if (fVar4 > fVar6)
												{
													fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar13, true), Var7);
													if (fVar5 > fVar6)
													{
														bVar2 = bVar1;
														bVar0 = true;
														MISC::SET_BIT(iParam1, bVar1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					bVar1++;
				}
			}
			else
			{
				bVar2 = Local_64.f_5.f_38[iVar3];
			}
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= 19)
		{
			if (!bVar0)
			{
				if (func_13(bVar1))
				{
					iVar14 = func_12(bVar1);
					if (iVar14 != -1)
					{
						if (Global_2657533.f_87[iVar14] == 0)
						{
							if (!BitTest(*iParam1, bVar1))
							{
								if (!PED::IS_PED_INJURED(iVar11))
								{
									Var7 = { func_11(bVar1) };
									fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar11, true), Var7);
									if (fVar4 > fVar6)
									{
										bVar2 = bVar1;
										bVar0 = true;
										MISC::SET_BIT(iParam1, bVar1);
									}
								}
							}
						}
					}
				}
			}
			bVar1++;
		}
	}
	return bVar2;
}

Vector3 func_11(bool bParam0)//Position - 0x9A2
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (bParam0)
	{
		case 0:
			Var0 = { -52.27f, -1733.58f, 28.23f };
			break;
		
		case 1:
			Var0 = { 15.4693f, -1354.0665f, 28.315f };
			break;
		
		case 2:
			Var0 = { -1238.39f, -904.58f, 13.27f };
			break;
		
		case 3:
			Var0 = { -724.14f, -912.37f, 20.34f };
			break;
		
		case 4:
			Var0 = { 1145.433f, -972.5638f, 45.6656f };
			break;
		
		case 5:
			Var0 = { -1502.0375f, -380.4863f, 39.8563f };
			break;
		
		case 6:
			Var0 = { 364.9397f, 320.9199f, 102.6601f };
			break;
		
		case 7:
			Var0 = { 1162.6638f, -338.0286f, 67.4397f };
			break;
		
		case 8:
			Var0 = { 2567.1023f, 384.5044f, 107.4621f };
			break;
		
		case 9:
			Var0 = { -2970.0542f, 401.0349f, 14.0942f };
			break;
		
		case 10:
			Var0 = { -3042.5134f, 599.3762f, 6.5342f };
			break;
		
		case 11:
			Var0 = { -3252.98f, 992.51f, 13.5f };
			break;
		
		case 12:
			Var0 = { -1814.2256f, 778.6277f, 136.175f };
			break;
		
		case 13:
			Var0 = { 531.4801f, 2675.5051f, 41.4485f };
			break;
		
		case 14:
			Var0 = { 1183.174f, 2693.942f, 36.9294f };
			break;
		
		case 15:
			Var0 = { 1382.5553f, 3598.1619f, 33.8769f };
			break;
		
		case 16:
			Var0 = { 1959.9749f, 3731.0251f, 31.3247f };
			break;
		
		case 17:
			Var0 = { 2681.91f, 3292.97f, 55.49f };
			break;
		
		case 18:
			Var0 = { 1687.9902f, 4918.174f, 41.0781f };
			break;
		
		case 19:
			Var0 = { 1687.9902f, 4918.174f, 41.0781f };
			break;
	}
	return Var0;
}

int func_12(bool bParam0)//Position - 0xBEC
{
	int iVar0;
	
	iVar0 = -1;
	switch (bParam0)
	{
		case 0:
			iVar0 = 17;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 12;
			break;
		
		case 3:
			iVar0 = 16;
			break;
		
		case 4:
			iVar0 = 13;
			break;
		
		case 5:
			iVar0 = 14;
			break;
		
		case 6:
			iVar0 = 9;
			break;
		
		case 7:
			iVar0 = 18;
			break;
		
		case 8:
			iVar0 = 4;
			break;
		
		case 9:
			iVar0 = 11;
			break;
		
		case 10:
			iVar0 = 1;
			break;
		
		case 11:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 19;
			break;
		
		case 13:
			iVar0 = 3;
			break;
		
		case 14:
			iVar0 = 10;
			break;
		
		case 15:
			iVar0 = 0;
			break;
		
		case 16:
			iVar0 = 7;
			break;
		
		case 17:
			iVar0 = 5;
			break;
		
		case 18:
			iVar0 = 15;
			break;
		
		case 19:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_13(bool bParam0)//Position - 0xCFC
{
	bool bVar0;
	
	bVar0 = func_12(bParam0);
	if (bVar0 != -1)
	{
		if (BitTest(Global_2657533.f_64, bVar0))
		{
			if (!BitTest(Global_2657533.f_62, bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(bool bParam0)//Position - 0xD30
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_15(bParam0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		bVar2 = iVar1;
		if (Local_64.f_5.f_38[iVar1] == bParam0)
		{
			if (func_312(bVar2, 0, 1))
			{
				if (!BitTest(Global_1853988[iVar1 /*867*/].f_143, 4))
				{
					if (BitTest(Global_1853988[iVar1 /*867*/].f_143, 3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_15(var uParam0)//Position - 0xD9C
{
	return BitTest(Local_64.f_2, uParam0);
}

void func_16()//Position - 0xDAB
{
	Local_64.f_2 = 0;
}

bool func_17(bool bParam0, var uParam1)//Position - 0xDB8
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = -1;
	bVar0 = false;
	while (bVar0 <= 31)
	{
		if (bVar1 == -1)
		{
			if (bVar0 != bParam0)
			{
				if (BitTest(*uParam1, bVar0))
				{
					if (BitTest(Global_1853988[bVar0 /*867*/].f_143, 0))
					{
						if (!BitTest(Global_1853988[bVar0 /*867*/].f_143, 3))
						{
							if (!BitTest(Global_1853988[bVar0 /*867*/].f_143, 2))
							{
								if (!BitTest(Global_1853988[bVar0 /*867*/].f_143, 8))
								{
									if (Local_64.f_5.f_5[bVar0] == -1)
									{
										bVar1 = bVar0;
									}
								}
							}
						}
					}
				}
			}
		}
		bVar0++;
	}
	return bVar1;
}

void func_18(var uParam0, bool bParam1, bool bParam2)//Position - 0xE44
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

void func_19(var uParam0)//Position - 0xE89
{
	uParam0->f_1 = 0;
}

int func_20(var uParam0, int iParam1, bool bParam2)//Position - 0xE96
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
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

bool func_21(var uParam0)//Position - 0xEF4
{
	return uParam0->f_1;
}

void func_22()//Position - 0xF00
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_143 == 0)
		{
			MISC::CLEAR_BIT(&uLocal_201, 0);
			MISC::SET_BIT(&uLocal_201, 1);
		}
		iVar1 = iLocal_143;
		iVar2 = Local_64.f_5.f_5[iLocal_143];
		if (func_312(iVar1, 0, 1))
		{
			if (!BitTest(Global_1853988[iLocal_143 /*867*/].f_143, 4))
			{
				MISC::CLEAR_BIT(&uLocal_201, 1);
			}
		}
		if (BitTest(Global_1853988[iLocal_143 /*867*/].f_143, 0))
		{
			if (func_312(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!func_312(iVar0, 0, 1))
					{
						Local_64.f_5.f_5[iLocal_143] = -1;
					}
				}
			}
			else
			{
				if (Local_64.f_5.f_5[iLocal_143] != -1)
				{
					Local_64.f_5.f_5[iLocal_143] = -1;
				}
				if (Local_64.f_5.f_38[iLocal_143] != -1)
				{
					Local_64.f_5.f_38[iLocal_143] = -1;
				}
			}
		}
		else if (func_312(iVar1, 0, 1))
		{
			if (BitTest(Global_1853988[iLocal_143 /*867*/].f_143, 12))
			{
				if (Local_64.f_5.f_5[iLocal_143] != -1)
				{
					Local_64.f_5.f_5[iLocal_143] = -1;
				}
				if (Local_64.f_5.f_38[iLocal_143] != -1)
				{
					Local_64.f_5.f_38[iLocal_143] = -1;
				}
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (func_312(iVar0, 0, 1))
					{
						Local_64.f_5.f_5[iVar2] = -1;
					}
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 == 32)
		{
			if (BitTest(uLocal_201, 1))
			{
				MISC::SET_BIT(&(Local_64.f_1), 0);
			}
			MISC::SET_BIT(&uLocal_201, 0);
			iLocal_143 = 0;
		}
	}
}

int func_23(var uParam0)//Position - 0x105F
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_24(var uParam0)//Position - 0x1088
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_25(bool bParam0, bool bParam1)//Position - 0x10A7
{
	if (bParam1)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

void func_26()//Position - 0x1104
{
	if (!func_32())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_27();
}

void func_27()//Position - 0x1131
{
	func_29();
	func_28(0);
}

void func_28(bool bParam0)//Position - 0x1142
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

void func_29()//Position - 0x11D0
{
	if (!func_31())
	{
	}
	if (func_32())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_30();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_30()//Position - 0x11F9
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

bool func_31()//Position - 0x146B
{
	if (!func_32())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_30();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_32()//Position - 0x1491
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_33(bool bParam0)//Position - 0x14A7
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 0))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 0);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 0);
	}
}

void func_34(bool bParam0)//Position - 0x1500
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 4))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 4);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 4))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 4);
	}
}

int func_35(var uParam0)//Position - 0x1559
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	
	if (Global_2794162.f_1825)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Global_2794162.f_1825 = 0;
		}
	}
	if (*uParam0 > 0)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!BitTest(uParam0->f_1, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((func_304(PLAYER::PLAYER_ID(), 1, 0) || func_303()) || func_302() != 0)
				{
					func_300(uParam0);
					MISC::SET_BIT(&(uParam0->f_1), 2);
					MISC::CLEAR_BIT(&(uParam0->f_1), 12);
					MISC::CLEAR_BIT(&uLocal_201, 11);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (!func_304(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (!func_303())
					{
						if (func_302() == 0)
						{
							MISC::CLEAR_BIT(&(uParam0->f_1), 2);
							MISC::CLEAR_BIT(&(uParam0->f_1), 1);
							MISC::CLEAR_BIT(&(uParam0->f_1), 0);
							MISC::CLEAR_BIT(&(uParam0->f_1), 3);
							MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 2);
							if (*uParam0 > 1)
							{
								*uParam0 = 1;
							}
						}
					}
				}
			}
		}
		iVar3 = PLAYER::PLAYER_ID();
		if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 5))
		{
			if (func_304(PLAYER::PLAYER_ID(), 1, 0) || func_303())
			{
				MISC::SET_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 5);
				*uParam0 = 0;
				func_33(0);
				func_299(0);
				func_25(8, 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				func_300(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_64.f_5.f_5[PLAYER::PLAYER_ID()] == -1)
			{
				if (func_20(&(uParam0->f_6), 15000, 0))
				{
					func_298();
					func_19(&(uParam0->f_6));
					func_18(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 9))
		{
			if (func_20(&(uParam0->f_6), 5000, 0))
			{
				func_298();
				func_19(&(uParam0->f_6));
				func_18(&(uParam0->f_6), 0, 0);
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar3 = PLAYER::PLAYER_ID();
			if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 13))
			{
				if (BitTest(Global_2794162.f_1826, 6) || BitTest(Global_2794162.f_1828, 31))
				{
					if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 0))
					{
						if (!func_297())
						{
							if (!func_304(PLAYER::PLAYER_ID(), 1, 0))
							{
								if (!func_303())
								{
									if (func_302() == 0)
									{
										if (func_174())
										{
											if (func_155(uParam0))
											{
												Global_1927215.f_1 = -1;
												func_33(1);
												func_298();
												if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 5))
												{
													MISC::CLEAR_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 0))
				{
					if (!BitTest(uParam0->f_1, 13))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							func_154("FM_IHELP_ACPI" /* GXT: You've accepted a Job from Lamar. */, -1);
							MISC::SET_BIT(&(uParam0->f_1), 13);
						}
					}
					if (BitTest(Global_1927215, 1))
					{
						iVar3 = PLAYER::PLAYER_ID();
						iVar0 = Local_64.f_5.f_5[iVar3];
						iVar1 = Local_64.f_5.f_38[iVar3];
						if (iVar1 > -1)
						{
							iVar2 = func_12(iVar1);
							if (iVar2 == 0)
							{
							}
							func_153(iVar2, 1, func_4(1, 1));
							func_19(&(uParam0->f_6));
							func_18(&(uParam0->f_6), 0, 0);
							func_299(1);
							func_25(8, 1);
							iVar18 = func_152(1191, -1);
							MISC::CLEAR_BIT(&iVar18, 1);
							MISC::CLEAR_BIT(&iVar18, 2);
							MISC::CLEAR_BIT(&iVar18, 3);
							MISC::CLEAR_BIT(&iVar18, 5);
							MISC::CLEAR_BIT(&iVar18, 6);
							*uParam0 = 1;
							func_150(1191, iVar18, -1, 1);
							iLocal_367 = func_152(1168, -1);
						}
						else if (!func_21(&(uParam0->f_6)) || func_20(&(uParam0->f_6), 5000, 0))
						{
							func_298();
							func_19(&(uParam0->f_6));
							func_18(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!func_21(&(uParam0->f_6)) || func_20(&(uParam0->f_6), 30000, 0))
					{
						func_298();
						func_19(&(uParam0->f_6));
						func_18(&(uParam0->f_6), 0, 0);
					}
				}
			}
			else
			{
				if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 0))
				{
					MISC::CLEAR_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 0);
					MISC::CLEAR_BIT(&(uParam0->f_1), 0);
					MISC::CLEAR_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 2);
					MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
					func_33(0);
				}
				if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 12))
				{
					if (Local_64.f_5.f_38[iVar3] == -1 && Local_64.f_5.f_5[iVar3] == -1)
					{
						MISC::CLEAR_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 12);
					}
				}
				else if (!func_21(&(uParam0->f_12)))
				{
					func_18(&(uParam0->f_12), 0, 0);
				}
				else if (func_20(&(uParam0->f_12), 30000, 0))
				{
					MISC::CLEAR_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 13);
					func_19(&(uParam0->f_6));
				}
			}
			break;
		
		case 1:
			iVar3 = PLAYER::PLAYER_ID();
			iVar1 = Local_64.f_5.f_38[iVar3];
			iVar0 = Local_64.f_5.f_5[iVar3];
			func_149();
			if (!BitTest(uParam0->f_1, 0))
			{
				if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
				{
					MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
				}
				if (BitTest(uParam0->f_1, 14))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 14);
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					if (iVar1 >= 0)
					{
						uParam0->f_4 = HUD::ADD_BLIP_FOR_COORD(func_11(iVar1));
						HUD::SET_BLIP_ROUTE(uParam0->f_4, true);
						HUD::SET_BLIP_PRIORITY(uParam0->f_4, 9);
					}
				}
				if (iVar0 > -1 && func_148(iVar0, 1))
				{
					iVar4 = iVar0;
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
					{
						if (func_312(iVar4, 0, 1))
						{
							if (!BitTest(Global_1853988[iVar0 /*867*/].f_143, 4) && !BitTest(Global_1853988[iVar0 /*867*/].f_143, 5))
							{
								func_147("FM_HTUT_GO" /* GXT: Go to the ~y~Store. */, 0);
								MISC::SET_BIT(&(uParam0->f_1), 0);
							}
						}
					}
				}
				if (!BitTest(uParam0->f_1, 0))
				{
					func_147("FM_HTUT_GO" /* GXT: Go to the ~y~Store. */, 0);
					MISC::SET_BIT(&(uParam0->f_1), 1);
				}
				else
				{
					func_19(&(uParam0->f_10));
					func_18(&(uParam0->f_10), 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_1), 0);
			}
			else
			{
				if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
				{
					MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
				}
				if (BitTest(uParam0->f_1, 14))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 14);
				}
				if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 2))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_11(iVar1)) < (15f * 15f) || (iVar0 == -1 && func_146(25f))) || func_145(1101004800, 1117126656))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_4));
							}
							if (iVar0 > -1 && func_148(iVar0, 1))
							{
								iVar4 = iVar0;
								if (!BitTest(Global_1853988[iVar0 /*867*/].f_143, 2))
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
									{
										if (func_312(iVar4, 1, 1))
										{
											if (!func_144())
											{
												Var5 = { func_143(iVar4) };
												if (NETWORK::NETWORK_IS_FRIEND(&Var5))
												{
													func_137("FM_HTUT_FWAT" /* GXT: Wait for ~HUD_COLOUR_BLUE~~a~. */, iVar4, 0, 0);
												}
												else
												{
													func_137("FM_HTUT_WAT" /* GXT: Wait for ~HUD_COLOUR_WHITE~~a~. */, iVar4, 0, 0);
												}
											}
										}
									}
								}
							}
							MISC::SET_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 2);
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!BitTest(uParam0->f_1, 2))
						{
							if ((!BitTest(uLocal_201, 18) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_11(iVar1)) > (35f * 35f)) || (BitTest(uLocal_201, 18) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_11(iVar1)) > (90f * 90f)))
							{
								MISC::CLEAR_BIT(&(uParam0->f_1), 0);
								MISC::CLEAR_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 2);
								MISC::CLEAR_BIT(&uLocal_201, 18);
							}
						}
					}
					if (BitTest(Global_1927215, 15))
					{
						if (func_134("FM_HTUT_WAT" /* GXT: Wait for ~HUD_COLOUR_WHITE~~a~. */) || func_134("FM_HTUT_FWAT" /* GXT: Wait for ~HUD_COLOUR_BLUE~~a~. */))
						{
							func_26();
						}
					}
				}
			}
			if (iVar0 > -1 && func_148(iVar0, 1))
			{
				if (BitTest(Global_1853988[iVar0 /*867*/].f_143, 2))
				{
					if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 2))
					{
						if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 12))
						{
							if (func_21(&(uParam0->f_10)))
							{
								if (func_20(&(uParam0->f_10), iLocal_63, 0))
								{
									MISC::SET_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 12);
									MISC::SET_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 13);
									if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
									{
										HUD::REMOVE_BLIP(&(uParam0->f_4));
									}
									func_26();
									*uParam0 = 0;
									MISC::CLEAR_BIT(&(uParam0->f_1), 12);
									MISC::CLEAR_BIT(&uLocal_201, 11);
								}
								else if (!BitTest(uParam0->f_1, 2))
								{
									if (!BitTest(uParam0->f_1, 12))
									{
										if (func_20(&(uParam0->f_10), (iLocal_63 - 60000), 0))
										{
											MISC::SET_BIT(&(uParam0->f_1), 12);
										}
										else if (!BitTest(uLocal_201, 11))
										{
											if (BitTest(Global_1853988[iVar0 /*867*/].f_143, 2))
											{
												if (!func_20(&(uParam0->f_10), (iLocal_63 - 420000), 0))
												{
													func_19(&(uParam0->f_10));
													func_18(&(uParam0->f_10), 0, 0);
													MISC::SET_BIT(&uLocal_201, 11);
													iLocal_63 = 180000;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!BitTest(Global_1853988[iVar3 /*867*/].f_143, 12))
				{
					if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 2) && BitTest(Global_1853988[iVar0 /*867*/].f_143, 2))
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 12);
						MISC::CLEAR_BIT(&uLocal_201, 11);
						MISC::SET_BIT(&(uParam0->f_1), 4);
						*uParam0 = 3;
						func_300(uParam0);
						func_18(&uLocal_195, 0, 0);
						MISC::SET_BIT(&(uParam0->f_1), 6);
						func_133(1);
						func_18(&uLocal_195, 0, 0);
						if (func_148(iVar0, 1))
						{
							if (!BitTest(uParam0->f_1, 15))
							{
								if (func_132(iVar0, 0))
								{
									MISC::SET_BIT(&(uParam0->f_1), 15);
								}
							}
						}
					}
					else if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 2))
					{
						if (!BitTest(Global_1853988[iVar0 /*867*/].f_143, 2))
						{
							func_123();
						}
					}
				}
			}
			else if (BitTest(Global_1853988[iVar3 /*867*/].f_143, 2))
			{
				MISC::SET_BIT(&(uParam0->f_1), 4);
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&(uParam0->f_1), 6);
				func_300(uParam0);
				func_133(1);
				*uParam0 = 3;
			}
			if (BitTest(uParam0->f_1, 12))
			{
				func_119(iLocal_63, uParam0->f_10);
			}
			break;
		
		case 2:
			if (func_20(&uLocal_195, 1000, 0))
			{
				*uParam0 = 3;
				func_300(uParam0);
				func_133(1);
				func_18(&uLocal_195, 0, 0);
			}
			break;
		
		case 3:
			iVar3 = PLAYER::PLAYER_ID();
			iVar0 = Local_64.f_5.f_5[iVar3];
			iVar1 = Local_64.f_5.f_38[iVar3];
			if (!BitTest(uLocal_201, 8))
			{
				if (func_146(35f))
				{
					iVar2 = func_12(iVar1);
					if (iVar2 == 0)
					{
					}
					func_153(iVar2, 0, func_4(1, 1));
					MISC::SET_BIT(&uLocal_201, 8);
				}
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
			{
				MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
			}
			if (!BitTest(uParam0->f_1, 3))
			{
				if (!BitTest(uParam0->f_1, 14))
				{
					if (!func_118())
					{
						if (iVar0 > -1 && func_148(iVar0, 1))
						{
							iVar4 = iVar0;
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
							{
								if (func_312(iVar4, 1, 1))
								{
									if (!BitTest(Global_1853988[iVar0 /*867*/].f_143, 16))
									{
										Var5 = { func_143(iVar4) };
										if (NETWORK::NETWORK_IS_FRIEND(&Var5))
										{
											func_137("FM_HTUT_FHLD" /* GXT: Hold up the Store with ~HUD_COLOUR_BLUE~~a~. */, iVar4, 0, 0);
										}
										else
										{
											func_137("FM_HTUT_HLD" /* GXT: Hold up the Store with ~HUD_COLOUR_WHITE~~a~. */, iVar4, 0, 0);
										}
										MISC::SET_BIT(&(uParam0->f_1), 3);
									}
									else if (!BitTest(uParam0->f_1, 14))
									{
										MISC::SET_BIT(&(uParam0->f_1), 14);
										func_137("FM_HTUT_HLC" /* GXT: Help ~a~ lose the Cops. */, iVar4, 1, 0);
									}
								}
							}
						}
						if (!BitTest(uParam0->f_1, 3) && !BitTest(uParam0->f_1, 14))
						{
							func_147("FM_HTUT_HLS" /* GXT: Hold up the Store. */, 0);
							MISC::SET_BIT(&(uParam0->f_1), 3);
							MISC::SET_BIT(&(Global_1853988[iVar3 /*867*/].f_143), 8);
						}
					}
				}
				else
				{
					iVar3 = PLAYER::PLAYER_ID();
					iVar0 = Local_64.f_5.f_5[iVar3];
					if (iVar0 > -1 && func_148(iVar0, 1))
					{
						if (!BitTest(Global_1853988[iVar0 /*867*/].f_143, 16))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1), 14);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 14);
					}
				}
			}
			else if (func_118())
			{
				if (BitTest(uParam0->f_1, 3))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 3);
				}
			}
			else if (iVar0 > -1 && func_148(iVar0, 1))
			{
				if (BitTest(Global_1853988[iVar0 /*867*/].f_143, 16))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 3);
				}
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	if (*uParam0 > 0)
	{
		func_117(uParam0);
		func_108(uParam0);
		func_99(uParam0);
		func_96(uParam0);
		if (!func_307())
		{
			if (func_93(uParam0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_4));
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
				}
				if (BitTest(uParam0->f_1, 15))
				{
					iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
					if (func_132(iVar0, 1))
					{
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_92(1);
				}
				if (BitTest(uLocal_201, 12))
				{
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
					MISC::CLEAR_BIT(&uLocal_201, 12);
				}
				func_26();
				func_34(1);
				func_299(0);
				func_33(0);
				func_25(8, 0);
				func_91(121, 1, -1, 1);
				func_36(1);
				*uParam0 = 99;
			}
		}
	}
	return 0;
}

void func_36(bool bParam0)//Position - 0x22AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_90())
		{
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_1836851[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_87(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_84(iVar1, bParam0);
	if (!func_83(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			Global_1836851[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Global_1836851[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 321)
	{
		iVar3 = func_82(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_80(iVar4))
			{
				func_71(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_70(1))
	{
		func_63(func_64(59, 0, 0), 0);
		func_57(func_64(135, 0, 0), 1);
		func_55(func_64(22, 0, 0), func_64(73, 0, 0));
	}
	else
	{
		func_55(0, 0);
	}
	if (func_54())
	{
		if (func_51(77, -1))
		{
			func_50(1);
			func_49(1);
		}
	}
	if (func_48() || func_47())
	{
		func_91(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_37(28, 1, 0);
			func_37(29, 1, 0);
			func_37(30, 1, 0);
			func_37(31, 1, 0);
			func_37(32, 1, 0);
			func_37(33, 1, 0);
			func_37(34, 1, 0);
			func_37(35, 1, 0);
			func_37(36, 1, 0);
			func_37(37, 1, 0);
			func_37(38, 1, 0);
			func_37(58, 1, 0);
		}
	}
	if (func_64(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057411 = 0;
}

void func_37(int iParam0, bool bParam1, int iParam2)//Position - 0x246F
{
	if (bParam1)
	{
		if (!func_46(iParam0, 0, 0))
		{
			if (iParam2 && Global_100885.f_18[iParam0])
			{
				if (func_45(iParam0) == 3 && !func_44(iParam0))
				{
					func_43(iParam0);
					func_42(iParam0, 0, 0);
					func_39(iParam0, 1, 0);
					func_38(iParam0);
				}
				else
				{
					func_42(iParam0, 1, 0);
					func_38(iParam0);
				}
			}
			else
			{
				func_42(iParam0, 0, 0);
				func_39(iParam0, 1, 0);
				func_38(iParam0);
			}
		}
		else
		{
			func_39(iParam0, 1, 0);
			func_38(iParam0);
		}
	}
	else if (func_46(iParam0, 0, 0))
	{
		func_39(iParam0, 0, 0);
		func_39(iParam0, 1, 0);
		func_38(iParam0);
	}
}

void func_38(int iParam0)//Position - 0x252E
{
	Global_100885.f_205[iParam0] = 1;
	Global_100885.f_204 = 1;
}

void func_39(int iParam0, int iParam1, bool bParam2)//Position - 0x2548
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
		if (func_41() == 0)
		{
			iVar0 = func_152(func_40(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_150(func_40(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_40(int iParam0)//Position - 0x25B8
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

int func_41()//Position - 0x2960
{
	return Global_32283;
}

void func_42(int iParam0, int iParam1, bool bParam2)//Position - 0x296B
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
		if (func_41() == 0)
		{
			iVar0 = func_152(func_40(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_150(func_40(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_43(int iParam0)//Position - 0x29DB
{
	if (Global_100885.f_18[iParam0])
	{
		func_42(iParam0, 10, 1);
		func_42(iParam0, 19, 1);
	}
}

bool func_44(int iParam0)//Position - 0x2A02
{
	return func_46(iParam0, 5, 1);
}

int func_45(int iParam0)//Position - 0x2A12
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
	}
	return 6;
}

int func_46(int iParam0, int iParam1, bool bParam2)//Position - 0x2D48
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
		if (func_41() == 0)
		{
			return BitTest(func_152(func_40(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

bool func_47()//Position - 0x2DA8
{
	return Global_1575051;
}

bool func_48()//Position - 0x2DB4
{
	return Global_1575053;
}

void func_49(bool bParam0)//Position - 0x2DC0
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_37(28, bParam0, 0);
	func_37(30, bParam0, 0);
	func_37(31, bParam0, 0);
	func_37(33, bParam0, 0);
	func_37(34, bParam0, 0);
	func_37(38, bParam0, 0);
	func_37(58, bParam0, 0);
}

void func_50(bool bParam0)//Position - 0x2E12
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_37(29, bParam0, 0);
	func_37(32, bParam0, 0);
	func_37(36, bParam0, 0);
	func_37(35, bParam0, 0);
	func_37(37, bParam0, 0);
}

int func_51(int iParam0, int iParam1)//Position - 0x2E52
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_52(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_52(int iParam0, var uParam1)//Position - 0x2E76
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_53(uParam1));
}

int func_53(var uParam0)//Position - 0x2E8B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_54()//Position - 0x2EBF
{
	if (!func_90())
	{
		return 0;
	}
	return 1;
}

void func_55(bool bParam0, bool bParam1)//Position - 0x2ED4
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_37(0, bParam0, 1);
	func_37(1, bParam0, 1);
	func_37(2, bParam0, 1);
	func_37(3, bParam0, 1);
	func_37(4, bParam0, 1);
	func_37(5, bParam0, 1);
	func_37(6, bParam0, 1);
	func_37(7, bParam0, bVar0);
	func_37(8, bParam0, 1);
	func_37(9, bParam0, 1);
	func_37(10, bParam0, 1);
	func_37(11, bParam0, 1);
	func_37(12, bParam0, bVar0);
	func_37(13, bParam0, 1);
	func_37(21, bParam0, 1);
	func_37(14, bParam0, 1);
	func_37(15, bParam0, 1);
	func_37(16, bParam0, 1);
	func_37(17, bParam0, 1);
	func_37(18, bParam0, 1);
	func_37(19, bParam0, 1);
	func_37(20, bParam0, 1);
	func_37(22, bParam0, 1);
	func_37(23, bParam0, 1);
	func_37(24, bParam0, 1);
	func_37(25, bParam0, 1);
	func_37(26, bParam0, 1);
	func_37(27, bParam0, 1);
	func_56(1, !bParam1);
	if (!bVar0)
	{
		func_43(12);
	}
}

void func_56(int iParam0, bool bParam1)//Position - 0x2FFC
{
	if (bParam1)
	{
		Global_100885.f_9[iParam0] = 1;
	}
	else
	{
		Global_100885.f_9[iParam0] = 0;
	}
}

void func_57(bool bParam0, bool bParam1)//Position - 0x3022
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_62(0);
	if (Global_262145.f_63 /* Tunable: DISABLE_SUPER_MOD_RANK_CHECK */ == 1 && func_64(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_37(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_44(44))
		{
			func_43(44);
		}
	}
	if (bParam0)
	{
		if (func_58(0) > 1)
		{
			MISC::SET_BIT(&(Global_2794162.f_1835), 10);
		}
	}
}

int func_58(int iParam0)//Position - 0x30A8
{
	int iVar0;
	
	if (Global_1945782[iParam0 /*8*/] == -1)
	{
		iVar0 = func_152(func_61(iParam0), -1);
		if (iVar0 == -1)
		{
			func_59(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945782[iParam0 /*8*/] = iVar0;
	}
	return Global_1945782[iParam0 /*8*/];
}

void func_59(int iParam0, int iParam1)//Position - 0x30EB
{
	Global_1945782[iParam0 /*8*/] = iParam1;
	func_60(func_61(iParam0), iParam1, -1);
}

void func_60(int iParam0, int iParam1, int iParam2)//Position - 0x310A
{
	func_150(iParam0, iParam1, iParam2, 1);
}

int func_61(int iParam0)//Position - 0x311D
{
	switch (iParam0)
	{
		case 0:
			return 12515;
		
		default:
	}
	return 12515;
}

int func_62(bool bParam0)//Position - 0x313B
{
	int iVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2794162.f_1826, 26))
		{
			iVar0 = func_152(1192, -1);
			if (!BitTest(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_51(122, -1);
}

void func_63(bool bParam0, bool bParam1)//Position - 0x3195
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_62(0);
	func_37(39, bParam0, 0);
	func_37(40, bParam0, 0);
	func_37(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_37(43, bParam0, 0);
		func_37(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_44(39))
		{
			func_43(39);
		}
		if (!func_44(40))
		{
			func_43(40);
		}
		if (!func_44(41))
		{
			func_43(41);
		}
		if (!func_44(42))
		{
			func_43(42);
		}
		if (!func_44(43))
		{
			func_43(43);
		}
	}
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x3246
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8317 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_66(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4747 /* Tunable: RANK_RESTRICTION_CRATE_DROP */ == 1)
		{
			return 1;
		}
	}
	if (func_48() || func_47())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_65())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836851[iVar1], iVar0);
}

int func_65()//Position - 0x33B1
{
	int iVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2794162.f_1831, 23))
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	iVar0 = func_152(1304, -1);
	if (BitTest(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2794162.f_1831), 23);
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x340E
{
	if (!func_54())
	{
		return 0;
	}
	if (func_69())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_67(&(Global_1853988[iParam0 /*867*/].f_794), func_68(iParam1));
}

var func_67(var uParam0, var uParam1)//Position - 0x344E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_68(int iParam0)//Position - 0x3471
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		default:
	}
	return 1;
}

bool func_69()//Position - 0x3647
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3);
}

int func_70(int iParam0)//Position - 0x365E
{
	return 0;
}

void func_71(int iParam0, bool bParam1)//Position - 0x3667
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_79(-1))
			{
				if (!func_90())
				{
					return;
				}
			}
			if (!func_79(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_307() && !func_78())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_77())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_79(-1))
				{
					if (!func_72())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1836851[iVar1]), iVar0);
	}
}

int func_72()//Position - 0x3700
{
	int iVar0;
	
	if (func_76(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = func_152(1304, -1);
	if (BitTest(iVar0, 2))
	{
		func_73(1);
		return 1;
	}
	return 0;
}

void func_73(bool bParam0)//Position - 0x3732
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 25))
		{
			func_74(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 25);
	}
}

void func_74(int iParam0, int iParam1)//Position - 0x3799
{
	func_75(&(Global_1853988[iParam0 /*867*/].f_794), func_68(iParam1));
}

int func_75(var uParam0, var uParam1)//Position - 0x37B8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x37F0
{
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_139, 25);
}

int func_77()//Position - 0x381C
{
	int iVar0;
	
	if (BitTest(Global_2794162.f_1831, 6))
	{
		return 1;
	}
	iVar0 = func_152(1304, -1);
	if (BitTest(iVar0, 0))
	{
		if (!BitTest(Global_2794162.f_1831, 6))
		{
			MISC::SET_BIT(&(Global_2794162.f_1831), 6);
		}
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return 0;
}

bool func_78()//Position - 0x3879
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 7);
}

bool func_79(int iParam0)//Position - 0x3890
{
	return func_51(123, iParam0);
}

int func_80(int iParam0)//Position - 0x38A0
{
	int iVar0;
	bool bVar1;
	
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			iVar0 = func_152(func_81(iParam0), -1);
			if (BitTest(iVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x3ACE
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

int func_82(int iParam0)//Position - 0x3B7D
{
	if (func_48())
	{
		return 1;
	}
	if (func_47())
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
			if (!func_79(-1))
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

int func_83(int iParam0)//Position - 0x3E45
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return func_51(119, iParam0);
}

int func_84(int iParam0, bool bParam1)//Position - 0x3E76
{
	if (bParam1)
	{
	}
	return func_85(iParam0, 0);
}

int func_85(int iParam0, int iParam1)//Position - 0x3E8A
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
		if (func_86(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_86(iVar3) < iParam0)
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

int func_86(int iParam0)//Position - 0x3F45
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

int func_87(int iParam0, bool bParam1)//Position - 0x452D
{
	if (bParam1)
	{
	}
	return func_88(iParam0);
}

int func_88(int iParam0)//Position - 0x4540
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_152(640, -1);
			}
			else if (func_89(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_152(640, -1);
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x4597
{
	if (!func_8(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_90()//Position - 0x45B6
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return func_51(120, -1);
}

void func_91(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x45E6
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

void func_92(bool bParam0)//Position - 0x4609
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 17))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 17);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 17))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 17);
	}
}

int func_93(var uParam0)//Position - 0x4666
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
	if (BitTest(Global_1853988[NETWORK::PARTICIPANT_ID_TO_INT() /*867*/].f_143, 2))
	{
		if (func_152(1168, -1) > iLocal_367)
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_312(iVar1, 1, 1))
					{
						if (BitTest(Global_1853988[iVar0 /*867*/].f_143, 2))
						{
							Global_1927215.f_1 = iVar0;
							MISC::SET_BIT(&Global_1927215, 14);
						}
					}
				}
			}
			return 1;
		}
	}
	if (*uParam0 > 1)
	{
		if (func_95())
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				if (iVar0 > -1)
				{
					iVar1 = iVar0;
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
					{
						if (func_312(iVar1, 1, 1))
						{
							Global_1927215.f_1 = iVar0;
							MISC::SET_BIT(&Global_1927215, 14);
						}
					}
				}
				return 1;
			}
		}
		else if (func_94())
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				return 1;
			}
		}
	}
	if ((BitTest(uParam0->f_1, 7) && !BitTest(uParam0->f_1, 10)) && !BitTest(uParam0->f_1, 9))
	{
		if (!func_21(&(uParam0->f_16)))
		{
			func_18(&(uParam0->f_16), 0, 0);
		}
		else if (func_20(&(uParam0->f_16), 3000, 0))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 11);
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x47BC
{
	int iVar0;
	
	iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
	if (iVar0 > -1)
	{
		if (BitTest(Global_1853988[iVar0 /*867*/].f_143, 11))
		{
			return 1;
		}
	}
	return 0;
}

int func_95()//Position - 0x47EE
{
	int iVar0;
	
	iVar0 = Local_64.f_5.f_5[PLAYER::PLAYER_ID()];
	if (iVar0 > -1)
	{
		if (BitTest(Global_1853988[iVar0 /*867*/].f_143, 10))
		{
			return 1;
		}
	}
	return 0;
}

void func_96(var uParam0)//Position - 0x4820
{
	int iVar0;
	struct<3> Var1;
	
	if (BitTest(uParam0->f_1, 6))
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			if (!func_118())
			{
				iVar0 = Local_64.f_5.f_38[PLAYER::PLAYER_ID()];
				if (iVar0 > -1)
				{
					Var1 = { func_98(iVar0) };
					if (!func_97(Var1, 0f, 0f, 0f, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
						{
							PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(true);
							uParam0->f_5 = HUD::ADD_BLIP_FOR_COORD(Var1);
							HUD::SET_BLIP_SPRITE(uParam0->f_5, 52 /*RADAR_CRIM_HOLDUPS*/);
							HUD::SET_BLIP_SCALE(uParam0->f_5, 1f);
							HUD::SET_BLIP_PRIORITY(uParam0->f_5, 7);
							HUD::SET_BLIP_ROUTE(uParam0->f_5, true);
						}
					}
				}
			}
		}
		else if (func_118())
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_5));
			}
		}
	}
}

bool func_97(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x48D2
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_98(int iParam0)//Position - 0x4919
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -53.124f, -1756.4054f, 28.421f };
			break;
		
		case 1:
			Var0 = { Vector(28.5036f, -1348.8127f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 2:
			Var0 = { -1226.4644f, -902.5864f, 11.2783f };
			break;
		
		case 3:
			Var0 = { -711.721f, -916.6965f, 18.2145f };
			break;
		
		case 4:
			Var0 = { 1141.3596f, -980.8802f, 45.4155f };
			break;
		
		case 5:
			Var0 = { -1491.0565f, -383.5728f, 39.1706f };
			break;
		
		case 6:
			Var0 = { 376.6533f, 323.6471f, 102.5664f };
			break;
		
		case 7:
			Var0 = { 1159.5421f, -326.6986f, 67.923f };
			break;
		
		case 8:
			Var0 = { 2559.247f, 385.5266f, 107.623f };
			break;
		
		case 9:
			Var0 = { -2973.2617f, 390.8184f, 14.0433f };
			break;
		
		case 10:
			Var0 = { -3038.9082f, 589.5187f, 6.9048f };
			break;
		
		case 11:
			Var0 = { -3240.317f, 1004.4334f, 11.8307f };
			break;
		
		case 12:
			Var0 = { -1822.2866f, 788.006f, 137.1859f };
			break;
		
		case 13:
			Var0 = { 544.2802f, 2672.8113f, 41.1566f };
			break;
		
		case 14:
			Var0 = { Vector(37.1573f, 2703.1143f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			break;
		
		case 15:
			Var0 = { 1394.1692f, 3599.86f, 34.0121f };
			break;
		
		case 16:
			Var0 = { 1965.0542f, 3740.5552f, 31.3448f };
			break;
		
		case 17:
			Var0 = { 2682.0034f, 3282.5432f, 54.2411f };
			break;
		
		case 18:
			Var0 = { 1698.8085f, 4929.1978f, 41.0783f };
			break;
		
		case 19:
			Var0 = { 1731.2098f, 6411.4033f, 34.0372f };
			break;
	}
	return Var0;
}

void func_99(var uParam0)//Position - 0x4B77
{
	int iVar0;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (BitTest(uParam0->f_1, 4))
			{
				if (!BitTest(uParam0->f_1, 5))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							if (func_101())
							{
								uParam0->f_2++;
							}
						}
					}
				}
				else
				{
					uParam0->f_2++;
				}
			}
			break;
		
		case 1:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_101())
					{
						func_154("FHU_HELP1" /* GXT: ~s~Stores that can be held up are marked on the Radar with ~BLIP_CRIM_HOLDUPS~ */, -1);
						uParam0->f_2++;
						iVar0 = func_152(1191, -1);
						if (!BitTest(iVar0, 1))
						{
							MISC::SET_BIT(&iVar0, 1);
							func_150(1191, iVar0, -1, 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_101())
					{
						if (func_146(1089470464))
						{
							if (!func_100())
							{
								func_154("FHU_HELP5" /* GXT: ~s~Threaten the store clerk with a weapon to steal from the cash register. */, -1);
								uParam0->f_2++;
							}
							else if (!BitTest(uLocal_201, 7) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
							{
								func_154("FM_PASS_DBL" /* GXT: Disable Passive Mode before robbing the Store. */, -1);
								MISC::SET_BIT(&uLocal_201, 7);
							}
						}
					}
				}
			}
			break;
	}
}

bool func_100()//Position - 0x4C95
{
	return Global_1574582;
}

int func_101()//Position - 0x4CA1
{
	if (((((((((((((((!func_312(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_107(8, -1)) || func_107(15, -1)) || func_106()) || func_107(3, -1)) || HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) || func_304(PLAYER::PLAYER_ID(), 1, 0)) || func_303()) || func_105()) || func_104()) || func_103()) || HUD::IS_PAUSE_MENU_ACTIVE()) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || func_102())
	{
		return 0;
	}
	return 1;
}

var func_102()//Position - 0x4D69
{
	return BitTest(Global_2794162.f_1832, 12);
}

bool func_103()//Position - 0x4D7B
{
	return Global_2672524.f_2838.f_582;
}

bool func_104()//Position - 0x4D8D
{
	return Global_100885.f_394 > 0;
}

bool func_105()//Position - 0x4D9E
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

var func_106()//Position - 0x4DB3
{
	return Global_2625288;
}

bool func_107(int iParam0, int iParam1)//Position - 0x4DBF
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

void func_108(var uParam0)//Position - 0x4DF7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_95())
	{
		if (*uParam0 <= 1)
		{
			if (!BitTest(uParam0->f_1, 8))
			{
				MISC::SET_BIT(&(uParam0->f_1), 8);
			}
		}
	}
	if (func_69())
	{
		if (!func_21(&uLocal_370) || func_20(&uLocal_370, 5000, 0))
		{
			if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 2))
			{
				if (iLocal_367 > -1)
				{
					iVar1 = func_152(1168, -1);
					if (iLocal_367 != iVar1)
					{
						iLocal_367 = iVar1;
					}
					func_19(&uLocal_370);
					func_18(&uLocal_370, 0, 0);
				}
			}
		}
	}
	if (!BitTest(uParam0->f_1, 7))
	{
		if (!func_116())
		{
			iVar0 = func_152(1168, -1);
			if (iLocal_367 > -1 && iVar0 == iLocal_367)
			{
				if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 2) && ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_hold_up")) == 0 && !BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16)) && !func_115()))
				{
					MISC::SET_BIT(&(uParam0->f_1), 9);
					MISC::SET_BIT(&(uParam0->f_1), 7);
				}
				else if (*uParam0 >= 1)
				{
					if ((!func_118() && !BitTest(uParam0->f_1, 8)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_hold_up")) == 0)
					{
						MISC::SET_BIT(&(uParam0->f_1), 9);
						MISC::SET_BIT(&(uParam0->f_1), 7);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_1), 7);
					}
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1, 10))
	{
		if (func_116())
		{
			if (BitTest(uParam0->f_1, 7))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 7);
				MISC::CLEAR_BIT(&(uParam0->f_1), 9);
				MISC::CLEAR_BIT(&(uParam0->f_1), 10);
			}
		}
	}
	if (BitTest(uParam0->f_1, 9))
	{
		if (!BitTest(uParam0->f_1, 10))
		{
			if (*uParam0 > 1)
			{
				if (func_146(10f))
				{
					iVar2 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_114(), -1, 0);
					if (iVar2 != func_113())
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 9);
						MISC::SET_BIT(&(uParam0->f_1), 10);
						func_110();
					}
				}
			}
		}
	}
	if (!BitTest(uLocal_201, 12))
	{
		if (func_118())
		{
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			MISC::SET_BIT(&uLocal_201, 12);
		}
	}
	else if (!func_118())
	{
		NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
		MISC::CLEAR_BIT(&uLocal_201, 12);
	}
	if (func_146(25f))
	{
		if (!func_115())
		{
			func_109(1);
		}
	}
	else if (func_115())
	{
		func_109(0);
	}
}

void func_109(bool bParam0)//Position - 0x5045
{
	if (bParam0)
	{
		if (!BitTest(Global_2794162.f_1832, 21))
		{
			MISC::SET_BIT(&(Global_2794162.f_1832), 21);
		}
	}
	else if (BitTest(Global_2794162.f_1832, 21))
	{
		MISC::CLEAR_BIT(&(Global_2794162.f_1832), 21);
	}
}

void func_110()//Position - 0x508A
{
	int iVar0;
	
	if (Local_64.f_5.f_38[PLAYER::PLAYER_ID()] > -1)
	{
		iVar0 = func_12(Local_64.f_5.f_38[PLAYER::PLAYER_ID()]);
		func_111(iVar0, 1, func_112(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_114(), -1, 0)));
	}
}

void func_111(int iParam0, int iParam1, int iParam2)//Position - 0x50C9
{
	struct<4> Var0;
	
	Var0.f_0 = -2143033398;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_112(int iParam0)//Position - 0x5101
{
	var uVar0;
	
	if (func_8(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_113()//Position - 0x511C
{
	return -1;
}

char* func_114()//Position - 0x5125
{
	switch (Global_2697098)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

bool func_115()//Position - 0x5145
{
	return BitTest(Global_2794162.f_1832, 21);
}

int func_116()//Position - 0x5157
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Local_64.f_5.f_38[PLAYER::PLAYER_ID()];
	bVar1 = func_12(iVar0);
	if (BitTest(Global_2657533.f_65, bVar1))
	{
		return 1;
	}
	if (iVar0 > -1)
	{
		if (func_13(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(var uParam0)//Position - 0x5199
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = Local_64.f_5.f_5[iVar1];
	if (!BitTest(uParam0->f_1, 1) && !BitTest(Global_1853988[iVar1 /*867*/].f_143, 8))
	{
		if (iVar0 > -1)
		{
			if (BitTest(Global_1853988[iVar1 /*867*/].f_143, 6))
			{
				MISC::CLEAR_BIT(&(Global_1853988[iVar1 /*867*/].f_143), 6);
			}
			if (!func_148(iVar0, 1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		if (*uParam0 < 3)
		{
			if (!BitTest(Global_1853988[iVar1 /*867*/].f_143, 6))
			{
				MISC::SET_BIT(&(Global_1853988[iVar1 /*867*/].f_143), 6);
			}
		}
		else if (BitTest(Global_1853988[iVar1 /*867*/].f_143, 6))
		{
			MISC::CLEAR_BIT(&(Global_1853988[iVar1 /*867*/].f_143), 6);
		}
		if (iVar0 > -1)
		{
			if (func_148(iVar0, 1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 1);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(Global_1853988[iVar1 /*867*/].f_143), 6);
			}
		}
	}
}

int func_118()//Position - 0x5294
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { func_98(Local_64.f_5.f_38[PLAYER::PLAYER_ID()]) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_97(Var1, 0f, 0f, 0f, 0))
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			if (iVar0 != 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) < 25f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_119(int iParam0, int iParam1, var uParam2)//Position - 0x52FC
{
	int iVar0;
	
	if (func_21(&iParam1))
	{
		iVar0 = (iParam0 - NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam1));
		if (iVar0 >= 0)
		{
			func_120(iVar0, "FM_HTUT_TME" /* GXT: Time */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_120(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x533B
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_122(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_121(7, iVar0);
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

void func_121(int iParam0, int iParam1)//Position - 0x5498
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_122(int iParam0, int iParam1)//Position - 0x54B1
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

void func_123()//Position - 0x54C7
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uLocal_201, 14))
	{
		if (!BitTest(uLocal_201, 15))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_312(iVar1, 1, 1))
				{
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
						{
							if (func_131(iVar1))
							{
								MISC::SET_BIT(&uLocal_201, 15);
							}
						}
					}
				}
				iVar0++;
			}
		}
		else if (func_124(0, 1, 1, 1))
		{
			func_154("FM_IHELP_BLP" /* GXT: Players are shown on the Radar by ~BLIP_LEVEL~. If they are your friend it will have a blue outline. If they are in your Crew it will be a Crew colored outline. You can go to the Pause Map and find the location of other players. */, -1);
			MISC::SET_BIT(&uLocal_201, 14);
		}
	}
}

int func_124(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x554C
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	if (func_303())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_304(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_129(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_103())
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
	if (Global_1836370)
	{
		return 0;
	}
	if (func_128())
	{
		return 0;
	}
	if (func_127())
	{
		return 0;
	}
	if (func_126())
	{
		return 0;
	}
	if (Global_75816)
	{
		return 0;
	}
	if (Global_2804769)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	return 1;
}

bool func_125()//Position - 0x5645
{
	return Global_2765083;
}

bool func_126()//Position - 0x5651
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

bool func_127()//Position - 0x5668
{
	return Global_2683883.f_691;
}

bool func_128()//Position - 0x5677
{
	return Global_2683883.f_845;
}

int func_129(int iParam0)//Position - 0x5686
{
	if (Global_2657704[iParam0 /*463*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

int func_130()//Position - 0x56A2
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)//Position - 0x56C4
{
	return HUD::DOES_BLIP_EXIST(Global_2646835[iParam0]);
}

int func_132(int iParam0, bool bParam1)//Position - 0x56D8
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (func_312(iVar0, 0, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), iVar0, bParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_133(bool bParam0)//Position - 0x570F
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 7))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 7);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 7))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 7);
	}
}

int func_134(char* sParam0)//Position - 0x5768
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_32())
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
	return func_135(sParam0);
}

bool func_135(char* sParam0)//Position - 0x57B9
{
	if (!func_32())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_136(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_136(char* sParam0)//Position - 0x57FD
{
	if (!func_32())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

void func_137(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x582F
{
	func_138(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_138(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5847
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_142(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	uVar0 = Global_1574757.f_54;
	func_27();
	Global_1574757 = 9;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = iParam3;
	Global_1574757.f_56 = iParam3;
	Global_1574757.f_54 = uVar0;
	func_141();
	func_140(bParam2);
	func_139();
	return 1;
}

void func_139()//Position - 0x5911
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_140(bool bParam0)//Position - 0x5924
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_141()//Position - 0x594A
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_142(char* sParam0, char* sParam1)//Position - 0x596F
{
	if (!func_32())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

struct<13> func_143(int iParam0)//Position - 0x59C7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_144()//Position - 0x59DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Local_64.f_5.f_5[iVar0];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iVar1 > -1 && func_148(iVar1, 1))
			{
				iVar3 = iVar1;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					if (func_312(iVar3, 0, 1))
					{
						iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
						if (!PED::IS_PED_INJURED(iVar4))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar4))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iVar4, false) == iVar2)
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

int func_145(float fParam0, float fParam1)//Position - 0x5A71
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > fParam0)
			{
				if (func_146(fParam1))
				{
					if (!BitTest(uLocal_201, 18))
					{
						MISC::SET_BIT(&uLocal_201, 18);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(float fParam0)//Position - 0x5AC2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 > -1)
	{
		Var1 = { func_98(Local_64.f_5.f_38[iVar0]) };
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VDIST2(Var4, Var1) < (fParam0 * fParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_147(char* sParam0, bool bParam1)//Position - 0x5B1B
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_135(sParam0))
	{
		return;
	}
	func_27();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_141();
	func_140(bParam1);
	func_139();
}

int func_148(int iParam0, bool bParam1)//Position - 0x5B86
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!func_312(iVar0, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_143, 4))
		{
			return 0;
		}
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_143, 8))
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_143, 5))
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_143, 12))
	{
		return 0;
	}
	return 1;
}

void func_149()//Position - 0x5BFA
{
	if (!BitTest(uLocal_201, 16))
	{
		if (func_124(0, 1, 1, 1))
		{
			func_154("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */, 10000);
			MISC::SET_BIT(&uLocal_201, 16);
		}
	}
	if (!BitTest(uLocal_201, 6))
	{
		if (BitTest(uLocal_201, 13))
		{
			if (!func_21(&uLocal_199))
			{
				func_18(&uLocal_199, 0, 0);
			}
			else if (func_20(&uLocal_199, 15000, 0))
			{
				if (func_124(0, 1, 1, 1))
				{
					MISC::SET_BIT(&uLocal_201, 6);
				}
			}
		}
	}
}

void func_150(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5C6C
{
	int iVar0;
	
	iVar0 = func_151(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_151(int iParam0, var uParam1)//Position - 0x5C8F
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_53(uParam1));
}

int func_152(int iParam0, int iParam1)//Position - 0x5CA4
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_151(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)//Position - 0x5CD3
{
	struct<4> Var0;
	
	Var0.f_0 = 921195243;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

void func_154(char* sParam0, int iParam1)//Position - 0x5D0B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_155(var uParam0)//Position - 0x5D22
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_21(&(uParam0->f_14)))
			{
				func_18(&(uParam0->f_14), 0, 0);
			}
			else if (func_20(&(uParam0->f_14), 7000, 0))
			{
				if (func_172())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
						{
							MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
						}
						if (!func_171(0))
						{
							func_162(19, 30, "", 0, 0, 1, 0);
							func_154("FM_IHELP_QNV" /* GXT: ~s~Hold ~INPUT_CELLPHONE_UP~ and press ~INPUT_FRONTEND_ACCEPT~ to quickly accept an invite. */, -1);
							uParam0->f_3++;
						}
					}
					else if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
					{
						func_147("FM_IHELP_LCP" /* GXT: Lose the Cops. */, 0);
						MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
						if (func_161("FM_IHELP_INV2" /* GXT: Take out your phone, select the Job List and accept the 'Hold Up' invite from Lamar. */) || func_161("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */))
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_156(19, 30))
			{
				HUD::CLEAR_HELP(true);
				uParam0->f_3++;
			}
			else if (func_172())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_134("FM_IHELP_LCP" /* GXT: Lose the Cops. */))
					{
						func_26();
					}
					if ((!func_21(&uLocal_368) || func_20(&uLocal_368, 20000, 0)) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
					{
						if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
						{
							MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
						}
						if (!BitTest(uLocal_201, 16))
						{
							if (!func_161("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */))
							{
								if (!func_161("FM_IHELP_QNV" /* GXT: ~s~Hold ~INPUT_CELLPHONE_UP~ and press ~INPUT_FRONTEND_ACCEPT~ to quickly accept an invite. */))
								{
									if (func_101())
									{
										func_154("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */, 10000);
										MISC::SET_BIT(&uLocal_201, 16);
									}
								}
							}
						}
						else if (!func_161("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */))
						{
							if (!func_161("FM_IHELP_INV2" /* GXT: Take out your phone, select the Job List and accept the 'Hold Up' invite from Lamar. */))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (func_101())
									{
										func_154("FM_IHELP_INV2" /* GXT: Take out your phone, select the Job List and accept the 'Hold Up' invite from Lamar. */, -1);
										func_19(&uLocal_368);
										func_18(&uLocal_368, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 16))
				{
					func_147("FM_IHELP_LCP" /* GXT: Lose the Cops. */, 0);
					MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 16);
					if ((func_161("FM_IHELP_INV2" /* GXT: Take out your phone, select the Job List and accept the 'Hold Up' invite from Lamar. */) || func_161("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */)) || func_161("FM_IHELP_QNV" /* GXT: ~s~Hold ~INPUT_CELLPHONE_UP~ and press ~INPUT_FRONTEND_ACCEPT~ to quickly accept an invite. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			else if ((func_161("FM_IHELP_INV2" /* GXT: Take out your phone, select the Job List and accept the 'Hold Up' invite from Lamar. */) || func_161("FM_IHELP_INV" /* GXT: You will be invited onto Jobs by Contacts and other players via your phone. */)) || func_161("FM_IHELP_QNV" /* GXT: ~s~Hold ~INPUT_CELLPHONE_UP~ and press ~INPUT_FRONTEND_ACCEPT~ to quickly accept an invite. */))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_156(int iParam0, int iParam1)//Position - 0x5FBE
{
	int iVar0;
	
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2624658[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_157(iVar0);
	Global_2625824 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_157(int iParam0)//Position - 0x6011
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1665459)
	{
		return;
	}
	if (Global_2624658[iParam0 /*46*/].f_26 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2624658[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1665459)
	{
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_159(iVar0);
	Global_1665459 = (Global_1665459 - 1);
	if (Global_1665430)
	{
		if (Global_1665428 > 0)
		{
			func_158();
		}
	}
}

void func_158()//Position - 0x60B2
{
	Global_1665430 = 0;
}

void func_159(int iParam0)//Position - 0x60BF
{
	Global_2624658[iParam0 /*46*/] = 0;
	Global_2624658[iParam0 /*46*/].f_2 = 0;
	Global_2624658[iParam0 /*46*/].f_3 = 0;
	Global_2624658[iParam0 /*46*/].f_4 = 0;
	Global_2624658[iParam0 /*46*/].f_5 = func_113();
	Global_2624658[iParam0 /*46*/].f_6 = 145;
	Global_2624658[iParam0 /*46*/].f_7 = 1;
	Global_2624658[iParam0 /*46*/].f_8 = -1;
	Global_2624658[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_10), "", 64);
	Global_2624658[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_27), "", 32);
	Global_2624658[iParam0 /*46*/].f_35 = -1;
	Global_2624658[iParam0 /*46*/].f_36 = -1;
	Global_2624658[iParam0 /*46*/].f_37 = 0;
	Global_2624658[iParam0 /*46*/].f_39 = 0;
	Global_2624658[iParam0 /*46*/].f_40 = -1;
	Global_2624658[iParam0 /*46*/].f_41 = 0;
	Global_2624658[iParam0 /*46*/].f_42 = 0;
	Global_2624658[iParam0 /*46*/].f_43 = 0;
	Global_2624658[iParam0 /*46*/].f_45 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2624658[iParam0 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_160(int iParam0)//Position - 0x61CB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1665459)
	{
		if (!Global_2624658[iVar0 /*46*/].f_7)
		{
			if (Global_2624658[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_161(char* sParam0)//Position - 0x620E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x6221
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_160(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_157(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_163(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_163(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)//Position - 0x6266
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar51;
	struct<13> Var52;
	int iVar65;
	
	iVar0 = func_113();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_170())
		{
			return;
		}
	}
	iVar2 = Global_1665459;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2624658[iVar2 /*46*/] = { Global_2624658[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1665459++;
	if (Global_1665459 > 12)
	{
		Global_1665459 = 12;
	}
	iVar4 = 0;
	if (Global_2624658[1 /*46*/].f_1)
	{
		Global_2624658[0 /*46*/] = { Global_2624658[1 /*46*/] };
		Global_2624658[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2624658[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2624658[iVar4 /*46*/].f_1 = 0;
	}
	Global_2624658[iVar4 /*46*/] = 0;
	Global_2624658[iVar4 /*46*/].f_2 = 0;
	Global_2624658[iVar4 /*46*/].f_3 = 0;
	Global_2624658[iVar4 /*46*/].f_4 = 0;
	Global_2624658[iVar4 /*46*/].f_5 = iVar0;
	Global_2624658[iVar4 /*46*/].f_6 = iVar1;
	Global_2624658[iVar4 /*46*/].f_7 = bParam2;
	Global_2624658[iVar4 /*46*/].f_8 = iParam0;
	Global_2624658[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2624658[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2624658[iVar4 /*46*/].f_35 = iParam6;
	Global_2624658[iVar4 /*46*/].f_36 = iParam7;
	Global_2624658[iVar4 /*46*/].f_37 = 0;
	Global_2624658[iVar4 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	Global_2624658[iVar4 /*46*/].f_39 = uParam5;
	Global_2624658[iVar4 /*46*/].f_40 = Global_2625823;
	Global_2624658[iVar4 /*46*/].f_44 = iParam8;
	Global_2624658[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2624658[iVar4 /*46*/].f_9 = func_166();
	}
	else if (iParam0 == 272)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	else if (iParam0 == 212)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	Global_2625823++;
	func_165();
	Global_2624658[iVar4 /*46*/].f_41 = 0;
	Global_2624658[iVar4 /*46*/].f_42 = 0;
	Global_2624658[iVar4 /*46*/].f_43 = 0;
	if (func_164())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_143(iVar0) };
				iVar65 = NETWORK::NETWORK_START_COMMUNICATION_PERMISSIONS_CHECK(&Var52);
				if (iVar65 != -1)
				{
					Global_2624658[iVar4 /*46*/].f_41 = iVar65;
					Global_2624658[iVar4 /*46*/].f_42 = 1;
					Global_2624658[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

bool func_164()//Position - 0x6508
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_165()//Position - 0x651E
{
	Global_1665432 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
}

int func_166()//Position - 0x6535
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_169() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) || MISC::ARE_STRINGS_EQUAL(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_167(111, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_167(112, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_167(113, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_167(114, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_167(115, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_167(116, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_167(117, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && !MISC::ARE_STRINGS_EQUAL(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_152(12070, -1);
	bVar9 = false;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		bVar9 = iVar6 * 3;
		if (bVar9 != -1)
		{
			if (!BitTest(uVar8, bVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

char* func_167(int iParam0, int iParam1)//Position - 0x667E
{
	int iVar0;
	
	iVar0 = func_168(iParam0, iParam1);
	return STATS::STAT_GET_STRING(iVar0, -1);
}

int func_168(int iParam0, var uParam1)//Position - 0x6697
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_53(uParam1));
}

struct<6> func_169()//Position - 0x66AC
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1941975.f_10)))
	{
		iVar7 = func_152(12071, -1);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = MISC::GET_CONTENT_ID_INDEX(iVar7);
			if (iVar6 != -1)
			{
				Var0 = { Global_794709.f_153337[Global_794709.f_133589[iVar6 /*13*/].f_10 /*6*/] };
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1941975.f_10 = { Var0 };
		return Var0;
	}
	return Global_1941975.f_10;
}

bool func_170()//Position - 0x6730
{
	return Global_1575021 == 10;
}

int func_171(int iParam0)//Position - 0x673F
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0x6796
{
	if (func_173() == 0)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0x67AB
{
	return Global_1574632.f_18;
}

bool func_174()//Position - 0x67B9
{
	var uVar0;
	
	if (!BitTest(uLocal_201, 2))
	{
		if (!BitTest(uLocal_201, 10))
		{
			if (func_295(1103626240))
			{
				MISC::SET_BIT(&uLocal_201, 9);
			}
			MISC::SET_BIT(&uLocal_201, 10);
		}
		else if (!BitTest(uLocal_201, 9))
		{
			if (!BitTest(uLocal_201, 3))
			{
				if (!BitTest(uLocal_201, 5) || (BitTest(uLocal_201, 5) && func_20(&uLocal_197, 60000, 0)))
				{
					if (func_291())
					{
						if (!BitTest(uLocal_201, 4))
						{
							func_285(19, 3, 0);
							func_284(&uLocal_202, 1, 0, "Lamar", 0, 1);
							MISC::SET_BIT(&uLocal_201, 4);
						}
						else
						{
							MISC::SET_BIT(&uVar0, 4);
							MISC::SET_BIT(&uVar0, 7);
							if (func_280(&uLocal_202, 19, "FM_1AU", "FM_HOLD", uVar0, 0))
							{
								MISC::SET_BIT(&uLocal_201, 3);
								MISC::CLEAR_BIT(&uLocal_201, 5);
							}
						}
					}
				}
			}
			else if (!func_297())
			{
				if (func_279())
				{
					MISC::SET_BIT(&uLocal_201, 2);
					func_278(0);
				}
				else
				{
					func_19(&uLocal_197);
					func_18(&uLocal_197, 0, 0);
					MISC::CLEAR_BIT(&uLocal_201, 3);
					MISC::SET_BIT(&uLocal_201, 5);
				}
			}
		}
		else if (func_291())
		{
			if (func_175(19, "CELL_HOLD" /* GXT: I got word a store nearby has been doing mad trade. You take it down now. You'll need two people to carry the loot. */, 0, 0))
			{
				MISC::SET_BIT(&uLocal_201, 2);
				func_278(0);
			}
		}
	}
	return BitTest(uLocal_201, 2);
}

bool func_175(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x68E5
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_176(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_176(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)//Position - 0x690E
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_177(&uVar0, iParam0, func_277(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_177(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x6947
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
	iVar1 = func_276(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_275(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_270(uParam6))
	{
		return 0;
	}
	if (func_267(iVar0, iVar1, iVar2))
	{
		if (func_266())
		{
			return 0;
		}
		func_265();
		return func_184(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_183(iParam4))
	{
		return 0;
	}
	func_178(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_178(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x6A2C
{
	Global_1649067.f_40.f_1 = iParam0;
	Global_1649067.f_40.f_2 = iParam1;
	Global_1649067.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649067.f_40.f_4), sParam3, 16);
	Global_1649067.f_40.f_8 = iParam4;
	Global_1649067.f_40.f_9 = iParam5;
	Global_1649067.f_40.f_14 = uParam6;
	func_179(iParam4);
	func_265();
	Global_1649067.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_179(int iParam0)//Position - 0x6A99
{
	if (func_182(iParam0))
	{
		func_181();
		return;
	}
	func_180();
}

void func_180()//Position - 0x6AB5
{
	Global_1649067.f_40.f_10 = 0;
}

void func_181()//Position - 0x6AC6
{
	Global_1649067.f_40.f_10 = 1;
}

int func_182(int iParam0)//Position - 0x6AD7
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

bool func_183(int iParam0)//Position - 0x6B1F
{
	return iParam0 > Global_1649067.f_40.f_8;
}

int func_184(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x6B32
{
	struct<2> Var0;
	
	func_264();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_261(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_258(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_261(uParam0, sParam3, sParam4);
		}
		return func_241(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_240(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_228(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_227(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_185(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_185(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x6C2C
{
	bool bVar0;
	
	func_226();
	bVar0 = true;
	if (func_187(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_186(120000);
		return 1;
	}
	return 0;
}

void func_186(int iParam0)//Position - 0x6C63
{
	Global_1649067.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1649067.f_40.f_12 = 1;
}

int func_187(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x6C86
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
	
	iVar0 = func_113();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_220(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13))
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
	sVar4 = func_219(sParam5, bParam6, &iVar3);
	uVar5 = func_217(iParam7, &iVar3);
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
		bVar12 = func_216(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_191(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_190();
	}
	func_226();
	func_189();
	func_188();
	return 1;
}

void func_188()//Position - 0x6DCD
{
	Global_1649067.f_57 = 0;
	Global_1649067.f_57.f_1 = 0;
}

void func_189()//Position - 0x6DE5
{
	Global_1649067.f_40 = 3;
}

void func_190()//Position - 0x6DF4
{
	MISC::SET_BIT(&Global_8370, 8);
}

int func_191(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x6E05
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
	if (func_192(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9077 = iParam6;
			MISC::SET_BIT(&Global_4542302, 0);
		}
		return 1;
	}
	return 0;
}

int func_192(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x6E71
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_209();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20500 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20500 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20500 == 1)
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
		if (Global_4542287 == 1)
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
	if (func_208() == 0)
	{
		func_206();
		return 0;
	}
	func_205(Global_4542286);
	StringCopy(&(Global_4541037[Global_4542286 /*104*/]), sParam1, 64);
	Global_4541037[Global_4542286 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541037[Global_4542286 /*104*/].f_24 = iParam2;
	}
	Global_4541037[Global_4542286 /*104*/].f_25 = iParam7;
	Global_4541037[Global_4542286 /*104*/].f_26 = uParam8;
	Global_4541037[Global_4542286 /*104*/].f_29 = uParam9;
	Global_4541037[Global_4542286 /*104*/].f_30 = uParam12;
	Global_4541037[Global_4542286 /*104*/].f_31 = uParam11;
	Global_4541037[Global_4542286 /*104*/].f_28 = 0;
	Global_4541037[Global_4542286 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_33), sParam4, 64);
	Global_4541037[Global_4542286 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_50), sParam5, 64);
	Global_4541037[Global_4542286 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_83), sParam15, 64);
	func_209();
	switch (iParam16)
	{
		case 3:
			Global_4541037[Global_4542286 /*104*/].f_99[Global_20500] = 1;
			break;
		
		case 0:
			Global_4541037[Global_4542286 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541037[Global_4542286 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541037[Global_4542286 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20500)
		{
			case 0:
				func_204(0);
				break;
			
			case 1:
				func_204(1);
				break;
			
			case 2:
				func_204(2);
				break;
			
			case 3:
				func_204(3);
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
				Global_4542287 = 1;
				break;
			
			case 0:
				Global_4542287 = 1;
				break;
			
			case 2:
				Global_4542287 = 1;
				break;
			
			case 1:
				Global_4542287 = 1;
				break;
			}
	}
	Global_22914[Global_4542286] = 0;
	if (bParam10)
	{
		func_209();
		if (Global_20443)
		{
			StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20500)
			{
				case 0:
					StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_203())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_202(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_198(1);
			func_202(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_193(iParam0, sParam1, bVar1, func_197(PLAYER::PLAYER_ID()));
	return 1;
}

void func_193(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x725E
{
	struct<14> Var0;
	
	if (!func_194())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1978312.f_7;
	Var0.f_7 = Global_1978312.f_8;
	Var0.f_8 = Global_1978312.f_9;
	Var0.f_9 = Global_1978312.f_10;
	Var0.f_10 = Global_1978312.f_11;
	Var0.f_11 = Global_1978312.f_12;
	Var0.f_12 = Global_1978312.f_13;
	Var0.f_13 = Global_1978312.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1978329 = -1;
	}
}

int func_194()//Position - 0x72F9
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_113())
	{
		return 0;
	}
	if (func_195(PLAYER::PLAYER_ID()))
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

bool func_195(int iParam0)//Position - 0x735C
{
	return func_196(iParam0, 20);
}

var func_196(int iParam0, int iParam1)//Position - 0x736C
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_197(int iParam0)//Position - 0x7384
{
	return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

void func_198(int iParam0)//Position - 0x7399
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
	
	Global_22913 = 0;
	Global_8975 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8939[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_201(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8377[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8377[iVar1 /*15*/].f_4)
					{
						if (Global_8939[iVar0] == 0)
						{
							Global_8903[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8371, 3))
								{
									iVar2 = 42;
									Global_20708 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20708 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2694571)
							{
								if (iVar1 == 14)
								{
									func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8939[iVar0] = 1;
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
				if (iParam0 == Global_8377[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8377[iVar1 /*15*/].f_4)
					{
						if (Global_8939[iVar0] == 0)
						{
							Global_8903[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113810.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113810.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113810.f_14144[iVar3 /*104*/].f_99[Global_20500] == 1)
											{
												Global_22913++;
											}
										}
									}
									iVar3++;
								}
								func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78689)
								{
									iVar4 = 0;
									iVar4 = Global_4541036;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541037[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541037[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541037[iVar5 /*104*/].f_99[Global_20500] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20500)
									{
										case 0:
											iVar6 = Global_44580;
											break;
										
										case 1:
											iVar6 = Global_44581;
											break;
										
										case 2:
											iVar6 = Global_44582;
											break;
										
										default:
											break;
									}
									func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8376);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8371, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8371, 3))
								{
									iVar8 = 42;
									Global_20708 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20708 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8371, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_200(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8377[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890239.f_1;
								func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_199(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8939[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_199(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x7933
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
		func_200(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_200(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_200(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_200(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_200(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_200(char* sParam0)//Position - 0x79E6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_201(int iParam0)//Position - 0x79F8
{
	return Global_43377 == iParam0;
}

void func_202(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x7A06
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

bool func_203()//Position - 0x7A69
{
	return Global_1575063;
}

void func_204(int iParam0)//Position - 0x7A75
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113810.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_205(int iParam0)//Position - 0x7A94
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
	Global_4541037[iParam0 /*104*/].f_18 = iVar0;
	Global_4541037[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4541037[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4541037[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4541037[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541037[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_206()//Position - 0x7B14
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4542286 = 11;
	Global_4541037[Global_4542286 /*104*/].f_18 = -1;
	Global_4541037[Global_4542286 /*104*/].f_18.f_1 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_2 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_3 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_207(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
		{
			Global_4542286 = iVar2;
		}
		iVar2++;
	}
	Global_4541037[Global_4542286 /*104*/].f_24 = 1;
}

int func_207(struct<6> Param0, struct<6> Param6)//Position - 0x7BBE
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

int func_208()//Position - 0x7CA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541037[iVar2 /*104*/].f_24 == 0)
		{
			Global_4542286 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4542286 = 11;
	Global_4541037[Global_4542286 /*104*/].f_18 = -1;
	Global_4541037[Global_4542286 /*104*/].f_18.f_1 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_2 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_3 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541037[iVar2 /*104*/].f_24 == 0 || Global_4541037[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_207(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
			{
				Global_4542286 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4542286 == 11)
	{
		return 0;
	}
	Global_4541037[Global_4542286 /*104*/].f_99[0] = 0;
	Global_4541037[Global_4542286 /*104*/].f_99[1] = 0;
	Global_4541037[Global_4542286 /*104*/].f_99[2] = 0;
	return 1;
}

void func_209()//Position - 0x7DD4
{
	if (func_201(14))
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
		Global_20500 = func_210();
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

var func_210()//Position - 0x7E76
{
	func_211();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_211()//Position - 0x7E8F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_214(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_213(PLAYER::PLAYER_PED_ID());
			if (func_212(iVar0) && (!func_201(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_212(Global_113810.f_2366.f_539.f_4321))
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

bool func_212(int iParam0)//Position - 0x7F8C
{
	return iParam0 < 3;
}

int func_213(int iParam0)//Position - 0x7F98
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_214(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_214(int iParam0)//Position - 0x7FD5
{
	if (func_212(iParam0))
	{
		return func_215(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_215(int iParam0)//Position - 0x7FFA
{
	return Global_2058[iParam0 /*29*/];
}

int func_216(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x800A
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
	if (func_192(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9077 = iParam10;
			MISC::SET_BIT(&Global_4542302, 0);
		}
		return 1;
	}
	return 0;
}

int func_217(int iParam0, int iParam1)//Position - 0x808C
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_218(2, iParam1);
	return iParam0;
}

void func_218(int iParam0, var uParam1)//Position - 0x80AB
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

char* func_219(char* sParam0, bool bParam1, int iParam2)//Position - 0x815C
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_218(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_220(int iParam0)//Position - 0x8199
{
	int iVar0;
	
	iVar0 = func_223(iParam0);
	if (iVar0 == -1)
	{
		func_221(iParam0, 1);
		return 0;
	}
	Global_1666485[iVar0 /*5*/].f_4 = 1;
	return Global_1666485[iVar0 /*5*/].f_2;
}

void func_221(int iParam0, bool bParam1)//Position - 0x81CF
{
	if (!func_312(iParam0, 0, 1))
	{
		return;
	}
	if (func_223(iParam0) != -1)
	{
		return;
	}
	if (Global_1666648)
	{
		if (iParam0 == Global_1666648.f_1)
		{
			return;
		}
	}
	if (func_222(iParam0))
	{
		return;
	}
	if (Global_1666686 >= 32)
	{
		return;
	}
	Global_1666653[Global_1666686] = iParam0;
	Global_1666686++;
	if (bParam1)
	{
	}
}

int func_222(int iParam0)//Position - 0x823B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666686)
	{
		if (Global_1666653[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x826D
{
	int iVar0;
	
	if (!func_312(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666646 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666646)
	{
		if (Global_1666485[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_224(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_224(int iParam0)//Position - 0x82EC
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1666646)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666485[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1666646)
	{
		Global_1666485[iVar32 /*5*/] = { Global_1666485[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_225(&(Global_1666485[iVar32 /*5*/]));
	Global_1666646 = (Global_1666646 - 1);
}

void func_225(var uParam0)//Position - 0x83A2
{
	*uParam0 = 0;
	uParam0->f_1 = func_113();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_226()//Position - 0x83CF
{
	Global_1649067.f_40.f_9 = 4;
}

int func_227(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x83E0
{
	bool bVar0;
	
	func_226();
	bVar0 = false;
	return func_187(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_228(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x8407
{
	bool bVar0;
	
	bVar0 = false;
	return func_229(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_229(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x842A
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
	
	iVar0 = func_113();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_220(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22906 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_219(sParam5, bParam6, &iVar3);
	uVar5 = func_217(iParam7, &iVar3);
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
		bVar12 = func_239(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_231(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_190();
	}
	func_230();
	func_189();
	func_188();
	return 1;
}

void func_230()//Position - 0x8576
{
	Global_1649067.f_40.f_9 = 3;
}

int func_231(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x8587
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8370, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_233(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9077 = iParam6;
			Global_8980[3 /*6*/] = { func_232(iParam0) };
			Global_9057 = iParam0;
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_232(int iParam0)//Position - 0x8616
{
	return Global_2058[iParam0 /*29*/].f_3;
}

int func_233(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x8629
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_209();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20500 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20500 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20500 == 1)
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
		if (Global_113810.f_14054[Global_20500 /*20*/].f_17 == 1)
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
	if (func_238() == 0)
	{
		func_236();
		return 0;
	}
	func_235(Global_22912);
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/]), sParam1, 64);
	Global_113810.f_14144[Global_22912 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113810.f_14144[Global_22912 /*104*/].f_24 = iParam2;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_25 = iParam7;
	Global_113810.f_14144[Global_22912 /*104*/].f_26 = uParam8;
	Global_113810.f_14144[Global_22912 /*104*/].f_29 = uParam9;
	Global_113810.f_14144[Global_22912 /*104*/].f_30 = uParam12;
	Global_113810.f_14144[Global_22912 /*104*/].f_31 = uParam11;
	Global_113810.f_14144[Global_22912 /*104*/].f_28 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_33), sParam4, 64);
	Global_113810.f_14144[Global_22912 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_50), sParam5, 64);
	Global_113810.f_14144[Global_22912 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8370, 10))
	{
		Global_113810.f_14144[Global_22912 /*104*/].f_99[0] = 1;
		Global_113810.f_14144[Global_22912 /*104*/].f_99[1] = 1;
		Global_113810.f_14144[Global_22912 /*104*/].f_99[2] = 1;
		Global_9076 = 4;
		func_204(0);
		func_204(2);
		func_204(1);
	}
	else
	{
		func_209();
		switch (iParam16)
		{
			case 3:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[Global_20500] = 1;
				break;
			
			case 0:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20500)
			{
				case 0:
					func_204(0);
					Global_9076 = 0;
					break;
				
				case 1:
					func_204(1);
					Global_9076 = 1;
					break;
				
				case 2:
					func_204(2);
					Global_9076 = 2;
					break;
				
				case 3:
					func_204(3);
					Global_9076 = 3;
					break;
				
				default:
					Global_9076 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8370, 10))
		{
			Global_113810.f_14054[0 /*20*/].f_17 = 1;
			Global_113810.f_14054[1 /*20*/].f_17 = 1;
			Global_113810.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113810.f_14054[Global_20500 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113810.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113810.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113810.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22914[Global_22912] = 0;
	if (bParam10)
	{
		func_209();
		if (Global_20443)
		{
			StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20500)
			{
				case 0:
					StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_203())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_202(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_198(1);
			func_202(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_234(iParam0, sParam1, bVar1, func_197(PLAYER::PLAYER_ID()));
	return 1;
}

void func_234(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x8B04
{
	struct<14> Var0;
	
	if (!func_194())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1978312.f_7;
	Var0.f_7 = Global_1978312.f_8;
	Var0.f_8 = Global_1978312.f_9;
	Var0.f_9 = Global_1978312.f_10;
	Var0.f_10 = Global_1978312.f_11;
	Var0.f_11 = Global_1978312.f_12;
	Var0.f_12 = Global_1978312.f_13;
	Var0.f_13 = Global_1978312.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1978329 = -1;
	}
}

void func_235(int iParam0)//Position - 0x8B9F
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
	Global_113810.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_236()//Position - 0x8C31
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78689)
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
	Global_22912 = 34;
	Global_113810.f_14144[Global_22912 /*104*/].f_18 = -1;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_237(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
		{
			Global_22912 = iVar2;
		}
		iVar2++;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_24 = 1;
}

int func_237(struct<6> Param0, struct<6> Param6)//Position - 0x8CFC
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

int func_238()//Position - 0x8DE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78689)
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
		if (Global_113810.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_22912 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22912 = 34;
	Global_113810.f_14144[Global_22912 /*104*/].f_18 = -1;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113810.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113810.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_237(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
			{
				Global_22912 = iVar2;
			}
		}
		if (Global_113810.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22912 == 34)
	{
		return 0;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_99[0] = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_99[1] = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_99[2] = 0;
	return 1;
}

int func_239(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x8F4F
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
	MISC::CLEAR_BIT(&Global_8370, 10);
	iVar0 = 3;
	if (func_233(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9077 = iParam10;
			Global_8980[3 /*6*/] = { func_232(iParam0) };
			Global_9057 = iParam0;
			StringCopy(&Global_9058, sParam5, 64);
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

int func_240(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x8FFB
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_230();
	bVar0 = true;
	if (func_229(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_186(120000);
		return 1;
	}
	return 0;
}

int func_241(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x904D
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
		bVar0 = func_257(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_247(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_246(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_245(1);
		}
		func_244();
		func_189();
		func_243();
		func_242();
		return 1;
	}
	return 0;
}

void func_242()//Position - 0x90E4
{
	Global_2804285 = 0;
}

void func_243()//Position - 0x90F1
{
	Global_1649067.f_57 = 1;
	Global_1649067.f_57.f_1 = 0;
}

void func_244()//Position - 0x9109
{
	Global_1649067.f_40.f_9 = 1;
}

void func_245(int iParam0)//Position - 0x911A
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8372, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8372, 0);
	}
}

void func_246(int iParam0)//Position - 0x913B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 20);
	}
}

int func_247(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x915E
{
	func_256(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21893 = 0;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 0;
	Global_21899 = 0;
	Global_2883585 = 0;
	return func_248(sParam3, iParam4, bParam7);
}

int func_248(char* sParam0, int iParam1, bool bParam2)//Position - 0x91AC
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
					func_255();
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
		if (func_107(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_254();
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
				func_209();
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
				if (func_253())
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
			if (func_252())
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
			func_251();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_250();
		func_249();
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
		func_255();
	}
	return 0;
}

void func_249()//Position - 0x947A
{
	if (!func_194())
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

void func_250()//Position - 0x94B1
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

void func_251()//Position - 0x94E1
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

int func_252()//Position - 0x9576
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_253()//Position - 0x959D
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

void func_254()//Position - 0x9636
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

void func_255()//Position - 0x968C
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

void func_256(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x96E3
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

int func_257(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9739
{
	func_256(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21893 = 1;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 0;
	Global_21899 = 0;
	Global_2883585 = 0;
	return func_248(sParam3, iParam4, bParam7);
}

int func_258(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x9787
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_260(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_259();
		func_244();
		func_189();
		func_243();
		func_242();
		return 1;
	}
	return 0;
}

void func_259()//Position - 0x97D9
{
	Global_22863 = 0;
}

bool func_260(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x97E5
{
	func_256(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21893 = 0;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 1;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 1;
	Global_21899 = 0;
	StringCopy(&Global_21993, sParam5, 24);
	Global_2883585 = 0;
	return func_248(sParam3, iParam4, bParam8);
}

int func_261(var uParam0, char* sParam1, char* sParam2)//Position - 0x983A
{
	if (func_263(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_262();
		func_189();
		func_243();
		return 1;
	}
	return 0;
}

void func_262()//Position - 0x9865
{
	Global_1649067.f_40.f_9 = 2;
}

bool func_263(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9876
{
	func_256(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_248(sParam2, iParam3, 0);
}

void func_264()//Position - 0x98C4
{
	Global_1649067.f_55 = Global_1649067.f_40.f_1;
	Global_1649067.f_55.f_1 = Global_1649067.f_40.f_10;
}

void func_265()//Position - 0x98EA
{
	Global_1649067.f_40 = 1;
}

bool func_266()//Position - 0x98F9
{
	return Global_1649067.f_40 == 1;
}

int func_267(int iParam0, int iParam1, int iParam2)//Position - 0x9909
{
	if (!func_268(iParam0))
	{
		return 0;
	}
	if (Global_1649067.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1649067.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_268(int iParam0)//Position - 0x9948
{
	if (!func_269())
	{
		return 0;
	}
	if (!Global_1649067.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_269()//Position - 0x9970
{
	if (Global_1649067.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_270(var uParam0)//Position - 0x9987
{
	if (func_274())
	{
		return 0;
	}
	if (func_273())
	{
		return 0;
	}
	if (func_171(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935879 || func_272())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_271())
		{
			return 0;
		}
	}
	return 1;
}

bool func_271()//Position - 0x99E8
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665432);
}

int func_272()//Position - 0x99FC
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_273()//Position - 0x9A14
{
	return Global_1649067.f_40 == 3;
}

bool func_274()//Position - 0x9A24
{
	return func_252();
}

int func_275(int iParam0, int iParam1, int iParam2)//Position - 0x9A30
{
	if (!func_273())
	{
		return 0;
	}
	return func_267(iParam0, iParam1, iParam2);
}

int func_276(char* sParam0, char* sParam1)//Position - 0x9A4E
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_277()//Position - 0x9A68
{
	return "TXTMSG";
}

void func_278(bool bParam0)//Position - 0x9A74
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 28);
	}
}

bool func_279()//Position - 0x9AAA
{
	return Global_1649067.f_57.f_1;
}

int func_280(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)//Position - 0x9ABA
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_282())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_177(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_281()//Position - 0x9AFF
{
	return Global_2801145.f_1;
}

int func_282()//Position - 0x9B0D
{
	if (Global_1649255.f_2)
	{
		return 1;
	}
	return func_283();
}

bool func_283()//Position - 0x9B26
{
	return func_274();
}

void func_284(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9B32
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

void func_285(int iParam0, int iParam1, bool bParam2)//Position - 0x9BCD
{
	int iVar0;
	
	Global_9056 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		func_209();
		if (iParam1 == 4)
		{
			func_290(iParam0, 0, 1);
			func_290(iParam0, 1, 1);
			func_290(iParam0, 2, 1);
			func_289(iParam0, 0, 1);
			func_289(iParam0, 1, 1);
			func_289(iParam0, 2, 1);
		}
		else
		{
			if (func_288(iParam0, iParam1) == 1 && func_287(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_290(iParam0, iVar0, 1);
			func_289(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2794162.f_6892, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2794162.f_6892, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2794162.f_6892, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78689)
			{
				if (iParam1 != 4)
				{
					if (Global_20500 != iParam1)
					{
						Global_9029[iParam1 /*4*/] = { func_232(iParam0) };
						Global_9046[iParam1] = 1;
						Global_9051[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20500)
					{
					}
					else
					{
						Global_8980[1 /*6*/] = { func_232(iParam0) };
						Global_8980[1 /*6*/].f_5 = iParam1;
						func_286();
					}
				}
				else
				{
					Global_8980[1 /*6*/] = { func_232(iParam0) };
					Global_8980[1 /*6*/].f_5 = iParam1;
					func_286();
				}
			}
			else
			{
				Global_8980[1 /*6*/] = { func_232(iParam0) };
				Global_8980[1 /*6*/].f_5 = iParam1;
				func_286();
			}
		}
	}
}

void func_286()//Position - 0x9D4B
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[Global_9056 /*29*/].f_7)), 64);
	if (Global_9075 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8980[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8980[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8370, 0);
}

int func_287(int iParam0, int iParam1)//Position - 0x9DC4
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_24[iParam1];
}

int func_288(int iParam0, int iParam1)//Position - 0x9DEE
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_12[iParam1];
}

void func_289(int iParam0, int iParam1, int iParam2)//Position - 0x9E18
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2058[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_290(int iParam0, int iParam1, int iParam2)//Position - 0x9E5D
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2058[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_291()//Position - 0x9EA2
{
	if (func_105())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	if (func_304(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_303())
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_271())
	{
		return 0;
	}
	if (func_293())
	{
		return 0;
	}
	if (func_292(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_292(int iParam0, int iParam1)//Position - 0x9F6A
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

bool func_293()//Position - 0x9F80
{
	return Global_2684820.f_2846.f_42;
}

int func_294()//Position - 0x9F91
{
	if (Global_20500.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_295(float fParam0)//Position - 0x9FAA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_312(iVar1, 1, 1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_296(iVar1))
					{
						if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true)) < (fParam0 * fParam0))
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_296(int iParam0)//Position - 0xA024
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_143, 28);
}

bool func_297()//Position - 0xA03A
{
	return func_273();
}

void func_298()//Position - 0xA046
{
	struct<3> Var0;
	
	Var0.f_0 = 27445046;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = MISC::GET_FRAME_COUNT();
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, func_4(1, 1));
}

void func_299(bool bParam0)//Position - 0xA073
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 3);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 3);
	}
}

void func_300(var uParam0)//Position - 0xA0CC
{
	if (func_134("FM_HTUT_GOP"))
	{
		func_301("FM_HTUT_GOP");
	}
	if (func_134("FM_HTUT_GO" /* GXT: Go to the ~y~Store. */))
	{
		func_301("FM_HTUT_GO" /* GXT: Go to the ~y~Store. */);
	}
	if (func_134("FM_HTUT_WAT" /* GXT: Wait for ~HUD_COLOUR_WHITE~~a~. */))
	{
		func_301("FM_HTUT_WAT" /* GXT: Wait for ~HUD_COLOUR_WHITE~~a~. */);
	}
	if (func_134("FM_HTUT_HLD" /* GXT: Hold up the Store with ~HUD_COLOUR_WHITE~~a~. */))
	{
		func_301("FM_HTUT_HLD" /* GXT: Hold up the Store with ~HUD_COLOUR_WHITE~~a~. */);
	}
	if (func_134("FM_HTUT_HLS" /* GXT: Hold up the Store. */))
	{
		func_301("FM_HTUT_HLS" /* GXT: Hold up the Store. */);
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_4));
	}
}

void func_301(char* sParam0)//Position - 0xA13E
{
	bool bVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_32())
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
	func_27();
}

int func_302()//Position - 0xA1B7
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_193;
}

bool func_303()//Position - 0xA1CC
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

int func_304(int iParam0, bool bParam1, bool bParam2)//Position - 0xA1E5
{
	if (bParam1)
	{
		if (func_305(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[iParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_305(int iParam0)//Position - 0xA217
{
	return func_306(iParam0);
}

var func_306(int iParam0)//Position - 0xA225
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_307()//Position - 0xA23C
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	return func_51(121, -1);
}

int func_308()//Position - 0xA26C
{
	return Local_64.f_0;
}

int func_309(int iParam0)//Position - 0xA276
{
	return iLocal_144[iParam0];
}

void func_310()//Position - 0xA284
{
	PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(false);
	func_26();
	func_25(8, 0);
	NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
	if (func_296(PLAYER::PLAYER_ID()))
	{
		func_278(0);
	}
	func_311();
}

void func_311()//Position - 0xA2B5
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_312(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA2C1
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_313()//Position - 0xA321
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_319())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_318())
	{
		return 1;
	}
	if (func_317(159))
	{
		if (!func_316())
		{
			return 1;
		}
	}
	if (func_317(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_314() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_314()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_314()//Position - 0xA3A5
{
	switch (func_41())
	{
		case 0:
			return func_315();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_315()//Position - 0xA3D8
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_316()//Position - 0xA3FC
{
	return Global_2683883.f_698;
}

int func_317(int iParam0)//Position - 0xA40B
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_318()//Position - 0xA422
{
	return Global_2694576;
}

bool func_319()//Position - 0xA42E
{
	return Global_2683883.f_693;
}

void func_320()//Position - 0xA43D
{
	SYSTEM::WAIT(0);
}

void func_321(struct<21> Param0)//Position - 0xA44A
{
	func_325(func_326(Param0.f_0), Param0);
	func_323(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_64, 79, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_144, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_322())
	{
		func_310();
	}
	MISC::CLEAR_BIT(&Global_1927215, 1);
	MISC::CLEAR_BIT(&Global_1927215, 15);
	MISC::CLEAR_BIT(&Global_1927215, 14);
	func_25(8, 1);
	if (!func_296(PLAYER::PLAYER_ID()))
	{
		func_278(1);
	}
}

int func_322()//Position - 0xA4C1
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
		if (func_319())
		{
			return 0;
		}
		if (func_317(157))
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

int func_323(int iParam0, int iParam1, bool bParam2)//Position - 0xA51A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_311();
			}
			else
			{
				return 0;
			}
		}
		if (!func_324(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_311();
					}
					else
					{
						return 0;
					}
				}
				if (func_319())
				{
					if (!bParam2)
					{
						func_311();
					}
					else
					{
						return 0;
					}
				}
				if (func_317(157))
				{
					if (!bParam2)
					{
						func_311();
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
					func_311();
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
				func_311();
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
			func_311();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_324(bool bParam0)//Position - 0xA630
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_325(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0xA641
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_311();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_326(int iParam0)//Position - 0xA660
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
		
		case 180:
			return 32;
		
		case 181:
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
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 182:
			return 32;
		
		case 183:
			return 32;
		
		case 187:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 196:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 2;
		
		case 203:
			return 1;
		
		case 199:
			return 2;
		
		case 200:
			return 4;
		
		case 201:
			return 2;
		
		case 202:
			return 2;
		
		case 184:
			return 1;
		
		case 204:
			return 2;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 0;
		
		case 226:
			return 1;
		
		case 211:
			return 4;
		
		case 214:
			return 4;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 222:
			return 1;
		
		case 218:
			return 2;
		
		case 223:
			return 1;
		
		case 219:
			return 1;
		
		case 217:
			return 2;
		
		case 220:
			return 8;
		
		case 221:
			return 8;
		
		case 224:
			return 1;
		
		case 225:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 212:
			return 16;
		
		case 213:
			return 32;
		
		default:
	}
	switch (func_327(func_328(iParam0, 1)))
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

int func_327(int iParam0)//Position - 0xADEB
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
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		default:
	}
	return -1;
}

int func_328(int iParam0, bool bParam1)//Position - 0xAFF9
{
	switch (iParam0)
	{
		case 198:
			return 15;
		
		case 205:
			return 8;
		
		case 199:
			return 14;
		
		case 203:
			return 122;
		
		case 206:
			return 1;
		
		case 204:
			return 5;
		
		case 207:
			return 6;
		
		case 200:
			return 11;
		
		case 208:
			return 0;
		
		case 209:
			return 2;
		
		case 201:
			return 13;
		
		case 210:
			return 3;
		
		case 202:
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
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		default:
	}
	if (bParam1)
	{
	}
	return 322;
}

