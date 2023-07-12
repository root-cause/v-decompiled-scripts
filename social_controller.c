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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<6> Local_90 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_96 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109[3] = { 0, 0, 0 };
	int iLocal_113[3] = { 0, 0, 0 };
	int iLocal_117[3] = { 0, 0, 0 };
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135[3] = { 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_147[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = -1;
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
	var uLocal_245 = 1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = -1;
	var uLocal_250 = -1;
	var uLocal_251 = 2;
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
	var uLocal_264 = 2;
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
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	var uLocal_335[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
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
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	iLocal_67 = -1;
	iLocal_68 = -1;
	iLocal_69 = 21;
	iLocal_71 = 2;
	iLocal_77 = 1;
	iLocal_78 = 1;
	iLocal_81 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_108 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_563())
		{
		}
		else
		{
			func_559();
			func_518();
			func_517();
			switch (iLocal_70)
			{
				case 0:
					func_515();
					break;
				
				case 1:
					func_197();
					func_192();
					func_25(&uLocal_157);
					func_22();
					func_10();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_2();
					}
					break;
				
				case 2:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x128
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2()//Position - 0x134
{
	if (!func_9(&uLocal_326))
	{
		func_8(&uLocal_326, 0, 0);
	}
	else if (func_7(&uLocal_326, 7200000, 0))
	{
		if (func_6(0))
		{
			if (func_5(PLAYER::PLAYER_ID()))
			{
				if (!func_4())
				{
					func_3(&uLocal_326);
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SC_PLAY_REM" /* GXT: Enter a Rockstar Tournament for a chance to win numerous in-game prizes! Launch the Qualification Playlist from the Online Menu for a chance to compete. */);
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
		}
	}
}

void func_3(var uParam0)//Position - 0x191
{
	uParam0->f_1 = 0;
}

bool func_4()//Position - 0x19E
{
	return Global_1575063;
}

bool func_5(int iParam0)//Position - 0x1AA
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_139, 6);
}

bool func_6(int iParam0)//Position - 0x1BF
{
	return Global_1936071.f_16[iParam0 /*44*/].f_4;
}

int func_7(var uParam0, int iParam1, bool bParam2)//Position - 0x1D3
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x231
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

bool func_9(var uParam0)//Position - 0x276
{
	return uParam0->f_1;
}

void func_10()//Position - 0x282
{
	int iVar0;
	char* sVar1;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar24;
	int iVar25;
	int iVar26;
	char* sVar27;
	struct<8> Var28;
	
	switch (iLocal_330)
	{
		case 0:
			if ((Global_110506 && !iLocal_328) && !Global_262145.f_10764 /* Tunable: DISABLE_SC_NUMBER_PLATE_ADD */)
			{
				iLocal_331 = -1;
				iVar0 = 0;
				while (iVar0 < Global_110494)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_110494[iVar0 /*4*/])))
					{
						iLocal_331 = iVar0;
					}
					iVar0++;
				}
				if (iLocal_331 != -1)
				{
					iLocal_330++;
				}
				else
				{
					Global_110506 = 0;
				}
			}
			if (((!Global_110506 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && func_21(3763, -1)) && (!iLocal_333 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_334)) > 25000))
			{
				uLocal_335[0] = func_20(1362, -1);
				uLocal_335[1] = func_20(1363, -1);
				uLocal_335[2] = func_20(1364, -1);
				uLocal_335[3] = func_20(1365, -1);
				uLocal_335[4] = func_20(1366, -1);
				uLocal_335[5] = func_20(1367, -1);
				uLocal_335[6] = func_20(1368, -1);
				uLocal_335[7] = func_20(1369, -1);
				func_19(&sVar1, &uLocal_335, -1);
				func_16(&sVar1);
				iLocal_333 = 0;
			}
			break;
		
		case 1:
			if (iLocal_332 == 0)
			{
				SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_110494[iLocal_331 /*4*/]), &iLocal_332);
			}
			else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_332))
			{
				switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_332))
				{
					case 0:
						bVar7 = false;
						iVar5 = Global_110342;
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_110342[iVar6 /*4*/])))
							{
								if (MISC::GET_HASH_KEY(&(Global_110342[iVar6 /*4*/])) == MISC::GET_HASH_KEY(&(Global_110494[iLocal_331 /*4*/])))
								{
									bVar7 = true;
									iVar6 = iVar5 + 1;
								}
							}
							iVar6++;
						}
						if (bVar7)
						{
							iLocal_330 = 3;
						}
						else
						{
							iLocal_330 = 2;
						}
						break;
					
					default:
						StringCopy(&(Global_110494[iLocal_331 /*4*/]), "", 16);
						if (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_332) == 2)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								func_14(3763, 0, -1);
							}
						}
						iLocal_330 = 0;
						break;
				}
				iLocal_332 = 0;
			}
			break;
		
		case 2:
			if (iLocal_332 == 0)
			{
				StringCopy(&Var8, "", 64);
				if (Global_110503[iLocal_331])
				{
					func_13(&Var8, "SPPlate", 0);
					func_13(&Var8, "MPPlate", 1);
				}
				else
				{
					func_13(&Var8, "SPPlate", 1);
				}
				SOCIALCLUB::SC_LICENSEPLATE_ADD(&(Global_110494[iLocal_331 /*4*/]), &Var8, &iLocal_332);
			}
			else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ADD_IS_PENDING(iLocal_332))
			{
				switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ADD_STATUS(iLocal_332))
				{
					case 0:
						iLocal_328 = 1;
						iLocal_330 = 0;
						StringCopy(&(Global_110494[iLocal_331 /*4*/]), "", 16);
						iLocal_332 = 0;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_14(3763, 0, -1);
						}
						break;
					
					default:
						iLocal_332 = 0;
						iLocal_330 = 0;
						StringCopy(&(Global_110494[iLocal_331 /*4*/]), "", 16);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_333 = 1;
							iLocal_334 = NETWORK::GET_NETWORK_TIME();
						}
						break;
				}
				iLocal_332 = 0;
			}
			break;
		
		case 3:
			if (SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_VALID(iLocal_332))
			{
				if (!SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_PENDING(iLocal_332))
				{
					iVar24 = -1;
					iVar25 = SOCIALCLUB::SC_LICENSEPLATE_GET_COUNT(iLocal_332);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						sVar27 = SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE(iLocal_332, iVar26);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar27) && MISC::GET_HASH_KEY(sVar27) == MISC::GET_HASH_KEY(&(Global_110494[iLocal_331 /*4*/])))
						{
							iVar24 = iVar26;
							iVar26 = iVar25 + 1;
						}
						iVar26++;
					}
					if (iVar24 != -1)
					{
						StringCopy(&Var28, SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE_DATA(iLocal_332, iVar24), 64);
						if (Global_110503[iLocal_331])
						{
							func_13(&Var28, "SPPlate", 0);
							func_13(&Var28, "MPPlate", 1);
						}
						else if (!func_11(&Var28, "MPPlate"))
						{
							func_13(&Var28, "SPPlate", 1);
						}
						SOCIALCLUB::SC_LICENSEPLATE_SET_PLATE_DATA(sVar27, sVar27, &Var28);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_14(3763, 0, -1);
						}
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_333 = 1;
						iLocal_334 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_328 = 1;
					iLocal_330 = 0;
					StringCopy(&(Global_110494[iLocal_331 /*4*/]), "", 16);
					iLocal_332 = 0;
				}
			}
			else
			{
				SOCIALCLUB::SC_LICENSEPLATE_CHECK_STRING("TEST", &iLocal_332);
			}
			break;
	}
}

int func_11(char* sParam0, char* sParam1)//Position - 0x68B
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	
	func_12(sParam0, &Var0);
	iVar82 = MISC::GET_HASH_KEY(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0.f_0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar81 /*8*/])))
		{
			if (MISC::GET_HASH_KEY(&(Var0[iVar81 /*8*/])) == iVar82)
			{
				return 1;
			}
		}
		iVar81++;
	}
	return 0;
}

void func_12(char* sParam0, var uParam1)//Position - 0x6DE
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	bool bVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	}
	StringCopy(&cVar4, "", 32);
	bVar12 = iVar0 != false;
	iVar14 = 0;
	while (iVar14 < *uParam1)
	{
		StringCopy(uParam1[iVar14 /*8*/], "", 32);
		iVar14++;
	}
	while (bVar12)
	{
		StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar1, iVar1 + 1), 8);
		iVar1++;
		if (MISC::GET_HASH_KEY(&cVar2) == joaat(",") || iVar1 >= iVar0)
		{
			if (MISC::GET_HASH_KEY(&cVar2) != joaat(","))
			{
				StringConCat(&cVar4, &cVar2, 32);
			}
			if (iVar13 < *uParam1)
			{
				*(uParam1[iVar13 /*8*/]) = { cVar4 };
				iVar13++;
			}
			StringCopy(&cVar4, "", 32);
		}
		else
		{
			StringConCat(&cVar4, &cVar2, 32);
		}
		if (iVar1 >= iVar0)
		{
			bVar12 = false;
		}
	}
}

void func_13(char* sParam0, char* sParam1, bool bParam2)//Position - 0x7A9
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	int iVar83;
	bool bVar84;
	
	if (bParam2)
	{
	}
	func_12(sParam0, &Var0);
	StringCopy(sParam0, "", 64);
	iVar82 = MISC::GET_HASH_KEY(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0.f_0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar81 /*8*/])))
		{
			iVar83 = MISC::GET_HASH_KEY(&(Var0[iVar81 /*8*/]));
			if (iVar83 != iVar82)
			{
				if (bVar84)
				{
					StringConCat(sParam0, ",", 64);
					bVar84 = false;
				}
				StringConCat(sParam0, &(Var0[iVar81 /*8*/]), 64);
				bVar84 = true;
			}
		}
		iVar81++;
	}
	if (bParam2)
	{
		if (bVar84)
		{
			StringConCat(sParam0, ",", 64);
			bVar84 = false;
		}
		StringConCat(sParam0, sParam1, 64);
		bVar84 = true;
	}
}

void func_14(int iParam0, bool bParam1, int iParam2)//Position - 0x843
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_15()//Position - 0x861
{
	return Global_1574918;
}

int func_16(char* sParam0)//Position - 0x86D
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar11 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_110494)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_110494[iVar0 /*4*/])))
		{
			StringCopy(&(Global_110494[iVar0 /*4*/]), sParam0, 16);
			Global_110503[iVar0] = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
			Global_110506 = 1;
			Global_110507 = 1;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar10 = 0;
				while (iVar10 < 8)
				{
					if (iVar10 < iVar11)
					{
						uVar1[iVar10] = func_18(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar10, iVar10 + 1));
					}
					else
					{
						uVar1[iVar10] = func_18("");
					}
					iVar10++;
				}
				func_17(1362, uVar1[0], -1);
				func_17(1363, uVar1[1], -1);
				func_17(1364, uVar1[2], -1);
				func_17(1365, uVar1[3], -1);
				func_17(1366, uVar1[4], -1);
				func_17(1367, uVar1[5], -1);
				func_17(1368, uVar1[6], -1);
				func_17(1369, uVar1[7], -1);
				func_14(3763, 1, -1);
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_110494)
	{
		iVar0++;
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2)//Position - 0x99B
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_18(char* sParam0)//Position - 0x9C3
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 37;
	}
	if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("A"))
	{
		return 0;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("B"))
	{
		return 1;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("C"))
	{
		return 2;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("D"))
	{
		return 3;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("E"))
	{
		return 4;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("F"))
	{
		return 5;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("G"))
	{
		return 6;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("H"))
	{
		return 7;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("I"))
	{
		return 8;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("J"))
	{
		return 9;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("K"))
	{
		return 10;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("L"))
	{
		return 11;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("M"))
	{
		return 12;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("N"))
	{
		return 13;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("O"))
	{
		return 14;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("P"))
	{
		return 15;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Q"))
	{
		return 16;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("R"))
	{
		return 17;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("S"))
	{
		return 18;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("T"))
	{
		return 19;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("U"))
	{
		return 20;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("V"))
	{
		return 21;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("W"))
	{
		return 22;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("X"))
	{
		return 23;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Y"))
	{
		return 24;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Z"))
	{
		return 25;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("0"))
	{
		return 26;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("1"))
	{
		return 27;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("2"))
	{
		return 28;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("3"))
	{
		return 29;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("4"))
	{
		return 30;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("5"))
	{
		return 31;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("6"))
	{
		return 32;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("7"))
	{
		return 33;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("8"))
	{
		return 34;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("9"))
	{
		return 35;
	}
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(" "))
	{
		return 36;
	}
	return 37;
}

void func_19(char* sParam0, var uParam1, int iParam2)//Position - 0xD48
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 == iParam2 && SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) > 0f)
		{
			StringConCat(sParam0, " ", 16);
		}
		else
		{
			switch ((*uParam1)[iVar0])
			{
				case 0:
					StringConCat(sParam0, "A", 16);
					break;
				
				case 1:
					StringConCat(sParam0, "B", 16);
					break;
				
				case 2:
					StringConCat(sParam0, "C", 16);
					break;
				
				case 3:
					StringConCat(sParam0, "D", 16);
					break;
				
				case 4:
					StringConCat(sParam0, "E", 16);
					break;
				
				case 5:
					StringConCat(sParam0, "F", 16);
					break;
				
				case 6:
					StringConCat(sParam0, "G", 16);
					break;
				
				case 7:
					StringConCat(sParam0, "H", 16);
					break;
				
				case 8:
					StringConCat(sParam0, "I", 16);
					break;
				
				case 9:
					StringConCat(sParam0, "J", 16);
					break;
				
				case 10:
					StringConCat(sParam0, "K", 16);
					break;
				
				case 11:
					StringConCat(sParam0, "L", 16);
					break;
				
				case 12:
					StringConCat(sParam0, "M", 16);
					break;
				
				case 13:
					StringConCat(sParam0, "N", 16);
					break;
				
				case 14:
					StringConCat(sParam0, "O", 16);
					break;
				
				case 15:
					StringConCat(sParam0, "P", 16);
					break;
				
				case 16:
					StringConCat(sParam0, "Q", 16);
					break;
				
				case 17:
					StringConCat(sParam0, "R", 16);
					break;
				
				case 18:
					StringConCat(sParam0, "S", 16);
					break;
				
				case 19:
					StringConCat(sParam0, "T", 16);
					break;
				
				case 20:
					StringConCat(sParam0, "U", 16);
					break;
				
				case 21:
					StringConCat(sParam0, "V", 16);
					break;
				
				case 22:
					StringConCat(sParam0, "W", 16);
					break;
				
				case 23:
					StringConCat(sParam0, "X", 16);
					break;
				
				case 24:
					StringConCat(sParam0, "Y", 16);
					break;
				
				case 25:
					StringConCat(sParam0, "Z", 16);
					break;
				
				case 26:
					StringConCat(sParam0, "0", 16);
					break;
				
				case 27:
					StringConCat(sParam0, "1", 16);
					break;
				
				case 28:
					StringConCat(sParam0, "2", 16);
					break;
				
				case 29:
					StringConCat(sParam0, "3", 16);
					break;
				
				case 30:
					StringConCat(sParam0, "4", 16);
					break;
				
				case 31:
					StringConCat(sParam0, "5", 16);
					break;
				
				case 32:
					StringConCat(sParam0, "6", 16);
					break;
				
				case 33:
					StringConCat(sParam0, "7", 16);
					break;
				
				case 34:
					StringConCat(sParam0, "8", 16);
					break;
				
				case 35:
					StringConCat(sParam0, "9", 16);
					break;
				
				case 36:
					StringConCat(sParam0, " ", 16);
					break;
				
				default:
					StringConCat(sParam0, "", 16);
					break;
				}
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1)//Position - 0xFF3
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_21(int iParam0, int iParam1)//Position - 0x100F
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_22()//Position - 0x102B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (Global_110507 && !iLocal_328)
	{
		iLocal_328 = 1;
		Global_110507 = 0;
	}
	if ((((iLocal_328 && iLocal_330 == 0) && !bLocal_87) && !Global_262145.f_10763 /* Tunable: DISABLE_SC_NUMBER_PLATE_GET */) && iLocal_70 != 0)
	{
		iVar0 = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar0 = (iVar0 + func_23("orderCount_sp0"));
		iVar0 = (iVar0 + func_23("orderCount_sp1"));
		iVar0 = (iVar0 + func_23("orderCount_sp2"));
		iVar0 = (iVar0 + func_23("orderCount_mp0"));
		iVar0 = (iVar0 + func_23("orderCount_mp1"));
		iVar0 = (iVar0 + func_23("orderCount_mp2"));
		iVar0 = (iVar0 + func_23("orderCount_mp3"));
		iVar0 = (iVar0 + func_23("orderCount_mp4"));
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		iVar0 = iVar0;
		if (SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_VALID(iLocal_332))
		{
			if (!SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_PENDING(iLocal_332))
			{
				iVar2 = Global_110342;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					StringCopy(&(Global_110342[iVar1 /*4*/]), "", 16);
					Global_110463[iVar1] = 0;
					iVar1++;
				}
				iVar2 = SOCIALCLUB::SC_LICENSEPLATE_GET_COUNT(iLocal_332);
				Global_110508 = iVar2 >= Global_110342;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar1 < Global_110342)
					{
						StringCopy(&(Global_110342[iVar1 /*4*/]), SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE(iLocal_332, iVar1), 16);
						StringCopy(&Var3, SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE_DATA(iLocal_332, iVar1), 64);
						if ((func_11(&Var3, "MPPlate") || func_11(&Var3, "NoDelete")) || iVar1 == 0)
						{
							Global_110463[iVar1] = 1;
						}
					}
					iVar1++;
				}
				iLocal_332 = 0;
				iLocal_328 = 0;
				Global_110509 = 1;
			}
		}
		else
		{
			SOCIALCLUB::SC_LICENSEPLATE_CHECK_STRING("TEST", &iLocal_332);
		}
	}
}

int func_23(char* sParam0)//Position - 0x11D7
{
	return APP::APP_GET_INT(func_24(sParam0));
}

char* func_24(char* sParam0)//Position - 0x11E9
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (MISC::GET_HASH_KEY("uid") == iVar0)
	{
		return "0";
	}
	if (MISC::GET_HASH_KEY("carModel") == iVar0)
	{
		return "1";
	}
	if (MISC::GET_HASH_KEY("playerSlot") == iVar0)
	{
		return "2";
	}
	if (MISC::GET_HASH_KEY("playerRank") == iVar0)
	{
		return "3";
	}
	if (MISC::GET_HASH_KEY("playerGangR") == iVar0)
	{
		return "4";
	}
	if (MISC::GET_HASH_KEY("playerGangG") == iVar0)
	{
		return "5";
	}
	if (MISC::GET_HASH_KEY("playerGangB") == iVar0)
	{
		return "6";
	}
	if (MISC::GET_HASH_KEY("carColour1") == iVar0)
	{
		return "7";
	}
	if (MISC::GET_HASH_KEY("carColour2") == iVar0)
	{
		return "8";
	}
	if (MISC::GET_HASH_KEY("carPlateBack") == iVar0)
	{
		return "9";
	}
	if (MISC::GET_HASH_KEY("windowTint") == iVar0)
	{
		return "10";
	}
	if (MISC::GET_HASH_KEY("bulletProofTyres") == iVar0)
	{
		return "11";
	}
	if (MISC::GET_HASH_KEY("carEngine") == iVar0)
	{
		return "12";
	}
	if (MISC::GET_HASH_KEY("carBrakes") == iVar0)
	{
		return "13";
	}
	if (MISC::GET_HASH_KEY("carExhaust") == iVar0)
	{
		return "14";
	}
	if (MISC::GET_HASH_KEY("carWheel") == iVar0)
	{
		return "15";
	}
	if (MISC::GET_HASH_KEY("carHorn1") == iVar0)
	{
		return "16";
	}
	if (MISC::GET_HASH_KEY("carHorn2") == iVar0)
	{
		return "17";
	}
	if (MISC::GET_HASH_KEY("carHorn3") == iVar0)
	{
		return "18";
	}
	if (MISC::GET_HASH_KEY("carHorn4") == iVar0)
	{
		return "19";
	}
	if (MISC::GET_HASH_KEY("carHorn5") == iVar0)
	{
		return "20";
	}
	if (MISC::GET_HASH_KEY("carHorn6") == iVar0)
	{
		return "21";
	}
	if (MISC::GET_HASH_KEY("carHorn7") == iVar0)
	{
		return "22";
	}
	if (MISC::GET_HASH_KEY("carHorn8") == iVar0)
	{
		return "23";
	}
	if (MISC::GET_HASH_KEY("carHorn9") == iVar0)
	{
		return "24";
	}
	if (MISC::GET_HASH_KEY("tyreSmoke") == iVar0)
	{
		return "25";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourRed") == iVar0)
	{
		return "26";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourGreen") == iVar0)
	{
		return "27";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourBlue") == iVar0)
	{
		return "28";
	}
	if (MISC::GET_HASH_KEY("carHorn") == iVar0)
	{
		return "29";
	}
	if (MISC::GET_HASH_KEY("carArmour") == iVar0)
	{
		return "30";
	}
	if (MISC::GET_HASH_KEY("carTurbo") == iVar0)
	{
		return "31";
	}
	if (MISC::GET_HASH_KEY("carSuspension") == iVar0)
	{
		return "32";
	}
	if (MISC::GET_HASH_KEY("carXenonLights") == iVar0)
	{
		return "33";
	}
	if (MISC::GET_HASH_KEY("carWheelType") == iVar0)
	{
		return "34";
	}
	if (MISC::GET_HASH_KEY("carUnlocked") == iVar0)
	{
		return "35";
	}
	if (MISC::GET_HASH_KEY("carColour1Unlocked") == iVar0)
	{
		return "36";
	}
	if (MISC::GET_HASH_KEY("carColour2Unlocked") == iVar0)
	{
		return "37";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourEnabled") == iVar0)
	{
		return "38";
	}
	if (MISC::GET_HASH_KEY("carEngineCount") == iVar0)
	{
		return "39";
	}
	if (MISC::GET_HASH_KEY("carBrakesCount") == iVar0)
	{
		return "40";
	}
	if (MISC::GET_HASH_KEY("carExhaustCount") == iVar0)
	{
		return "41";
	}
	if (MISC::GET_HASH_KEY("carWheelCount") == iVar0)
	{
		return "42";
	}
	if (MISC::GET_HASH_KEY("carHornCount") == iVar0)
	{
		return "43";
	}
	if (MISC::GET_HASH_KEY("carArmourCount") == iVar0)
	{
		return "44";
	}
	if (MISC::GET_HASH_KEY("carSuspensionCount") == iVar0)
	{
		return "45";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked0") == iVar0)
	{
		return "46";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked1") == iVar0)
	{
		return "47";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked2") == iVar0)
	{
		return "48";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked3") == iVar0)
	{
		return "49";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked4") == iVar0)
	{
		return "50";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked5") == iVar0)
	{
		return "51";
	}
	if (MISC::GET_HASH_KEY("carPriceModifier") == iVar0)
	{
		return "52";
	}
	if (MISC::GET_HASH_KEY("carType") == iVar0)
	{
		return "53";
	}
	if (MISC::GET_HASH_KEY("playerGang") == iVar0)
	{
		return "54";
	}
	if (MISC::GET_HASH_KEY("unlockBitset1") == iVar0)
	{
		return "55";
	}
	if (MISC::GET_HASH_KEY("unlockBitset2") == iVar0)
	{
		return "56";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp0") == iVar0)
	{
		return "57";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp1") == iVar0)
	{
		return "58";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp2") == iVar0)
	{
		return "59";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp0") == iVar0)
	{
		return "60";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp1") == iVar0)
	{
		return "61";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp2") == iVar0)
	{
		return "62";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp3") == iVar0)
	{
		return "63";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp4") == iVar0)
	{
		return "64";
	}
	if (MISC::GET_HASH_KEY("spDiscount") == iVar0)
	{
		return "65";
	}
	if (MISC::GET_HASH_KEY("mpDiscount") == iVar0)
	{
		return "66";
	}
	if (MISC::GET_HASH_KEY("carColour1Group") == iVar0)
	{
		return "67";
	}
	if (MISC::GET_HASH_KEY("carColour2Group") == iVar0)
	{
		return "68";
	}
	if (MISC::GET_HASH_KEY("unlockBitset3") == iVar0)
	{
		return "69";
	}
	if (MISC::GET_HASH_KEY("playerName") == iVar0)
	{
		return "70";
	}
	if (MISC::GET_HASH_KEY("newItemUnlocks") == iVar0)
	{
		return "72";
	}
	if (MISC::GET_HASH_KEY("playerNameSP") == iVar0)
	{
		return "73";
	}
	if (MISC::GET_HASH_KEY("playerNameMP") == iVar0)
	{
		return "74";
	}
	return sParam0;
}

void func_25(var uParam0)//Position - 0x17B1
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_9(&(uParam0->f_10)))
	{
		func_8(&(uParam0->f_10), 0, 0);
	}
	else if (func_7(&(uParam0->f_10), func_191(), 0))
	{
		if (!uParam0->f_167)
		{
			bVar0 = true;
		}
	}
	func_55(uParam0, bVar0);
	if (func_54() && func_51())
	{
		func_26(uParam0);
	}
	if (bVar0)
	{
		if (uParam0->f_167)
		{
			func_3(&(uParam0->f_10));
			uParam0->f_167 = 0;
		}
	}
}

void func_26(var uParam0)//Position - 0x1827
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = 0;
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (uParam0->f_1 != func_15())
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != func_15())
			{
				uParam0->f_2 = func_49(1080, -1);
				uParam0->f_3 = func_49(150, -1);
				uParam0->f_4 = func_49(151, -1);
				uParam0->f_5 = func_49(113, -1);
				uParam0->f_6 = func_47(11, -1);
				uParam0->f_7 = func_44(32, -1);
				uParam0->f_8 = func_44(0, -1);
				if (func_41(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
				if (func_38(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
				if (func_35(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
				if (func_32(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
				if (func_41(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
				if (func_38(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
				if (func_35(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
				if (func_32(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
				if (func_41(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
				if (func_38(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
				if (func_35(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
				if (func_32(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
				if (func_27(23))
				{
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
				if (func_41(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
				if (func_38(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
				if (func_35(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
				if (func_32(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
				if (func_41(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
				if (func_38(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
				if (func_35(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
				if (func_32(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
				if (func_41(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
				if (func_38(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
				if (func_35(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
				if (func_32(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
				uParam0->f_1 = func_15();
			}
			*uParam0++;
			break;
		
		case 1:
			if (!BitTest(uParam0->f_9, 0))
			{
				if (func_41(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
			}
			else if (!BitTest(uParam0->f_9, 1))
			{
				if (func_38(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
			}
			else if (!BitTest(uParam0->f_9, 2))
			{
				if (func_35(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
			}
			else if (!BitTest(uParam0->f_9, 3))
			{
				if (func_32(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
			}
			*uParam0++;
			break;
		
		case 2:
			if (!BitTest(uParam0->f_9, 4))
			{
				if (func_41(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
			}
			else if (!BitTest(uParam0->f_9, 5))
			{
				if (func_38(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
			}
			else if (!BitTest(uParam0->f_9, 6))
			{
				if (func_35(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
			}
			else if (!BitTest(uParam0->f_9, 7))
			{
				if (func_32(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
			}
			*uParam0++;
			break;
		
		case 3:
			if (!BitTest(uParam0->f_9, 8))
			{
				if (func_41(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
			}
			else if (!BitTest(uParam0->f_9, 9))
			{
				if (func_38(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
			}
			else if (!BitTest(uParam0->f_9, 10))
			{
				if (func_35(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
			}
			else if (!BitTest(uParam0->f_9, 11))
			{
				if (func_32(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
			}
			*uParam0++;
			break;
		
		case 4:
			if (!BitTest(uParam0->f_9, 15))
			{
				if (func_27(23))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("MP0_AWD_FMFURTHESTWHEELIE"), func_44(32, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
			}
			if (!BitTest(uParam0->f_9, 16))
			{
				if (func_41(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
			}
			else if (!BitTest(uParam0->f_9, 17))
			{
				if (func_38(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
			}
			else if (!BitTest(uParam0->f_9, 18))
			{
				if (func_35(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
			}
			else if (!BitTest(uParam0->f_9, 19))
			{
				if (func_32(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
			}
			*uParam0++;
			break;
		
		case 5:
			if (!BitTest(uParam0->f_9, 20))
			{
				if (func_41(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
			}
			else if (!BitTest(uParam0->f_9, 21))
			{
				if (func_38(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
			}
			else if (!BitTest(uParam0->f_9, 22))
			{
				if (func_35(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
			}
			else if (!BitTest(uParam0->f_9, 23))
			{
				if (func_32(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
			}
			*uParam0++;
			break;
		
		case 6:
			if (!BitTest(uParam0->f_9, 24))
			{
				if (func_41(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
			}
			else if (!BitTest(uParam0->f_9, 25))
			{
				if (func_38(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
			}
			else if (!BitTest(uParam0->f_9, 26))
			{
				if (func_35(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
			}
			else if (!BitTest(uParam0->f_9, 27))
			{
				if (func_32(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
			}
			*uParam0 = 0;
			break;
	}
}

bool func_27(int iParam0)//Position - 0x1FCD
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_29(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_28(iVar1));
}

int func_28(int iParam0)//Position - 0x1FEA
{
	return (iParam0 % 32);
}

int func_29(var uParam0)//Position - 0x1FF7
{
	switch (func_30(uParam0))
	{
		case 765:
			return func_49(765, -1);
		
		case 766:
			return func_49(766, -1);
		
		case 767:
			return func_49(767, -1);
		
		case 8734:
			return func_49(8734, -1);
		
		case 9538:
			return func_49(9538, -1);
		
		case 11803:
			return func_49(11803, -1);
		
		default:
	}
	return 0;
}

int func_30(var uParam0)//Position - 0x2071
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_31(iVar0);
	switch (iVar1)
	{
		case 0:
			return 765;
			break;
		
		case 1:
			return 766;
			break;
		
		case 2:
			return 767;
			break;
		
		case 3:
			return 8734;
			break;
		
		case 4:
			return 9538;
			break;
		
		case 5:
			return 11803;
			break;
	}
	return 14385;
}

int func_31(int iParam0)//Position - 0x20E9
{
	return (iParam0 / 32);
}

bool func_32(int iParam0)//Position - 0x20F6
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_33(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_28(iVar1));
}

int func_33(var uParam0)//Position - 0x2113
{
	switch (func_34(uParam0))
	{
		case 758:
			return func_49(758, -1);
		
		case 759:
			return func_49(759, -1);
		
		case 760:
			return func_49(760, -1);
		
		case 761:
			return func_49(761, -1);
		
		case 8735:
			return func_49(8735, -1);
		
		default:
	}
	return 0;
}

int func_34(var uParam0)//Position - 0x217C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_31(iVar0);
	switch (iVar1)
	{
		case 0:
			return 758;
			break;
		
		case 1:
			return 759;
			break;
		
		case 2:
			return 760;
			break;
		
		case 3:
			return 761;
			break;
		
		case 4:
			return 8735;
			break;
	}
	return 14385;
}

bool func_35(int iParam0)//Position - 0x21E5
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_36(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_28(iVar1));
}

int func_36(var uParam0)//Position - 0x2202
{
	switch (func_37(uParam0))
	{
		case 768:
			return func_49(768, -1);
		
		case 769:
			return func_49(769, -1);
		
		case 770:
			return func_49(770, -1);
		
		case 771:
			return func_49(771, -1);
		
		case 8733:
			return func_49(8733, -1);
		
		default:
	}
	return 0;
}

int func_37(var uParam0)//Position - 0x226B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_31(iVar0);
	switch (iVar1)
	{
		case 0:
			return 768;
			break;
		
		case 1:
			return 769;
			break;
		
		case 2:
			return 770;
			break;
		
		case 3:
			return 771;
			break;
		
		case 4:
			return 8733;
			break;
	}
	return 14385;
}

bool func_38(int iParam0)//Position - 0x22D4
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_39(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_28(iVar1));
}

int func_39(var uParam0)//Position - 0x22F1
{
	switch (func_40(uParam0))
	{
		case 778:
			return func_49(778, -1);
		
		case 779:
			return func_49(779, -1);
		
		case 780:
			return func_49(780, -1);
		
		case 781:
			return func_49(781, -1);
		
		case 8731:
			return func_49(8731, -1);
		
		default:
	}
	return 0;
}

int func_40(var uParam0)//Position - 0x235A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_31(iVar0);
	switch (iVar1)
	{
		case 0:
			return 778;
			break;
		
		case 1:
			return 779;
			break;
		
		case 2:
			return 780;
			break;
		
		case 3:
			return 781;
			break;
		
		case 4:
			return 8731;
			break;
	}
	return 14385;
}

bool func_41(int iParam0)//Position - 0x23C3
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_42(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_28(iVar1));
}

int func_42(var uParam0)//Position - 0x23E0
{
	switch (func_43(uParam0))
	{
		case 788:
			return func_49(788, -1);
		
		case 789:
			return func_49(789, -1);
		
		case 790:
			return func_49(790, -1);
		
		case 791:
			return func_49(791, -1);
		
		case 8729:
			return func_49(8729, -1);
		
		default:
	}
	return 0;
}

int func_43(var uParam0)//Position - 0x2449
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_31(iVar0);
	switch (iVar1)
	{
		case 0:
			return 788;
			break;
		
		case 1:
			return 789;
			break;
		
		case 2:
			return 790;
			break;
		
		case 3:
			return 791;
			break;
		
		case 4:
			return 8729;
			break;
	}
	return 14385;
}

float func_44(int iParam0, int iParam1)//Position - 0x24B2
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_45(iParam0, iParam1);
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_45(int iParam0, var uParam1)//Position - 0x24D6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(1, iParam0, func_46(uParam1));
}

int func_46(var uParam0)//Position - 0x24EB
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

int func_47(int iParam0, int iParam1)//Position - 0x251F
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_48(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(int iParam0, var uParam1)//Position - 0x2543
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_46(uParam1));
}

int func_49(int iParam0, int iParam1)//Position - 0x2559
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_50(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(int iParam0, var uParam1)//Position - 0x2588
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_46(uParam1));
}

int func_51()//Position - 0x259D
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (func_53())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_52())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_52()//Position - 0x2604
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_53()//Position - 0x261A
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

int func_54()//Position - 0x2630
{
	if (func_53())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (func_52())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			return 1;
		}
	}
	return 0;
}

void func_55(var uParam0, bool bParam1)//Position - 0x2677
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 201:
				func_190(iVar0);
				func_184(iVar0, uParam0, bParam1);
				break;
			
			case 219:
				func_182(iVar0, uParam0, bParam1);
				break;
			
			case 203:
				Global_2794162.f_5063 = 1;
				break;
			
			case 190:
				break;
			
			case 191:
				func_181(iVar0, uParam0, bParam1);
				break;
			
			case 192:
				break;
			
			case 212:
				func_180(iVar0, uParam0, bParam1);
				break;
			
			case 222:
				func_179(uParam0, bParam1);
				break;
		}
		iVar0++;
	}
	if (!Global_78689)
	{
		if (Global_113753 > 0)
		{
			func_169();
		}
	}
	func_56(uParam0, bParam1);
}

void func_56(var uParam0, bool bParam1)//Position - 0x2747
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar19;
	char[] cVar35[8];
	struct<18> Var51;
	struct<36> Var71;
	struct<68> Var166;
	int iVar254;
	
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (func_4())
	{
		return;
	}
	iVar0 = SOCIALCLUB::SC_INBOX_GET_TOTAL_NUM_MESSAGES();
	iVar1 = 0;
	Var71.f_16 = 1;
	Var71.f_20 = -1;
	Var71.f_21 = -1;
	Var71.f_22 = 2;
	Var71.f_35 = 2;
	Var166.f_65 = -1;
	Var166.f_66 = -1;
	Var166.f_67 = 2;
	iVar254 = 0;
	switch (uParam0->f_168)
	{
		case 0:
			if (bParam1)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(iVar1))
					{
						if (func_54() && func_51())
						{
							iVar2 = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(iVar1);
							if (func_168(iVar2))
							{
								switch (iVar2)
								{
									case joaat("crew_message"):
										if (MISC::GET_PROFILE_SETTING(802) == 1)
										{
											SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
											{
											}
											SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
										}
										break;
									
									case joaat("gs_award"):
										func_167(iVar1, 0);
										break;
									}
							}
						}
						else
						{
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
						}
					}
					iVar1++;
				}
			}
			uParam0->f_168++;
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(iVar1))
				{
					iVar2 = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(iVar1);
					switch (iVar2)
					{
						case joaat("crew_message"):
							if (bParam1)
							{
								if (func_54() && func_51())
								{
									if (MISC::GET_PROFILE_SETTING(802) == 1)
									{
										SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
										{
										}
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						
						case joaat("StatUpdate"):
							break;
						
						case joaat("mission_verified"):
							if (bParam1)
							{
								if (!uParam0->f_167)
								{
									if (func_164())
									{
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (func_163(PLAYER::PLAYER_ID(), 0, 1))
											{
												if (func_54() && func_51())
												{
													SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
													func_117(0, "XPT_MISSVER" /* GXT: RP for verified mission: ~1~. */, joaat("XPTYPE_SOCIALCLUB"), 475954354, 5000, 1, -1, 0);
													if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
													{
													}
													SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
												}
												else
												{
													SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
												}
												uParam0->f_167 = 1;
											}
										}
									}
								}
							}
							break;
						
						case joaat("rockstar_message"):
							if ((func_54() && func_51()) && Global_262145.f_25488 /* Tunable: 1042335322 */)
							{
								SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
								if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
								{
								}
								SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							}
							else
							{
								SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							}
							break;
						
						case joaat("UGCStatUpdate"):
							if (bParam1)
							{
								if (!uParam0->f_167)
								{
									if (func_54() && func_51())
									{
										if (((((((((((((((((func_116() == 0 && !func_115()) && !func_114()) && !func_113()) && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && (func_164() && func_103())) && Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 != 8) && Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 != 9) && !func_101(PLAYER::PLAYER_ID())) && !func_100()) && !func_98(PLAYER::PLAYER_ID(), 1, 0)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_97()) && !Global_1926479)
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_UGCDATA(iVar1, &(uParam0->f_13)))
											{
												if (func_83(&Var71, &(uParam0->f_13), &Var166, &iVar254))
												{
													if (Var71.f_0)
													{
														if (uParam0->f_13.f_58)
														{
														}
														func_80(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(Var166.f_22));
														SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
														uParam0->f_167 = 1;
													}
													else
													{
														SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
													}
												}
											}
										}
									}
									else
									{
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						
						case joaat("mission_published"):
							if (bParam1)
							{
								if (!uParam0->f_167)
								{
									if (func_54() && func_51())
									{
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "mn", &cVar35))
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "gtag", &sVar19))
											{
												func_79("SC_PUBLISH" /* GXT: ~a~ published the Job "~a~". */, &sVar19, &cVar35, 0, 0);
												SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
												uParam0->f_167 = 1;
											}
										}
									}
									else
									{
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						
						case joaat("crew_challenge_ended"):
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							break;
						
						case joaat("bounty"):
							if (bParam1)
							{
								if (!uParam0->f_167)
								{
									SOCIALCLUB::SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(iVar1, &Var51);
									if (BitTest(Var51.f_16, 2))
									{
										if (func_54() && func_51())
										{
											func_77("FM_TXT_BNTY7" /* GXT: ~a~ survived the $~1~ Bounty you placed on them. */, &Var51, Var51.f_17, 0, 0);
										}
										func_70("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (BitTest(Var51.f_16, 0))
									{
										func_70("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
										if (func_54() && func_51())
										{
											func_67("FM_TXT_BNTY5" /* GXT: The $~1~ Bounty on ~a~ has been claimed by ~a~. */, &Var51, &(Var51.f_8), Var51.f_17, 0);
										}
									}
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
									uParam0->f_167 = 1;
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						
						case joaat("tournament_winner_message"):
							if (func_54() && func_51())
							{
								if (bParam1)
								{
									if (!uParam0->f_167)
									{
										func_59("SC_WON_TOURN" /* GXT: Congratulations! Your Tournament Winners T-shirt can be purchased in any Clothes Shop. */, 0);
									}
								}
							}
							func_57(151, 1, -1, 1);
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
							break;
						
						case joaat("gs_award"):
							func_167(iVar1, 0);
							break;
						
						default:
							if (bParam1)
							{
								if (MISC::GET_HASH_KEY(SOCIALCLUB::SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(iVar1)) != joaat("COUPON"))
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iVar1);
								}
							}
							break;
						}
				}
				iVar1++;
			}
			if (uParam0->f_167)
			{
				uParam0->f_168 = 0;
			}
			break;
	}
}

void func_57(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2D09
{
	int iVar0;
	
	iVar0 = func_58(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_58(int iParam0, var uParam1)//Position - 0x2D2C
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_46(uParam1));
}

int func_59(char* sParam0, bool bParam1)//Position - 0x2D41
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_60(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2D79
{
	int iVar0;
	
	if ((!func_66() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_63(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_61(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944768.f_5[iVar0 /*53*/] = iParam0;
		Global_1944768.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944768.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944768.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944768.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944768.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944768.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_61(int iParam0)//Position - 0x2E81
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944768 - 1))
	{
		if (iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1)
		{
			func_62(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944768++;
	if (Global_1944768 > 5)
	{
		Global_1944768 = 5;
		return Global_1944768;
	}
	return (Global_1944768 - 1);
}

void func_62(int iParam0)//Position - 0x2EE3
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944768.f_5[iVar0 /*53*/] = { Global_1944768.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_63(int iParam0, int iParam1)//Position - 0x2F1C
{
	bool bVar0;
	
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_64(-1, 0) == 8;
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

int func_64(int iParam0, bool bParam1)//Position - 0x2F75
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

int func_65(var uParam0)//Position - 0x2FB6
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

bool func_66()//Position - 0x2FD8
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_67(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2FE9
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam2));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(42, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 1, sParam2, 0, 0);
	return iVar0;
}

var func_68(char* sParam0)//Position - 0x304F
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_69(&cVar0);
}

var func_69(char[4] cParam0)//Position - 0x3073
{
	return cParam0;
}

void func_70(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x307D
{
	func_71(sParam0, sParam1, iParam2, sParam3, sParam4, "");
}

void func_71(char* sParam0, char* sParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x3096
{
	int iVar0;
	
	iVar0 = 0;
	if (func_72(iVar0, sParam0, sParam1, uParam2, sParam3, sParam4, sParam5, 0))
	{
		return;
	}
}

int func_72(int iParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)//Position - 0x30BA
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 1)
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 7)
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam5) > 15)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		iParam7 = 0;
	}
	iVar0 = iParam0;
	if (func_76(iVar0))
	{
		return 0;
	}
	func_75(iVar0, 0);
	StringCopy(&(Global_1649067.f_15[iVar0 /*24*/].f_1), sParam1, 24);
	StringCopy(&(Global_1649067.f_15[iVar0 /*24*/].f_7), sParam2, 8);
	Global_1649067.f_15[iVar0 /*24*/].f_9 = uParam3;
	StringCopy(&(Global_1649067.f_15[iVar0 /*24*/].f_10), sParam4, 8);
	StringCopy(&(Global_1649067.f_15[iVar0 /*24*/].f_12), sParam5, 16);
	StringCopy(&(Global_1649067.f_15[iVar0 /*24*/].f_18), sParam6, 24);
	func_74(iVar0, iParam7);
	func_73(iVar0);
	return 1;
}

void func_73(int iParam0)//Position - 0x31C8
{
	MISC::SET_BIT(&(Global_1649067.f_15[iParam0 /*24*/]), 0);
}

void func_74(int iParam0, int iParam1)//Position - 0x31DF
{
	Global_1649067.f_15[iParam0 /*24*/].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1649067.f_15[iParam0 /*24*/].f_17 = 1;
}

void func_75(int iParam0, bool bParam1)//Position - 0x320A
{
	Global_1649067.f_15[iParam0 /*24*/] = 0;
	StringCopy(&(Global_1649067.f_15[iParam0 /*24*/].f_1), "", 24);
	StringCopy(&(Global_1649067.f_15[iParam0 /*24*/].f_7), "", 8);
	Global_1649067.f_15[iParam0 /*24*/].f_9 = 145;
	StringCopy(&(Global_1649067.f_15[iParam0 /*24*/].f_10), "", 8);
	StringCopy(&(Global_1649067.f_15[iParam0 /*24*/].f_12), "", 16);
	StringCopy(&(Global_1649067.f_15[iParam0 /*24*/].f_18), "", 24);
	Global_1649067.f_15[iParam0 /*24*/].f_17 = 0;
	if (bParam1)
	{
		return;
	}
}

bool func_76(int iParam0)//Position - 0x3295
{
	return BitTest(Global_1649067.f_15[iParam0 /*24*/], 1);
}

int func_77(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x32A9
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (bParam4)
	{
		Var1 = { func_78(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	func_60(29, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

struct<16> func_78(char* sParam0)//Position - 0x331C
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_79(char* sParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x3347
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam2);
	if (bParam4)
	{
		Var1 = { func_78(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	func_60(31, sParam0, 1, sParam2, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return iVar0;
}

void func_80(char* sParam0, int iParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x33BA
{
	switch (iParam2)
	{
		case 3:
			func_82("SC_BTRSCR_SUR" /* GXT: ~a~ beat your best score in the Survival ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
			break;
		
		case 1:
			switch (iParam3)
			{
				case 0:
				case 3:
					func_82("SC_BTRSCR_DMN" /* GXT: ~a~ beat your best score in the standard Deathmatch ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
					break;
				
				case 1:
				case 4:
					func_82("SC_BTRSCR_DMT" /* GXT: ~a~ beat your best score in the Team Deathmatch ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
					break;
				
				case 2:
					func_82("SC_BTRSCR_DMV" /* GXT: ~a~ beat your best score in the Vehicle Deathmatch ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
					break;
			}
			break;
		
		case 2:
			switch (iParam3)
			{
				case 0:
					func_81("SC_BTRSCR_RACN" /* GXT: ~a~ beat your best lap time in the Non-Contact Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
				
				case 1:
					func_81("SC_BTRSCR_RACG" /* GXT: ~a~ beat your best lap time in the GTA Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
				
				case 2:
					func_81("SC_BTRSCR_RACR" /* GXT: ~a~ beat your best lap time in the Rally Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
				
				case 3:
					func_81("SC_BTRSCR_RACN" /* GXT: ~a~ beat your best lap time in the Non-Contact Race ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
					break;
			}
			break;
		
		case 8:
			func_81("SC_BTRSCR_BJP" /* GXT: ~a~ beat your best time in the Parachute Jump ~a~ with a time of ~a~. */, sParam0, iParam1, sParam4, 0);
			break;
		
		case 0:
			func_82("SC_BTRSCR_SUR" /* GXT: ~a~ beat your best score in the Survival ~a~ with a score of ~1~. */, sParam0, sParam4, iParam1, 0, 0);
			break;
	}
}

int func_81(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0x34F4
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 7);
	if (bParam4)
	{
		Var1 = { func_78(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	func_60(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_82(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x3561
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { func_78(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	func_60(30, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

int func_83(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x35DB
{
	switch (uParam0->f_3)
	{
		case 0:
			*uParam0 = 0;
			if (func_100())
			{
				return 0;
			}
			func_96();
			func_95();
			if (func_94())
			{
				*uParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
			}
			func_93(uParam0, 1);
			break;
		
		case 1:
			if (NETWORK::UGC_GET_GET_BY_CONTENT_ID(sParam1, func_92(0)))
			{
				func_93(uParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					func_91(uParam0, 1, 1);
					uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0, 0))
					{
						func_84(sParam2, 0, iParam3);
						func_91(uParam0, 1, 1);
						*uParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_91(uParam0, 1, 1);
					*uParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_84(char* sParam0, int iParam1, var uParam2)//Position - 0x36C6
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "gen");
	StringCopy(sParam0, NETWORK::UGC_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::UGC_GET_CONTENT_USER_ID(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::UGC_GET_CONTENT_NAME(iParam1), 64);
	sParam0->f_56 = { func_90(iVar2) };
	sParam0->f_59 = { func_89(iVar2, "cam") };
	sParam0->f_62 = { func_88(iVar2) };
	sParam0->f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	sParam0->f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	sParam0->f_80 = DATAFILE::DATADICT_GET_INT(iVar2, "adverm");
	sParam0->f_79 = DATAFILE::DATADICT_GET_INT(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	sParam0->f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	sParam0->f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	sParam0->f_73 = func_87(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	*uParam2 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));
	if (func_86(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_85() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4606 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			sParam0->f_71 = Global_262145.f_4606 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
		if (sParam0->f_69 > Global_262145.f_4606 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			sParam0->f_69 = Global_262145.f_4606 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
	}
	if (!func_94())
	{
		iVar3 = NETWORK::UGC_GET_CONTENT_LANGUAGE(iParam1);
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iVar3))
		{
			sParam0->f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	}
	MISC::SET_BIT(&(sParam0->f_76), 13);
	func_95();
}

int func_85()//Position - 0x386D
{
	return Global_32283;
}

int func_86(int iParam0)//Position - 0x3878
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9666[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_87(float fParam0, int iParam1)//Position - 0x38A8
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

Vector3 func_88(int iParam0)//Position - 0x38D3
{
	struct<3> Var0;
	
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 3)
	{
		Var0.f_0 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camp");
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 2)
	{
		Var0.f_0 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camp"));
	}
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 3)
	{
		Var0.f_2 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camh");
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 2)
	{
		Var0.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_89(int iParam0, char* sParam1)//Position - 0x3959
{
	struct<3> Var0;
	var* uVar3;
	
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 5)
	{
		Var0 = { DATAFILE::DATADICT_GET_VECTOR(iParam0, sParam1) };
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 6)
	{
		uVar3 = DATAFILE::DATADICT_GET_DICT(iParam0, sParam1);
		if (DATAFILE::DATADICT_GET_TYPE(uVar3, "x") == 2)
		{
			Var0.f_0 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(uVar3, "x"));
		}
		else
		{
			Var0.f_0 = DATAFILE::DATADICT_GET_FLOAT(uVar3, "x");
		}
		if (DATAFILE::DATADICT_GET_TYPE(uVar3, "y") == 2)
		{
			Var0.f_1 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(uVar3, "y"));
		}
		else
		{
			Var0.f_1 = DATAFILE::DATADICT_GET_FLOAT(uVar3, "y");
		}
		if (DATAFILE::DATADICT_GET_TYPE(uVar3, "z") == 2)
		{
			Var0.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(uVar3, "z"));
		}
		else
		{
			Var0.f_2 = DATAFILE::DATADICT_GET_FLOAT(uVar3, "z");
		}
	}
	return Var0;
}

Vector3 func_90(int iParam0)//Position - 0x3A25
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	Var0 = { func_89(iParam0, "start") };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2233.327f, 2436.1338f, -14.65155f, -2229.5598f, 2399.5764f, 11.997612f, 24f, false, true))
	{
		Var0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 603.6218f, 5573.0464f, 694.484f, 594.23785f, 5542.7915f, 727.479f, 33.5f, false, true))
	{
		Var0 = { 502.6f, 5537.06f, 777.05f };
	}
	return Var0;
}

void func_91(var uParam0, bool bParam1, bool bParam2)//Position - 0x3AD1
{
	struct<52> Var0;
	
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_11 = 0;
	uParam0->f_31 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_16 = 1;
	uParam0->f_16 = 1;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = -1;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	Global_1835450[0] = 0;
	Global_1835450[1] = 0;
	uParam0->f_40 = 0;
	if (bParam2)
	{
		uParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_93(uParam0, 0);
	}
}

char* func_92(int iParam0)//Position - 0x3B6A
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_93(var uParam0, int iParam1)//Position - 0x3BBE
{
	uParam0->f_3 = iParam1;
}

bool func_94()//Position - 0x3BCC
{
	return Global_1835433.f_4;
}

void func_95()//Position - 0x3BDA
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

void func_96()//Position - 0x3BF0
{
	if (func_94())
	{
		NETWORK::UGC_CLEAR_OFFLINE_QUERY();
	}
	else
	{
		NETWORK::UGC_CLEAR_QUERY_RESULTS();
	}
}

bool func_97()//Position - 0x3C0A
{
	return BitTest(Global_2683883.f_2, 11);
}

int func_98(int iParam0, bool bParam1, bool bParam2)//Position - 0x3C1B
{
	if (iParam0 == func_99())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_99()//Position - 0x3C7F
{
	return -1;
}

int func_100()//Position - 0x3C88
{
	if (NETWORK::UGC_IS_CREATING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_MODIFYING())
	{
		return 1;
	}
	return 0;
}

bool func_101(int iParam0)//Position - 0x3CB8
{
	return func_102(iParam0);
}

var func_102(int iParam0)//Position - 0x3CC6
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_103()//Position - 0x3CDD
{
	if (!func_104())
	{
		return 0;
	}
	return 1;
}

int func_104()//Position - 0x3CF2
{
	if (Global_1574612)
	{
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
	return func_105(120, -1);
}

int func_105(int iParam0, int iParam1)//Position - 0x3D22
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_58(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_106()//Position - 0x3D46
{
	return Global_1575051;
}

bool func_107()//Position - 0x3D52
{
	return Global_1575053;
}

int func_108()//Position - 0x3D5E
{
	if ((!Global_2625315 && !Global_2625315.f_1) && !Global_2625315.f_2)
	{
		return 0;
	}
	if (!Global_2625315.f_23)
	{
		return 1;
	}
	return 0;
}

bool func_109()//Position - 0x3D99
{
	return Global_1573131.f_5;
}

bool func_110()//Position - 0x3DA7
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

bool func_111()//Position - 0x3DBF
{
	return Global_2683883.f_706;
}

bool func_112()//Position - 0x3DCE
{
	return BitTest(Global_2683883, 21);
}

bool func_113()//Position - 0x3DDD
{
	return BitTest(Global_2683883, 19);
}

bool func_114()//Position - 0x3DEC
{
	return Global_2692776.f_1;
}

bool func_115()//Position - 0x3DFA
{
	return Global_2683883.f_691;
}

int func_116()//Position - 0x3E09
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

var func_117(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3E1E
{
	return func_118(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_118(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3E3A
{
	var uVar0;
	
	uVar0 = func_119(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_119(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3E5D
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_153();
	if (func_152(sParam2))
	{
	}
	if (func_151())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_149(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_148(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_145(0, &iVar1);
					break;
				
				case 3:
					func_145(1, &iVar1);
					break;
				
				case 1:
					func_139(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1962798)
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
			func_138(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_128((func_137(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 != -1)
				{
					func_138(1166, iVar1, -1);
				}
				func_124(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_120((func_122(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_120((func_122(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_120(int iParam0)//Position - 0x3FC8
{
	if (func_151())
	{
		Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5 = iParam0;
		func_121(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_121(int iParam0, int iParam1)//Position - 0x3FF3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_122(int iParam0)//Position - 0x4010
{
	if (iParam0 > -1)
	{
		if (func_163(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_123(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_5;
			}
		}
		else
		{
			return func_123(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x4061
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

void func_124(int iParam0)//Position - 0x407F
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_127(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_125(func_126(&Var0));
			if (iVar13 == 0)
			{
				func_121(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_123(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_121(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_123(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_121(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_123(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_121(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_123(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_121(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_123(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_125(int iParam0)//Position - 0x4149
{
	if (iParam0 == func_123(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_123(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_123(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_123(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_123(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_126(var* uParam0)//Position - 0x41BF
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694518;
		}
	}
	return Global_2694518;
}

struct<13> func_127(int iParam0)//Position - 0x41E2
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_128(int iParam0, int iParam1, int iParam2)//Position - 0x41F9
{
	if (func_151())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10242 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_49(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_49(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
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
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_136(PLAYER::PLAYER_ID()))
		{
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1 = iParam0;
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6 = func_133(iParam0, 1);
		}
		func_132(640, iParam0, -1, 1);
		func_132(641, func_133(iParam0, 1), -1, 1);
		func_129(-1109644434, 7, 0);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)//Position - 0x430B
{
	int iVar0;
	
	if (func_131(iParam1, iParam2))
	{
		iVar0 = func_130();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_130()//Position - 0x4338
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694470[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_131(int iParam0, var uParam1)//Position - 0x436D
{
	if (Global_1575051)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575063) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_132(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x43F3
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_133(int iParam0, bool bParam1)//Position - 0x4416
{
	if (bParam1)
	{
	}
	return func_134(iParam0, 0);
}

int func_134(int iParam0, int iParam1)//Position - 0x442A
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
		if (func_135(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_135(iVar3) < iParam0)
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

int func_135(int iParam0)//Position - 0x44E5
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

int func_136(int iParam0)//Position - 0x4A20
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_137(int iParam0)//Position - 0x4A3F
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_49(640, -1);
			}
			else if (func_136(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_49(640, -1);
	}
	return 0;
}

void func_138(int iParam0, int iParam1, int iParam2)//Position - 0x4A96
{
	int iVar0;
	
	iVar0 = func_49(iParam0, func_46(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_132(iParam0, iVar0, iParam2, 1);
}

void func_139(int iParam0)//Position - 0x4ABE
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_142(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_141(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_140(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_140(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_140(int iParam0, int iParam1)//Position - 0x4BAA
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_141(int iParam0, int iParam1)//Position - 0x4BCB
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_127(iParam0) };
		Global_2764389 = { func_127(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
				if (Global_2764306 == Global_2764341)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C38
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
		bVar0 = Global_1058071.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0))
			{
				bVar1 = Global_1058071.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_143(iParam0, bVar0, iParam1, bVar1) || !func_143(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_143(iParam0, bVar0, iParam1, bVar1) || !func_143(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_143(iParam0, bVar0, iParam1, bVar1) || !func_143(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_143(iParam0, bVar0, iParam1, bVar1) || !func_143(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_1765, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_143(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x4F83
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
	if (!BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3))
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
		if (((!func_163(iVar1, 1, 1) || func_63(iVar1, 0)) || BitTest(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_144(iVar1))
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

var func_144(int iParam0)//Position - 0x50AF
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

void func_145(bool bParam0, int iParam1)//Position - 0x50C7
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
				if (func_163(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_141(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_163(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_146(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_141(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_140(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_140(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_146(int iParam0, int iParam1)//Position - 0x51DF
{
	return SYSTEM::VDIST(func_147(iParam0), func_147(iParam1));
	return 0f;
}

Vector3 func_147(int iParam0)//Position - 0x51FB
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_148(int iParam0)//Position - 0x520E
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_140(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_149(int iParam0)//Position - 0x5245
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_137(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_137(PLAYER::PLAYER_ID());
		}
	}
	if (func_150(8000, 0, 0) > 0)
	{
		if (func_150(8000, 0, 0) < (iParam0 + func_137(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_150(8000, 0, 0) - func_137(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_150(int iParam0, bool bParam1, int iParam2)//Position - 0x52A9
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
	return func_135(iParam0);
}

int func_151()//Position - 0x52CF
{
	return 1;
}

int func_152(char* sParam0)//Position - 0x52D8
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

int func_153()//Position - 0x5310
{
	int iVar0;
	
	if (func_162(PLAYER::PLAYER_ID()) || func_161(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_158() || func_154(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7178 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7178 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_154(int iParam0)//Position - 0x53AA
{
	return func_155(func_156(iParam0));
}

int func_155(int iParam0)//Position - 0x53BC
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x53D6
{
	if (func_65(iParam0))
	{
		if (func_157(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_157(int iParam0, int iParam1)//Position - 0x5402
{
	if (func_65(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_158()//Position - 0x5446
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_160();
	}
	return func_159(Global_4718592.f_117591);
}

int func_159(int iParam0)//Position - 0x546A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5043[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_160()//Position - 0x54A4
{
	return Global_2683883.f_19;
}

bool func_161(int iParam0)//Position - 0x54B2
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_162(int iParam0)//Position - 0x54C7
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

int func_163(int iParam0, bool bParam1, bool bParam2)//Position - 0x54DC
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

int func_164()//Position - 0x553C
{
	if (func_166() && func_165(0))
	{
		return 1;
	}
	return 0;
}

var func_165(int iParam0)//Position - 0x555A
{
	return Global_1574538[iParam0];
}

var func_166()//Position - 0x556A
{
	return func_165(func_15() + 1);
}

void func_167(int iParam0, int iParam1)//Position - 0x557C
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar19;
	var uVar20;
	int iVar36;
	int iVar37;
	var uVar38;
	
	bVar0 = false;
	bVar1 = false;
	StringCopy(&Global_2695990, "", 64);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "awardAmount", &iVar2);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardType", &uVar3);
	bVar19 = SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_BOOL(iParam0, "fullRefresh");
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardLabel", &Global_2695990);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "items", &uVar20);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "userScreen", &iVar36);
	SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2695972 = -99;
			Global_2695971 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2695972 = -1;
			Global_2695971 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2695972 = 1;
			Global_2695971 = iVar2;
		}
		bVar1 = true;
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar20, "[]") == 0)
	{
		Global_2696008 = 1;
	}
	if (iVar36 > 0)
	{
		Global_2696009 = iVar36;
	}
	if (iParam1 == 0)
	{
		if (func_85() == 0)
		{
			if (bVar19 == 1)
			{
				NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar37, &uVar38);
				if (iVar37 == 8)
				{
					NETSHOPPING::NET_GAMESERVER_START_SESSION_RESTART(bVar0, bVar1);
				}
			}
		}
	}
}

int func_168(int iParam0)//Position - 0x567B
{
	if (iParam0 == joaat("crew_message"))
	{
		return 1;
	}
	if (iParam0 == joaat("gs_award"))
	{
		return 1;
	}
	return 0;
}

void func_169()//Position - 0x56A0
{
	int iVar0;
	
	Global_113751 = MISC::GET_GAME_TIMER();
	if ((Global_113751 - Global_113752) > Global_113557)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_113745[iVar0] == 1)
			{
				Global_113753 = (Global_113753 - 1);
				if (Global_113753 < 0)
				{
					Global_113753 = 0;
				}
				Global_113745[iVar0] = 0;
				func_170(Global_113558[iVar0 /*36*/], Global_113739[iVar0]);
				iVar0 = 5;
				Global_113752 = MISC::GET_GAME_TIMER();
			}
			iVar0++;
		}
	}
}

void func_170(struct<36> Param0, int iParam36)//Position - 0x5720
{
	char cVar0[64];
	char cVar16[64];
	char cVar32[64];
	
	iParam36 = func_177(Param0.f_0);
	if (iParam36 != -1)
	{
		if (MISC::GET_PROFILE_SETTING(803) == 1)
		{
			if (func_54())
			{
				func_173(Param0, iParam36);
			}
		}
	}
	else
	{
		switch (Param0.f_0)
		{
			case joaat("TOTAL_PROGRESS_MADE"):
				if (MISC::GET_PROFILE_SETTING(803) == 1)
				{
					if (func_54())
					{
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_F100PC_COMP" /* GXT: ...completed GTAV~n~100 percent. */);
						StringCopy(&cVar0, "<C>", 64);
						StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						StringConCat(&cVar0, &(Param0.f_1), 64);
						StringConCat(&cVar0, "...", 64);
						StringConCat(&cVar0, "</C>", 64);
						HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar0, 0);
						Global_113752 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case joaat("SP_VEHICLE_MODELS_DRIVEN"):
				if (Param0.f_17 == 200)
				{
					Global_113751 = MISC::GET_GAME_TIMER();
					if ((Global_113751 - Global_113752) > Global_113557)
					{
						if (MISC::GET_PROFILE_SETTING(803) == 1)
						{
							if (func_54())
							{
								HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_DRIVEN_ALL_VEH" /* GXT: ...has driven all vehicles in San Andreas. */);
								StringCopy(&cVar16, "<C>", 64);
								StringConCat(&cVar16, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								StringConCat(&cVar16, &(Param0.f_1), 64);
								StringConCat(&cVar16, "...", 64);
								StringConCat(&cVar16, "</C>", 64);
								HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar16, 0);
								Global_113752 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						func_172(Param0, -1);
					}
				}
				break;
			
			case joaat("NUM_RNDEVENTS_COMPLETED"):
				Global_113751 = MISC::GET_GAME_TIMER();
				if ((Global_113751 - Global_113752) > Global_113557)
				{
					if (MISC::GET_PROFILE_SETTING(803) == 1)
					{
						if (func_54())
						{
							HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_RNDEV_COMP" /* GXT: ...has completed all Random Events in San Andreas. */);
							StringCopy(&cVar32, "<C>", 64);
							StringConCat(&cVar32, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							StringConCat(&cVar32, &(Param0.f_1), 64);
							StringConCat(&cVar32, "...", 64);
							StringConCat(&cVar32, "</C>", 64);
							HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar32, 0);
							Global_113752 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_172(Param0, -1);
				}
				break;
			
			case joaat("NUM_HIDDEN_PACKAGES_0"):
				if (Param0.f_17 == 50)
				{
					func_171(Param0, "CELL_FEED_LETTER_SCRAPS" /* GXT: ...has collected all Letter Scraps. */);
				}
				break;
			
			case joaat("NUM_HIDDEN_PACKAGES_1"):
				if (Param0.f_17 == 50)
				{
					func_171(Param0, "CELL_FEED_SPACESHIP_PARTS" /* GXT: ...has collected all Spaceship Parts. */);
				}
				break;
			
			case joaat("NUM_HIDDEN_PACKAGES_3"):
				if (Param0.f_17 == 50)
				{
					func_171(Param0, "CELL_FEED_SONAR_COLL" /* GXT: ...has found all Sonar Collectibles. */);
				}
				break;
			
			case joaat("SP0_DIST_DRIVING_CAR"):
				if (Param0.f_18 == 500f)
				{
					func_171(Param0, "CELL_FEED_DRIVEN_500" /* GXT: ...has driven more than 500 miles in San Andreas. */);
				}
				if (Param0.f_18 == 5000f)
				{
					func_171(Param0, "CELL_FEED_DRIVEN_5000" /* GXT: ...has driven more than 5000 miles in San Andreas. */);
				}
				if (Param0.f_18 == 50000f)
				{
					func_171(Param0, "CELL_FEED_DRIVEN_50000" /* GXT: ...has driven more than 50000 miles in San Andreas. */);
				}
				break;
			
			case joaat("SP0_DIST_DRIVING_PLANE"):
				if (Param0.f_18 == 500f)
				{
					func_171(Param0, "CELL_FEED_FLOWN_500" /* GXT: ...has flown more than 500 miles in San Andreas. */);
				}
				if (Param0.f_18 == 5000f)
				{
					func_171(Param0, "CELL_FEED_FLOWN_5000" /* GXT: ...has flown more than 5000 miles in San Andreas. */);
				}
				if (Param0.f_18 == 50000f)
				{
					func_171(Param0, "CELL_FEED_FLOWN_50000" /* GXT: ...has flown more than 50000 miles in San Andreas. */);
				}
				break;
			
			case joaat("SP0_DIST_RUNNING"):
				if (Param0.f_18 == 50f)
				{
					func_171(Param0, "CELL_FEED_RAN_50" /* GXT: ...has run more than 50 miles in San Andreas. */);
				}
				if (Param0.f_18 == 100f)
				{
					func_171(Param0, "CELL_FEED_RAN_100" /* GXT: ...has run more than 100 miles in San Andreas. */);
				}
				if (Param0.f_18 == 1000f)
				{
					func_171(Param0, "CELL_FEED_RAN_1000" /* GXT: ...has run more than 1000 miles in San Andreas. */);
				}
				break;
			
			case joaat("SP0_DIST_SWIMMING"):
				if (Param0.f_18 == 50f)
				{
					func_171(Param0, "CELL_FEED_SWAM_50" /* GXT: ...has swum more than 50 miles in San Andreas. */);
				}
				if (Param0.f_18 == 100f)
				{
					func_171(Param0, "CELL_FEED_SWAM_100" /* GXT: ...has swum more than 100 miles in San Andreas. */);
				}
				if (Param0.f_18 == 1000f)
				{
					func_171(Param0, "CELL_FEED_SWAM_1000" /* GXT: ...has swum more than 1000 miles in San Andreas. */);
				}
				break;
			
			case joaat("SP0_BUSTED"):
				if (Param0.f_17 == 10)
				{
					func_171(Param0, "CELL_FEED_BUSTED_10" /* GXT: ...has been busted 10 times. */);
				}
				if (Param0.f_17 == 25)
				{
					func_171(Param0, "CELL_FEED_BUSTED_25" /* GXT: ...has been busted 25 times. */);
				}
				if (Param0.f_17 == 50)
				{
					func_171(Param0, "CELL_FEED_BUSTED_50" /* GXT: ...has been busted 50 times. */);
				}
				if (Param0.f_17 == 100)
				{
					func_171(Param0, "CELL_FEED_BUSTED_100" /* GXT: ...has been busted 100 times. */);
				}
				if (Param0.f_17 == 250)
				{
					func_171(Param0, "CELL_FEED_BUSTED_250" /* GXT: ...has been busted 250 times. */);
				}
				break;
			
			case joaat("SP0_DEATHS"):
				if (Param0.f_17 == 10)
				{
					func_171(Param0, "CELL_FEED_WASTED_10" /* GXT: ...has been wasted 10 times. */);
				}
				if (Param0.f_17 == 25)
				{
					func_171(Param0, "CELL_FEED_WASTED_25" /* GXT: ...has been wasted 25 times. */);
				}
				if (Param0.f_17 == 50)
				{
					func_171(Param0, "CELL_FEED_WASTED_50" /* GXT: ...has been wasted 50 times. */);
				}
				if (Param0.f_17 == 100)
				{
					func_171(Param0, "CELL_FEED_WASTED_100" /* GXT: ...has been wasted 100 times. */);
				}
				if (Param0.f_17 == 250)
				{
					func_171(Param0, "CELL_FEED_WASTED_250" /* GXT: ...has been wasted 250 times. */);
				}
				break;
			
			case joaat("SP0_SHOTS"):
				if (Param0.f_17 == 1000000)
				{
					func_171(Param0, "CELL_FEED_SHOTS_1ML" /* GXT: ...has fired their 1 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 2000000)
				{
					func_171(Param0, "CELL_FEED_SHOTS_2ML" /* GXT: ...has fired their 2 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 3000000)
				{
					func_171(Param0, "CELL_FEED_SHOTS_3ML" /* GXT: ...has fired their 3 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 4000000)
				{
					func_171(Param0, "CELL_FEED_SHOTS_4ML" /* GXT: ...has fired their 4 millionth round of ammunition. */);
				}
				if (Param0.f_17 == 5000000)
				{
					func_171(Param0, "CELL_FEED_SHOTS_5ML" /* GXT: ...has fired their 5 millionth round of ammunition. */);
				}
				break;
			
			case joaat("SP0_STARS_EVADED"):
				if (Param0.f_17 == 5)
				{
					func_171(Param0, "CELL_FEED_5STARS_WL" /* GXT: ...has just evaded a 5 star Wanted Level. */);
				}
				break;
			
			case joaat("SP0_CROUCHED"):
				if (Param0.f_17 == 10)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 0))
					{
						func_171(Param0, "CELL_FEED_WEB_CAR" /* GXT: ...has just purchased a car online. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 0);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 1))
					{
						func_171(Param0, "CELL_FEED_WEB_RHINO" /* GXT: ...has just purchased a Rhino online. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 1);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 2))
					{
						func_171(Param0, "CELL_FEED_WEB_BUZZARD" /* GXT: ...has just purchased a Buzzard online. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 2);
					}
				}
				break;
			
			case joaat("SP0_CROUCHED_AND_SHOT"):
				if (Param0.f_17 == 10)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 3))
					{
						func_171(Param0, "CELL_FEED_STOCK_INV" /* GXT: ...has invested a large sum in the stock market. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 3);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 4))
					{
						func_171(Param0, "CELL_FEED_STOCK_WIN" /* GXT: ...has had a big win playing the stock market. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 4);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 5))
					{
						func_171(Param0, "CELL_FEED_STOCK_LOSS" /* GXT: ...has suffered a major loss playing the stock market. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 5);
					}
				}
				break;
			
			case joaat("SP0_WATER_CANNON_KILLS"):
				if (Param0.f_17 == 25)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 10))
					{
						func_171(Param0, "CELL_FEED_STNJ_25" /* GXT: ...has completed 25 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 10);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 11))
					{
						func_171(Param0, "CELL_FEED_STNJ_50" /* GXT: ...has completed 50 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 11);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 12))
					{
						func_171(Param0, "CELL_FEED_STNJ_75" /* GXT: ...has completed 75 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 12);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 13))
					{
						func_171(Param0, "CELL_FEED_STNJ_100" /* GXT: ...has completed 100 percent of the stunt jumps in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 13);
					}
				}
				break;
			
			case joaat("SP0_WATER_CANNON_DEATHS"):
				if (Param0.f_17 == 25)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 6))
					{
						func_171(Param0, "CELL_FEED_UTB_25" /* GXT: ...has completed 25 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 6);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 7))
					{
						func_171(Param0, "CELL_FEED_UTB_50" /* GXT: ...has completed 50 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 7);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 8))
					{
						func_171(Param0, "CELL_FEED_UTB_75" /* GXT: ...has completed 75 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 8);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!BitTest(Global_113810.f_10197.f_3856, 9))
					{
						func_171(Param0, "CELL_FEED_UTB_100" /* GXT: ...has completed 100 percent of Under The Bridges in San Andreas. */);
						MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 9);
					}
				}
				break;
			}
	}
}

void func_171(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, char* sParam36)//Position - 0x5F3B
{
	char cVar0[64];
	
	if (MISC::GET_PROFILE_SETTING(803) == 1)
	{
		if (func_54())
		{
			Global_113751 = MISC::GET_GAME_TIMER();
			if ((Global_113751 - Global_113752) > Global_113557)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam36);
				StringCopy(&cVar0, "<C>", 64);
				StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar0, &(Param0.f_1), 64);
				StringConCat(&cVar0, "...", 64);
				StringConCat(&cVar0, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar0, 0);
				Global_113752 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_172(struct<36> Param0, int iParam36)//Position - 0x5FB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_113745[iVar0] == 0)
		{
			Global_113558[iVar0 /*36*/] = { Param0 };
			Global_113739[iVar0] = iParam36;
			Global_113745[iVar0] = 1;
			Global_113753++;
			if (Global_113753 > 5)
			{
				Global_113753 = 5;
			}
			iVar0 = 5;
		}
		iVar0++;
	}
}

void func_173(struct<36> Param0, int iParam36)//Position - 0x6018
{
	int iVar0;
	var uVar1;
	char cVar17[24];
	char cVar23[64];
	char cVar39[64];
	
	if (func_54())
	{
		MemCopy(&uVar1, {func_176(iParam36)}, 16);
		StringCopy(&cVar17, "NO_BLURB_REQ", 24);
		switch (iParam36)
		{
			case 53:
				StringCopy(&cVar17, "CELL_F_PROLOGUE" /* GXT: ...has fumbled a heist. */, 24);
				break;
			
			case 44:
				StringCopy(&cVar17, "CELL_F_LESTER1" /* GXT: ...has discovered social networking is dangerous. */, 24);
				break;
			
			case 20:
				StringCopy(&cVar17, "CELL_F_FAMILY4" /* GXT: ...has reunited with an old friend. */, 24);
				break;
			
			case 75:
				StringCopy(&cVar17, "CELL_F_DOCKH2B" /* GXT: ...has explored the depths and discovered a great treasure. */, 24);
				break;
			
			case 38:
				StringCopy(&cVar17, "CELL_F_FIB4" /* GXT: ...has performed a classic blitz play. */, 24);
				break;
			
			case 93:
				StringCopy(&cVar17, "CELL_F_RURALH2" /* GXT: ...was a big hit at Paleto Bay's Chicken Festival. */, 24);
				break;
			
			case 69:
				StringCopy(&cVar17, "CELL_F_AGENCYH3A" /* GXT: ...has just responded to a 911. */, 24);
				break;
			
			case 70:
				StringCopy(&cVar17, "CELL_F_AGENCYH3B" /* GXT: ...has dropped in on the Bureau. */, 24);
				break;
			
			case 47:
				StringCopy(&cVar17, "CELL_F_MICHAEL2" /* GXT: ...has discovered an abattoir where the meat certainly ain't fresh. */, 24);
				break;
			
			case 42:
				StringCopy(&cVar17, "CELL_F_FRANKLIN2" /* GXT: ...has saved a homeboy with a little help from his friends. */, 24);
				break;
			
			case 84:
				StringCopy(&cVar17, "CELL_F_FINALEH2A" /* GXT: ...has brought traffic to a standstill. */, 24);
				break;
			
			case 85:
				StringCopy(&cVar17, "CELL_F_FINALEH2B" /* GXT: ...has tunneled to victory. */, 24);
				break;
			
			case 24:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE" /* GXT: ...has made an extreme choice and faced the consequences. */, 24);
				break;
			
			case 25:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE" /* GXT: ...has made an extreme choice and faced the consequences. */, 24);
				break;
			
			case 27:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE" /* GXT: ...has made an extreme choice and faced the consequences. */, 24);
				break;
		}
		Global_113751 = MISC::GET_GAME_TIMER();
		if ((Global_113751 - Global_113752) > Global_113557)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&cVar17, "NO_BLURB_REQ"))
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar17);
				StringCopy(&cVar23, "<C>", 64);
				StringConCat(&cVar23, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar23, &(Param0.f_1), 64);
				StringConCat(&cVar23, "...", 64);
				StringConCat(&cVar23, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar23, 0);
			}
			else if (func_175(iParam36))
			{
				iVar0 = func_174(iParam36);
				if (Param0.f_17 > iVar0)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_BEAT_MIS_SCORE" /* GXT: ...beat your high score in the Story mission "~a~". */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uVar1);
					StringCopy(&cVar39, "<C>", 64);
					StringConCat(&cVar39, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					StringConCat(&cVar39, &(Param0.f_1), 64);
					StringConCat(&cVar39, "...", 64);
					StringConCat(&cVar39, "</C>", 64);
					HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &cVar39, 0);
				}
			}
			Global_113752 = MISC::GET_GAME_TIMER();
		}
		else
		{
			func_172(Param0, iParam36);
		}
	}
}

var func_174(int iParam0)//Position - 0x6222
{
	return Global_113810.f_9088.f_330[iParam0 /*6*/].f_4;
}

int func_175(int iParam0)//Position - 0x623A
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_330[iParam0 /*6*/];
}

struct<2> func_176(int iParam0)//Position - 0x6266
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_91601[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_113810.f_9088.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_177(int iParam0)//Position - 0x62CC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		if (!BitTest(Global_91601[iVar1 /*34*/].f_15, 6))
		{
			if (func_178(iVar1) == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_178(int iParam0)//Position - 0x630C
{
	char cVar0[16];
	
	if (!BitTest(Global_91601[iParam0 /*34*/].f_15, 7))
	{
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &(Global_91601[iParam0 /*34*/].f_8), 16);
		if (iParam0 == 90)
		{
			if (Global_113810.f_9088.f_99.f_205[7] == 2)
			{
				StringConCat(&cVar0, "B", 16);
			}
			else
			{
				StringConCat(&cVar0, "A", 16);
			}
		}
		return MISC::GET_HASH_KEY(&cVar0);
	}
	return joaat("CITIES_PASSED");
}

void func_179(var uParam0, bool bParam1)//Position - 0x6372
{
	if (!func_54())
	{
		return;
	}
	if (!bParam1)
	{
		return;
	}
	if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam0->f_167 == 0)
	{
		uParam0->f_167 = 1;
	}
	else
	{
		if (MISC::GET_PROFILE_SETTING(803) != 1)
		{
		}
		if (uParam0->f_167 == 1)
		{
		}
	}
}

void func_180(int iParam0, var uParam1, bool bParam2)//Position - 0x63C0
{
	struct<2> Var0;
	
	if (!func_54() || !func_51())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_167 == 0)
		{
			if (Var0.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TA" /* GXT: You have been kicked from your active Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(false, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TI" /* GXT: You have been kicked from an inactive Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(false, true);
			}
		}
	}
}

void func_181(int iParam0, var uParam1, bool bParam2)//Position - 0x6436
{
	struct<2> Var0;
	
	if (!func_54() || !func_51())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_167 == 0)
		{
			if (Var0.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA" /* GXT: You have left your Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA" /* GXT: You have left your Crew. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
	}
}

void func_182(int iParam0, var uParam1, bool bParam2)//Position - 0x64AC
{
	struct<2> Var0;
	struct<4> Var35;
	int iVar46;
	int iVar47;
	struct<4> Var48;
	
	if (!func_54() || !func_51())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var35, 11))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_167 == 0)
		{
			iVar46 = NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
			iVar47 = 0;
			while (iVar47 < iVar46)
			{
				NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar47);
				if (Var0.f_0 == Var35.f_0)
				{
					if (Var35.f_2)
					{
						StringCopy(&Var48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HIGHER_RANK" /* GXT: a higher rank */), 32);
					}
					else
					{
						StringCopy(&Var48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("LOWER_RANK" /* GXT: a lower rank */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank4"))
					{
						StringCopy(&Var48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK4" /* GXT: Muscle */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank3"))
					{
						StringCopy(&Var48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK3" /* GXT: Representative */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank2"))
					{
						StringCopy(&Var48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK2" /* GXT: Lieutenant */), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank1"))
					{
						StringCopy(&Var48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK1" /* GXT: Commissioner */), 32);
					}
					if (Var35.f_2)
					{
						func_183("CREWPROM" /* GXT: You have been promoted to ~a~ status in the hierarchy of Crew ~a~. */, &Var48, &(Var0.f_1));
					}
					else
					{
						func_183("CREWDEMO" /* GXT: You have been demoted to ~a~ status in the hierarchy of Crew ~a~. */, &Var48, &(Var0.f_1));
					}
					uParam1->f_167 = 1;
				}
				iVar47++;
			}
		}
	}
}

int func_183(char* sParam0, char* sParam1, char* sParam2)//Position - 0x65DF
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(33, sParam0, 1, sParam1, 0, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_184(int iParam0, var uParam1, bool bParam2)//Position - 0x661A
{
	int iVar0;
	struct<21> Var1;
	struct<36> Var37;
	struct<68> Var132;
	var uVar220;
	
	if (!func_54())
	{
		return;
	}
	if (!func_164())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 36))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_167 == 0)
		{
			switch (Var1.f_0)
			{
				case joaat("MP0_AWD_50_VEHICLES_BLOWNUP"):
				case joaat("MP1_AWD_50_VEHICLES_BLOWNUP"):
					iVar0 = func_47(10, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_189("SCFEED_13" /* GXT: ~a~ has blown up ~1~ vehicles in GTA Online. You've blown up ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_189("SCFEED_13b" /* GXT: ~a~ has blown up ~1~ vehicle in GTA Online. You've blown up ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_167 = 1;
					}
					break;
				
				case joaat("MP0_AWD_VEHICLES_JACKEDR"):
				case joaat("MP1_AWD_VEHICLES_JACKEDR"):
					iVar0 = func_47(11, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_189("SCFEED_10" /* GXT: ~a~ has stolen ~1~ vehicles in GTA Online. You've stolen ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_189("SCFEED_10b" /* GXT: ~a~ has stolen ~1~ vehicle in GTA Online. You've stolen ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_167 = 1;
					}
					break;
				
				case joaat("MP0_AWD_FMTIME5STARWANTED"):
				case joaat("MP1_AWD_FMTIME5STARWANTED"):
					iVar0 = func_47(60, -1);
					if (Var1.f_17 > iVar0)
					{
						func_189("SCFEED_4" /* GXT: ~a~ survived a 5 star Wanted Level for ~1~ minutes in GTA Online. Your best time is ~1~ minutes. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_167 = 1;
					}
					break;
				
				case joaat("MP0_AWD_FMFURTHESTWHEELIE"):
				case joaat("MP1_AWD_FMFURTHESTWHEELIE"):
					iVar0 = SYSTEM::ROUND(func_44(32, -1));
					if (Var1.f_17 > iVar0)
					{
						if (func_188(PLAYER::PLAYER_ID()) == 133 && func_187(PLAYER::PLAYER_ID()) == 4)
						{
						}
						else
						{
							if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
							{
								func_189("SCFEED_5" /* GXT: ~a~ did a wheelie for ~1~m in GTA Online. Your furthest distance is ~1~m. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							else
							{
								func_189("SCFEED_5b" /* GXT: ~a~ did a wheelie for ~1~ft in GTA Online. Your furthest distance is ~1~ft. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							uParam1->f_167 = 1;
						}
					}
					break;
				
				case joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"):
				case joaat("MP1_AWD_FMDRIVEWITHOUTCRASH"):
					iVar0 = func_47(61, -1);
					if (Var1.f_17 > iVar0)
					{
						func_189("SCFEED_6" /* GXT: ~a~ drove without crashing for ~1~ minutes in GTA Online. Your best time is ~1~ minutes. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_167 = 1;
					}
					break;
				
				case joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTFLIPSINONEVEHICLE"):
					iVar0 = func_47(62, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_189("SCFEED_7" /* GXT: ~a~ did ~1~ flips in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_189("SCFEED_7b" /* GXT: ~a~ did ~1~ flip in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_167 = 1;
					}
					break;
				
				case joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTSPINSINONEVEHICLE"):
					iVar0 = func_47(63, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_189("SCFEED_8" /* GXT: ~a~ did ~1~ spins in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_189("SCFEED_8b" /* GXT: ~a~ did ~1~ spin in 1 jump in GTA Online. Your highest amount is ~1~. */, &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_167 = 1;
					}
					break;
				
				case joaat("MP0_CHAR_FM_RACE_RECORD_TIMES"):
				case joaat("MP1_CHAR_FM_RACE_RECORD_TIMES"):
					if (((((((((((((((func_116() == 0 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_115()) && !func_114()) && !func_113()) && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && (func_164() && func_103())) && Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 != 8) && Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_95 != 9) && !func_101(PLAYER::PLAYER_ID())) && !func_100()) && !func_98(PLAYER::PLAYER_ID(), 1, 0))
					{
						Var37.f_16 = 1;
						Var37.f_20 = -1;
						Var37.f_21 = -1;
						Var37.f_22 = 2;
						Var37.f_35 = 2;
						Var132.f_65 = -1;
						Var132.f_66 = -1;
						Var132.f_67 = 2;
						if (func_83(&Var37, &(Var1.f_20), &Var132, &uVar220))
						{
							if (Var37.f_0)
							{
								func_186("SCFEED_11" /* GXT: ~a~ set a Race World Record on ~a~ with the time: ~a~. */, &(Var1.f_1), Var1.f_17, &(Var132.f_22), 1, 2f);
								if (!func_185(0))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
								}
								uParam1->f_167 = 1;
							}
						}
					}
					break;
				}
		}
	}
}

bool func_185(bool bParam0)//Position - 0x6A3A
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

int func_186(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, float fParam5)//Position - 0x6A4B
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 2055);
	if (bParam4)
	{
		Var1 = { func_78(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, "", fParam5);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	func_60(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_187(int iParam0)//Position - 0x6ABE
{
	if (func_188(iParam0) == 133)
	{
		return Global_2794162.f_5152;
	}
	return -1;
}

int func_188(int iParam0)//Position - 0x6ADF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/];
	}
	return -1;
}

int func_189(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x6AFE
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { func_78(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &Var1, 0);
	}
	else
	{
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	func_60(40, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_190(int iParam0)//Position - 0x6B85
{
	struct<36> Var0;
	int iVar36;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 36))
	{
		func_170(Var0, iVar36);
	}
}

int func_191()//Position - 0x6BA9
{
	switch (MISC::GET_PROFILE_SETTING(807))
	{
		case 0:
			return 0;
		
		case 1:
			return 60000;
		
		case 2:
			return 120000;
		
		case 3:
			return 180000;
		
		case 4:
			return 240000;
		
		case 5:
			return 300000;
		
		case 6:
			return 600000;
		
		case 7:
			return 900000;
		
		case 8:
			return 1800000;
		
		case 9:
			return 3600000;
		
		default:
	}
	return 300000;
}

void func_192()//Position - 0x6C40
{
	if (!iLocal_130)
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_128))
		{
			if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_128))
			{
				if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_128))
				{
					iLocal_128 = 0;
					iLocal_130 = 1;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_2359296[func_194() /*5568*/].f_593.f_56 = { func_195() };
					}
					else
					{
						Global_113810.f_20121.f_267 = { func_195() };
					}
					iLocal_128 = 0;
					iLocal_130 = 1;
				}
			}
		}
		else if (func_193(&uLocal_124, &uLocal_129))
		{
			SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&uLocal_124, &iLocal_128);
		}
		else
		{
			iLocal_128 = 0;
			iLocal_130 = 1;
		}
	}
}

int func_193(var uParam0, var uParam1)//Position - 0x6CC9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113810.f_20121.f_261)
	{
		*uParam0 = { Global_113810.f_20121.f_267 };
		*uParam1 = Global_113810.f_20121.f_271;
		return 1;
	}
	return 0;
}

int func_194()//Position - 0x6D0A
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

struct<4> func_195()//Position - 0x6D17
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	iVar5 = 0;
	while (iVar5 <= 7)
	{
		if (iVar5 < 2)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			StringConCat(&Var0, func_196(iVar4), 16);
		}
		else if (iVar5 < 5)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(10, 36);
			StringConCat(&Var0, func_196(iVar4), 16);
		}
		else
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			StringConCat(&Var0, func_196(iVar4), 16);
		}
		iVar5++;
	}
	return Var0;
}

char* func_196(int iParam0)//Position - 0x6D87
{
	if (iParam0 == 0)
	{
		return "0";
	}
	if (iParam0 == 1)
	{
		return "1";
	}
	if (iParam0 == 2)
	{
		return "2";
	}
	if (iParam0 == 3)
	{
		return "3";
	}
	if (iParam0 == 4)
	{
		return "4";
	}
	if (iParam0 == 5)
	{
		return "5";
	}
	if (iParam0 == 6)
	{
		return "6";
	}
	if (iParam0 == 7)
	{
		return "7";
	}
	if (iParam0 == 8)
	{
		return "8";
	}
	if (iParam0 == 9)
	{
		return "9";
	}
	if (iParam0 == 10)
	{
		return "A";
	}
	if (iParam0 == 11)
	{
		return "B";
	}
	if (iParam0 == 12)
	{
		return "C";
	}
	if (iParam0 == 13)
	{
		return "D";
	}
	if (iParam0 == 14)
	{
		return "E";
	}
	if (iParam0 == 15)
	{
		return "F";
	}
	if (iParam0 == 16)
	{
		return "G";
	}
	if (iParam0 == 17)
	{
		return "H";
	}
	if (iParam0 == 18)
	{
		return "I";
	}
	if (iParam0 == 19)
	{
		return "J";
	}
	if (iParam0 == 20)
	{
		return "K";
	}
	if (iParam0 == 21)
	{
		return "L";
	}
	if (iParam0 == 22)
	{
		return "M";
	}
	if (iParam0 == 23)
	{
		return "N";
	}
	if (iParam0 == 24)
	{
		return "O";
	}
	if (iParam0 == 25)
	{
		return "P";
	}
	if (iParam0 == 26)
	{
		return "Q";
	}
	if (iParam0 == 27)
	{
		return "R";
	}
	if (iParam0 == 28)
	{
		return "S";
	}
	if (iParam0 == 29)
	{
		return "T";
	}
	if (iParam0 == 30)
	{
		return "U";
	}
	if (iParam0 == 31)
	{
		return "V";
	}
	if (iParam0 == 32)
	{
		return "W";
	}
	if (iParam0 == 33)
	{
		return "X";
	}
	if (iParam0 == 34)
	{
		return "Y";
	}
	if (iParam0 == 35)
	{
		return "Z";
	}
	return "A";
}

void func_197()//Position - 0x6F5E
{
	bool bVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_514(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iLocal_88 == 0)
	{
		func_513();
		if (bLocal_84)
		{
			return;
		}
		func_512();
	}
	func_480();
	if (bLocal_87)
	{
		return;
	}
	func_472();
	func_469();
	bVar0 = iLocal_86;
	bVar1 = ((iLocal_72 == 0 && !bLocal_87) && !bLocal_84);
	if (iLocal_86)
	{
		iLocal_86 = 0;
	}
	else
	{
		iLocal_72 = (iLocal_72 + 1 % Global_262145.f_32753 /* Tunable: STAGGERED_MAX_FRAMES_APP_ORDERS */);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_72 < 20)
		{
			if (!bVar0)
			{
				iLocal_73++;
				if (iLocal_73 >= 10)
				{
					iLocal_73 = 0;
					bLocal_76 = !bLocal_76;
				}
			}
			iLocal_75 = (Global_2359296[func_194() /*5568*/].f_593.f_63[iLocal_73] - 1);
			if (bLocal_76)
			{
				if (func_468(iLocal_75, &iLocal_74))
				{
					func_204(3);
				}
			}
			else if (Global_2359296[func_194() /*5568*/].f_593.f_63[iLocal_73] == 0)
			{
				func_203(iLocal_73);
			}
		}
	}
	else
	{
		switch (iLocal_72)
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
				func_198();
				break;
			}
	}
	if (bVar1)
	{
		if (iLocal_104)
		{
			if (SYSTEM::TIMERA() > 5000)
			{
				APP::APP_SET_APP("car");
				APP::APP_SAVE_DATA();
				APP::APP_CLOSE_APP();
				iLocal_104 = 0;
			}
		}
	}
}

void func_198()//Position - 0x70B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (func_202())
	{
		return;
	}
	if (Global_32429)
	{
		if (!iLocal_102)
		{
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_201("chopKilled", MISC::GET_RANDOM_INT_IN_RANGE(0, 65535));
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			iLocal_102 = 1;
		}
	}
	else
	{
		iLocal_102 = 0;
	}
	APP::APP_SET_APP("dog");
	APP::APP_SET_BLOCK("saveData");
	if (APP::APP_DATA_VALID())
	{
		iVar0 = APP::APP_GET_INT("happinessTimer");
		if (iVar0 == 0)
		{
			iVar0 = 450;
		}
		iVar1 = APP::APP_GET_INT("happinessDecrement");
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		iVar2 = APP::APP_GET_INT("time_stamp");
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar3 == 0)
		{
			iVar3 = iVar2;
		}
		iVar4 = APP::APP_GET_INT("happiness");
		iVar5 = (iVar3 - iVar2);
		iVar6 = ((iVar5 / iVar0) * iVar1);
		iVar7 = func_200((iVar4 - iVar6), 0, 100);
		Global_113810.f_20121.f_254 = SYSTEM::TO_FLOAT(iVar7);
		Global_113810.f_20121.f_254.f_1 = APP::APP_GET_FLOAT("cleanliness");
		Global_113810.f_20121.f_254.f_2 = APP::APP_GET_FLOAT("hunger");
		Global_113810.f_20121.f_254.f_3 = func_23("trainingLevel");
		Global_113810.f_20121.f_254.f_4 = func_23("collar");
		Global_113810.f_20121.f_254.f_5 = 1;
		if (Global_113810.f_20121.f_254 > 50f)
		{
		}
		if (Global_113810.f_20121.f_254.f_2 > 50f)
		{
		}
		Global_113810.f_20121.f_263 = func_23("usedApp") != 0;
		if (STATS::STAT_GET_BOOL(joaat("CHOP_APP_USED"), &bVar8, -1))
		{
			if (!bVar8)
			{
				if (Global_113810.f_20121.f_263)
				{
					STATS::STAT_SET_BOOL(joaat("CHOP_APP_USED"), true, true);
				}
			}
		}
	}
	APP::APP_CLOSE_BLOCK();
	APP::APP_CLOSE_APP();
	if (Global_113810.f_20121.f_264)
	{
		APP::APP_SET_APP("dog");
		APP::APP_SET_BLOCK("saveData");
		if (func_199(6))
		{
			func_201("chopSafeHouse", 1);
		}
		else
		{
			func_201("chopSafeHouse", 0);
		}
		APP::APP_SAVE_DATA();
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_113810.f_20121.f_264 = 0;
	}
}

bool func_199(int iParam0)//Position - 0x72C0
{
	return BitTest(Global_113810.f_7232[iParam0], 0);
}

int func_200(int iParam0, int iParam1, int iParam2)//Position - 0x72D5
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

void func_201(char* sParam0, int iParam1)//Position - 0x72FA
{
	APP::APP_SET_INT(func_24(sParam0), iParam1);
}

int func_202()//Position - 0x730E
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	return 1;
}

void func_203(int iParam0)//Position - 0x7323
{
	char cVar0[16];
	
	if (!Global_2359296[func_194() /*5568*/].f_593.f_41[iParam0])
	{
		APP::APP_SET_APP("car");
		StringCopy(&cVar0, "multiplayer", 16);
		StringIntConCat(&cVar0, func_15(), 16);
		APP::APP_SET_BLOCK(&cVar0);
		StringCopy(&cVar0, "vehicle", 16);
		StringIntConCat(&cVar0, iParam0, 16);
		APP::APP_SET_BLOCK(&cVar0);
		func_201("carUnlocked", 0);
		APP::APP_CLOSE_BLOCK();
		iLocal_104 = 1;
		SYSTEM::SETTIMERA(0);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_2359296[func_194() /*5568*/].f_593.f_41[iParam0] = 1;
	}
}

void func_204(int iParam0)//Position - 0x73A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<6> Var8;
	char cVar14[24];
	struct<6> Var20;
	struct<43> Var26;
	struct<41> Var69;
	int iVar110;
	int iVar111;
	struct<82> Var112;
	int iVar210;
	int iVar211;
	int iVar212;
	char cVar213[16];
	int iVar217;
	bool bVar218;
	int iVar219;
	int iVar220;
	int iVar221[6];
	int iVar228;
	bool bVar229;
	bool bVar230;
	struct<2> Var231;
	int iVar235;
	int iVar236;
	int iVar237;
	int iVar238;
	int iVar239;
	var uVar240;
	int iVar241;
	int iVar242;
	
	Var26.f_33 = 5;
	if (iParam0 == 0)
	{
		iVar2 = 0;
		StringCopy(&Var8, "singleplayer0", 24);
		StringCopy(&cVar14, "sp0_order", 24);
		Var26 = { Global_113810.f_20121[0 /*43*/] };
		Var69 = { Global_113810.f_20121.f_130[0 /*41*/] };
	}
	else if (iParam0 == 1)
	{
		iVar2 = 1;
		StringCopy(&Var8, "singleplayer1", 24);
		StringCopy(&cVar14, "sp1_order", 24);
		Var26 = { Global_113810.f_20121[1 /*43*/] };
		Var69 = { Global_113810.f_20121.f_130[1 /*41*/] };
	}
	else if (iParam0 == 2)
	{
		iVar2 = 2;
		StringCopy(&Var8, "singleplayer2", 24);
		StringCopy(&cVar14, "sp2_order", 24);
		Var26 = { Global_113810.f_20121[2 /*43*/] };
		Var69 = { Global_113810.f_20121.f_130[2 /*41*/] };
	}
	else if (iParam0 == 3)
	{
		iVar3 = func_15();
		iVar2 = (3 + iVar3);
		StringCopy(&Var8, "multiplayer", 24);
		StringIntConCat(&Var8, iVar3, 24);
		StringCopy(&cVar14, "mp", 24);
		StringIntConCat(&cVar14, iVar3, 24);
		StringConCat(&cVar14, "_order", 24);
		if (func_467(iLocal_74, &iVar110))
		{
			func_466(&Var26, iVar110);
		}
		else
		{
			func_466(&Var26, 0);
		}
		Var69 = { Global_2359296[func_194() /*5568*/].f_593 };
		StringCopy(&Var20, "vehicle", 24);
		StringIntConCat(&Var20, iLocal_73, 24);
	}
	else
	{
		return;
	}
	if (iLocal_103 || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_79))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_103 = 0;
		}
		else
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_201("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_201("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_201("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			iVar111 = 0;
			while (iVar111 < Global_113810.f_20121)
			{
				if (!Global_113810.f_20121[iVar111 /*43*/].f_41)
				{
					Global_113810.f_20121[iVar111 /*43*/].f_40 = 0;
					if (Global_113810.f_20121[iVar111 /*43*/] != 0 && Global_113810.f_20121[iVar111 /*43*/].f_29 != 0)
					{
						Global_113810.f_20121[iVar111 /*43*/].f_40 = 1;
					}
					else
					{
						Global_113810.f_20121.f_273[iVar111] = 0;
					}
				}
				iVar111++;
			}
			iLocal_103 = 0;
		}
		if (iParam0 >= 2)
		{
			iLocal_103 = 0;
			iLocal_79 = 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_113810.f_20121.f_273[iParam0])
		{
			if (((!func_465(0) && !func_465(3)) && !func_465(2)) || !func_175(0))
			{
				if ((iParam0 == 1 || (((iParam0 == 0 && func_175(0)) && func_464(iParam0)) && !Global_113810.f_9088.f_99.f_58[135])) || (((iParam0 == 2 && func_175(0)) && func_464(iParam0)) && !Global_113810.f_9088.f_99.f_58[136]))
				{
					APP::APP_SET_APP("car");
					APP::APP_SET_BLOCK(&Var8);
					APP::APP_CLEAR_BLOCK();
					Var112.f_11 = 12;
					Var112.f_31 = 49;
					Var112.f_81 = 2;
					func_463(iParam0, &Var112, 1);
					func_462(Var112.f_5, Var112.f_7, -1, 1, &iVar210);
					func_462(Var112.f_6, -1, -1, 0, &iVar211);
					func_201("carUnlocked", 1);
					func_201("carModel", Var112.f_0);
					func_201("tyreSmokeColourEnabled", 1);
					func_201("tyreSmokeColourRed", 255);
					func_201("tyreSmokeColourGreen", 255);
					func_201("tyreSmokeColourBlue", 255);
					if (Var112.f_0 == joaat("buffalo2"))
					{
						func_461("carType", "sport");
						func_201("carEngineCount", 5);
						func_201("carBrakesCount", 4);
						func_201("carExhaustCount", 6);
						func_201("carWheelCount", 26);
						func_201("carHornCount", 5);
						func_201("carArmourCount", 6);
						func_201("carSuspensionCount", 5);
						func_201("carHorn1", 1748384362);
						func_201("carHorn2", 1766676233);
						func_201("carHorn3", -1390777827);
						func_201("carHorn4", -1751761149);
						func_201("carHorn5", 1732399718);
						func_460("carPriceModifier", 3.25f);
						func_201("carColour1", iVar210);
						func_201("carColour2", iVar211);
						func_201("carColour1Unlocked", 1);
						func_201("carColour2Unlocked", 1);
					}
					else if (Var112.f_0 == joaat("bodhi2"))
					{
						func_461("carType", "car");
						func_201("carEngineCount", 5);
						func_201("carBrakesCount", 4);
						func_201("carExhaustCount", 1);
						func_201("carWheelCount", 26);
						func_201("carHornCount", 5);
						func_201("carArmourCount", 6);
						func_201("carSuspensionCount", 1);
						func_201("carHorn1", -1512308941);
						func_201("carHorn2", 1766676233);
						func_201("carHorn3", -1390777827);
						func_201("carHorn4", -1751761149);
						func_201("carHorn5", 1732399718);
						func_460("carPriceModifier", 1f);
						func_201("carColour1", iVar210);
						func_201("carColour1Unlocked", 1);
					}
					else if (Var112.f_0 == joaat("tailgater"))
					{
						func_461("carType", "car");
						func_201("carEngineCount", 5);
						func_201("carBrakesCount", 5);
						func_201("carExhaustCount", 5);
						func_201("carWheelCount", 26);
						func_201("carHornCount", 5);
						func_201("carArmourCount", 6);
						func_201("carSuspensionCount", 5);
						func_201("carHorn1", 36213993);
						func_201("carHorn2", 1766676233);
						func_201("carHorn3", -1390777827);
						func_201("carHorn4", -1751761149);
						func_201("carHorn5", 1732399718);
						func_460("carPriceModifier", 1f);
						func_201("carColour1", iVar210);
						func_201("carColour2", iVar211);
						func_201("carColour1Unlocked", 1);
						func_201("carColour2Unlocked", 1);
					}
					APP::APP_CLOSE_BLOCK();
					Local_90 = { Var8 };
					Local_96 = { Var20 };
					iLocal_89 = Var112.f_0;
					bLocal_87 = true;
					iLocal_104 = 1;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_APP();
					Global_113810.f_20121.f_273[iParam0] = 1;
				}
			}
		}
		else if ((iParam0 == 0 && Global_113810.f_9088.f_99.f_58[135]) || (iParam0 == 2 && Global_113810.f_9088.f_99.f_58[136]))
		{
			Global_113810.f_20121[iParam0 /*43*/].f_41 = 1;
			Global_113810.f_20121.f_273[iParam0] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar212 = 0;
		if (iLocal_132 == 0)
		{
			iVar212 = func_459(joaat("MPPLY_CARAPP_DATA_SENT_0"));
		}
		else if (iLocal_132 == 1)
		{
			iVar212 = func_459(joaat("MPPLY_CARAPP_DATA_SENT_1"));
		}
		else if (iLocal_132 == 2)
		{
			iVar212 = func_459(joaat("MPPLY_CARAPP_DATA_SENT_2"));
		}
		else if (iLocal_132 == 3)
		{
			iVar212 = func_459(joaat("MPPLY_CARAPP_DATA_SENT_3"));
		}
		else if (iLocal_132 == 4)
		{
			iVar212 = func_459(joaat("MPPLY_CARAPP_DATA_SENT_4"));
		}
		if (iVar212 && !func_458(iLocal_132))
		{
			APP::APP_SET_APP("car");
			StringCopy(&cVar213, "multiplayer", 16);
			StringIntConCat(&cVar213, iLocal_132, 16);
			APP::APP_SET_BLOCK(&cVar213);
			iVar217 = 0;
			while (iVar217 < 10)
			{
				StringCopy(&cVar213, "vehicle", 16);
				StringIntConCat(&cVar213, iVar217, 16);
				APP::APP_SET_BLOCK(&cVar213);
				func_201("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
				iVar217++;
			}
			APP::APP_CLOSE_BLOCK();
			iLocal_104 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			if (iLocal_132 == 0)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_0"), 0);
			}
			else if (iLocal_132 == 1)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_1"), 0);
			}
			else if (iLocal_132 == 2)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_2"), 0);
			}
			else if (iLocal_132 == 3)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_3"), 0);
			}
			else if (iLocal_132 == 4)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_4"), 0);
			}
		}
		iLocal_132++;
		if (iLocal_132 > 4)
		{
			iLocal_132 = 0;
		}
	}
	if (!bLocal_87)
	{
		if (Var26.f_42)
		{
			Local_90 = { Var8 };
			Local_96 = { Var20 };
			iLocal_89 = Var26.f_0;
			bLocal_87 = true;
			iLocal_104 = 1;
			SYSTEM::SETTIMERA(0);
			Var26.f_42 = 0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_2359296[func_194() /*5568*/].f_593.f_52 = 0;
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_163(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (SYSTEM::TIMERB() > 5000)
			{
				bVar218 = false;
				if (iLocal_133 == 0)
				{
					func_456(&iVar219);
					bVar218 = iVar219 != iLocal_135[0];
					iLocal_133++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_133 == 1)
				{
					func_419(&iVar220);
					bVar218 = iVar220 != iLocal_135[1];
					iLocal_133++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_133 == 2)
				{
					if (func_409(&iVar221, iLocal_134) == -1)
					{
						iLocal_134 = 0;
						iLocal_133++;
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bVar218 = BitTest(iVar221[(iLocal_134 / 32)], (iLocal_134 % 32)) != BitTest(uLocal_147[(iLocal_134 / 32)], (iLocal_134 % 32));
						iLocal_134++;
						SYSTEM::SETTIMERB(4900);
					}
				}
				if (bVar218)
				{
					Local_90 = { Var8 };
					Local_96 = { Var20 };
					iLocal_89 = Var26.f_0;
					bLocal_87 = true;
					iLocal_104 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_133 > 2)
				{
					iLocal_133 = 0;
				}
			}
		}
	}
	if (Var69.f_33)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_85() == 0)
			{
				iVar228 = Global_2359296[func_194() /*5568*/].f_593.f_62;
				if (Global_1586488[iVar228 /*142*/].f_66 == Var69.f_0)
				{
					if (Var69.f_37)
					{
						Var69.f_38 = 0;
						if (iLocal_107 == 0)
						{
							if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_105))
							{
								if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_105))
								{
									if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_105))
									{
										iLocal_105 = 0;
										Var69.f_37 = 0;
									}
									else
									{
										Var69.f_38 = 1;
										iLocal_105 = 0;
										Var69.f_37 = 0;
									}
								}
							}
							else
							{
								SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_2359296[func_194() /*5568*/].f_593.f_28), &iLocal_105);
							}
						}
						else if (iLocal_107 == 1)
						{
							if (iLocal_106 == 0)
							{
								SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_2359296[func_194() /*5568*/].f_593.f_28), &iLocal_106);
							}
							else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_106))
							{
								switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_106))
								{
									case 0:
										iLocal_106 = 0;
										Var69.f_37 = 0;
										break;
									
									default:
										Var69.f_38 = 1;
										iLocal_106 = 0;
										Var69.f_37 = 0;
										break;
									}
								}
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
					}
					else if (func_408(PLAYER::PLAYER_ID(), 1, 0))
					{
					}
					else if (!func_164())
					{
					}
					else if (Var69.f_38)
					{
						if (func_407(96, "SOCIAL_CARAPP2" /* GXT: The plate you ordered is inappropriate. Please choose another and try again. */, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (iLocal_121)
					{
						Var69.f_39 = 0;
						if (iLocal_123)
						{
							if (!func_393(&Var69, iVar228))
							{
								iLocal_121 = 0;
							}
							iLocal_123 = 0;
						}
						else if (Var69.f_27 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(Var69.f_27, false, true, false, -1, 0))
						{
							Var69.f_39 = 1;
							iLocal_121 = 0;
						}
						else
						{
							if (!iLocal_122)
							{
								func_391(&Var69, 0);
								MISC::SET_BIT(&(Global_1586488[iVar228 /*142*/].f_103), 14);
								iLocal_122 = 1;
								func_370(iVar228, &(Global_1586488[iVar228 /*142*/]), 1, -1, 0, 0);
								func_129(407109726, 3, 0);
							}
							if (func_293(96, "SOCIAL_CARAPP1" /* GXT: Your Los Santos Customs order has been processed for your ~a~. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69.f_0), 0, -99, 0, 0, 0, 0))
							{
								bVar229 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= Var69.f_27;
								bVar230 = (!bVar229 && MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0);
								if (Var69.f_27 > 0)
								{
									MONEY::NETWORK_BUY_ITEM(Var69.f_27, Var69.f_0, 8, 1, bVar229, "CMOD_MAIN_0", MISC::GET_HASH_KEY(func_292(39, 0, 0)), MISC::GET_HASH_KEY("CMOD_MAIN_0"), 0, bVar230);
								}
								Var69.f_33 = 0;
								Var69.f_36 = 1;
								Var69.f_35 = 1;
								iLocal_121 = 0;
								func_391(&Var69, 1);
								func_291(&Var69, 3);
								MISC::SET_BIT(&(Global_1586488[iVar228 /*142*/].f_103), 14);
								func_370(iVar228, &(Global_1586488[iVar228 /*142*/]), 1, -1, 0, 0);
								func_129(407109726, 3, 0);
							}
						}
					}
					else if (Var69.f_39)
					{
						if (func_293(96, "SOCIAL_CARAPP3" /* GXT: We could not process your Los Santos Customs order due to lack of funds. Drop by one of our garages with your ~a~ when you have enough money. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69.f_0), 0, -99, 0, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (func_293(96, "SOCIAL_CARAPP" /* GXT: Drop by Los Santos Customs to have your ~a~ order fulfilled. */, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69.f_0), 0, -99, 0, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
					}
					iLocal_86 = 1;
				}
				else
				{
					Var69.f_33 = 0;
					Var69.f_36 = 0;
					Var69.f_35 = 0;
					Var69.f_34 = 0;
				}
			}
		}
		else if (iParam0 == func_286())
		{
			if ((((((Global_113810.f_2366.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == Var69.f_0 || Global_113810.f_2366.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == Var69.f_0) || Global_113810.f_2366.f_539.f_2407[2 /*295*/][iParam0 /*98*/] == Var69.f_0) || Global_113810.f_2366.f_539.f_2407[3 /*295*/][iParam0 /*98*/] == Var69.f_0) || ((iParam0 == 1 && Var69.f_0 == joaat("buffalo2")) && !Global_113810.f_20121.f_281[iParam0])) || ((iParam0 == 0 && Var69.f_0 == joaat("tailgater")) && !Global_113810.f_20121.f_281[iParam0])) || ((iParam0 == 2 && Var69.f_0 == joaat("bodhi2")) && !Global_113810.f_20121.f_281[iParam0]))
			{
				if (Var69.f_37)
				{
					Var69.f_38 = 0;
					if (iLocal_107 == 0)
					{
						if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_105))
						{
							if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_105))
							{
								if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_105))
								{
									iLocal_105 = 0;
									Var69.f_37 = 0;
								}
								else
								{
									Var69.f_38 = 1;
									iLocal_105 = 0;
									Var69.f_37 = 0;
								}
							}
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_113810.f_20121.f_130[iParam0 /*41*/].f_28), &iLocal_105);
						}
					}
					else if (iLocal_107 == 1)
					{
						if (iLocal_106 == 0)
						{
							SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_113810.f_20121.f_130[iParam0 /*41*/].f_28), &iLocal_106);
						}
						else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_106))
						{
							switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_106))
							{
								case 0:
									iLocal_106 = 0;
									Var69.f_37 = 0;
									break;
								
								default:
									Var69.f_38 = 1;
									iLocal_106 = 0;
									Var69.f_37 = 0;
									break;
								}
							}
					}
				}
				else if (Var69.f_38)
				{
					if ((!func_465(0) && !func_465(3)) && !func_465(2))
					{
						if (func_285(96, "SOCIAL_CARAPP2" /* GXT: The plate you ordered is inappropriate. Please choose another and try again. */, 2, 0, 0, 0, 0, 1, 0, 1))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if (iLocal_109[iParam0])
				{
					iLocal_109[iParam0] = 0;
					Var69.f_39 = 0;
					Var69.f_34 = 0;
					if (!func_281(Var69.f_27) && (iParam0 != 1 || Global_113810.f_20121.f_281[iParam0]))
					{
						Var69.f_39 = 1;
					}
					else
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 1;
						Var69.f_34 = iLocal_113[iParam0];
					}
					iLocal_113[iParam0] = 0;
				}
				else if (Var69.f_39)
				{
					if ((!func_465(0) && !func_465(3)) && !func_465(2))
					{
						if (func_263(96, "SOCIAL_CARAPP3" /* GXT: We could not process your Los Santos Customs order due to lack of funds. Drop by one of our garages with your ~a~ when you have enough money. */, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113810.f_20121.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if ((!func_465(0) && !func_465(3)) && !func_465(2))
				{
					StringCopy(&Var231, "SOCIAL_CARAPP" /* GXT: Drop by Los Santos Customs to have your ~a~ order fulfilled. */, 16);
					if (iParam0 == 1 && !Global_113810.f_20121.f_281[iParam0])
					{
						StringCopy(&Var231, "SOCIAL_FREE" /* GXT: Drop by Los Santos Customs to have your ~a~ order fulfilled. This one's on the house. */, 16);
					}
					if (func_263(96, &Var231, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113810.f_20121.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
						Var69.f_34 = 0;
						func_262();
					}
				}
				iLocal_86 = 1;
			}
			else
			{
				Var69.f_33 = 0;
				Var69.f_36 = 0;
				Var69.f_35 = 0;
				Var69.f_34 = 0;
			}
		}
	}
	iVar235 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((iParam0 != 3 || !func_259(39)) || func_258()) || func_98(PLAYER::PLAYER_ID(), 1, 0))
		{
			iVar235 = 0;
		}
	}
	else if (!func_257(iParam0) || func_258())
	{
		iVar235 = 0;
	}
	if (iVar235 && !Var69.f_33)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (iVar1 == 0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&cVar14);
				if (APP::APP_DATA_VALID())
				{
					iVar236 = func_23("uid");
					if (((iVar236 != 0 && iVar236 != Var69.f_26) && func_23("character") == iVar2) && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_23("vehicle") == iLocal_73))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
						}
						Var69.f_26 = iVar236;
						Var69.f_0 = func_23("carModel");
						if (!STREAMING::IS_MODEL_A_VEHICLE(Var69.f_0))
						{
							if (iParam0 == 0)
							{
								Var69.f_0 = func_256(0, 1);
							}
							else if (iParam0 == 1)
							{
								Var69.f_0 = func_256(1, 1);
							}
							else if (iParam0 == 2)
							{
								Var69.f_0 = func_256(2, 1);
							}
							else
							{
								Var69.f_0 = joaat("buffalo2");
							}
						}
						Var69.f_27 = func_23("cost");
						Var69.f_1 = func_23("carColour1");
						Var69.f_2 = func_23("carColour2");
						Var69.f_3 = func_23("carColour1Group");
						Var69.f_4 = func_23("carColour2Group");
						Var69.f_5 = func_23("windowTint");
						Var69.f_18 = func_255(func_23("bulletProofTyres"));
						Var69.f_9 = func_23("carEngine");
						Var69.f_10 = func_23("carBrakes");
						Var69.f_13 = func_23("carExhaust");
						Var69.f_11 = func_23("carWheel");
						Var69.f_6 = func_23("tyreSmokeColourRed");
						Var69.f_7 = func_23("tyreSmokeColourGreen");
						Var69.f_8 = func_23("tyreSmokeColourBlue");
						Var69.f_16 = func_23("carHorn");
						Var69.f_15 = func_23("carArmour");
						Var69.f_19 = func_23("carTurbo");
						Var69.f_14 = func_23("carSuspension");
						Var69.f_17 = func_23("carXenonLights");
						Var69.f_20 = func_23("tyreSmoke");
						Var69.f_12 = Var26.f_10;
						iVar0 = 1;
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!iLocal_117[iParam0] && (MISC::GET_GAME_TIMER() - iLocal_108) < 20000)
							{
								iLocal_109[iParam0] = 1;
							}
							else if (((!func_175(0) && func_254(1, 0) == 0) && (Global_113810.f_9088 || func_253(0))) && (BitTest(Global_113810.f_9088.f_2[27 /*3*/], 1) || func_253(0)))
							{
								iLocal_109[iParam0] = 1;
								iLocal_113[iParam0] = 1;
							}
							else if ((((iParam0 == 0 && Var69.f_0 == joaat("tailgater")) || (iParam0 == 1 && Var69.f_0 == joaat("buffalo2"))) || (iParam0 == 1 && Var69.f_0 == joaat("bagger"))) || (iParam0 == 2 && Var69.f_0 == joaat("bodhi2")))
							{
								if (func_254(iParam0, Var69.f_0) == 0)
								{
									iLocal_109[iParam0] = 1;
									iLocal_113[iParam0] = 1;
								}
							}
							if (!iLocal_109[iParam0])
							{
							}
						}
					}
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_117[iParam0] = 1;
					}
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else if (iVar1 == 1 && iVar0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("plate");
				if (APP::APP_DATA_VALID())
				{
					Var69.f_32 = func_23("carPlateBack");
					if (Var69.f_32 > 4)
					{
						Var69.f_32 = 0;
						Var69.f_32 = func_23("carPlateBack");
					}
					StringCopy(&(Var69.f_28), func_252("carPlateText"), 16);
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Var69.f_33 = 1;
				Var69.f_37 = 1;
				Var69.f_39 = 0;
				Var69.f_35 = 0;
				Var69.f_40 = 0;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					STATS::STAT_SET_BOOL(joaat("CAR_MOD_APP_USED"), true, true);
					func_251(135, 1);
					Global_113810.f_20121.f_262 = 1;
				}
				else
				{
					Global_2359296[func_194() /*5568*/].f_593.f_62 = iLocal_75;
					func_57(99, 1, -1, 1);
				}
				iLocal_328 = 1;
			}
			iVar1++;
		}
	}
	if ((!Var26.f_41 && iVar235) && Var26.f_40)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_249(&Var26))
			{
				iLocal_86 = 1;
				return;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar237 = func_248();
		if (iVar237 == 0)
		{
			iVar237 = func_248();
		}
		func_201("appUID", iVar237);
		Global_113810.f_20121.f_272 = iVar237;
		iVar238 = 0;
		iVar239 = 0;
		if (func_164())
		{
			if (func_220())
			{
				iVar239 = (iVar239 + Global_262145.f_133 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */);
			}
		}
		func_460("spDiscount", (1f - (SYSTEM::TO_FLOAT(iVar238) / 100f)));
		func_460("mpDiscount", (1f - (SYSTEM::TO_FLOAT(iVar239) / 100f)));
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_201("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_201("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
			else
			{
				func_201("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
		}
		APP::APP_CLOSE_BLOCK();
		APP::APP_SET_BLOCK(&Var8);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			APP::APP_SET_BLOCK(&Var20);
		}
		if (!func_219(Var26.f_0))
		{
			func_201("carUnlocked", 0);
		}
		else
		{
			func_201("carUnlocked", 1);
			if ((((Var26.f_0 == joaat("sanchez") || Var26.f_0 == joaat("faggio2")) || Var26.f_0 == joaat("dune")) || Var26.f_0 == joaat("bfinjection")) || !func_218(Var26.f_10))
			{
				Var26.f_27 = 0;
			}
			if (func_217(Var26.f_0, 1))
			{
				Var26.f_30 = 0;
			}
			if (Var26.f_0 == joaat("lectro") || Var26.f_0 == joaat("vindicator"))
			{
				Var26.f_28 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Var26.f_0 == joaat("patriot"))
				{
					Var26.f_26 = 0;
				}
				if (Var26.f_0 == joaat("prairie"))
				{
					if (Var26.f_26 > 1)
					{
						Var26.f_26 = 1;
					}
				}
			}
			uVar240 = func_214(&Var26);
			Var26.f_9 = uVar240;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_201("playerSlot", iVar3);
				func_201("playerRank", func_213(PLAYER::PLAYER_ID()));
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("MP_M_Freemode_01"):
					case joaat("MP_F_Freemode_01"):
						func_461("playerGang", "None" /* GXT: None */);
						HUD::GET_HUD_COLOUR(116, &iVar4, &iVar5, &iVar6, &uVar7);
						break;
				}
				func_201("playerGangR", iVar4);
				func_201("playerGangG", iVar5);
				func_201("playerGangB", iVar6);
			}
			if (!STREAMING::IS_MODEL_A_VEHICLE(Var26.f_0))
			{
				func_201("carModel", -1);
				func_201("carUnlocked", 0);
			}
			else
			{
				func_201("carModel", Var26.f_0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (Var26.f_39)
				{
					case 0:
						if (VEHICLE::IS_THIS_MODEL_A_CAR(Var26.f_0))
						{
							func_461("carType", "car");
						}
						else
						{
							func_461("carType", "bike");
						}
						break;
					
					case 1:
						func_461("carType", "sport");
						break;
					
					case 2:
						func_461("carType", "suv");
						break;
					
					case 3:
						func_461("carType", "special");
						break;
				}
			}
			else
			{
				iVar241 = func_207(Var26.f_0);
				switch (iVar241)
				{
					case 0:
						func_461("carType", "car");
						break;
					
					case 1:
						func_461("carType", "sport");
						break;
					
					case 2:
						func_461("carType", "suv");
						break;
					
					case 3:
						func_461("carType", "special");
						break;
					
					case 4:
						func_461("carType", "bike");
						break;
					
					case 5:
						func_461("carType", "special");
						break;
					
					case 6:
						func_461("carType", "car");
						break;
					
					case 7:
						func_461("carType", "special");
						break;
					
					case 10:
						func_461("carType", "special");
						break;
					
					case 11:
						func_461("carType", "car");
						break;
					
					case 28:
						func_461("carType", "car");
						break;
					
					case 26:
						func_461("carType", "special");
						break;
					
					case 27:
						func_461("carType", "special");
						break;
					
					case 29:
						func_461("carType", "special");
						break;
					
					case 30:
						func_461("carType", "special");
						break;
					
					case 31:
						func_461("carType", "special");
						break;
					
					case 32:
						func_461("carType", "special");
						break;
					
					default:
						func_461("carType", "special");
						break;
					}
			}
			func_201("carColour1", Var26.f_1);
			func_201("carColour2", Var26.f_2);
			func_201("windowTint", Var26.f_3);
			func_201("bulletProofTyres", func_206(Var26.f_16));
			func_201("carEngine", Var26.f_7);
			func_201("carBrakes", Var26.f_8);
			func_201("carExhaust", Var26.f_11);
			func_201("carWheel", Var26.f_9);
			func_201("tyreSmokeColourRed", Var26.f_4);
			func_201("tyreSmokeColourGreen", Var26.f_5);
			func_201("tyreSmokeColourBlue", Var26.f_6);
			func_201("carHorn", Var26.f_14);
			func_201("carArmour", Var26.f_13);
			func_201("carTurbo", Var26.f_17);
			func_201("carSuspension", Var26.f_12);
			func_201("carXenonLights", Var26.f_15);
			func_201("tyreSmoke", Var26.f_18);
			func_201("tyreSmoke", Var26.f_18);
			func_201("carWheelType", Var26.f_10);
			func_201("carEngineCount", Var26.f_24);
			func_201("carBrakesCount", Var26.f_25);
			func_201("carExhaustCount", Var26.f_26);
			func_201("carWheelCount", Var26.f_27);
			func_201("carHornCount", Var26.f_28);
			func_201("carArmourCount", Var26.f_29);
			func_201("carSuspensionCount", Var26.f_30);
			func_201("carHorn1", Var26.f_33[0]);
			func_201("carHorn2", Var26.f_33[1]);
			func_201("carHorn3", Var26.f_33[2]);
			func_201("carHorn4", Var26.f_33[3]);
			func_201("carHorn5", Var26.f_33[4]);
			func_460("carPriceModifier", Var26.f_31);
			if (!BitTest(Var26.f_32, 0) || Var26.f_0 == joaat("sovereign"))
			{
				func_201("carColour1Unlocked", 0);
			}
			else
			{
				func_201("carColour1Unlocked", 1);
			}
			if (!BitTest(Var26.f_32, 1) || Var26.f_0 == joaat("sovereign"))
			{
				func_201("carColour2Unlocked", 0);
			}
			else
			{
				func_201("carColour2Unlocked", 1);
			}
			iVar242 = 0;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || BitTest(Global_1586488[iLocal_75 /*142*/].f_103, 17))
			{
				MISC::SET_BIT(&iVar242, 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || BitTest(Global_1586488[iLocal_75 /*142*/].f_103, 18))
			{
				MISC::SET_BIT(&iVar242, 1);
			}
			func_201("newItemUnlocks", iVar242);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			APP::APP_CLOSE_BLOCK();
		}
		APP::APP_CLOSE_BLOCK();
		Local_90 = { Var8 };
		Local_96 = { Var20 };
		iLocal_89 = Var26.f_0;
		bLocal_87 = true;
		APP::APP_SET_BLOCK("plate");
		func_201("carPlateBack", Var26.f_23);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Var26.f_40 = 0;
		iLocal_104 = 1;
		SYSTEM::SETTIMERA(0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_113810.f_20121.f_277[iParam0] = 1;
		}
		else
		{
			if (iVar3 == 0)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_0"), 1);
			}
			else if (iVar3 == 1)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_1"), 1);
			}
			else if (iVar3 == 2)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_2"), 1);
			}
			else if (iVar3 == 3)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_3"), 1);
			}
			else if (iVar3 == 4)
			{
				func_457(joaat("MPPLY_CARAPP_DATA_SENT_4"), 1);
			}
			Global_2359296[func_194() /*5568*/].f_593.f_41[iLocal_73] = 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113810.f_20121[iParam0 /*43*/] = { Var26 };
			Global_113810.f_20121.f_130[iParam0 /*41*/] = { Var69 };
			break;
		
		case 3:
			func_205(&Var26);
			Global_2359296[func_194() /*5568*/].f_593 = { Var69 };
			break;
	}
}

void func_205(var uParam0)//Position - 0x8F76
{
	if (uParam0->f_40)
	{
		MISC::SET_BIT(&(Global_1586488[iLocal_75 /*142*/].f_103), 25);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1586488[iLocal_75 /*142*/].f_103), 25);
	}
	if (uParam0->f_41)
	{
		MISC::SET_BIT(&(Global_1586488[iLocal_75 /*142*/].f_103), 26);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1586488[iLocal_75 /*142*/].f_103), 26);
	}
}

int func_206(bool bParam0)//Position - 0x8FD2
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x8FE4
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("youga3"):
			return 27;
			break;
		
		case joaat("gauntlet5"):
			return 27;
			break;
		
		case joaat("manana2"):
			return 27;
			break;
		
		case joaat("peyote3"):
			return 27;
			break;
		
		case joaat("yosemite3"):
			return 27;
			break;
		
		case joaat("glendale2"):
			return 27;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
		case joaat("speedo5"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("minitank"):
			return 36;
			break;
		
		case joaat("jb7002"):
			return 36;
			break;
	}
	if (func_212(iParam0))
	{
		return 33;
	}
	else if (func_211(iParam0))
	{
		return 34;
	}
	else if (func_210(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_209(iParam0) || iParam0 == joaat("brickade2"))
	{
		return 38;
	}
	if (func_208(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("comet7"):
		case joaat("ignus"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("mule5"):
		case joaat("iwagen"):
			return 3;
			break;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0xA2DD
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("mule5"):
		case joaat("champion"):
		case joaat("iwagen"):
		case joaat("reever"):
		case joaat("shinobi"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("conada"):
		case joaat("omnisegt"):
		case joaat("eudora"):
		case joaat("surfer3"):
		case joaat("journey2"):
		case joaat("entity3"):
		case joaat("panthere"):
		case joaat("boor"):
		case joaat("everon2"):
		case joaat("tulip2"):
		case joaat("issi8"):
		case joaat("broadway"):
		case joaat("tahoma"):
		case joaat("gauntlet6"):
		case joaat("brigham"):
		case joaat("clique2"):
		case joaat("l35"):
		case joaat("ratel"):
			return 1;
			break;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0xACAE
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case joaat("virtue"):
		case joaat("r300"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("coureur"):
		case joaat("monstrociti"):
			return 1;
			break;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0xAD19
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xAE05
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada2"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
			break;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xAE5E
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
		case joaat("avenger3"):
			return 1;
			break;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xAEF3
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_134(iVar0, 0);
}

int func_214(var uParam0)//Position - 0xAF14
{
	int iVar0;
	
	iVar0 = func_215(uParam0);
	return ((uParam0->f_9 % iVar0) + (iLocal_154 * iVar0));
}

int func_215(var uParam0)//Position - 0xAF31
{
	switch (uParam0->f_10)
	{
		case 8:
			return 31;
			break;
		
		case 9:
			return 31;
			break;
		
		case 10:
			if (func_216(*uParam0))
			{
				return 20;
			}
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 30;
			break;
	}
	return (uParam0->f_27 - 1);
}

int func_216(int iParam0)//Position - 0xAF98
{
	switch (iParam0)
	{
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_217(int iParam0, int iParam1)//Position - 0xAFC4
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
			if (!Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14912 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
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
			if (Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */)
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
			if (Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */)
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
			if (Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */)
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
			if (Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */)
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
			if (Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */)
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
			if (Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */)
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
			if (Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */)
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
			if (Global_262145.f_21280 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
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
			if (Global_262145.f_21281 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
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

int func_218(int iParam0)//Position - 0xB3A3
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
			return 1;
			break;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xB3EA
{
	if (iParam0 == 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("riot"):
		case joaat("sheriff"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("firetruk"):
		case joaat("taxi"):
		case joaat("lguard"):
		case joaat("ripley"):
		case joaat("dilettante2"):
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("burrito"):
		case joaat("rumpo2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("scorcher"):
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("fixter"):
		case joaat("caddy"):
		case joaat("forklift"):
		case joaat("caddy2"):
		case joaat("crusader"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("mower"):
		case joaat("tornado4"):
		case joaat("docktug"):
		case joaat("stretch"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("benson"):
		case joaat("pounder"):
		case joaat("submersible"):
		case joaat("monster"):
		case joaat("technical"):
		case joaat("phantom2"):
		case joaat("wastelander"):
		case joaat("boxville5"):
		case joaat("terbyte"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("kosatka"):
		case joaat("deluxo"):
			return 0;
			break;
		
		default:
			if (func_210(iParam0))
			{
				return 0;
			}
			break;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_220()//Position - 0xB596
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_164())
	{
		if (func_223())
		{
			iVar0 = func_222();
			iVar1 = func_221();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_132 /* Tunable: SHOP_DISCOUNT_PERCENT */) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221()//Position - 0xB5F4
{
	int iVar0;
	
	iVar0 = (iVar0 + func_123(joaat("MPPLY_FRIENDLY")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_HELPFUL")));
	return iVar0;
}

int func_222()//Position - 0xB61A
{
	int iVar0;
	
	iVar0 = (iVar0 + func_123(joaat("MPPLY_OFFENSIVE_LANGUAGE")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_GRIEFING")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_FRIENDLY")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_HELPFUL")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_OFFENSIVE_UGC")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_OFFENSIVE_TAGPLATE")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_123(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

int func_223()//Position - 0xB6F6
{
	struct<7> Var0;
	struct<7> Var7;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_247(joaat("MPPLY_STARTED_MP")) };
	if (func_224(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_224(struct<7> Param0, struct<7> Param7, int iParam14)//Position - 0xB73A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_245(Param7);
	iVar1 = func_235(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_225(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0, int iParam1)//Position - 0xB775
{
	int iVar0;
	int iVar1;
	
	if (!func_233(iParam1) || !func_233(iParam0))
	{
		return 1;
	}
	iVar0 = func_231(iParam0);
	iVar1 = func_231(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_230(iParam0);
	iVar1 = func_230(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_229(iParam0);
	iVar1 = func_229(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_227(iParam0);
	iVar1 = func_227(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0xB881
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_227(int iParam0)//Position - 0xB894
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_228(int iParam0)//Position - 0xB8A7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_229(int iParam0)//Position - 0xB8BA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_230(int iParam0)//Position - 0xB8CC
{
	return iParam0 & 15;
}

var func_231(int iParam0)//Position - 0xB8D9
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_232(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_232(bool bParam0, int iParam1, int iParam2)//Position - 0xB8FB
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_233(int iParam0)//Position - 0xB912
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
	iVar0 = func_226(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_227(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_228(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_231(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_230(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_229(iParam0);
	if (iVar5 < 1 || iVar5 > func_234(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_234(int iParam0, int iParam1)//Position - 0xB9EE
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

var func_235(struct<7> Param0, int iParam7)//Position - 0xBA90
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_244(Param0) == 0)
	{
		uVar0 = func_245(Param0);
		uVar1 = uVar0;
		func_236(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBAD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_231(*uParam0);
	iVar1 = func_230(*uParam0);
	iVar2 = func_229(*uParam0);
	iVar3 = func_228(*uParam0);
	iVar4 = func_227(*uParam0);
	iVar5 = func_226(*uParam0);
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
	iVar6 = func_234(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_234(iVar1, iVar0);
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

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBC52
{
	func_243(uParam0, iParam1);
	func_242(uParam0, iParam2);
	func_241(uParam0, iParam3);
	func_240(uParam0, iParam5);
	func_239(uParam0, iParam4);
	func_238(uParam0, iParam6);
}

void func_238(var uParam0, int iParam1)//Position - 0xBC8A
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

void func_239(var uParam0, int iParam1)//Position - 0xBD10
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_230(*uParam0);
	iVar1 = func_231(*uParam0);
	if (iParam1 < 1 || iParam1 > func_234(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_240(var uParam0, int iParam1)//Position - 0xBD61
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_241(var uParam0, int iParam1)//Position - 0xBD94
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_242(var uParam0, int iParam1)//Position - 0xBDCE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_243(var uParam0, int iParam1)//Position - 0xBE09
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_244(struct<7> Param0)//Position - 0xBE45
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_245(struct<6> Param0, var uParam6)//Position - 0xBE9B
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_238(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_240(&uVar0, func_246(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_239(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_241(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_242(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_243(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_246(int iParam0)//Position - 0xBF11
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_247(int iParam0)//Position - 0xBFD6
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_DATE(iVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_248()//Position - 0xBFFA
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_249(var uParam0)//Position - 0xC02A
{
	int iVar0;
	
	if (!func_219(*uParam0))
	{
		return 1;
	}
	if (iLocal_156)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_155)) < 1500)
		{
			return 0;
		}
	}
	iLocal_156 = 0;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, (660.3092f + IntToFloat(PLAYER::PLAYER_ID() * 10)), 4977.6084f, 1222.0242f, 0f, false, false, false);
	}
	else
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, 660.3092f, 4977.6084f, 1222.0242f, 0f, false, false, false);
	}
	if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
	}
	VEHICLE::SET_VEHICLE_WHEEL_TYPE(iVar0, Global_1586488[iLocal_75 /*142*/].f_69);
	uParam0->f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(iVar0);
	uParam0->f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 0);
	uParam0->f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 1);
	uParam0->f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 2);
	uParam0->f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 3);
	uParam0->f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
	uParam0->f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
	uParam0->f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
	uParam0->f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
	uParam0->f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
	uParam0->f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
	uParam0->f_31 = func_250(iVar0);
	uParam0->f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(iVar0);
	uParam0->f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
	uParam0->f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
	iLocal_154 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iVar0, 23);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (*uParam0 == joaat("patriot"))
		{
			uParam0->f_26 = 0;
		}
		if (*uParam0 == joaat("prairie"))
		{
			if (uParam0->f_26 > 1)
			{
				uParam0->f_26 = 1;
			}
		}
	}
	VEHICLE::DELETE_VEHICLE(&iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	iLocal_156 = 1;
	iLocal_155 = NETWORK::GET_NETWORK_TIME();
	SYSTEM::SETTIMERA(0);
	return 1;
}

float func_250(int iParam0)//Position - 0xC204
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

void func_251(int iParam0, int iParam1)//Position - 0xC2B4
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, true);
	}
}

char* func_252(char* sParam0)//Position - 0xC311
{
	return APP::APP_GET_STRING(func_24(sParam0));
}

int func_253(bool bParam0)//Position - 0xC323
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

int func_254(int iParam0, int iParam1)//Position - 0xC34B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar1], false))
		{
			if (Global_98154[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_98144[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_255(int iParam0)//Position - 0xC3BB
{
	return iParam0 == 1;
}

int func_256(int iParam0, int iParam1)//Position - 0xC3C7
{
	struct<82> Var0;
	
	if (func_257(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_463(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_257(int iParam0)//Position - 0xC409
{
	return iParam0 < 3;
}

bool func_258()//Position - 0xC415
{
	return Global_100885.f_394 > 0;
}

bool func_259(int iParam0)//Position - 0xC426
{
	return func_260(iParam0, 0, 0);
}

int func_260(int iParam0, int iParam1, bool bParam2)//Position - 0xC436
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
		if (func_85() == 0)
		{
			return BitTest(func_49(func_261(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_261(int iParam0)//Position - 0xC496
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

int func_262()//Position - 0xC83E
{
	if (func_253(0))
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

int func_263(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xC889
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
	if (func_265(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9077 = iParam10;
			Global_8980[3 /*6*/] = { func_264(iParam0) };
			Global_9057 = iParam0;
			StringCopy(&Global_9058, sParam5, 64);
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_264(int iParam0)//Position - 0xC935
{
	return Global_2058[iParam0 /*29*/].f_3;
}

int func_265(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xC948
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_280();
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
	if (func_279() == 0)
	{
		func_277();
		return 0;
	}
	func_276(Global_22912);
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
		func_275(0);
		func_275(2);
		func_275(1);
	}
	else
	{
		func_280();
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
					func_275(0);
					Global_9076 = 0;
					break;
				
				case 1:
					func_275(1);
					Global_9076 = 1;
					break;
				
				case 2:
					func_275(2);
					Global_9076 = 2;
					break;
				
				case 3:
					func_275(3);
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
		func_280();
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
			if (!func_4())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_274(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_271(1);
			func_274(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_266(iParam0, sParam1, bVar1, func_270(PLAYER::PLAYER_ID()));
	return 1;
}

void func_266(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xCE23
{
	struct<14> Var0;
	
	if (!func_267())
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

int func_267()//Position - 0xCEBE
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_99())
	{
		return 0;
	}
	if (func_268(PLAYER::PLAYER_ID()))
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

bool func_268(int iParam0)//Position - 0xCF21
{
	return func_269(iParam0, 20);
}

var func_269(int iParam0, int iParam1)//Position - 0xCF31
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_270(int iParam0)//Position - 0xCF49
{
	return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

void func_271(int iParam0)//Position - 0xCF5E
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
		if (func_465(14))
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
								func_273(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2694571)
							{
								if (iVar1 == 14)
								{
									func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_273(&(Global_8377[iVar1 /*15*/]));
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
								func_273(&(Global_8377[iVar1 /*15*/]));
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
								func_273(&(Global_8377[iVar1 /*15*/]));
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
								func_273(&(Global_8377[iVar1 /*15*/]));
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
								func_273(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8377[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890239.f_1;
								func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_272(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_272(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xD4F8
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
		func_273(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_273(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_273(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_273(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_273(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_273(char* sParam0)//Position - 0xD5AB
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_274(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xD5BD
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

void func_275(int iParam0)//Position - 0xD620
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113810.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_276(int iParam0)//Position - 0xD63F
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

void func_277()//Position - 0xD6D1
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
		if (!func_278(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
		{
			Global_22912 = iVar2;
		}
		iVar2++;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_24 = 1;
}

int func_278(struct<6> Param0, struct<6> Param6)//Position - 0xD79C
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

int func_279()//Position - 0xD887
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
			if (!func_278(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
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

void func_280()//Position - 0xD9EF
{
	if (func_465(14))
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
		Global_20500 = func_286();
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

int func_281(int iParam0)//Position - 0xDA91
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (func_283(1))
	{
		if (Global_78689)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iParam0, false, true, false, -1, 0))
			{
				return 1;
			}
		}
		else if (func_282(func_286()) >= iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)//Position - 0xDAD9
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_283(bool bParam0)//Position - 0xDB31
{
	if (Global_78689)
	{
		return func_163(PLAYER::PLAYER_ID(), bParam0, !func_284(1));
	}
	return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}

bool func_284(bool bParam0)//Position - 0xDB5F
{
	if (bParam0)
	{
		return (Global_2683883.f_785.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2683883.f_785.f_31);
	}
	return Global_2683883.f_785.f_28;
}

int func_285(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xDB9B
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
	if (func_265(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9077 = iParam6;
			Global_8980[3 /*6*/] = { func_264(iParam0) };
			Global_9057 = iParam0;
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

int func_286()//Position - 0xDC2A
{
	func_287();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_287()//Position - 0xDC43
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_289(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_288(PLAYER::PLAYER_PED_ID());
			if (func_257(iVar0) && (!func_465(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_257(Global_113810.f_2366.f_539.f_4321))
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

int func_288(int iParam0)//Position - 0xDD40
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_289(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_289(int iParam0)//Position - 0xDD7D
{
	if (func_257(iParam0))
	{
		return func_290(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_290(int iParam0)//Position - 0xDDA2
{
	return Global_2058[iParam0 /*29*/];
}

void func_291(var uParam0, int iParam1)//Position - 0xDDB1
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2359296[func_194() /*5568*/].f_593.f_54 = 1;
		Global_2359296[func_194() /*5568*/].f_593.f_55 = 1;
		Global_2359296[func_194() /*5568*/].f_593.f_60 = uParam0->f_32;
		Global_2359296[func_194() /*5568*/].f_593.f_56 = { uParam0->f_28 };
		Global_2359296[func_194() /*5568*/].f_593.f_61++;
	}
	else
	{
		Global_113810.f_20121.f_265 = 1;
		Global_113810.f_20121.f_266 = iParam1;
		Global_113810.f_20121.f_261 = 1;
		Global_113810.f_20121.f_271 = uParam0->f_32;
		Global_113810.f_20121.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_113810.f_20121.f_281[iParam1] = 1;
			Global_113810.f_20121.f_285[iParam1]++;
			STATS::STAT_INCREMENT(joaat("SP_CAR_APP_ORDER_COUNT"), 1f);
		}
	}
}

char* func_292(int iParam0, int iParam1, bool bParam2)//Position - 0xDED1
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /* GXT: Empty Shop */;
			break;
		
		case 0:
			return "S_H_01" /* GXT: Bob Mulét Hair & Beauty */;
			break;
		
		case 1:
			return "S_H_02" /* GXT: Herr Kutz Barber */;
			break;
		
		case 2:
			return "S_H_03" /* GXT: Beachcombover Barbers */;
			break;
		
		case 3:
			return "S_H_04" /* GXT: O'Sheas Barbers */;
			break;
		
		case 4:
			return "S_H_05" /* GXT: Herr Kutz Barber */;
			break;
		
		case 5:
			return "S_H_06" /* GXT: Hair On Hawick Barbers */;
			break;
		
		case 6:
			return "S_H_07" /* GXT: Herr Kutz Barber */;
			break;
		
		case 7:
			return "S_CL_01" /* GXT: Discount Store */;
			break;
		
		case 8:
			return "S_CL_02" /* GXT: Discount Store */;
			break;
		
		case 9:
			return "S_CL_03" /* GXT: Binco Clothing */;
			break;
		
		case 10:
			return "S_CL_04" /* GXT: Discount Store */;
			break;
		
		case 11:
			return "S_CL_05" /* GXT: Discount Store */;
			break;
		
		case 12:
			return "S_CL_06" /* GXT: Binco Clothing */;
			break;
		
		case 13:
			return "S_CL_07" /* GXT: Discount Store */;
			break;
		
		case 14:
			return "S_CM_01" /* GXT: Suburban */;
			break;
		
		case 15:
			return "S_CM_03" /* GXT: Suburban */;
			break;
		
		case 16:
			return "S_CM_04" /* GXT: Suburban */;
			break;
		
		case 17:
			return "S_CM_05" /* GXT: Suburban */;
			break;
		
		case 18:
			return "S_CH_01" /* GXT: Ponsonbys */;
			break;
		
		case 19:
			return "S_CH_02" /* GXT: Ponsonbys */;
			break;
		
		case 20:
			return "S_CH_03" /* GXT: Ponsonbys */;
			break;
		
		case 21:
			return "S_CA_01" /* GXT: Vespucci Movie Masks */;
			break;
		
		case 22:
			return "S_T_01" /* GXT: Blazing Tattoo */;
			break;
		
		case 23:
			return "S_T_02" /* GXT: Alamo Tattoo Studio */;
			break;
		
		case 24:
			return "S_T_03" /* GXT: Paleto Tattoo Studio */;
			break;
		
		case 25:
			return "S_T_04" /* GXT: The Pit */;
			break;
		
		case 26:
			return "S_T_05" /* GXT: Los Santos Tattoos */;
			break;
		
		case 27:
			return "S_T_06" /* GXT: Ink Inc Tattoos */;
			break;
		
		case 28:
			return "S_G_01" /* GXT: Ammu-Nation */;
			break;
		
		case 29:
			return "S_G_02" /* GXT: Ammu-Nation */;
			break;
		
		case 30:
			return "S_G_03" /* GXT: Ammu-Nation */;
			break;
		
		case 31:
			return "S_G_04" /* GXT: Ammu-Nation */;
			break;
		
		case 32:
			return "S_G_05" /* GXT: Ammu-Nation */;
			break;
		
		case 33:
			return "S_G_06" /* GXT: Ammu-Nation */;
			break;
		
		case 34:
			return "S_G_07" /* GXT: Ammu-Nation */;
			break;
		
		case 35:
			return "S_G_08" /* GXT: Ammu-Nation */;
			break;
		
		case 36:
			return "S_G_09" /* GXT: Ammu-Nation */;
			break;
		
		case 37:
			return "S_G_10" /* GXT: Ammu-Nation */;
			break;
		
		case 38:
			return "S_G_11" /* GXT: Ammu-Nation */;
			break;
		
		case 39:
			return "S_MO_01" /* GXT: Los Santos Customs */;
			break;
		
		case 40:
			return "S_MO_05" /* GXT: Los Santos Customs */;
			break;
		
		case 41:
			return "S_MO_06" /* GXT: Los Santos Customs */;
			break;
		
		case 42:
			return "S_MO_07" /* GXT: Beeker's Garage */;
			break;
		
		case 43:
			return "S_MO_08" /* GXT: Los Santos Customs */;
			break;
		
		case 44:
			return "S_MO_09" /* GXT: Benny's Original Motor Works */;
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10" /* GXT: Custom Mod Shop */;
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B" /* GXT: Bunker Vehicle Workshop */;
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T" /* GXT: Weapon & Vehicle Workshop */;
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA" /* GXT: Hangar Aircraft Workshop */;
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
				
				case 21:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					}
					else
					{
						return "S_MO_AOC" /* GXT: Vehicle Workshop */;
					}
					break;
			}
			return "S_MO_11" /* GXT: Custom Auto Shop */;
			break;
		
		case 46:
			return "S_G_12" /* GXT: MOC Armory */;
			break;
		
		case 47:
			return "S_G_13" /* GXT: Avenger Armory */;
			break;
		
		case 48:
			return "S_G_14" /* GXT: Terrorbyte Armory */;
			break;
		
		case 49:
			return "S_G_15" /* GXT: Arena Armory */;
			break;
		
		case 52:
			return "S_G_16" /* GXT: Arcade Armory */;
			break;
		
		case 53:
			return "S_G_17" /* GXT: Kosatka Armory */;
			break;
		
		case 50:
			return "S_H_08" /* GXT: Penthouse Barber */;
			break;
		
		case 51:
			return "S_CL_09" /* GXT: Casino Store */;
			break;
		
		case 54:
			return "S_T_07" /* GXT: LS Car Meet Tattoos */;
			break;
		
		case 55:
			return "S_CL_10" /* GXT: Merch Shop */;
			break;
		
		case 56:
			return "S_G_18" /* GXT: Fixer Armory */;
			break;
		
		case 57:
			return "S_CL_11" /* GXT: Record A Studios */;
			break;
		
		case 58:
			return "S_G_19" /* GXT: Gun Van */;
			break;
		
		case 59:
			return "S_G_20";
			break;
		
		case 60:
			return "S_G_21";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

bool func_293(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xE47D
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_294(&uVar0, iParam0, func_369(), sParam1, iVar165, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_294(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xE4B6
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
	iVar1 = func_368(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_367(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_361(uParam6))
	{
		return 0;
	}
	if (func_358(iVar0, iVar1, iVar2))
	{
		if (func_357())
		{
			return 0;
		}
		func_356();
		return func_301(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_300(iParam4))
	{
		return 0;
	}
	func_295(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_295(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0xE59B
{
	Global_1649067.f_40.f_1 = iParam0;
	Global_1649067.f_40.f_2 = iParam1;
	Global_1649067.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649067.f_40.f_4), sParam3, 16);
	Global_1649067.f_40.f_8 = iParam4;
	Global_1649067.f_40.f_9 = iParam5;
	Global_1649067.f_40.f_14 = uParam6;
	func_296(iParam4);
	func_356();
	Global_1649067.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_296(int iParam0)//Position - 0xE608
{
	if (func_299(iParam0))
	{
		func_298();
		return;
	}
	func_297();
}

void func_297()//Position - 0xE624
{
	Global_1649067.f_40.f_10 = 0;
}

void func_298()//Position - 0xE635
{
	Global_1649067.f_40.f_10 = 1;
}

int func_299(int iParam0)//Position - 0xE646
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

bool func_300(int iParam0)//Position - 0xE68E
{
	return iParam0 > Global_1649067.f_40.f_8;
}

int func_301(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xE6A1
{
	struct<2> Var0;
	
	func_355();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_352(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_349(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_352(uParam0, sParam3, sParam4);
		}
		return func_331(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_330(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_327(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_326(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_302(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_302(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xE79B
{
	bool bVar0;
	
	func_325();
	bVar0 = true;
	if (func_304(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_303(120000);
		return 1;
	}
	return 0;
}

void func_303(int iParam0)//Position - 0xE7D2
{
	Global_1649067.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1649067.f_40.f_12 = 1;
}

int func_304(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xE7F5
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
	
	iVar0 = func_99();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_319(iVar0);
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
	sVar4 = func_318(sParam5, bParam6, &iVar3);
	uVar5 = func_316(iParam7, &iVar3);
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
		bVar12 = func_315(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_308(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_307();
	}
	func_325();
	func_306();
	func_305();
	return 1;
}

void func_305()//Position - 0xE93D
{
	Global_1649067.f_57 = 0;
	Global_1649067.f_57.f_1 = 0;
}

void func_306()//Position - 0xE955
{
	Global_1649067.f_40 = 3;
}

void func_307()//Position - 0xE964
{
	MISC::SET_BIT(&Global_8370, 8);
}

int func_308(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xE975
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
	if (func_309(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_309(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xE9E1
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_280();
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
	if (func_314() == 0)
	{
		func_312();
		return 0;
	}
	func_311(Global_4542286);
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
	func_280();
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
				func_275(0);
				break;
			
			case 1:
				func_275(1);
				break;
			
			case 2:
				func_275(2);
				break;
			
			case 3:
				func_275(3);
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
		func_280();
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
			if (!func_4())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_274(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_271(1);
			func_274(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_310(iParam0, sParam1, bVar1, func_270(PLAYER::PLAYER_ID()));
	return 1;
}

void func_310(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xEDCE
{
	struct<14> Var0;
	
	if (!func_267())
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

void func_311(int iParam0)//Position - 0xEE69
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

void func_312()//Position - 0xEEE9
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
		if (!func_313(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
		{
			Global_4542286 = iVar2;
		}
		iVar2++;
	}
	Global_4541037[Global_4542286 /*104*/].f_24 = 1;
}

int func_313(struct<6> Param0, struct<6> Param6)//Position - 0xEF93
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

int func_314()//Position - 0xF07E
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
			if (!func_313(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
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

int func_315(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xF1A9
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
	if (func_309(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_316(int iParam0, int iParam1)//Position - 0xF22B
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_317(2, iParam1);
	return iParam0;
}

void func_317(int iParam0, var uParam1)//Position - 0xF24A
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

char* func_318(char* sParam0, bool bParam1, int iParam2)//Position - 0xF2FB
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_19))
	{
		return sLocal_19;
	}
	func_317(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_319(int iParam0)//Position - 0xF338
{
	int iVar0;
	
	iVar0 = func_322(iParam0);
	if (iVar0 == -1)
	{
		func_320(iParam0, 1);
		return 0;
	}
	Global_1666485[iVar0 /*5*/].f_4 = 1;
	return Global_1666485[iVar0 /*5*/].f_2;
}

void func_320(int iParam0, bool bParam1)//Position - 0xF36E
{
	if (!func_163(iParam0, 0, 1))
	{
		return;
	}
	if (func_322(iParam0) != -1)
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
	if (func_321(iParam0))
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

int func_321(int iParam0)//Position - 0xF3DA
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

int func_322(int iParam0)//Position - 0xF40C
{
	int iVar0;
	
	if (!func_163(iParam0, 0, 1))
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
			func_323(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_323(int iParam0)//Position - 0xF48B
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
	func_324(&(Global_1666485[iVar32 /*5*/]));
	Global_1666646 = (Global_1666646 - 1);
}

void func_324(var uParam0)//Position - 0xF541
{
	*uParam0 = 0;
	uParam0->f_1 = func_99();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_325()//Position - 0xF56E
{
	Global_1649067.f_40.f_9 = 4;
}

int func_326(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xF57F
{
	bool bVar0;
	
	func_325();
	bVar0 = false;
	return func_304(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_327(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xF5A6
{
	bool bVar0;
	
	bVar0 = false;
	return func_328(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_328(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xF5C9
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
	
	iVar0 = func_99();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_319(iVar0);
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
	sVar4 = func_318(sParam5, bParam6, &iVar3);
	uVar5 = func_316(iParam7, &iVar3);
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
		bVar12 = func_263(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
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
		func_307();
	}
	func_329();
	func_306();
	func_305();
	return 1;
}

void func_329()//Position - 0xF716
{
	Global_1649067.f_40.f_9 = 3;
}

int func_330(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xF727
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_329();
	bVar0 = true;
	if (func_328(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_303(120000);
		return 1;
	}
	return 0;
}

int func_331(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0xF779
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
		bVar0 = func_348(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_337(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_336(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_335(1);
		}
		func_334();
		func_306();
		func_333();
		func_332();
		return 1;
	}
	return 0;
}

void func_332()//Position - 0xF810
{
	Global_2804285 = 0;
}

void func_333()//Position - 0xF81D
{
	Global_1649067.f_57 = 1;
	Global_1649067.f_57.f_1 = 0;
}

void func_334()//Position - 0xF835
{
	Global_1649067.f_40.f_9 = 1;
}

void func_335(int iParam0)//Position - 0xF846
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

void func_336(int iParam0)//Position - 0xF867
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

int func_337(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xF88A
{
	func_347(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_338(sParam3, iParam4, bParam7);
}

int func_338(char* sParam0, int iParam1, bool bParam2)//Position - 0xF8D8
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
					func_346();
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
		if (func_345(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_344();
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
				func_280();
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
				if (func_343())
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
			if (func_342())
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
			func_341();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_340();
		func_339();
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
		func_346();
	}
	return 0;
}

void func_339()//Position - 0xFBA6
{
	if (!func_267())
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

void func_340()//Position - 0xFBDD
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

void func_341()//Position - 0xFC0E
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

int func_342()//Position - 0xFCA3
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_343()//Position - 0xFCCA
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

void func_344()//Position - 0xFD63
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

bool func_345(int iParam0, int iParam1)//Position - 0xFDBA
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

void func_346()//Position - 0xFDF2
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

void func_347(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xFE49
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

int func_348(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xFE9F
{
	func_347(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_338(sParam3, iParam4, bParam7);
}

int func_349(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0xFEED
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_351(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_350();
		func_334();
		func_306();
		func_333();
		func_332();
		return 1;
	}
	return 0;
}

void func_350()//Position - 0xFF3F
{
	Global_22863 = 0;
}

bool func_351(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xFF4B
{
	func_347(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_338(sParam3, iParam4, bParam8);
}

int func_352(var uParam0, char* sParam1, char* sParam2)//Position - 0xFFA0
{
	if (func_354(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_353();
		func_306();
		func_333();
		return 1;
	}
	return 0;
}

void func_353()//Position - 0xFFCB
{
	Global_1649067.f_40.f_9 = 2;
}

bool func_354(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFFDC
{
	func_347(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_338(sParam2, iParam3, 0);
}

void func_355()//Position - 0x1002B
{
	Global_1649067.f_55 = Global_1649067.f_40.f_1;
	Global_1649067.f_55.f_1 = Global_1649067.f_40.f_10;
}

void func_356()//Position - 0x10051
{
	Global_1649067.f_40 = 1;
}

bool func_357()//Position - 0x10060
{
	return Global_1649067.f_40 == 1;
}

int func_358(int iParam0, int iParam1, int iParam2)//Position - 0x10070
{
	if (!func_359(iParam0))
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

int func_359(int iParam0)//Position - 0x100AF
{
	if (!func_360())
	{
		return 0;
	}
	if (!Global_1649067.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_360()//Position - 0x100D7
{
	if (Global_1649067.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_361(var uParam0)//Position - 0x100EE
{
	if (func_366())
	{
		return 0;
	}
	if (func_365())
	{
		return 0;
	}
	if (func_364(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935879 || func_363())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_362())
		{
			return 0;
		}
	}
	return 1;
}

bool func_362()//Position - 0x1014F
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665432);
}

int func_363()//Position - 0x10163
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0)//Position - 0x1017B
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

bool func_365()//Position - 0x101D2
{
	return Global_1649067.f_40 == 3;
}

bool func_366()//Position - 0x101E2
{
	return func_342();
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0x101EE
{
	if (!func_365())
	{
		return 0;
	}
	return func_358(iParam0, iParam1, iParam2);
}

int func_368(char* sParam0, char* sParam1)//Position - 0x1020C
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_369()//Position - 0x10226
{
	return "TXTMSG";
}

int func_370(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x10232
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_194() /*5568*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_390(1411, iParam0);
	func_17(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_390(1412, iParam0);
	func_17(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (func_389(iParam0))
	{
	}
	else
	{
		iVar1 = func_390(1413, iParam0);
		func_17(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_390(1414, iParam0) + iVar0);
				func_17(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (func_388(iParam0) + (iVar0 - 25));
				func_17(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_390(1439, iParam0) + iVar0);
			func_17(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_390(1441, iParam0);
	func_17(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_390(1442, iParam0);
	func_17(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_390(1443, iParam0);
	func_17(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (func_389(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_390(1444, iParam0);
		func_17(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_390(1445, iParam0);
	func_17(iVar1, uParam1->f_67, iParam3);
	if (func_389(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_390(1446, iParam0);
		func_17(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_390(1447, iParam0);
	func_17(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_390(1448, iParam0);
	func_17(iVar1, uParam1->f_70, -1);
	iVar1 = func_390(1449, iParam0);
	func_17(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_390(1450, iParam0);
	func_17(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_390(1451, iParam0);
	func_17(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_390(1452, iParam0);
	func_17(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_390(1453, iParam0);
	func_17(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_390(1454, iParam0);
	func_17(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_390(1455, iParam0);
	func_17(iVar1, uParam1->f_8, iParam3);
	if (func_389(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_390(3880, iParam0);
		func_17(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_390(3881, iParam0);
		func_17(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_390(3882, iParam0);
		func_17(iVar1, uParam1->f_76, iParam3);
		iVar1 = func_387(iParam0);
		func_17(iVar1, uParam1->f_97, iParam3);
		iVar1 = func_386(iParam0);
		func_17(iVar1, uParam1->f_99, iParam3);
		iVar1 = func_385(iParam0);
		func_17(iVar1, uParam1->f_98, iParam3);
		iVar1 = func_374(iParam0, 0);
		func_17(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[func_194() /*5568*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_132(1629, iVar2, iParam3, 1);
	if (!bParam4)
	{
	}
	func_132(func_372(1, iParam0), uParam1->f_103, iParam3, 1);
	if (!bParam4)
	{
	}
	func_132(func_372(2, iParam0), uParam1->f_104, iParam3, 1);
	if (!bParam4)
	{
	}
	func_132(func_372(3, iParam0), uParam1->f_105, iParam3, 1);
	if (!bParam4)
	{
	}
	func_132(func_372(4, iParam0), uParam1->f_66, iParam3, 1);
	func_132(func_372(5, iParam0), uParam1->f_77, iParam3, 1);
	if (!bParam4)
	{
	}
	func_132(func_372(7, iParam0), uParam1->f_140, iParam3, 1);
	if (!func_389(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_371(func_372(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_371(int iParam0, char* sParam1, int iParam2)//Position - 0x10681
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

int func_372(int iParam0, int iParam1)//Position - 0x106A2
{
	if (iParam1 >= 363)
	{
		return func_373(iParam0, iParam1);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return 1630;
					
					case 1:
						return 1637;
					
					case 2:
						return 1644;
					
					case 3:
						return 1651;
					
					case 4:
						return 1658;
					
					case 5:
						return 1665;
					
					case 6:
						return 1672;
					
					case 7:
						return 1679;
					
					case 8:
						return 1686;
					
					case 9:
						return 1693;
					
					case 10:
						return 1700;
					
					case 11:
						return 1706;
					
					case 12:
						return 1712;
					
					case 13:
						return 1718;
					
					case 14:
						return 1797;
					
					case 15:
						return 1804;
					
					case 16:
						return 1811;
					
					case 17:
						return 1818;
					
					case 18:
						return 1825;
					
					case 19:
						return 1832;
					
					case 20:
						return 1839;
					
					case 21:
						return 1846;
					
					case 22:
						return 1853;
					
					case 23:
						return 1860;
					
					case 24:
						return 1866;
					
					case 25:
						return 1872;
					
					case 26:
						return 2167;
					
					case 27:
						return 2174;
					
					case 28:
						return 2181;
					
					case 29:
						return 2188;
					
					case 30:
						return 2195;
					
					case 31:
						return 2202;
					
					case 32:
						return 2209;
					
					case 33:
						return 2216;
					
					case 34:
						return 2223;
					
					case 35:
						return 2230;
					
					case 36:
						return 2237;
					
					case 37:
						return 2243;
					
					case 38:
						return 2249;
					
					case 39:
						return 2831;
					
					case 40:
						return 2838;
					
					case 41:
						return 2845;
					
					case 42:
						return 2852;
					
					case 43:
						return 2859;
					
					case 44:
						return 2866;
					
					case 45:
						return 2873;
					
					case 46:
						return 2880;
					
					case 47:
						return 2887;
					
					case 48:
						return 2894;
					
					case 49:
						return 2901;
					
					case 50:
						return 2907;
					
					case 51:
						return 2913;
					
					case 52:
						return 2955;
					
					case 53:
						return 2962;
					
					case 54:
						return 2969;
					
					case 55:
						return 2976;
					
					case 56:
						return 2983;
					
					case 57:
						return 2990;
					
					case 58:
						return 2997;
					
					case 59:
						return 3004;
					
					case 60:
						return 3011;
					
					case 61:
						return 3018;
					
					case 62:
						return 3025;
					
					case 63:
						return 3031;
					
					case 64:
						return 3037;
					
					case 65:
						return 3238;
					
					case 66:
						return 3246;
					
					case 67:
						return 3254;
					
					case 68:
						return 3262;
					
					case 69:
						return 3270;
					
					case 70:
						return 3278;
					
					case 71:
						return 3286;
					
					case 72:
						return 3294;
					
					case 73:
						return 3302;
					
					case 74:
						return 3310;
					
					case 75:
						return 3318;
					
					case 76:
						return 3326;
					
					case 77:
						return 3334;
					
					case 78:
						return 3342;
					
					case 79:
						return 3350;
					
					case 80:
						return 3358;
					
					case 81:
						return 3366;
					
					case 82:
						return 3374;
					
					case 83:
						return 3382;
					
					case 84:
						return 3390;
					
					case 85:
						return 3398;
					
					case 86:
						return 3405;
					
					case 87:
						return 3412;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4034;
					
					case 89:
						return 4042;
					
					case 90:
						return 4050;
					
					case 91:
						return 4058;
					
					case 92:
						return 4066;
					
					case 93:
						return 4074;
					
					case 94:
						return 4082;
					
					case 95:
						return 4090;
					
					case 96:
						return 4098;
					
					case 97:
						return 4106;
					
					case 98:
						return 4114;
					
					case 99:
						return 4122;
					
					case 100:
						return 4130;
					
					case 101:
						return 4138;
					
					case 102:
						return 4146;
					
					case 103:
						return 4154;
					
					case 104:
						return 4162;
					
					case 105:
						return 4170;
					
					case 106:
						return 4178;
					
					case 107:
						return 4186;
					
					case 108:
						return 4194;
					
					case 109:
						return 4202;
					
					case 110:
						return 4210;
					
					case 111:
						return 4218;
					
					case 112:
						return 4226;
					
					case 113:
						return 4234;
					
					case 114:
						return 4242;
					
					case 115:
						return 4250;
					
					case 116:
						return 4258;
					
					case 117:
						return 4266;
					
					case 118:
						return 4274;
					
					case 119:
						return 4282;
					
					case 120:
						return 4290;
					
					case 121:
						return 4298;
					
					case 122:
						return 4306;
					
					case 123:
						return 4314;
					
					case 124:
						return 4322;
					
					case 125:
						return 4330;
					
					case 126:
						return 4338;
					
					case 127:
						return 4346;
					
					case 128:
						return 4354;
					
					case 129:
						return 4362;
					
					case 130:
						return 4370;
					
					case 131:
						return 4378;
					
					case 132:
						return 4386;
					
					case 133:
						return 4394;
					
					case 134:
						return 4402;
					
					case 135:
						return 4410;
					
					case 136:
						return 4418;
					
					case 137:
						return 4426;
					
					case 138:
						return 4434;
					
					case 139:
						return 4442;
					
					case 140:
						return 4450;
					
					case 141:
						return 4458;
					
					case 142:
						return 4466;
					
					case 143:
						return 4474;
					
					case 144:
						return 4482;
					
					case 145:
						return 4490;
					
					case 146:
						return 4498;
					
					case 147:
						return 4506;
					
					case 148:
						return 4514;
					
					case 149:
						return 4522;
					
					case 150:
						return 4530;
					
					case 151:
						return 4538;
					
					case 152:
						return 4546;
					
					case 153:
						return 4554;
					
					case 154:
						return 4562;
					
					case 155:
						return 4570;
					
					case 156:
						return 4578;
					
					case 157:
						return 4586;
					
					case 158:
						return 5479;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5928;
					
					case 160:
						return 5935;
					
					case 161:
						return 5942;
					
					case 162:
						return 5949;
					
					case 163:
						return 5956;
					
					case 164:
						return 5963;
					
					case 165:
						return 5970;
					
					case 166:
						return 5977;
					
					case 167:
						return 5984;
					
					case 168:
						return 5991;
					
					case 169:
						return 5998;
					
					case 170:
						return 6005;
					
					case 171:
						return 6012;
					
					case 172:
						return 6019;
					
					case 173:
						return 6026;
					
					case 174:
						return 6033;
					
					case 175:
						return 6040;
					
					case 176:
						return 6047;
					
					case 177:
						return 6054;
					
					case 178:
						return 6061;
					
					case 179:
						return 6068;
					
					case 180:
						return 6075;
					
					case 181:
						return 6082;
					
					case 182:
						return 6089;
					
					case 183:
						return 6096;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6173;
					
					case 185:
						return 6180;
					
					case 186:
						return 6187;
					
					case 187:
						return 6194;
					
					case 188:
						return 6201;
					
					case 189:
						return 6208;
					
					case 190:
						return 6215;
					
					case 191:
						return 6222;
					
					case 192:
						return 6229;
					
					case 193:
						return 6236;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6570;
					
					case 195:
						return 6577;
					
					case 196:
						return 6584;
					
					case 197:
						return 6591;
					
					case 198:
						return 6598;
					
					case 199:
						return 6605;
					
					case 200:
						return 6612;
					
					case 201:
						return 6619;
					
					case 202:
						return 6626;
					
					case 203:
						return 6633;
					
					case 204:
						return 6640;
					
					case 205:
						return 6647;
					
					case 206:
						return 6654;
					
					case 207:
						return 6661;
					
					case 208:
						return 6668;
					
					case 209:
						return 6675;
					
					case 210:
						return 6682;
					
					case 211:
						return 6689;
					
					case 212:
						return 6696;
					
					case 213:
						return 6703;
					
					case 214:
						return 6710;
					
					case 215:
						return 6717;
					
					case 216:
						return 6724;
					
					case 217:
						return 6731;
					
					case 218:
						return 6738;
					
					case 219:
						return 6745;
					
					case 220:
						return 6752;
					
					case 221:
						return 6759;
					
					case 222:
						return 6766;
					
					case 223:
						return 6773;
					
					case 224:
						return 6780;
					
					case 225:
						return 6787;
					
					case 226:
						return 6794;
					
					case 227:
						return 6801;
					
					case 228:
						return 6808;
					
					case 229:
						return 6815;
					
					case 230:
						return 6822;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7292;
					
					case 232:
						return 7299;
					
					case 233:
						return 7306;
					
					case 234:
						return 7313;
					
					case 235:
						return 7320;
					
					case 236:
						return 7327;
					
					case 237:
						return 7334;
					
					case 238:
						return 7341;
					
					case 239:
						return 7348;
					
					case 240:
						return 7355;
					
					case 241:
						return 7362;
					
					case 242:
						return 7369;
					
					case 243:
						return 7376;
					
					case 244:
						return 7383;
					
					case 245:
						return 7390;
					
					case 246:
						return 7397;
					
					case 247:
						return 7404;
					
					case 248:
						return 7411;
					
					case 249:
						return 7418;
					
					case 250:
						return 7425;
					
					case 251:
						return 7432;
					
					case 252:
						return 7439;
					
					case 253:
						return 7446;
					
					case 254:
						return 7453;
					
					case 255:
						return 7460;
					
					case 256:
						return 7467;
					
					case 257:
						return 7474;
					
					case 258:
						return 7481;
					
					case 259:
						return 7488;
					
					case 260:
						return 7495;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8015;
					
					case 262:
						return 8022;
					
					case 263:
						return 8029;
					
					case 264:
						return 8036;
					
					case 265:
						return 8043;
					
					case 266:
						return 8050;
					
					case 267:
						return 8057;
					
					case 268:
						return 8064;
					
					case 269:
						return 8071;
					
					case 270:
						return 8078;
					
					case 271:
						return 8539;
					
					case 272:
						return 8546;
					
					case 273:
						return 8553;
					
					case 274:
						return 8560;
					
					case 275:
						return 8567;
					
					case 276:
						return 8574;
					
					case 277:
						return 8581;
					
					case 278:
						return 8588;
					
					case 279:
						return 8595;
					
					case 280:
						return 8602;
					
					case 281:
						return 8986;
					
					case 282:
						return 8993;
					
					case 283:
						return 9000;
					
					case 284:
						return 9007;
					
					case 285:
						return 9014;
					
					case 286:
						return 9021;
					
					case 287:
						return 9028;
					
					case 288:
						return 9035;
					
					case 289:
						return 9042;
					
					case 290:
						return 9049;
					
					case 291:
						return 9056;
					
					case 292:
						return 9062;
					
					case 293:
						return 9068;
					
					case 294:
						return 9074;
					
					case 295:
						return 9081;
					
					case 296:
						return 9088;
					
					case 297:
						return 9095;
					
					case 298:
						return 9102;
					
					case 299:
						return 9109;
					
					case 300:
						return 9116;
					
					case 301:
						return 9123;
					
					case 302:
						return 9130;
					
					case 303:
						return 9137;
					
					case 304:
						return 9144;
					
					case 305:
						return 9150;
					
					case 306:
						return 9156;
					
					case 307:
						return 9637;
					
					case 308:
						return 9644;
					
					case 309:
						return 9651;
					
					case 310:
						return 9658;
					
					case 311:
						return 9665;
					
					case 312:
						return 9672;
					
					case 313:
						return 9679;
					
					case 314:
						return 9686;
					
					case 315:
						return 9693;
					
					case 316:
						return 9700;
					
					case 317:
						return 9921;
					
					case 318:
						return 9928;
					
					case 319:
						return 9935;
					
					case 320:
						return 9942;
					
					case 321:
						return 9949;
					
					case 322:
						return 9956;
					
					case 323:
						return 9963;
					
					case 324:
						return 9970;
					
					case 325:
						return 9977;
					
					case 326:
						return 9984;
					
					case 327:
						return 9991;
					
					case 328:
						return 9998;
					
					case 329:
						return 10005;
					
					case 330:
						return 10012;
					
					case 331:
						return 10019;
					
					case 332:
						return 10026;
					
					case 333:
						return 10033;
					
					case 334:
						return 10040;
					
					case 335:
						return 10047;
					
					case 336:
						return 10054;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10447;
					
					case 338:
						return 10454;
					
					case 339:
						return 10461;
					
					case 340:
						return 10468;
					
					case 341:
						return 10475;
					
					case 342:
						return 10482;
					
					case 343:
						return 10489;
					
					case 344:
						return 10496;
					
					case 345:
						return 10503;
					
					case 346:
						return 10510;
					
					case 347:
						return 10517;
					
					case 348:
						return 10523;
					
					case 349:
						return 10529;
					
					case 350:
						return 10535;
					
					case 351:
						return 10542;
					
					case 352:
						return 10549;
					
					case 353:
						return 10556;
					
					case 354:
						return 10563;
					
					case 355:
						return 10570;
					
					case 356:
						return 10577;
					
					case 357:
						return 10584;
					
					case 358:
						return 10591;
					
					case 359:
						return 10598;
					
					case 360:
						return 10605;
					
					case 361:
						return 10611;
					
					case 362:
						return 10617;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 1631;
					
					case 1:
						return 1638;
					
					case 2:
						return 1645;
					
					case 3:
						return 1652;
					
					case 4:
						return 1659;
					
					case 5:
						return 1666;
					
					case 6:
						return 1673;
					
					case 7:
						return 1680;
					
					case 8:
						return 1687;
					
					case 9:
						return 1694;
					
					case 10:
						return 1701;
					
					case 11:
						return 1707;
					
					case 12:
						return 1713;
					
					case 13:
						return 1719;
					
					case 14:
						return 1798;
					
					case 15:
						return 1805;
					
					case 16:
						return 1812;
					
					case 17:
						return 1819;
					
					case 18:
						return 1826;
					
					case 19:
						return 1833;
					
					case 20:
						return 1840;
					
					case 21:
						return 1847;
					
					case 22:
						return 1854;
					
					case 23:
						return 1861;
					
					case 24:
						return 1867;
					
					case 25:
						return 1873;
					
					case 26:
						return 2168;
					
					case 27:
						return 2175;
					
					case 28:
						return 2182;
					
					case 29:
						return 2189;
					
					case 30:
						return 2196;
					
					case 31:
						return 2203;
					
					case 32:
						return 2210;
					
					case 33:
						return 2217;
					
					case 34:
						return 2224;
					
					case 35:
						return 2231;
					
					case 36:
						return 2238;
					
					case 37:
						return 2244;
					
					case 38:
						return 2250;
					
					case 39:
						return 2832;
					
					case 40:
						return 2839;
					
					case 41:
						return 2846;
					
					case 42:
						return 2853;
					
					case 43:
						return 2860;
					
					case 44:
						return 2867;
					
					case 45:
						return 2874;
					
					case 46:
						return 2881;
					
					case 47:
						return 2888;
					
					case 48:
						return 2895;
					
					case 49:
						return 2902;
					
					case 50:
						return 2908;
					
					case 51:
						return 2914;
					
					case 52:
						return 2956;
					
					case 53:
						return 2963;
					
					case 54:
						return 2970;
					
					case 55:
						return 2977;
					
					case 56:
						return 2984;
					
					case 57:
						return 2991;
					
					case 58:
						return 2998;
					
					case 59:
						return 3005;
					
					case 60:
						return 3012;
					
					case 61:
						return 3019;
					
					case 62:
						return 3026;
					
					case 63:
						return 3032;
					
					case 64:
						return 3038;
					
					case 65:
						return 3239;
					
					case 66:
						return 3247;
					
					case 67:
						return 3255;
					
					case 68:
						return 3263;
					
					case 69:
						return 3271;
					
					case 70:
						return 3279;
					
					case 71:
						return 3287;
					
					case 72:
						return 3295;
					
					case 73:
						return 3303;
					
					case 74:
						return 3311;
					
					case 75:
						return 3319;
					
					case 76:
						return 3327;
					
					case 77:
						return 3335;
					
					case 78:
						return 3343;
					
					case 79:
						return 3351;
					
					case 80:
						return 3359;
					
					case 81:
						return 3367;
					
					case 82:
						return 3375;
					
					case 83:
						return 3383;
					
					case 84:
						return 3391;
					
					case 85:
						return 3399;
					
					case 86:
						return 3406;
					
					case 87:
						return 3413;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4035;
					
					case 89:
						return 4043;
					
					case 90:
						return 4051;
					
					case 91:
						return 4059;
					
					case 92:
						return 4067;
					
					case 93:
						return 4075;
					
					case 94:
						return 4083;
					
					case 95:
						return 4091;
					
					case 96:
						return 4099;
					
					case 97:
						return 4107;
					
					case 98:
						return 4115;
					
					case 99:
						return 4123;
					
					case 100:
						return 4131;
					
					case 101:
						return 4139;
					
					case 102:
						return 4147;
					
					case 103:
						return 4155;
					
					case 104:
						return 4163;
					
					case 105:
						return 4171;
					
					case 106:
						return 4179;
					
					case 107:
						return 4187;
					
					case 108:
						return 4195;
					
					case 109:
						return 4203;
					
					case 110:
						return 4211;
					
					case 111:
						return 4219;
					
					case 112:
						return 4227;
					
					case 113:
						return 4235;
					
					case 114:
						return 4243;
					
					case 115:
						return 4251;
					
					case 116:
						return 4259;
					
					case 117:
						return 4267;
					
					case 118:
						return 4275;
					
					case 119:
						return 4283;
					
					case 120:
						return 4291;
					
					case 121:
						return 4299;
					
					case 122:
						return 4307;
					
					case 123:
						return 4315;
					
					case 124:
						return 4323;
					
					case 125:
						return 4331;
					
					case 126:
						return 4339;
					
					case 127:
						return 4347;
					
					case 128:
						return 4355;
					
					case 129:
						return 4363;
					
					case 130:
						return 4371;
					
					case 131:
						return 4379;
					
					case 132:
						return 4387;
					
					case 133:
						return 4395;
					
					case 134:
						return 4403;
					
					case 135:
						return 4411;
					
					case 136:
						return 4419;
					
					case 137:
						return 4427;
					
					case 138:
						return 4435;
					
					case 139:
						return 4443;
					
					case 140:
						return 4451;
					
					case 141:
						return 4459;
					
					case 142:
						return 4467;
					
					case 143:
						return 4475;
					
					case 144:
						return 4483;
					
					case 145:
						return 4491;
					
					case 146:
						return 4499;
					
					case 147:
						return 4507;
					
					case 148:
						return 4515;
					
					case 149:
						return 4523;
					
					case 150:
						return 4531;
					
					case 151:
						return 4539;
					
					case 152:
						return 4547;
					
					case 153:
						return 4555;
					
					case 154:
						return 4563;
					
					case 155:
						return 4571;
					
					case 156:
						return 4579;
					
					case 157:
						return 4587;
					
					case 158:
						return 5480;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5929;
					
					case 160:
						return 5936;
					
					case 161:
						return 5943;
					
					case 162:
						return 5950;
					
					case 163:
						return 5957;
					
					case 164:
						return 5964;
					
					case 165:
						return 5971;
					
					case 166:
						return 5978;
					
					case 167:
						return 5985;
					
					case 168:
						return 5992;
					
					case 169:
						return 5999;
					
					case 170:
						return 6006;
					
					case 171:
						return 6013;
					
					case 172:
						return 6020;
					
					case 173:
						return 6027;
					
					case 174:
						return 6034;
					
					case 175:
						return 6041;
					
					case 176:
						return 6048;
					
					case 177:
						return 6055;
					
					case 178:
						return 6062;
					
					case 179:
						return 6069;
					
					case 180:
						return 6076;
					
					case 181:
						return 6083;
					
					case 182:
						return 6090;
					
					case 183:
						return 6097;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6174;
					
					case 185:
						return 6181;
					
					case 186:
						return 6188;
					
					case 187:
						return 6195;
					
					case 188:
						return 6202;
					
					case 189:
						return 6209;
					
					case 190:
						return 6216;
					
					case 191:
						return 6223;
					
					case 192:
						return 6230;
					
					case 193:
						return 6237;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6571;
					
					case 195:
						return 6578;
					
					case 196:
						return 6585;
					
					case 197:
						return 6592;
					
					case 198:
						return 6599;
					
					case 199:
						return 6606;
					
					case 200:
						return 6613;
					
					case 201:
						return 6620;
					
					case 202:
						return 6627;
					
					case 203:
						return 6634;
					
					case 204:
						return 6641;
					
					case 205:
						return 6648;
					
					case 206:
						return 6655;
					
					case 207:
						return 6662;
					
					case 208:
						return 6669;
					
					case 209:
						return 6676;
					
					case 210:
						return 6683;
					
					case 211:
						return 6690;
					
					case 212:
						return 6697;
					
					case 213:
						return 6704;
					
					case 214:
						return 6711;
					
					case 215:
						return 6718;
					
					case 216:
						return 6725;
					
					case 217:
						return 6732;
					
					case 218:
						return 6739;
					
					case 219:
						return 6746;
					
					case 220:
						return 6753;
					
					case 221:
						return 6760;
					
					case 222:
						return 6767;
					
					case 223:
						return 6774;
					
					case 224:
						return 6781;
					
					case 225:
						return 6788;
					
					case 226:
						return 6795;
					
					case 227:
						return 6802;
					
					case 228:
						return 6809;
					
					case 229:
						return 6816;
					
					case 230:
						return 6823;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7293;
					
					case 232:
						return 7300;
					
					case 233:
						return 7307;
					
					case 234:
						return 7314;
					
					case 235:
						return 7321;
					
					case 236:
						return 7328;
					
					case 237:
						return 7335;
					
					case 238:
						return 7342;
					
					case 239:
						return 7349;
					
					case 240:
						return 7356;
					
					case 241:
						return 7363;
					
					case 242:
						return 7370;
					
					case 243:
						return 7377;
					
					case 244:
						return 7384;
					
					case 245:
						return 7391;
					
					case 246:
						return 7398;
					
					case 247:
						return 7405;
					
					case 248:
						return 7412;
					
					case 249:
						return 7419;
					
					case 250:
						return 7426;
					
					case 251:
						return 7433;
					
					case 252:
						return 7440;
					
					case 253:
						return 7447;
					
					case 254:
						return 7454;
					
					case 255:
						return 7461;
					
					case 256:
						return 7468;
					
					case 257:
						return 7475;
					
					case 258:
						return 7482;
					
					case 259:
						return 7489;
					
					case 260:
						return 7496;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8016;
					
					case 262:
						return 8023;
					
					case 263:
						return 8030;
					
					case 264:
						return 8037;
					
					case 265:
						return 8044;
					
					case 266:
						return 8051;
					
					case 267:
						return 8058;
					
					case 268:
						return 8065;
					
					case 269:
						return 8072;
					
					case 270:
						return 8079;
					
					case 271:
						return 8540;
					
					case 272:
						return 8547;
					
					case 273:
						return 8554;
					
					case 274:
						return 8561;
					
					case 275:
						return 8568;
					
					case 276:
						return 8575;
					
					case 277:
						return 8582;
					
					case 278:
						return 8589;
					
					case 279:
						return 8596;
					
					case 280:
						return 8603;
					
					case 281:
						return 8987;
					
					case 282:
						return 8994;
					
					case 283:
						return 9001;
					
					case 284:
						return 9008;
					
					case 285:
						return 9015;
					
					case 286:
						return 9022;
					
					case 287:
						return 9029;
					
					case 288:
						return 9036;
					
					case 289:
						return 9043;
					
					case 290:
						return 9050;
					
					case 291:
						return 9057;
					
					case 292:
						return 9063;
					
					case 293:
						return 9069;
					
					case 294:
						return 9075;
					
					case 295:
						return 9082;
					
					case 296:
						return 9089;
					
					case 297:
						return 9096;
					
					case 298:
						return 9103;
					
					case 299:
						return 9110;
					
					case 300:
						return 9117;
					
					case 301:
						return 9124;
					
					case 302:
						return 9131;
					
					case 303:
						return 9138;
					
					case 304:
						return 9145;
					
					case 305:
						return 9151;
					
					case 306:
						return 9157;
					
					case 307:
						return 9638;
					
					case 308:
						return 9645;
					
					case 309:
						return 9652;
					
					case 310:
						return 9659;
					
					case 311:
						return 9666;
					
					case 312:
						return 9673;
					
					case 313:
						return 9680;
					
					case 314:
						return 9687;
					
					case 315:
						return 9694;
					
					case 316:
						return 9701;
					
					case 317:
						return 9922;
					
					case 318:
						return 9929;
					
					case 319:
						return 9936;
					
					case 320:
						return 9943;
					
					case 321:
						return 9950;
					
					case 322:
						return 9957;
					
					case 323:
						return 9964;
					
					case 324:
						return 9971;
					
					case 325:
						return 9978;
					
					case 326:
						return 9985;
					
					case 327:
						return 9992;
					
					case 328:
						return 9999;
					
					case 329:
						return 10006;
					
					case 330:
						return 10013;
					
					case 331:
						return 10020;
					
					case 332:
						return 10027;
					
					case 333:
						return 10034;
					
					case 334:
						return 10041;
					
					case 335:
						return 10048;
					
					case 336:
						return 10055;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10448;
					
					case 338:
						return 10455;
					
					case 339:
						return 10462;
					
					case 340:
						return 10469;
					
					case 341:
						return 10476;
					
					case 342:
						return 10483;
					
					case 343:
						return 10490;
					
					case 344:
						return 10497;
					
					case 345:
						return 10504;
					
					case 346:
						return 10511;
					
					case 347:
						return 10518;
					
					case 348:
						return 10524;
					
					case 349:
						return 10530;
					
					case 350:
						return 10536;
					
					case 351:
						return 10543;
					
					case 352:
						return 10550;
					
					case 353:
						return 10557;
					
					case 354:
						return 10564;
					
					case 355:
						return 10571;
					
					case 356:
						return 10578;
					
					case 357:
						return 10585;
					
					case 358:
						return 10592;
					
					case 359:
						return 10599;
					
					case 360:
						return 10606;
					
					case 361:
						return 10612;
					
					case 362:
						return 10618;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 1632;
					
					case 1:
						return 1639;
					
					case 2:
						return 1646;
					
					case 3:
						return 1653;
					
					case 4:
						return 1660;
					
					case 5:
						return 1667;
					
					case 6:
						return 1674;
					
					case 7:
						return 1681;
					
					case 8:
						return 1688;
					
					case 9:
						return 1695;
					
					case 10:
						return 1702;
					
					case 11:
						return 1708;
					
					case 12:
						return 1714;
					
					case 13:
						return 1720;
					
					case 14:
						return 1799;
					
					case 15:
						return 1806;
					
					case 16:
						return 1813;
					
					case 17:
						return 1820;
					
					case 18:
						return 1827;
					
					case 19:
						return 1834;
					
					case 20:
						return 1841;
					
					case 21:
						return 1848;
					
					case 22:
						return 1855;
					
					case 23:
						return 1862;
					
					case 24:
						return 1868;
					
					case 25:
						return 1874;
					
					case 26:
						return 2169;
					
					case 27:
						return 2176;
					
					case 28:
						return 2183;
					
					case 29:
						return 2190;
					
					case 30:
						return 2197;
					
					case 31:
						return 2204;
					
					case 32:
						return 2211;
					
					case 33:
						return 2218;
					
					case 34:
						return 2225;
					
					case 35:
						return 2232;
					
					case 36:
						return 2239;
					
					case 37:
						return 2245;
					
					case 38:
						return 2251;
					
					case 39:
						return 2833;
					
					case 40:
						return 2840;
					
					case 41:
						return 2847;
					
					case 42:
						return 2854;
					
					case 43:
						return 2861;
					
					case 44:
						return 2868;
					
					case 45:
						return 2875;
					
					case 46:
						return 2882;
					
					case 47:
						return 2889;
					
					case 48:
						return 2896;
					
					case 49:
						return 2903;
					
					case 50:
						return 2909;
					
					case 51:
						return 2915;
					
					case 52:
						return 2957;
					
					case 53:
						return 2964;
					
					case 54:
						return 2971;
					
					case 55:
						return 2978;
					
					case 56:
						return 2985;
					
					case 57:
						return 2992;
					
					case 58:
						return 2999;
					
					case 59:
						return 3006;
					
					case 60:
						return 3013;
					
					case 61:
						return 3020;
					
					case 62:
						return 3027;
					
					case 63:
						return 3033;
					
					case 64:
						return 3039;
					
					case 65:
						return 3240;
					
					case 66:
						return 3248;
					
					case 67:
						return 3256;
					
					case 68:
						return 3264;
					
					case 69:
						return 3272;
					
					case 70:
						return 3280;
					
					case 71:
						return 3288;
					
					case 72:
						return 3296;
					
					case 73:
						return 3304;
					
					case 74:
						return 3312;
					
					case 75:
						return 3320;
					
					case 76:
						return 3328;
					
					case 77:
						return 3336;
					
					case 78:
						return 3344;
					
					case 79:
						return 3352;
					
					case 80:
						return 3360;
					
					case 81:
						return 3368;
					
					case 82:
						return 3376;
					
					case 83:
						return 3384;
					
					case 84:
						return 3392;
					
					case 85:
						return 3400;
					
					case 86:
						return 3407;
					
					case 87:
						return 3414;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4036;
					
					case 89:
						return 4044;
					
					case 90:
						return 4052;
					
					case 91:
						return 4060;
					
					case 92:
						return 4068;
					
					case 93:
						return 4076;
					
					case 94:
						return 4084;
					
					case 95:
						return 4092;
					
					case 96:
						return 4100;
					
					case 97:
						return 4108;
					
					case 98:
						return 4116;
					
					case 99:
						return 4124;
					
					case 100:
						return 4132;
					
					case 101:
						return 4140;
					
					case 102:
						return 4148;
					
					case 103:
						return 4156;
					
					case 104:
						return 4164;
					
					case 105:
						return 4172;
					
					case 106:
						return 4180;
					
					case 107:
						return 4188;
					
					case 108:
						return 4196;
					
					case 109:
						return 4204;
					
					case 110:
						return 4212;
					
					case 111:
						return 4220;
					
					case 112:
						return 4228;
					
					case 113:
						return 4236;
					
					case 114:
						return 4244;
					
					case 115:
						return 4252;
					
					case 116:
						return 4260;
					
					case 117:
						return 4268;
					
					case 118:
						return 4276;
					
					case 119:
						return 4284;
					
					case 120:
						return 4292;
					
					case 121:
						return 4300;
					
					case 122:
						return 4308;
					
					case 123:
						return 4316;
					
					case 124:
						return 4324;
					
					case 125:
						return 4332;
					
					case 126:
						return 4340;
					
					case 127:
						return 4348;
					
					case 128:
						return 4356;
					
					case 129:
						return 4364;
					
					case 130:
						return 4372;
					
					case 131:
						return 4380;
					
					case 132:
						return 4388;
					
					case 133:
						return 4396;
					
					case 134:
						return 4404;
					
					case 135:
						return 4412;
					
					case 136:
						return 4420;
					
					case 137:
						return 4428;
					
					case 138:
						return 4436;
					
					case 139:
						return 4444;
					
					case 140:
						return 4452;
					
					case 141:
						return 4460;
					
					case 142:
						return 4468;
					
					case 143:
						return 4476;
					
					case 144:
						return 4484;
					
					case 145:
						return 4492;
					
					case 146:
						return 4500;
					
					case 147:
						return 4508;
					
					case 148:
						return 4516;
					
					case 149:
						return 4524;
					
					case 150:
						return 4532;
					
					case 151:
						return 4540;
					
					case 152:
						return 4548;
					
					case 153:
						return 4556;
					
					case 154:
						return 4564;
					
					case 155:
						return 4572;
					
					case 156:
						return 4580;
					
					case 157:
						return 4588;
					
					case 158:
						return 5481;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5930;
					
					case 160:
						return 5937;
					
					case 161:
						return 5944;
					
					case 162:
						return 5951;
					
					case 163:
						return 5958;
					
					case 164:
						return 5965;
					
					case 165:
						return 5972;
					
					case 166:
						return 5979;
					
					case 167:
						return 5986;
					
					case 168:
						return 5993;
					
					case 169:
						return 6000;
					
					case 170:
						return 6007;
					
					case 171:
						return 6014;
					
					case 172:
						return 6021;
					
					case 173:
						return 6028;
					
					case 174:
						return 6035;
					
					case 175:
						return 6042;
					
					case 176:
						return 6049;
					
					case 177:
						return 6056;
					
					case 178:
						return 6063;
					
					case 179:
						return 6070;
					
					case 180:
						return 6077;
					
					case 181:
						return 6084;
					
					case 182:
						return 6091;
					
					case 183:
						return 6098;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6175;
					
					case 185:
						return 6182;
					
					case 186:
						return 6189;
					
					case 187:
						return 6196;
					
					case 188:
						return 6203;
					
					case 189:
						return 6210;
					
					case 190:
						return 6217;
					
					case 191:
						return 6224;
					
					case 192:
						return 6231;
					
					case 193:
						return 6238;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6572;
					
					case 195:
						return 6579;
					
					case 196:
						return 6586;
					
					case 197:
						return 6593;
					
					case 198:
						return 6600;
					
					case 199:
						return 6607;
					
					case 200:
						return 6614;
					
					case 201:
						return 6621;
					
					case 202:
						return 6628;
					
					case 203:
						return 6635;
					
					case 204:
						return 6642;
					
					case 205:
						return 6649;
					
					case 206:
						return 6656;
					
					case 207:
						return 6663;
					
					case 208:
						return 6670;
					
					case 209:
						return 6677;
					
					case 210:
						return 6684;
					
					case 211:
						return 6691;
					
					case 212:
						return 6698;
					
					case 213:
						return 6705;
					
					case 214:
						return 6712;
					
					case 215:
						return 6719;
					
					case 216:
						return 6726;
					
					case 217:
						return 6733;
					
					case 218:
						return 6740;
					
					case 219:
						return 6747;
					
					case 220:
						return 6754;
					
					case 221:
						return 6761;
					
					case 222:
						return 6768;
					
					case 223:
						return 6775;
					
					case 224:
						return 6782;
					
					case 225:
						return 6789;
					
					case 226:
						return 6796;
					
					case 227:
						return 6803;
					
					case 228:
						return 6810;
					
					case 229:
						return 6817;
					
					case 230:
						return 6824;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7294;
					
					case 232:
						return 7301;
					
					case 233:
						return 7308;
					
					case 234:
						return 7315;
					
					case 235:
						return 7322;
					
					case 236:
						return 7329;
					
					case 237:
						return 7336;
					
					case 238:
						return 7343;
					
					case 239:
						return 7350;
					
					case 240:
						return 7357;
					
					case 241:
						return 7364;
					
					case 242:
						return 7371;
					
					case 243:
						return 7378;
					
					case 244:
						return 7385;
					
					case 245:
						return 7392;
					
					case 246:
						return 7399;
					
					case 247:
						return 7406;
					
					case 248:
						return 7413;
					
					case 249:
						return 7420;
					
					case 250:
						return 7427;
					
					case 251:
						return 7434;
					
					case 252:
						return 7441;
					
					case 253:
						return 7448;
					
					case 254:
						return 7455;
					
					case 255:
						return 7462;
					
					case 256:
						return 7469;
					
					case 257:
						return 7476;
					
					case 258:
						return 7483;
					
					case 259:
						return 7490;
					
					case 260:
						return 7497;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8017;
					
					case 262:
						return 8024;
					
					case 263:
						return 8031;
					
					case 264:
						return 8038;
					
					case 265:
						return 8045;
					
					case 266:
						return 8052;
					
					case 267:
						return 8059;
					
					case 268:
						return 8066;
					
					case 269:
						return 8073;
					
					case 270:
						return 8080;
					
					case 271:
						return 8541;
					
					case 272:
						return 8548;
					
					case 273:
						return 8555;
					
					case 274:
						return 8562;
					
					case 275:
						return 8569;
					
					case 276:
						return 8576;
					
					case 277:
						return 8583;
					
					case 278:
						return 8590;
					
					case 279:
						return 8597;
					
					case 280:
						return 8604;
					
					case 281:
						return 8988;
					
					case 282:
						return 8995;
					
					case 283:
						return 9002;
					
					case 284:
						return 9009;
					
					case 285:
						return 9016;
					
					case 286:
						return 9023;
					
					case 287:
						return 9030;
					
					case 288:
						return 9037;
					
					case 289:
						return 9044;
					
					case 290:
						return 9051;
					
					case 291:
						return 9058;
					
					case 292:
						return 9064;
					
					case 293:
						return 9070;
					
					case 294:
						return 9076;
					
					case 295:
						return 9083;
					
					case 296:
						return 9090;
					
					case 297:
						return 9097;
					
					case 298:
						return 9104;
					
					case 299:
						return 9111;
					
					case 300:
						return 9118;
					
					case 301:
						return 9125;
					
					case 302:
						return 9132;
					
					case 303:
						return 9139;
					
					case 304:
						return 9146;
					
					case 305:
						return 9152;
					
					case 306:
						return 9158;
					
					case 307:
						return 9639;
					
					case 308:
						return 9646;
					
					case 309:
						return 9653;
					
					case 310:
						return 9660;
					
					case 311:
						return 9667;
					
					case 312:
						return 9674;
					
					case 313:
						return 9681;
					
					case 314:
						return 9688;
					
					case 315:
						return 9695;
					
					case 316:
						return 9702;
					
					case 317:
						return 9923;
					
					case 318:
						return 9930;
					
					case 319:
						return 9937;
					
					case 320:
						return 9944;
					
					case 321:
						return 9951;
					
					case 322:
						return 9958;
					
					case 323:
						return 9965;
					
					case 324:
						return 9972;
					
					case 325:
						return 9979;
					
					case 326:
						return 9986;
					
					case 327:
						return 9993;
					
					case 328:
						return 10000;
					
					case 329:
						return 10007;
					
					case 330:
						return 10014;
					
					case 331:
						return 10021;
					
					case 332:
						return 10028;
					
					case 333:
						return 10035;
					
					case 334:
						return 10042;
					
					case 335:
						return 10049;
					
					case 336:
						return 10056;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10449;
					
					case 338:
						return 10456;
					
					case 339:
						return 10463;
					
					case 340:
						return 10470;
					
					case 341:
						return 10477;
					
					case 342:
						return 10484;
					
					case 343:
						return 10491;
					
					case 344:
						return 10498;
					
					case 345:
						return 10505;
					
					case 346:
						return 10512;
					
					case 347:
						return 10519;
					
					case 348:
						return 10525;
					
					case 349:
						return 10531;
					
					case 350:
						return 10537;
					
					case 351:
						return 10544;
					
					case 352:
						return 10551;
					
					case 353:
						return 10558;
					
					case 354:
						return 10565;
					
					case 355:
						return 10572;
					
					case 356:
						return 10579;
					
					case 357:
						return 10586;
					
					case 358:
						return 10593;
					
					case 359:
						return 10600;
					
					case 360:
						return 10607;
					
					case 361:
						return 10613;
					
					case 362:
						return 10619;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam1)
				{
					case 0:
						return 1633;
					
					case 1:
						return 1640;
					
					case 2:
						return 1647;
					
					case 3:
						return 1654;
					
					case 4:
						return 1661;
					
					case 5:
						return 1668;
					
					case 6:
						return 1675;
					
					case 7:
						return 1682;
					
					case 8:
						return 1689;
					
					case 9:
						return 1696;
					
					case 10:
						return 1703;
					
					case 11:
						return 1709;
					
					case 12:
						return 1715;
					
					case 13:
						return 1721;
					
					case 14:
						return 1800;
					
					case 15:
						return 1807;
					
					case 16:
						return 1814;
					
					case 17:
						return 1821;
					
					case 18:
						return 1828;
					
					case 19:
						return 1835;
					
					case 20:
						return 1842;
					
					case 21:
						return 1849;
					
					case 22:
						return 1856;
					
					case 23:
						return 1863;
					
					case 24:
						return 1869;
					
					case 25:
						return 1875;
					
					case 26:
						return 2170;
					
					case 27:
						return 2177;
					
					case 28:
						return 2184;
					
					case 29:
						return 2191;
					
					case 30:
						return 2198;
					
					case 31:
						return 2205;
					
					case 32:
						return 2212;
					
					case 33:
						return 2219;
					
					case 34:
						return 2226;
					
					case 35:
						return 2233;
					
					case 36:
						return 2240;
					
					case 37:
						return 2246;
					
					case 38:
						return 2252;
					
					case 39:
						return 2834;
					
					case 40:
						return 2841;
					
					case 41:
						return 2848;
					
					case 42:
						return 2855;
					
					case 43:
						return 2862;
					
					case 44:
						return 2869;
					
					case 45:
						return 2876;
					
					case 46:
						return 2883;
					
					case 47:
						return 2890;
					
					case 48:
						return 2897;
					
					case 49:
						return 2904;
					
					case 50:
						return 2910;
					
					case 51:
						return 2916;
					
					case 52:
						return 2958;
					
					case 53:
						return 2965;
					
					case 54:
						return 2972;
					
					case 55:
						return 2979;
					
					case 56:
						return 2986;
					
					case 57:
						return 2993;
					
					case 58:
						return 3000;
					
					case 59:
						return 3007;
					
					case 60:
						return 3014;
					
					case 61:
						return 3021;
					
					case 62:
						return 3028;
					
					case 63:
						return 3034;
					
					case 64:
						return 3040;
					
					case 65:
						return 3241;
					
					case 66:
						return 3249;
					
					case 67:
						return 3257;
					
					case 68:
						return 3265;
					
					case 69:
						return 3273;
					
					case 70:
						return 3281;
					
					case 71:
						return 3289;
					
					case 72:
						return 3297;
					
					case 73:
						return 3305;
					
					case 74:
						return 3313;
					
					case 75:
						return 3321;
					
					case 76:
						return 3329;
					
					case 77:
						return 3337;
					
					case 78:
						return 3345;
					
					case 79:
						return 3353;
					
					case 80:
						return 3361;
					
					case 81:
						return 3369;
					
					case 82:
						return 3377;
					
					case 83:
						return 3385;
					
					case 84:
						return 3393;
					
					case 85:
						return 3401;
					
					case 86:
						return 3408;
					
					case 87:
						return 3415;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4037;
					
					case 89:
						return 4045;
					
					case 90:
						return 4053;
					
					case 91:
						return 4061;
					
					case 92:
						return 4069;
					
					case 93:
						return 4077;
					
					case 94:
						return 4085;
					
					case 95:
						return 4093;
					
					case 96:
						return 4101;
					
					case 97:
						return 4109;
					
					case 98:
						return 4117;
					
					case 99:
						return 4125;
					
					case 100:
						return 4133;
					
					case 101:
						return 4141;
					
					case 102:
						return 4149;
					
					case 103:
						return 4157;
					
					case 104:
						return 4165;
					
					case 105:
						return 4173;
					
					case 106:
						return 4181;
					
					case 107:
						return 4189;
					
					case 108:
						return 4197;
					
					case 109:
						return 4205;
					
					case 110:
						return 4213;
					
					case 111:
						return 4221;
					
					case 112:
						return 4229;
					
					case 113:
						return 4237;
					
					case 114:
						return 4245;
					
					case 115:
						return 4253;
					
					case 116:
						return 4261;
					
					case 117:
						return 4269;
					
					case 118:
						return 4277;
					
					case 119:
						return 4285;
					
					case 120:
						return 4293;
					
					case 121:
						return 4301;
					
					case 122:
						return 4309;
					
					case 123:
						return 4317;
					
					case 124:
						return 4325;
					
					case 125:
						return 4333;
					
					case 126:
						return 4341;
					
					case 127:
						return 4349;
					
					case 128:
						return 4357;
					
					case 129:
						return 4365;
					
					case 130:
						return 4373;
					
					case 131:
						return 4381;
					
					case 132:
						return 4389;
					
					case 133:
						return 4397;
					
					case 134:
						return 4405;
					
					case 135:
						return 4413;
					
					case 136:
						return 4421;
					
					case 137:
						return 4429;
					
					case 138:
						return 4437;
					
					case 139:
						return 4445;
					
					case 140:
						return 4453;
					
					case 141:
						return 4461;
					
					case 142:
						return 4469;
					
					case 143:
						return 4477;
					
					case 144:
						return 4485;
					
					case 145:
						return 4493;
					
					case 146:
						return 4501;
					
					case 147:
						return 4509;
					
					case 148:
						return 4517;
					
					case 149:
						return 4525;
					
					case 150:
						return 4533;
					
					case 151:
						return 4541;
					
					case 152:
						return 4549;
					
					case 153:
						return 4557;
					
					case 154:
						return 4565;
					
					case 155:
						return 4573;
					
					case 156:
						return 4581;
					
					case 157:
						return 4589;
					
					case 158:
						return 5482;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5931;
					
					case 160:
						return 5938;
					
					case 161:
						return 5945;
					
					case 162:
						return 5952;
					
					case 163:
						return 5959;
					
					case 164:
						return 5966;
					
					case 165:
						return 5973;
					
					case 166:
						return 5980;
					
					case 167:
						return 5987;
					
					case 168:
						return 5994;
					
					case 169:
						return 6001;
					
					case 170:
						return 6008;
					
					case 171:
						return 6015;
					
					case 172:
						return 6022;
					
					case 173:
						return 6029;
					
					case 174:
						return 6036;
					
					case 175:
						return 6043;
					
					case 176:
						return 6050;
					
					case 177:
						return 6057;
					
					case 178:
						return 6064;
					
					case 179:
						return 6071;
					
					case 180:
						return 6078;
					
					case 181:
						return 6085;
					
					case 182:
						return 6092;
					
					case 183:
						return 6099;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6176;
					
					case 185:
						return 6183;
					
					case 186:
						return 6190;
					
					case 187:
						return 6197;
					
					case 188:
						return 6204;
					
					case 189:
						return 6211;
					
					case 190:
						return 6218;
					
					case 191:
						return 6225;
					
					case 192:
						return 6232;
					
					case 193:
						return 6239;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6573;
					
					case 195:
						return 6580;
					
					case 196:
						return 6587;
					
					case 197:
						return 6594;
					
					case 198:
						return 6601;
					
					case 199:
						return 6608;
					
					case 200:
						return 6615;
					
					case 201:
						return 6622;
					
					case 202:
						return 6629;
					
					case 203:
						return 6636;
					
					case 204:
						return 6643;
					
					case 205:
						return 6650;
					
					case 206:
						return 6657;
					
					case 207:
						return 6664;
					
					case 208:
						return 6671;
					
					case 209:
						return 6678;
					
					case 210:
						return 6685;
					
					case 211:
						return 6692;
					
					case 212:
						return 6699;
					
					case 213:
						return 6706;
					
					case 214:
						return 6713;
					
					case 215:
						return 6720;
					
					case 216:
						return 6727;
					
					case 217:
						return 6734;
					
					case 218:
						return 6741;
					
					case 219:
						return 6748;
					
					case 220:
						return 6755;
					
					case 221:
						return 6762;
					
					case 222:
						return 6769;
					
					case 223:
						return 6776;
					
					case 224:
						return 6783;
					
					case 225:
						return 6790;
					
					case 226:
						return 6797;
					
					case 227:
						return 6804;
					
					case 228:
						return 6811;
					
					case 229:
						return 6818;
					
					case 230:
						return 6825;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7295;
					
					case 232:
						return 7302;
					
					case 233:
						return 7309;
					
					case 234:
						return 7316;
					
					case 235:
						return 7323;
					
					case 236:
						return 7330;
					
					case 237:
						return 7337;
					
					case 238:
						return 7344;
					
					case 239:
						return 7351;
					
					case 240:
						return 7358;
					
					case 241:
						return 7365;
					
					case 242:
						return 7372;
					
					case 243:
						return 7379;
					
					case 244:
						return 7386;
					
					case 245:
						return 7393;
					
					case 246:
						return 7400;
					
					case 247:
						return 7407;
					
					case 248:
						return 7414;
					
					case 249:
						return 7421;
					
					case 250:
						return 7428;
					
					case 251:
						return 7435;
					
					case 252:
						return 7442;
					
					case 253:
						return 7449;
					
					case 254:
						return 7456;
					
					case 255:
						return 7463;
					
					case 256:
						return 7470;
					
					case 257:
						return 7477;
					
					case 258:
						return 7484;
					
					case 259:
						return 7491;
					
					case 260:
						return 7498;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8018;
					
					case 262:
						return 8025;
					
					case 263:
						return 8032;
					
					case 264:
						return 8039;
					
					case 265:
						return 8046;
					
					case 266:
						return 8053;
					
					case 267:
						return 8060;
					
					case 268:
						return 8067;
					
					case 269:
						return 8074;
					
					case 270:
						return 8081;
					
					case 271:
						return 8542;
					
					case 272:
						return 8549;
					
					case 273:
						return 8556;
					
					case 274:
						return 8563;
					
					case 275:
						return 8570;
					
					case 276:
						return 8577;
					
					case 277:
						return 8584;
					
					case 278:
						return 8591;
					
					case 279:
						return 8598;
					
					case 280:
						return 8605;
					
					case 281:
						return 8989;
					
					case 282:
						return 8996;
					
					case 283:
						return 9003;
					
					case 284:
						return 9010;
					
					case 285:
						return 9017;
					
					case 286:
						return 9024;
					
					case 287:
						return 9031;
					
					case 288:
						return 9038;
					
					case 289:
						return 9045;
					
					case 290:
						return 9052;
					
					case 291:
						return 9059;
					
					case 292:
						return 9065;
					
					case 293:
						return 9071;
					
					case 294:
						return 9077;
					
					case 295:
						return 9084;
					
					case 296:
						return 9091;
					
					case 297:
						return 9098;
					
					case 298:
						return 9105;
					
					case 299:
						return 9112;
					
					case 300:
						return 9119;
					
					case 301:
						return 9126;
					
					case 302:
						return 9133;
					
					case 303:
						return 9140;
					
					case 304:
						return 9147;
					
					case 305:
						return 9153;
					
					case 306:
						return 9159;
					
					case 307:
						return 9640;
					
					case 308:
						return 9647;
					
					case 309:
						return 9654;
					
					case 310:
						return 9661;
					
					case 311:
						return 9668;
					
					case 312:
						return 9675;
					
					case 313:
						return 9682;
					
					case 314:
						return 9689;
					
					case 315:
						return 9696;
					
					case 316:
						return 9703;
					
					case 317:
						return 9924;
					
					case 318:
						return 9931;
					
					case 319:
						return 9938;
					
					case 320:
						return 9945;
					
					case 321:
						return 9952;
					
					case 322:
						return 9959;
					
					case 323:
						return 9966;
					
					case 324:
						return 9973;
					
					case 325:
						return 9980;
					
					case 326:
						return 9987;
					
					case 327:
						return 9994;
					
					case 328:
						return 10001;
					
					case 329:
						return 10008;
					
					case 330:
						return 10015;
					
					case 331:
						return 10022;
					
					case 332:
						return 10029;
					
					case 333:
						return 10036;
					
					case 334:
						return 10043;
					
					case 335:
						return 10050;
					
					case 336:
						return 10057;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10450;
					
					case 338:
						return 10457;
					
					case 339:
						return 10464;
					
					case 340:
						return 10471;
					
					case 341:
						return 10478;
					
					case 342:
						return 10485;
					
					case 343:
						return 10492;
					
					case 344:
						return 10499;
					
					case 345:
						return 10506;
					
					case 346:
						return 10513;
					
					case 347:
						return 10520;
					
					case 348:
						return 10526;
					
					case 349:
						return 10532;
					
					case 350:
						return 10538;
					
					case 351:
						return 10545;
					
					case 352:
						return 10552;
					
					case 353:
						return 10559;
					
					case 354:
						return 10566;
					
					case 355:
						return 10573;
					
					case 356:
						return 10580;
					
					case 357:
						return 10587;
					
					case 358:
						return 10594;
					
					case 359:
						return 10601;
					
					case 360:
						return 10608;
					
					case 361:
						return 10614;
					
					case 362:
						return 10620;
					
					default:
				}
				break;
			
			case 5:
				switch (iParam1)
				{
					case 0:
						return 1634;
					
					case 1:
						return 1641;
					
					case 2:
						return 1648;
					
					case 3:
						return 1655;
					
					case 4:
						return 1662;
					
					case 5:
						return 1669;
					
					case 6:
						return 1676;
					
					case 7:
						return 1683;
					
					case 8:
						return 1690;
					
					case 9:
						return 1697;
					
					case 10:
						return 1704;
					
					case 11:
						return 1710;
					
					case 12:
						return 1716;
					
					case 13:
						return 1722;
					
					case 14:
						return 1801;
					
					case 15:
						return 1808;
					
					case 16:
						return 1815;
					
					case 17:
						return 1822;
					
					case 18:
						return 1829;
					
					case 19:
						return 1836;
					
					case 20:
						return 1843;
					
					case 21:
						return 1850;
					
					case 22:
						return 1857;
					
					case 23:
						return 1864;
					
					case 24:
						return 1870;
					
					case 25:
						return 1876;
					
					case 26:
						return 2171;
					
					case 27:
						return 2178;
					
					case 28:
						return 2185;
					
					case 29:
						return 2192;
					
					case 30:
						return 2199;
					
					case 31:
						return 2206;
					
					case 32:
						return 2213;
					
					case 33:
						return 2220;
					
					case 34:
						return 2227;
					
					case 35:
						return 2234;
					
					case 36:
						return 2241;
					
					case 37:
						return 2247;
					
					case 38:
						return 2253;
					
					case 39:
						return 2835;
					
					case 40:
						return 2842;
					
					case 41:
						return 2849;
					
					case 42:
						return 2856;
					
					case 43:
						return 2863;
					
					case 44:
						return 2870;
					
					case 45:
						return 2877;
					
					case 46:
						return 2884;
					
					case 47:
						return 2891;
					
					case 48:
						return 2898;
					
					case 49:
						return 2905;
					
					case 50:
						return 2911;
					
					case 51:
						return 2917;
					
					case 52:
						return 2959;
					
					case 53:
						return 2966;
					
					case 54:
						return 2973;
					
					case 55:
						return 2980;
					
					case 56:
						return 2987;
					
					case 57:
						return 2994;
					
					case 58:
						return 3001;
					
					case 59:
						return 3008;
					
					case 60:
						return 3015;
					
					case 61:
						return 3022;
					
					case 62:
						return 3029;
					
					case 63:
						return 3035;
					
					case 64:
						return 3041;
					
					case 65:
						return 3242;
					
					case 66:
						return 3250;
					
					case 67:
						return 3258;
					
					case 68:
						return 3266;
					
					case 69:
						return 3274;
					
					case 70:
						return 3282;
					
					case 71:
						return 3290;
					
					case 72:
						return 3298;
					
					case 73:
						return 3306;
					
					case 74:
						return 3314;
					
					case 75:
						return 3322;
					
					case 76:
						return 3330;
					
					case 77:
						return 3338;
					
					case 78:
						return 3346;
					
					case 79:
						return 3354;
					
					case 80:
						return 3362;
					
					case 81:
						return 3370;
					
					case 82:
						return 3378;
					
					case 83:
						return 3386;
					
					case 84:
						return 3394;
					
					case 85:
						return 3402;
					
					case 86:
						return 3409;
					
					case 87:
						return 3416;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4038;
					
					case 89:
						return 4046;
					
					case 90:
						return 4054;
					
					case 91:
						return 4062;
					
					case 92:
						return 4070;
					
					case 93:
						return 4078;
					
					case 94:
						return 4086;
					
					case 95:
						return 4094;
					
					case 96:
						return 4102;
					
					case 97:
						return 4110;
					
					case 98:
						return 4118;
					
					case 99:
						return 4126;
					
					case 100:
						return 4134;
					
					case 101:
						return 4142;
					
					case 102:
						return 4150;
					
					case 103:
						return 4158;
					
					case 104:
						return 4166;
					
					case 105:
						return 4174;
					
					case 106:
						return 4182;
					
					case 107:
						return 4190;
					
					case 108:
						return 4198;
					
					case 109:
						return 4206;
					
					case 110:
						return 4214;
					
					case 111:
						return 4222;
					
					case 112:
						return 4230;
					
					case 113:
						return 4238;
					
					case 114:
						return 4246;
					
					case 115:
						return 4254;
					
					case 116:
						return 4262;
					
					case 117:
						return 4270;
					
					case 118:
						return 4278;
					
					case 119:
						return 4286;
					
					case 120:
						return 4294;
					
					case 121:
						return 4302;
					
					case 122:
						return 4310;
					
					case 123:
						return 4318;
					
					case 124:
						return 4326;
					
					case 125:
						return 4334;
					
					case 126:
						return 4342;
					
					case 127:
						return 4350;
					
					case 128:
						return 4358;
					
					case 129:
						return 4366;
					
					case 130:
						return 4374;
					
					case 131:
						return 4382;
					
					case 132:
						return 4390;
					
					case 133:
						return 4398;
					
					case 134:
						return 4406;
					
					case 135:
						return 4414;
					
					case 136:
						return 4422;
					
					case 137:
						return 4430;
					
					case 138:
						return 4438;
					
					case 139:
						return 4446;
					
					case 140:
						return 4454;
					
					case 141:
						return 4462;
					
					case 142:
						return 4470;
					
					case 143:
						return 4478;
					
					case 144:
						return 4486;
					
					case 145:
						return 4494;
					
					case 146:
						return 4502;
					
					case 147:
						return 4510;
					
					case 148:
						return 4518;
					
					case 149:
						return 4526;
					
					case 150:
						return 4534;
					
					case 151:
						return 4542;
					
					case 152:
						return 4550;
					
					case 153:
						return 4558;
					
					case 154:
						return 4566;
					
					case 155:
						return 4574;
					
					case 156:
						return 4582;
					
					case 157:
						return 4590;
					
					case 158:
						return 5483;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5932;
					
					case 160:
						return 5939;
					
					case 161:
						return 5946;
					
					case 162:
						return 5953;
					
					case 163:
						return 5960;
					
					case 164:
						return 5967;
					
					case 165:
						return 5974;
					
					case 166:
						return 5981;
					
					case 167:
						return 5988;
					
					case 168:
						return 5995;
					
					case 169:
						return 6002;
					
					case 170:
						return 6009;
					
					case 171:
						return 6016;
					
					case 172:
						return 6023;
					
					case 173:
						return 6030;
					
					case 174:
						return 6037;
					
					case 175:
						return 6044;
					
					case 176:
						return 6051;
					
					case 177:
						return 6058;
					
					case 178:
						return 6065;
					
					case 179:
						return 6072;
					
					case 180:
						return 6079;
					
					case 181:
						return 6086;
					
					case 182:
						return 6093;
					
					case 183:
						return 6100;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6177;
					
					case 185:
						return 6184;
					
					case 186:
						return 6191;
					
					case 187:
						return 6198;
					
					case 188:
						return 6205;
					
					case 189:
						return 6212;
					
					case 190:
						return 6219;
					
					case 191:
						return 6226;
					
					case 192:
						return 6233;
					
					case 193:
						return 6240;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6574;
					
					case 195:
						return 6581;
					
					case 196:
						return 6588;
					
					case 197:
						return 6595;
					
					case 198:
						return 6602;
					
					case 199:
						return 6609;
					
					case 200:
						return 6616;
					
					case 201:
						return 6623;
					
					case 202:
						return 6630;
					
					case 203:
						return 6637;
					
					case 204:
						return 6644;
					
					case 205:
						return 6651;
					
					case 206:
						return 6658;
					
					case 207:
						return 6665;
					
					case 208:
						return 6672;
					
					case 209:
						return 6679;
					
					case 210:
						return 6686;
					
					case 211:
						return 6693;
					
					case 212:
						return 6700;
					
					case 213:
						return 6707;
					
					case 214:
						return 6714;
					
					case 215:
						return 6721;
					
					case 216:
						return 6728;
					
					case 217:
						return 6735;
					
					case 218:
						return 6742;
					
					case 219:
						return 6749;
					
					case 220:
						return 6756;
					
					case 221:
						return 6763;
					
					case 222:
						return 6770;
					
					case 223:
						return 6777;
					
					case 224:
						return 6784;
					
					case 225:
						return 6791;
					
					case 226:
						return 6798;
					
					case 227:
						return 6805;
					
					case 228:
						return 6812;
					
					case 229:
						return 6819;
					
					case 230:
						return 6826;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7296;
					
					case 232:
						return 7303;
					
					case 233:
						return 7310;
					
					case 234:
						return 7317;
					
					case 235:
						return 7324;
					
					case 236:
						return 7331;
					
					case 237:
						return 7338;
					
					case 238:
						return 7345;
					
					case 239:
						return 7352;
					
					case 240:
						return 7359;
					
					case 241:
						return 7366;
					
					case 242:
						return 7373;
					
					case 243:
						return 7380;
					
					case 244:
						return 7387;
					
					case 245:
						return 7394;
					
					case 246:
						return 7401;
					
					case 247:
						return 7408;
					
					case 248:
						return 7415;
					
					case 249:
						return 7422;
					
					case 250:
						return 7429;
					
					case 251:
						return 7436;
					
					case 252:
						return 7443;
					
					case 253:
						return 7450;
					
					case 254:
						return 7457;
					
					case 255:
						return 7464;
					
					case 256:
						return 7471;
					
					case 257:
						return 7478;
					
					case 258:
						return 7485;
					
					case 259:
						return 7492;
					
					case 260:
						return 7499;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8019;
					
					case 262:
						return 8026;
					
					case 263:
						return 8033;
					
					case 264:
						return 8040;
					
					case 265:
						return 8047;
					
					case 266:
						return 8054;
					
					case 267:
						return 8061;
					
					case 268:
						return 8068;
					
					case 269:
						return 8075;
					
					case 270:
						return 8082;
					
					case 271:
						return 8543;
					
					case 272:
						return 8550;
					
					case 273:
						return 8557;
					
					case 274:
						return 8564;
					
					case 275:
						return 8571;
					
					case 276:
						return 8578;
					
					case 277:
						return 8585;
					
					case 278:
						return 8592;
					
					case 279:
						return 8599;
					
					case 280:
						return 8606;
					
					case 281:
						return 8990;
					
					case 282:
						return 8997;
					
					case 283:
						return 9004;
					
					case 284:
						return 9011;
					
					case 285:
						return 9018;
					
					case 286:
						return 9025;
					
					case 287:
						return 9032;
					
					case 288:
						return 9039;
					
					case 289:
						return 9046;
					
					case 290:
						return 9053;
					
					case 291:
						return 9060;
					
					case 292:
						return 9066;
					
					case 293:
						return 9072;
					
					case 294:
						return 9078;
					
					case 295:
						return 9085;
					
					case 296:
						return 9092;
					
					case 297:
						return 9099;
					
					case 298:
						return 9106;
					
					case 299:
						return 9113;
					
					case 300:
						return 9120;
					
					case 301:
						return 9127;
					
					case 302:
						return 9134;
					
					case 303:
						return 9141;
					
					case 304:
						return 9148;
					
					case 305:
						return 9154;
					
					case 306:
						return 9160;
					
					case 307:
						return 9641;
					
					case 308:
						return 9648;
					
					case 309:
						return 9655;
					
					case 310:
						return 9662;
					
					case 311:
						return 9669;
					
					case 312:
						return 9676;
					
					case 313:
						return 9683;
					
					case 314:
						return 9690;
					
					case 315:
						return 9697;
					
					case 316:
						return 9704;
					
					case 317:
						return 9925;
					
					case 318:
						return 9932;
					
					case 319:
						return 9939;
					
					case 320:
						return 9946;
					
					case 321:
						return 9953;
					
					case 322:
						return 9960;
					
					case 323:
						return 9967;
					
					case 324:
						return 9974;
					
					case 325:
						return 9981;
					
					case 326:
						return 9988;
					
					case 327:
						return 9995;
					
					case 328:
						return 10002;
					
					case 329:
						return 10009;
					
					case 330:
						return 10016;
					
					case 331:
						return 10023;
					
					case 332:
						return 10030;
					
					case 333:
						return 10037;
					
					case 334:
						return 10044;
					
					case 335:
						return 10051;
					
					case 336:
						return 10058;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10451;
					
					case 338:
						return 10458;
					
					case 339:
						return 10465;
					
					case 340:
						return 10472;
					
					case 341:
						return 10479;
					
					case 342:
						return 10486;
					
					case 343:
						return 10493;
					
					case 344:
						return 10500;
					
					case 345:
						return 10507;
					
					case 346:
						return 10514;
					
					case 347:
						return 10521;
					
					case 348:
						return 10527;
					
					case 349:
						return 10533;
					
					case 350:
						return 10539;
					
					case 351:
						return 10546;
					
					case 352:
						return 10553;
					
					case 353:
						return 10560;
					
					case 354:
						return 10567;
					
					case 355:
						return 10574;
					
					case 356:
						return 10581;
					
					case 357:
						return 10588;
					
					case 358:
						return 10595;
					
					case 359:
						return 10602;
					
					case 360:
						return 10609;
					
					case 361:
						return 10615;
					
					case 362:
						return 10621;
					
					default:
				}
				break;
			
			case 6:
				switch (iParam1)
				{
					case 0:
						return 1636;
					
					case 1:
						return 1643;
					
					case 2:
						return 1650;
					
					case 3:
						return 1657;
					
					case 4:
						return 1664;
					
					case 5:
						return 1671;
					
					case 6:
						return 1678;
					
					case 7:
						return 1685;
					
					case 8:
						return 1692;
					
					case 9:
						return 1699;
					
					case 13:
						return 1724;
					
					case 14:
						return 1803;
					
					case 15:
						return 1810;
					
					case 16:
						return 1817;
					
					case 17:
						return 1824;
					
					case 18:
						return 1831;
					
					case 19:
						return 1838;
					
					case 20:
						return 1845;
					
					case 21:
						return 1852;
					
					case 22:
						return 1859;
					
					case 26:
						return 2173;
					
					case 27:
						return 2180;
					
					case 28:
						return 2187;
					
					case 29:
						return 2194;
					
					case 30:
						return 2201;
					
					case 31:
						return 2208;
					
					case 32:
						return 2215;
					
					case 33:
						return 2222;
					
					case 34:
						return 2229;
					
					case 35:
						return 2236;
					
					case 39:
						return 2837;
					
					case 40:
						return 2844;
					
					case 41:
						return 2851;
					
					case 42:
						return 2858;
					
					case 43:
						return 2865;
					
					case 44:
						return 2872;
					
					case 45:
						return 2879;
					
					case 46:
						return 2886;
					
					case 47:
						return 2893;
					
					case 48:
						return 2900;
					
					case 52:
						return 2961;
					
					case 53:
						return 2968;
					
					case 54:
						return 2975;
					
					case 55:
						return 2982;
					
					case 56:
						return 2989;
					
					case 57:
						return 2996;
					
					case 58:
						return 3003;
					
					case 59:
						return 3010;
					
					case 60:
						return 3017;
					
					case 61:
						return 3024;
					
					case 65:
						return 3245;
					
					case 66:
						return 3253;
					
					case 67:
						return 3261;
					
					case 68:
						return 3269;
					
					case 69:
						return 3277;
					
					case 70:
						return 3285;
					
					case 71:
						return 3293;
					
					case 72:
						return 3301;
					
					case 73:
						return 3309;
					
					case 74:
						return 3317;
					
					case 75:
						return 3325;
					
					case 76:
						return 3333;
					
					case 77:
						return 3341;
					
					case 78:
						return 3349;
					
					case 79:
						return 3357;
					
					case 80:
						return 3365;
					
					case 81:
						return 3373;
					
					case 82:
						return 3381;
					
					case 83:
						return 3389;
					
					case 84:
						return 3397;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4041;
					
					case 89:
						return 4049;
					
					case 90:
						return 4057;
					
					case 91:
						return 4065;
					
					case 92:
						return 4073;
					
					case 93:
						return 4081;
					
					case 94:
						return 4089;
					
					case 95:
						return 4097;
					
					case 96:
						return 4105;
					
					case 97:
						return 4113;
					
					case 98:
						return 4121;
					
					case 99:
						return 4129;
					
					case 100:
						return 4137;
					
					case 101:
						return 4145;
					
					case 102:
						return 4153;
					
					case 103:
						return 4161;
					
					case 104:
						return 4169;
					
					case 105:
						return 4177;
					
					case 106:
						return 4185;
					
					case 107:
						return 4193;
					
					case 108:
						return 4201;
					
					case 109:
						return 4209;
					
					case 110:
						return 4217;
					
					case 111:
						return 4225;
					
					case 112:
						return 4233;
					
					case 113:
						return 4241;
					
					case 114:
						return 4249;
					
					case 115:
						return 4257;
					
					case 116:
						return 4265;
					
					case 117:
						return 4273;
					
					case 118:
						return 4281;
					
					case 119:
						return 4289;
					
					case 120:
						return 4297;
					
					case 121:
						return 4305;
					
					case 122:
						return 4313;
					
					case 123:
						return 4321;
					
					case 124:
						return 4329;
					
					case 125:
						return 4337;
					
					case 126:
						return 4345;
					
					case 127:
						return 4353;
					
					case 128:
						return 4361;
					
					case 129:
						return 4369;
					
					case 130:
						return 4377;
					
					case 131:
						return 4385;
					
					case 132:
						return 4393;
					
					case 133:
						return 4401;
					
					case 134:
						return 4409;
					
					case 135:
						return 4417;
					
					case 136:
						return 4425;
					
					case 137:
						return 4433;
					
					case 138:
						return 4441;
					
					case 139:
						return 4449;
					
					case 140:
						return 4457;
					
					case 141:
						return 4465;
					
					case 142:
						return 4473;
					
					case 143:
						return 4481;
					
					case 144:
						return 4489;
					
					case 145:
						return 4497;
					
					case 146:
						return 4505;
					
					case 147:
						return 4513;
					
					case 148:
						return 4521;
					
					case 149:
						return 4529;
					
					case 150:
						return 4537;
					
					case 151:
						return 4545;
					
					case 152:
						return 4553;
					
					case 153:
						return 4561;
					
					case 154:
						return 4569;
					
					case 155:
						return 4577;
					
					case 156:
						return 4585;
					
					case 157:
						return 4593;
					
					case 158:
						return 5486;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5934;
					
					case 160:
						return 5941;
					
					case 161:
						return 5948;
					
					case 162:
						return 5955;
					
					case 163:
						return 5962;
					
					case 164:
						return 5969;
					
					case 165:
						return 5976;
					
					case 166:
						return 5983;
					
					case 167:
						return 5990;
					
					case 168:
						return 5997;
					
					case 169:
						return 6004;
					
					case 170:
						return 6011;
					
					case 171:
						return 6018;
					
					case 172:
						return 6025;
					
					case 173:
						return 6032;
					
					case 174:
						return 6039;
					
					case 175:
						return 6046;
					
					case 176:
						return 6053;
					
					case 177:
						return 6060;
					
					case 178:
						return 6067;
					
					case 179:
						return 6074;
					
					case 180:
						return 6081;
					
					case 181:
						return 6088;
					
					case 182:
						return 6095;
					
					case 183:
						return 6102;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6179;
					
					case 185:
						return 6186;
					
					case 186:
						return 6193;
					
					case 187:
						return 6200;
					
					case 188:
						return 6207;
					
					case 189:
						return 6214;
					
					case 190:
						return 6221;
					
					case 191:
						return 6228;
					
					case 192:
						return 6235;
					
					case 193:
						return 6242;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6576;
					
					case 195:
						return 6583;
					
					case 196:
						return 6590;
					
					case 197:
						return 6597;
					
					case 198:
						return 6604;
					
					case 199:
						return 6611;
					
					case 200:
						return 6618;
					
					case 201:
						return 6625;
					
					case 202:
						return 6632;
					
					case 203:
						return 6639;
					
					case 204:
						return 6646;
					
					case 205:
						return 6653;
					
					case 206:
						return 6660;
					
					case 207:
						return 6667;
					
					case 208:
						return 6674;
					
					case 209:
						return 6681;
					
					case 210:
						return 6688;
					
					case 211:
						return 6695;
					
					case 212:
						return 6702;
					
					case 213:
						return 6709;
					
					case 214:
						return 6716;
					
					case 215:
						return 6723;
					
					case 216:
						return 6730;
					
					case 217:
						return 6737;
					
					case 218:
						return 6744;
					
					case 219:
						return 6751;
					
					case 220:
						return 6758;
					
					case 221:
						return 6765;
					
					case 222:
						return 6772;
					
					case 223:
						return 6779;
					
					case 224:
						return 6786;
					
					case 225:
						return 6793;
					
					case 226:
						return 6800;
					
					case 227:
						return 6807;
					
					case 228:
						return 6814;
					
					case 229:
						return 6821;
					
					case 230:
						return 6828;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7298;
					
					case 232:
						return 7305;
					
					case 233:
						return 7312;
					
					case 234:
						return 7319;
					
					case 235:
						return 7326;
					
					case 236:
						return 7333;
					
					case 237:
						return 7340;
					
					case 238:
						return 7347;
					
					case 239:
						return 7354;
					
					case 240:
						return 7361;
					
					case 241:
						return 7368;
					
					case 242:
						return 7375;
					
					case 243:
						return 7382;
					
					case 244:
						return 7389;
					
					case 245:
						return 7396;
					
					case 246:
						return 7403;
					
					case 247:
						return 7410;
					
					case 248:
						return 7417;
					
					case 249:
						return 7424;
					
					case 250:
						return 7431;
					
					case 251:
						return 7438;
					
					case 252:
						return 7445;
					
					case 253:
						return 7452;
					
					case 254:
						return 7459;
					
					case 255:
						return 7466;
					
					case 256:
						return 7473;
					
					case 257:
						return 7480;
					
					case 258:
						return 7487;
					
					case 259:
						return 7494;
					
					case 260:
						return 7501;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8021;
					
					case 262:
						return 8028;
					
					case 263:
						return 8035;
					
					case 264:
						return 8042;
					
					case 265:
						return 8049;
					
					case 266:
						return 8056;
					
					case 267:
						return 8063;
					
					case 268:
						return 8070;
					
					case 269:
						return 8077;
					
					case 270:
						return 8084;
					
					case 271:
						return 8545;
					
					case 272:
						return 8552;
					
					case 273:
						return 8559;
					
					case 274:
						return 8566;
					
					case 275:
						return 8573;
					
					case 276:
						return 8580;
					
					case 277:
						return 8587;
					
					case 278:
						return 8594;
					
					case 279:
						return 8601;
					
					case 280:
						return 8608;
					
					case 281:
						return 8992;
					
					case 282:
						return 8999;
					
					case 283:
						return 9006;
					
					case 284:
						return 9013;
					
					case 285:
						return 9020;
					
					case 286:
						return 9027;
					
					case 287:
						return 9034;
					
					case 288:
						return 9041;
					
					case 289:
						return 9048;
					
					case 290:
						return 9055;
					
					case 294:
						return 9080;
					
					case 295:
						return 9087;
					
					case 296:
						return 9094;
					
					case 297:
						return 9101;
					
					case 298:
						return 9108;
					
					case 299:
						return 9115;
					
					case 300:
						return 9122;
					
					case 301:
						return 9129;
					
					case 302:
						return 9136;
					
					case 303:
						return 9143;
					
					case 307:
						return 9643;
					
					case 308:
						return 9650;
					
					case 309:
						return 9657;
					
					case 310:
						return 9664;
					
					case 311:
						return 9671;
					
					case 312:
						return 9678;
					
					case 313:
						return 9685;
					
					case 314:
						return 9692;
					
					case 315:
						return 9699;
					
					case 316:
						return 9706;
					
					case 317:
						return 9927;
					
					case 318:
						return 9934;
					
					case 319:
						return 9941;
					
					case 320:
						return 9948;
					
					case 321:
						return 9955;
					
					case 322:
						return 9962;
					
					case 323:
						return 9969;
					
					case 324:
						return 9976;
					
					case 325:
						return 9983;
					
					case 326:
						return 9990;
					
					case 327:
						return 9997;
					
					case 328:
						return 10004;
					
					case 329:
						return 10011;
					
					case 330:
						return 10018;
					
					case 331:
						return 10025;
					
					case 332:
						return 10032;
					
					case 333:
						return 10039;
					
					case 334:
						return 10046;
					
					case 335:
						return 10053;
					
					case 336:
						return 10060;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10453;
					
					case 338:
						return 10460;
					
					case 339:
						return 10467;
					
					case 340:
						return 10474;
					
					case 341:
						return 10481;
					
					case 342:
						return 10488;
					
					case 343:
						return 10495;
					
					case 344:
						return 10502;
					
					case 345:
						return 10509;
					
					case 346:
						return 10516;
					
					case 350:
						return 10541;
					
					case 351:
						return 10548;
					
					case 352:
						return 10555;
					
					case 353:
						return 10562;
					
					case 354:
						return 10569;
					
					case 355:
						return 10576;
					
					case 356:
						return 10583;
					
					case 357:
						return 10590;
					
					case 358:
						return 10597;
					
					case 359:
						return 10604;
					
					default:
				}
				break;
			
			case 7:
				switch (iParam1)
				{
					case 0:
						return 1635;
					
					case 1:
						return 1642;
					
					case 2:
						return 1649;
					
					case 3:
						return 1656;
					
					case 4:
						return 1663;
					
					case 5:
						return 1670;
					
					case 6:
						return 1677;
					
					case 7:
						return 1684;
					
					case 8:
						return 1691;
					
					case 9:
						return 1698;
					
					case 10:
						return 1705;
					
					case 11:
						return 1711;
					
					case 12:
						return 1717;
					
					case 13:
						return 1723;
					
					case 14:
						return 1802;
					
					case 15:
						return 1809;
					
					case 16:
						return 1816;
					
					case 17:
						return 1823;
					
					case 18:
						return 1830;
					
					case 19:
						return 1837;
					
					case 20:
						return 1844;
					
					case 21:
						return 1851;
					
					case 22:
						return 1858;
					
					case 23:
						return 1865;
					
					case 24:
						return 1871;
					
					case 25:
						return 1877;
					
					case 26:
						return 2172;
					
					case 27:
						return 2179;
					
					case 28:
						return 2186;
					
					case 29:
						return 2193;
					
					case 30:
						return 2200;
					
					case 31:
						return 2207;
					
					case 32:
						return 2214;
					
					case 33:
						return 2221;
					
					case 34:
						return 2228;
					
					case 35:
						return 2235;
					
					case 36:
						return 2242;
					
					case 37:
						return 2248;
					
					case 38:
						return 2254;
					
					case 39:
						return 2836;
					
					case 40:
						return 2843;
					
					case 41:
						return 2850;
					
					case 42:
						return 2857;
					
					case 43:
						return 2864;
					
					case 44:
						return 2871;
					
					case 45:
						return 2878;
					
					case 46:
						return 2885;
					
					case 47:
						return 2892;
					
					case 48:
						return 2899;
					
					case 49:
						return 2906;
					
					case 50:
						return 2912;
					
					case 51:
						return 2918;
					
					case 52:
						return 2960;
					
					case 53:
						return 2967;
					
					case 54:
						return 2974;
					
					case 55:
						return 2981;
					
					case 56:
						return 2988;
					
					case 57:
						return 2995;
					
					case 58:
						return 3002;
					
					case 59:
						return 3009;
					
					case 60:
						return 3016;
					
					case 61:
						return 3023;
					
					case 62:
						return 3030;
					
					case 63:
						return 3036;
					
					case 64:
						return 3042;
					
					case 65:
						return 3243;
					
					case 66:
						return 3251;
					
					case 67:
						return 3259;
					
					case 68:
						return 3267;
					
					case 69:
						return 3275;
					
					case 70:
						return 3283;
					
					case 71:
						return 3291;
					
					case 72:
						return 3299;
					
					case 73:
						return 3307;
					
					case 74:
						return 3315;
					
					case 75:
						return 3323;
					
					case 76:
						return 3331;
					
					case 77:
						return 3340;
					
					case 78:
						return 3348;
					
					case 79:
						return 3355;
					
					case 80:
						return 3363;
					
					case 81:
						return 3371;
					
					case 82:
						return 3379;
					
					case 83:
						return 3387;
					
					case 84:
						return 3395;
					
					case 85:
						return 3403;
					
					case 86:
						return 3410;
					
					case 87:
						return 3417;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4039;
					
					case 89:
						return 4047;
					
					case 90:
						return 4055;
					
					case 91:
						return 4063;
					
					case 92:
						return 4071;
					
					case 93:
						return 4079;
					
					case 94:
						return 4087;
					
					case 95:
						return 4095;
					
					case 96:
						return 4103;
					
					case 97:
						return 4111;
					
					case 98:
						return 4119;
					
					case 99:
						return 4127;
					
					case 100:
						return 4136;
					
					case 101:
						return 4144;
					
					case 102:
						return 4151;
					
					case 103:
						return 4159;
					
					case 104:
						return 4167;
					
					case 105:
						return 4175;
					
					case 106:
						return 4183;
					
					case 107:
						return 4191;
					
					case 108:
						return 4199;
					
					case 109:
						return 4207;
					
					case 110:
						return 4215;
					
					case 111:
						return 4223;
					
					case 112:
						return 4231;
					
					case 113:
						return 4239;
					
					case 114:
						return 4247;
					
					case 115:
						return 4255;
					
					case 116:
						return 4263;
					
					case 117:
						return 4271;
					
					case 118:
						return 4279;
					
					case 119:
						return 4287;
					
					case 120:
						return 4296;
					
					case 121:
						return 4304;
					
					case 122:
						return 4311;
					
					case 123:
						return 4319;
					
					case 124:
						return 4327;
					
					case 125:
						return 4335;
					
					case 126:
						return 4343;
					
					case 127:
						return 4351;
					
					case 128:
						return 4359;
					
					case 129:
						return 4367;
					
					case 130:
						return 4375;
					
					case 131:
						return 4383;
					
					case 132:
						return 4391;
					
					case 133:
						return 4399;
					
					case 134:
						return 4407;
					
					case 135:
						return 4415;
					
					case 136:
						return 4423;
					
					case 137:
						return 4431;
					
					case 138:
						return 4439;
					
					case 139:
						return 4447;
					
					case 140:
						return 4456;
					
					case 141:
						return 4464;
					
					case 142:
						return 4471;
					
					case 143:
						return 4479;
					
					case 144:
						return 4487;
					
					case 145:
						return 4495;
					
					case 146:
						return 4503;
					
					case 147:
						return 4511;
					
					case 148:
						return 4519;
					
					case 149:
						return 4527;
					
					case 150:
						return 4535;
					
					case 151:
						return 4543;
					
					case 152:
						return 4551;
					
					case 153:
						return 4559;
					
					case 154:
						return 4567;
					
					case 155:
						return 4575;
					
					case 156:
						return 4583;
					
					case 157:
						return 4591;
					
					case 158:
						return 5484;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5933;
					
					case 160:
						return 5940;
					
					case 161:
						return 5947;
					
					case 162:
						return 5954;
					
					case 163:
						return 5961;
					
					case 164:
						return 5968;
					
					case 165:
						return 5975;
					
					case 166:
						return 5982;
					
					case 167:
						return 5989;
					
					case 168:
						return 5996;
					
					case 169:
						return 6003;
					
					case 170:
						return 6010;
					
					case 171:
						return 6017;
					
					case 172:
						return 6024;
					
					case 173:
						return 6031;
					
					case 174:
						return 6038;
					
					case 175:
						return 6045;
					
					case 176:
						return 6052;
					
					case 177:
						return 6059;
					
					case 178:
						return 6066;
					
					case 179:
						return 6073;
					
					case 180:
						return 6080;
					
					case 181:
						return 6087;
					
					case 182:
						return 6094;
					
					case 183:
						return 6101;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6178;
					
					case 185:
						return 6185;
					
					case 186:
						return 6192;
					
					case 187:
						return 6199;
					
					case 188:
						return 6206;
					
					case 189:
						return 6213;
					
					case 190:
						return 6220;
					
					case 191:
						return 6227;
					
					case 192:
						return 6234;
					
					case 193:
						return 6241;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6575;
					
					case 195:
						return 6582;
					
					case 196:
						return 6589;
					
					case 197:
						return 6596;
					
					case 198:
						return 6603;
					
					case 199:
						return 6610;
					
					case 200:
						return 6617;
					
					case 201:
						return 6624;
					
					case 202:
						return 6631;
					
					case 203:
						return 6638;
					
					case 204:
						return 6645;
					
					case 205:
						return 6652;
					
					case 206:
						return 6659;
					
					case 207:
						return 6666;
					
					case 208:
						return 6673;
					
					case 209:
						return 6680;
					
					case 210:
						return 6687;
					
					case 211:
						return 6694;
					
					case 212:
						return 6701;
					
					case 213:
						return 6708;
					
					case 214:
						return 6715;
					
					case 215:
						return 6722;
					
					case 216:
						return 6729;
					
					case 217:
						return 6736;
					
					case 218:
						return 6743;
					
					case 219:
						return 6750;
					
					case 220:
						return 6757;
					
					case 221:
						return 6764;
					
					case 222:
						return 6771;
					
					case 223:
						return 6778;
					
					case 224:
						return 6785;
					
					case 225:
						return 6792;
					
					case 226:
						return 6799;
					
					case 227:
						return 6806;
					
					case 228:
						return 6813;
					
					case 229:
						return 6820;
					
					case 230:
						return 6827;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7297;
					
					case 232:
						return 7304;
					
					case 233:
						return 7311;
					
					case 234:
						return 7318;
					
					case 235:
						return 7325;
					
					case 236:
						return 7332;
					
					case 237:
						return 7339;
					
					case 238:
						return 7346;
					
					case 239:
						return 7353;
					
					case 240:
						return 7360;
					
					case 241:
						return 7367;
					
					case 242:
						return 7374;
					
					case 243:
						return 7381;
					
					case 244:
						return 7388;
					
					case 245:
						return 7395;
					
					case 246:
						return 7402;
					
					case 247:
						return 7409;
					
					case 248:
						return 7416;
					
					case 249:
						return 7423;
					
					case 250:
						return 7430;
					
					case 251:
						return 7437;
					
					case 252:
						return 7444;
					
					case 253:
						return 7451;
					
					case 254:
						return 7458;
					
					case 255:
						return 7465;
					
					case 256:
						return 7472;
					
					case 257:
						return 7479;
					
					case 258:
						return 7486;
					
					case 259:
						return 7493;
					
					case 260:
						return 7500;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8020;
					
					case 262:
						return 8027;
					
					case 263:
						return 8034;
					
					case 264:
						return 8041;
					
					case 265:
						return 8048;
					
					case 266:
						return 8055;
					
					case 267:
						return 8062;
					
					case 268:
						return 8069;
					
					case 269:
						return 8076;
					
					case 270:
						return 8083;
					
					case 271:
						return 8544;
					
					case 272:
						return 8551;
					
					case 273:
						return 8558;
					
					case 274:
						return 8565;
					
					case 275:
						return 8572;
					
					case 276:
						return 8579;
					
					case 277:
						return 8586;
					
					case 278:
						return 8593;
					
					case 279:
						return 8600;
					
					case 280:
						return 8607;
					
					case 281:
						return 8991;
					
					case 282:
						return 8998;
					
					case 283:
						return 9005;
					
					case 284:
						return 9012;
					
					case 285:
						return 9019;
					
					case 286:
						return 9026;
					
					case 287:
						return 9033;
					
					case 288:
						return 9040;
					
					case 289:
						return 9047;
					
					case 290:
						return 9054;
					
					case 291:
						return 9061;
					
					case 292:
						return 9067;
					
					case 293:
						return 9073;
					
					case 294:
						return 9079;
					
					case 295:
						return 9086;
					
					case 296:
						return 9093;
					
					case 297:
						return 9100;
					
					case 298:
						return 9107;
					
					case 299:
						return 9114;
					
					case 300:
						return 9121;
					
					case 301:
						return 9128;
					
					case 302:
						return 9135;
					
					case 303:
						return 9142;
					
					case 304:
						return 9149;
					
					case 305:
						return 9155;
					
					case 306:
						return 9161;
					
					case 307:
						return 9642;
					
					case 308:
						return 9649;
					
					case 309:
						return 9656;
					
					case 310:
						return 9663;
					
					case 311:
						return 9670;
					
					case 312:
						return 9677;
					
					case 313:
						return 9684;
					
					case 314:
						return 9691;
					
					case 315:
						return 9698;
					
					case 316:
						return 9705;
					
					case 317:
						return 9926;
					
					case 318:
						return 9933;
					
					case 319:
						return 9940;
					
					case 320:
						return 9947;
					
					case 321:
						return 9954;
					
					case 322:
						return 9961;
					
					case 323:
						return 9968;
					
					case 324:
						return 9975;
					
					case 325:
						return 9982;
					
					case 326:
						return 9989;
					
					case 327:
						return 9996;
					
					case 328:
						return 10003;
					
					case 329:
						return 10010;
					
					case 330:
						return 10017;
					
					case 331:
						return 10024;
					
					case 332:
						return 10031;
					
					case 333:
						return 10038;
					
					case 334:
						return 10045;
					
					case 335:
						return 10052;
					
					case 336:
						return 10059;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10452;
					
					case 338:
						return 10459;
					
					case 339:
						return 10466;
					
					case 340:
						return 10473;
					
					case 341:
						return 10480;
					
					case 342:
						return 10487;
					
					case 343:
						return 10494;
					
					case 344:
						return 10501;
					
					case 345:
						return 10508;
					
					case 346:
						return 10515;
					
					case 347:
						return 10522;
					
					case 348:
						return 10528;
					
					case 349:
						return 10534;
					
					case 350:
						return 10540;
					
					case 351:
						return 10547;
					
					case 352:
						return 10554;
					
					case 353:
						return 10561;
					
					case 354:
						return 10568;
					
					case 355:
						return 10575;
					
					case 356:
						return 10582;
					
					case 357:
						return 10589;
					
					case 358:
						return 10596;
					
					case 359:
						return 10603;
					
					case 360:
						return 10610;
					
					case 361:
						return 10616;
					
					case 362:
						return 10622;
					
					default:
				}
				break;
			}
	}
	return 1630;
}

int func_373(int iParam0, int iParam1)//Position - 0x17F71
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return 11434;
				
				case 364:
					return 11441;
				
				case 365:
					return 11448;
				
				case 366:
					return 11455;
				
				case 367:
					return 11462;
				
				case 368:
					return 11469;
				
				case 369:
					return 11476;
				
				case 370:
					return 11483;
				
				case 371:
					return 11490;
				
				case 372:
					return 11497;
				
				case 373:
					return 11504;
				
				case 374:
					return 11511;
				
				case 375:
					return 11518;
				
				case 376:
					return 11525;
				
				case 377:
					return 11532;
				
				case 378:
					return 11539;
				
				case 379:
					return 11546;
				
				case 380:
					return 11553;
				
				case 381:
					return 11560;
				
				case 382:
					return 11567;
				
				case 383:
					return 11574;
				
				case 384:
					return 11581;
				
				case 385:
					return 11588;
				
				case 386:
					return 11595;
				
				case 387:
					return 11602;
				
				case 388:
					return 11609;
				
				case 389:
					return 11616;
				
				case 390:
					return 11623;
				
				case 391:
					return 11630;
				
				case 392:
					return 11637;
				
				case 393:
					return 11644;
				
				case 394:
					return 11651;
				
				case 395:
					return 11658;
				
				case 396:
					return 11665;
				
				case 397:
					return 11672;
				
				case 398:
					return 11679;
				
				case 399:
					return 11686;
				
				case 400:
					return 11693;
				
				case 401:
					return 11700;
				
				case 402:
					return 11707;
				
				case 403:
					return 11714;
				
				case 404:
					return 11721;
				
				case 405:
					return 11728;
				
				case 406:
					return 11735;
				
				case 407:
					return 11742;
				
				case 408:
					return 11749;
				
				case 409:
					return 11756;
				
				case 410:
					return 11763;
				
				case 411:
					return 11770;
				
				case 412:
					return 11777;
				
				case 413:
					return 11784;
				
				case 414:
					return 11791;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 363:
					return 11435;
				
				case 364:
					return 11442;
				
				case 365:
					return 11449;
				
				case 366:
					return 11456;
				
				case 367:
					return 11463;
				
				case 368:
					return 11470;
				
				case 369:
					return 11477;
				
				case 370:
					return 11484;
				
				case 371:
					return 11491;
				
				case 372:
					return 11498;
				
				case 373:
					return 11505;
				
				case 374:
					return 11512;
				
				case 375:
					return 11519;
				
				case 376:
					return 11526;
				
				case 377:
					return 11533;
				
				case 378:
					return 11540;
				
				case 379:
					return 11547;
				
				case 380:
					return 11554;
				
				case 381:
					return 11561;
				
				case 382:
					return 11568;
				
				case 383:
					return 11575;
				
				case 384:
					return 11582;
				
				case 385:
					return 11589;
				
				case 386:
					return 11596;
				
				case 387:
					return 11603;
				
				case 388:
					return 11610;
				
				case 389:
					return 11617;
				
				case 390:
					return 11624;
				
				case 391:
					return 11631;
				
				case 392:
					return 11638;
				
				case 393:
					return 11645;
				
				case 394:
					return 11652;
				
				case 395:
					return 11659;
				
				case 396:
					return 11666;
				
				case 397:
					return 11673;
				
				case 398:
					return 11680;
				
				case 399:
					return 11687;
				
				case 400:
					return 11694;
				
				case 401:
					return 11701;
				
				case 402:
					return 11708;
				
				case 403:
					return 11715;
				
				case 404:
					return 11722;
				
				case 405:
					return 11729;
				
				case 406:
					return 11736;
				
				case 407:
					return 11743;
				
				case 408:
					return 11750;
				
				case 409:
					return 11757;
				
				case 410:
					return 11764;
				
				case 411:
					return 11771;
				
				case 412:
					return 11778;
				
				case 413:
					return 11785;
				
				case 414:
					return 11792;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 363:
					return 11436;
				
				case 364:
					return 11443;
				
				case 365:
					return 11450;
				
				case 366:
					return 11457;
				
				case 367:
					return 11464;
				
				case 368:
					return 11471;
				
				case 369:
					return 11478;
				
				case 370:
					return 11485;
				
				case 371:
					return 11492;
				
				case 372:
					return 11499;
				
				case 373:
					return 11506;
				
				case 374:
					return 11513;
				
				case 375:
					return 11520;
				
				case 376:
					return 11527;
				
				case 377:
					return 11534;
				
				case 378:
					return 11541;
				
				case 379:
					return 11548;
				
				case 380:
					return 11555;
				
				case 381:
					return 11562;
				
				case 382:
					return 11569;
				
				case 383:
					return 11576;
				
				case 384:
					return 11583;
				
				case 385:
					return 11590;
				
				case 386:
					return 11597;
				
				case 387:
					return 11604;
				
				case 388:
					return 11611;
				
				case 389:
					return 11618;
				
				case 390:
					return 11625;
				
				case 391:
					return 11632;
				
				case 392:
					return 11639;
				
				case 393:
					return 11646;
				
				case 394:
					return 11653;
				
				case 395:
					return 11660;
				
				case 396:
					return 11667;
				
				case 397:
					return 11674;
				
				case 398:
					return 11681;
				
				case 399:
					return 11688;
				
				case 400:
					return 11695;
				
				case 401:
					return 11702;
				
				case 402:
					return 11709;
				
				case 403:
					return 11716;
				
				case 404:
					return 11723;
				
				case 405:
					return 11730;
				
				case 406:
					return 11737;
				
				case 407:
					return 11744;
				
				case 408:
					return 11751;
				
				case 409:
					return 11758;
				
				case 410:
					return 11765;
				
				case 411:
					return 11772;
				
				case 412:
					return 11779;
				
				case 413:
					return 11786;
				
				case 414:
					return 11793;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 363:
					return 11437;
				
				case 364:
					return 11444;
				
				case 365:
					return 11451;
				
				case 366:
					return 11458;
				
				case 367:
					return 11465;
				
				case 368:
					return 11472;
				
				case 369:
					return 11479;
				
				case 370:
					return 11486;
				
				case 371:
					return 11493;
				
				case 372:
					return 11500;
				
				case 373:
					return 11507;
				
				case 374:
					return 11514;
				
				case 375:
					return 11521;
				
				case 376:
					return 11528;
				
				case 377:
					return 11535;
				
				case 378:
					return 11542;
				
				case 379:
					return 11549;
				
				case 380:
					return 11556;
				
				case 381:
					return 11563;
				
				case 382:
					return 11570;
				
				case 383:
					return 11577;
				
				case 384:
					return 11584;
				
				case 385:
					return 11591;
				
				case 386:
					return 11598;
				
				case 387:
					return 11605;
				
				case 388:
					return 11612;
				
				case 389:
					return 11619;
				
				case 390:
					return 11626;
				
				case 391:
					return 11633;
				
				case 392:
					return 11640;
				
				case 393:
					return 11647;
				
				case 394:
					return 11654;
				
				case 395:
					return 11661;
				
				case 396:
					return 11668;
				
				case 397:
					return 11675;
				
				case 398:
					return 11682;
				
				case 399:
					return 11689;
				
				case 400:
					return 11696;
				
				case 401:
					return 11703;
				
				case 402:
					return 11710;
				
				case 403:
					return 11717;
				
				case 404:
					return 11724;
				
				case 405:
					return 11731;
				
				case 406:
					return 11738;
				
				case 407:
					return 11745;
				
				case 408:
					return 11752;
				
				case 409:
					return 11759;
				
				case 410:
					return 11766;
				
				case 411:
					return 11773;
				
				case 412:
					return 11780;
				
				case 413:
					return 11787;
				
				case 414:
					return 11794;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 363:
					return 11438;
				
				case 364:
					return 11445;
				
				case 365:
					return 11452;
				
				case 366:
					return 11459;
				
				case 367:
					return 11466;
				
				case 368:
					return 11473;
				
				case 369:
					return 11480;
				
				case 370:
					return 11487;
				
				case 371:
					return 11494;
				
				case 372:
					return 11501;
				
				case 373:
					return 11508;
				
				case 374:
					return 11515;
				
				case 375:
					return 11522;
				
				case 376:
					return 11529;
				
				case 377:
					return 11536;
				
				case 378:
					return 11543;
				
				case 379:
					return 11550;
				
				case 380:
					return 11557;
				
				case 381:
					return 11564;
				
				case 382:
					return 11571;
				
				case 383:
					return 11578;
				
				case 384:
					return 11585;
				
				case 385:
					return 11592;
				
				case 386:
					return 11599;
				
				case 387:
					return 11606;
				
				case 388:
					return 11613;
				
				case 389:
					return 11620;
				
				case 390:
					return 11627;
				
				case 391:
					return 11634;
				
				case 392:
					return 11641;
				
				case 393:
					return 11648;
				
				case 394:
					return 11655;
				
				case 395:
					return 11662;
				
				case 396:
					return 11669;
				
				case 397:
					return 11676;
				
				case 398:
					return 11683;
				
				case 399:
					return 11690;
				
				case 400:
					return 11697;
				
				case 401:
					return 11704;
				
				case 402:
					return 11711;
				
				case 403:
					return 11718;
				
				case 404:
					return 11725;
				
				case 405:
					return 11732;
				
				case 406:
					return 11739;
				
				case 407:
					return 11746;
				
				case 408:
					return 11753;
				
				case 409:
					return 11760;
				
				case 410:
					return 11767;
				
				case 411:
					return 11774;
				
				case 412:
					return 11781;
				
				case 413:
					return 11788;
				
				case 414:
					return 11795;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 363:
					return 11440;
				
				case 364:
					return 11447;
				
				case 365:
					return 11454;
				
				case 366:
					return 11461;
				
				case 367:
					return 11468;
				
				case 368:
					return 11475;
				
				case 369:
					return 11482;
				
				case 370:
					return 11489;
				
				case 371:
					return 11496;
				
				case 372:
					return 11503;
				
				case 373:
					return 11510;
				
				case 374:
					return 11517;
				
				case 375:
					return 11524;
				
				case 376:
					return 11531;
				
				case 377:
					return 11538;
				
				case 378:
					return 11545;
				
				case 379:
					return 11552;
				
				case 380:
					return 11559;
				
				case 381:
					return 11566;
				
				case 382:
					return 11573;
				
				case 383:
					return 11580;
				
				case 384:
					return 11587;
				
				case 385:
					return 11594;
				
				case 386:
					return 11601;
				
				case 387:
					return 11608;
				
				case 388:
					return 11615;
				
				case 389:
					return 11622;
				
				case 390:
					return 11629;
				
				case 391:
					return 11636;
				
				case 392:
					return 11643;
				
				case 393:
					return 11650;
				
				case 394:
					return 11657;
				
				case 395:
					return 11664;
				
				case 396:
					return 11671;
				
				case 397:
					return 11678;
				
				case 398:
					return 11685;
				
				case 399:
					return 11692;
				
				case 400:
					return 11699;
				
				case 401:
					return 11706;
				
				case 402:
					return 11713;
				
				case 403:
					return 11720;
				
				case 404:
					return 11727;
				
				case 405:
					return 11734;
				
				case 406:
					return 11741;
				
				case 407:
					return 11748;
				
				case 408:
					return 11755;
				
				case 409:
					return 11762;
				
				case 410:
					return 11769;
				
				case 411:
					return 11776;
				
				case 412:
					return 11783;
				
				case 413:
					return 11790;
				
				case 414:
					return 11797;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 363:
					return 11439;
				
				case 364:
					return 11446;
				
				case 365:
					return 11453;
				
				case 366:
					return 11460;
				
				case 367:
					return 11467;
				
				case 368:
					return 11474;
				
				case 369:
					return 11481;
				
				case 370:
					return 11488;
				
				case 371:
					return 11495;
				
				case 372:
					return 11502;
				
				case 373:
					return 11509;
				
				case 374:
					return 11516;
				
				case 375:
					return 11523;
				
				case 376:
					return 11530;
				
				case 377:
					return 11537;
				
				case 378:
					return 11544;
				
				case 379:
					return 11551;
				
				case 380:
					return 11558;
				
				case 381:
					return 11565;
				
				case 382:
					return 11572;
				
				case 383:
					return 11579;
				
				case 384:
					return 11586;
				
				case 385:
					return 11593;
				
				case 386:
					return 11600;
				
				case 387:
					return 11607;
				
				case 388:
					return 11614;
				
				case 389:
					return 11621;
				
				case 390:
					return 11628;
				
				case 391:
					return 11635;
				
				case 392:
					return 11642;
				
				case 393:
					return 11649;
				
				case 394:
					return 11656;
				
				case 395:
					return 11663;
				
				case 396:
					return 11670;
				
				case 397:
					return 11677;
				
				case 398:
					return 11684;
				
				case 399:
					return 11691;
				
				case 400:
					return 11698;
				
				case 401:
					return 11705;
				
				case 402:
					return 11712;
				
				case 403:
					return 11719;
				
				case 404:
					return 11726;
				
				case 405:
					return 11733;
				
				case 406:
					return 11740;
				
				case 407:
					return 11747;
				
				case 408:
					return 11754;
				
				case 409:
					return 11761;
				
				case 410:
					return 11768;
				
				case 411:
					return 11775;
				
				case 412:
					return 11782;
				
				case 413:
					return 11789;
				
				case 414:
					return 11796;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_374(int iParam0, bool bParam1)//Position - 0x1915A
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_375(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return (41004 + (iParam0 - 363));
	}
	return 0;
}

int func_375(int iParam0)//Position - 0x19423
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
		
		case 26:
			return 337;
			break;
		
		case 27:
			return 350;
			break;
		
		case 28:
			return 363;
			break;
		
		case 29:
			return 413;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_384(iParam0);
		return func_383(iVar0);
	}
	return (func_376(iParam0, -1, 1) * iParam0 + 1);
}

int func_376(int iParam0, int iParam1, bool bParam2)//Position - 0x195BF
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_379(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_378(iParam1))
			{
				return 0;
			}
			else if (func_377(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 == 129)
			{
				return 50;
			}
			else if (iParam1 <= 130 && iParam1 > 0)
			{
				if (Global_1312228[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312228[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312228[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
		
		case 29:
			return 50;
			break;
	}
	return 0;
}

int func_377(int iParam0, int iParam1)//Position - 0x19886
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x19963
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_379(int iParam0, bool bParam1, bool bParam2)//Position - 0x19992
{
	if (bParam2)
	{
		return func_380(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_380(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_380(int iParam0, bool bParam1)//Position - 0x19A6D
{
	if (Global_1853822 != func_99())
	{
		if (!func_382(Global_1853822))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853822)
			{
				if (BitTest(Global_2657704[Global_1853822 /*463*/].f_199, 24) || func_381(Global_1853822))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2657704[iParam0 /*463*/].f_199, 24);
}

int func_381(int iParam0)//Position - 0x19AD3
{
	if (iParam0 != func_99())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_199, 9);
	}
	return 0;
}

int func_382(int iParam0)//Position - 0x19AF6
{
	if (iParam0 != func_99())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_387, 2);
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x19B1F
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_384(int iParam0)//Position - 0x19B5C
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_385(int iParam0)//Position - 0x19B82
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_375(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((41056 + iParam0) - 363);
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x19E0B
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_375(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((40952 + iParam0) - 363);
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x1A094
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_375(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((40900 + iParam0) - 363);
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x1A31D
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_375(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return (39444 + ((iParam0 - 363) * iVar0));
	}
	return 0;
}

int func_389(int iParam0)//Position - 0x1A5EC
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

int func_390(int iParam0, int iParam1)//Position - 0x1A6B7
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_375(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
		else if (iParam1 >= 363 && iParam1 <= 414)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (39288 + (iParam1 - 363) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (39289 + (iParam1 - 363) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (39290 + (iParam1 - 363) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_375(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_375(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_375(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		iVar0 = (36948 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 363) * (1456 - 1411)));
	}
	return iVar0;
}

int func_391(var uParam0, bool bParam1)//Position - 0x1BDCB
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = Global_2359296[func_194() /*5568*/].f_593.f_62;
	if ((*uParam0 == Global_1586488[iVar0 /*142*/].f_66 && uParam0->f_36) && uParam0->f_35)
	{
		Global_1586488[iVar0 /*142*/].f_1 = { uParam0->f_28 };
		Global_1586488[iVar0 /*142*/] = uParam0->f_32;
		if (func_392(uParam0->f_1, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1586488[iVar0 /*142*/].f_77), 13);
			Global_1586488[iVar0 /*142*/].f_5 = iVar6;
			Global_1586488[iVar0 /*142*/].f_7 = iVar7;
			Global_1586488[iVar0 /*142*/].f_138 = iVar1;
		}
		if (func_392(uParam0->f_2, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1586488[iVar0 /*142*/].f_77), 12);
			Global_1586488[iVar0 /*142*/].f_6 = iVar6;
			Global_1586488[iVar0 /*142*/].f_139 = iVar1;
		}
		if (uParam0->f_18)
		{
			MISC::SET_BIT(&(Global_1586488[iVar0 /*142*/].f_77), 9);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1586488[iVar0 /*142*/].f_77), 9);
		}
		Global_1586488[iVar0 /*142*/].f_62 = uParam0->f_6;
		Global_1586488[iVar0 /*142*/].f_63 = uParam0->f_7;
		Global_1586488[iVar0 /*142*/].f_64 = uParam0->f_8;
		if (uParam0->f_5 == -1)
		{
			Global_1586488[iVar0 /*142*/].f_65 = 0;
		}
		else
		{
			Global_1586488[iVar0 /*142*/].f_65 = uParam0->f_5;
		}
		if (uParam0->f_13 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[4] = uParam0->f_13;
		}
		if (uParam0->f_9 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[11] = uParam0->f_9;
		}
		if (uParam0->f_10 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[12] = uParam0->f_10;
		}
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
		{
			Global_1586488[iVar0 /*142*/].f_9[14] = uParam0->f_16;
		}
		if (uParam0->f_14 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[15] = uParam0->f_14;
		}
		if (uParam0->f_15 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[16] = uParam0->f_15;
		}
		if (uParam0->f_11 != -1 && func_218(uParam0->f_12))
		{
			Global_1586488[iVar0 /*142*/].f_9[23] = uParam0->f_11;
			Global_1586488[iVar0 /*142*/].f_69 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[18] = uParam0->f_19;
		}
		if (uParam0->f_17 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[22] = uParam0->f_17;
		}
		if (uParam0->f_20 != -1)
		{
			Global_1586488[iVar0 /*142*/].f_9[20] = uParam0->f_20;
		}
		if (func_468(iVar0, &iVar8))
		{
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1586488[iVar0 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1586488[iVar0 /*142*/].f_103), 26);
			}
		}
		return 1;
	}
	return 0;
}

bool func_392(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1C09B
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL" /* GXT: Brushed Black Steel */, 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME" /* GXT: Chrome */, 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW" /* GXT: Race Yellow */, 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN" /* GXT: Racing Green */, 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE" /* GXT: Ultra Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN" /* GXT: Chocolate Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE" /* GXT: Carbon Black */, 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE" /* GXT: Graphite */, 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK" /* GXT: Anthracite Black */, 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL" /* GXT: Black Steel */, 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER" /* GXT: Dark Steel */, 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER" /* GXT: Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER" /* GXT: Bluish Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL" /* GXT: Rolled Steel */, 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER" /* GXT: Shadow Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER" /* GXT: Stone Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER" /* GXT: Midnight Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL" /* GXT: Cast Iron Silver */, 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED" /* GXT: Torino Red */, 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED" /* GXT: Formula Red */, 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED" /* GXT: Lava Red */, 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED" /* GXT: Blaze Red */, 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED" /* GXT: Grace Red */, 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED" /* GXT: Garnet Red */, 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED" /* GXT: Sunset Red */, 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED" /* GXT: Cabernet Red */, 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED" /* GXT: Wine Red */, 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED" /* GXT: Candy Red */, 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK" /* GXT: Hot Pink */, 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK" /* GXT: Pfister Pink */, 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK" /* GXT: Salmon Pink */, 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE" /* GXT: Sunrise Orange */, 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE" /* GXT: Bright Orange */, 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD" /* GXT: Gold */, 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE" /* GXT: Bronze */, 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW" /* GXT: Dew Yellow */, 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN" /* GXT: Dark Green */, 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN" /* GXT: Sea Green */, 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN" /* GXT: Olive Green */, 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN" /* GXT: Bright Green */, 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN" /* GXT: Gasoline Green */, 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN" /* GXT: Lime Green */, 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE" /* GXT: Galaxy Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE" /* GXT: Saxon Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE" /* GXT: Mariner Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE" /* GXT: Harbor Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE" /* GXT: Diamond Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE" /* GXT: Surf Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE" /* GXT: Nautical Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE" /* GXT: Racing Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE" /* GXT: Light Blue */, 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN" /* GXT: Bison Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN" /* GXT: Creek Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN" /* GXT: Feltzer Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN" /* GXT: Maple Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN" /* GXT: Beechwood Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN" /* GXT: Sienna Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN" /* GXT: Saddle Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN" /* GXT: Moss Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN" /* GXT: Woodbeech Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN" /* GXT: Straw Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN" /* GXT: Sandy Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN" /* GXT: Bleached Brown */, 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE" /* GXT: Schafter Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE" /* GXT: Spinnaker Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE" /* GXT: Bright Purple */, 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM" /* GXT: Cream */, 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE" /* GXT: Frost White */, 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK" /* GXT: Black */, 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY" /* GXT: Gray */, 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY" /* GXT: Light Gray */, 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE" /* GXT: Ice White */, 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE" /* GXT: Blue */, 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE" /* GXT: Dark Blue */, 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE" /* GXT: Midnight Blue */, 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE" /* GXT: Midnight Purple */, 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple" /* GXT: Schafter Purple */, 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED" /* GXT: Red */, 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED" /* GXT: Dark Red */, 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE" /* GXT: Orange */, 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW" /* GXT: Yellow */, 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN" /* GXT: Green */, 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR" /* GXT: Forest Green */, 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL" /* GXT: Foliage Green */, 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD" /* GXT: Olive Drab */, 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT" /* GXT: Dark Earth */, 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT" /* GXT: Desert Tan */, 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL" /* GXT: Brushed Steel */, 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM" /* GXT: Brushed Aluminum */, 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P" /* GXT: Pure Gold */, 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S" /* GXT: Brushed Gold */, 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

bool func_393(var uParam0, int iParam1)//Position - 0x1D58D
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
	var uVar9;
	int iVar10;
	char* sVar11;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = 0;
	iVar2 = Global_1586488[iParam1 /*142*/].f_5;
	iVar3 = Global_1586488[iParam1 /*142*/].f_6;
	iVar4 = Global_1586488[iParam1 /*142*/].f_7;
	iVar5 = Global_1586488[iParam1 /*142*/].f_65;
	if (iVar5 == -1)
	{
		iVar5 = 0;
	}
	if (uParam0->f_5 == -1)
	{
		uParam0->f_5 = 0;
	}
	iVar16 = 0;
	if (func_406(uParam0->f_1, &iVar6, &iVar7))
	{
		if ((iVar6 != -1 && iVar7 != -1) && (iVar6 != iVar2 || iVar7 != iVar4))
		{
			func_392(uParam0->f_1, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_397(&sVar11, iVar15, 1, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (func_406(uParam0->f_2, &iVar8, &uVar9))
	{
		if (iVar8 != -1 && iVar8 != iVar3)
		{
			func_392(uParam0->f_2, &sVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_397(&sVar11, iVar15, 0, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (uParam0->f_32 != Global_1586488[iParam1 /*142*/])
	{
		if (uParam0->f_32 == 3)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 4)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 2)
		{
			iVar0 += 300;
		}
		else if (uParam0->f_32 == 1)
		{
			iVar0 += 600;
		}
	}
	if (!BitTest(Global_1586488[iParam1 /*142*/].f_77, 9))
	{
		if (uParam0->f_18)
		{
			iVar0 += 25000;
		}
	}
	iVar17 = Global_1586488[iParam1 /*142*/].f_62;
	iVar18 = Global_1586488[iParam1 /*142*/].f_63;
	iVar19 = Global_1586488[iParam1 /*142*/].f_64;
	if ((uParam0->f_6 != iVar17 || uParam0->f_7 != iVar18) || uParam0->f_8 != iVar19)
	{
		switch (func_394(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				iVar0 += 1500;
				break;
			
			case 2:
				iVar0 += 5000;
				break;
			
			case 3:
				iVar0 += 10000;
				break;
			
			case 4:
				iVar0 += 12500;
				break;
			
			case 6:
				iVar0 += 15000;
				break;
			
			case 8:
				iVar0 += 20000;
				break;
			
			case 5:
				iVar0 += 14000;
				break;
			
			case 7:
				iVar0 += 17500;
				break;
			
			case 9:
				iVar0 = (iVar0 + Global_262145.f_8297 /* Tunable: DLC_HIPSTER_CAR_MOD_PINK_TIRE_SMOKE */);
				break;
			
			case 10:
				iVar0 = (iVar0 + Global_262145.f_8298 /* Tunable: DLC_HIPSTER_CAR_MOD_BROWN_TIRE_SMOKE */);
				break;
			
			case 11:
				iVar0 = (iVar0 + Global_262145.f_8451 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_PATRIOT_TIRE_SMOKE */);
				break;
			}
	}
	if (uParam0->f_5 != iVar5)
	{
		if (uParam0->f_5 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_5 == 1)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_5 == 2)
		{
			iVar0 += 3500;
		}
		else if (uParam0->f_5 == 3)
		{
			iVar0 += 1500;
		}
		else if (uParam0->f_5 == 5)
		{
			iVar0 = (iVar0 + Global_262145.f_8292 /* Tunable: DLC_HIPSTER_CAR_MOD_PURE_BLACK */);
		}
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[11];
	if (uParam0->f_9 != iVar1 && uParam0->f_9 != -1)
	{
		if (uParam0->f_9 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_9 == 1)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_9 == 2)
		{
			iVar0 += 2500;
		}
		else if (uParam0->f_9 == 3)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_9 == 4)
		{
			iVar0 += 6700;
		}
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[12];
	if (uParam0->f_10 != iVar1 && uParam0->f_10 != -1)
	{
		if (uParam0->f_10 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_10 == 1)
		{
			iVar0 += 4000;
		}
		else if (uParam0->f_10 == 2)
		{
			iVar0 += 5400;
		}
		else if (uParam0->f_10 == 3)
		{
			iVar0 += 7000;
		}
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[4];
	if (uParam0->f_13 != iVar1 && uParam0->f_13 != -1)
	{
		if (uParam0->f_13 == 0)
		{
			iVar0 += 260;
		}
		else if (uParam0->f_13 == 1)
		{
			iVar0 += 750;
		}
		else if (uParam0->f_13 == 2)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_13 == 3)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_13 == 4)
		{
			iVar0 += 9550;
		}
		else if (uParam0->f_13 == 5)
		{
			iVar0 += 9750;
		}
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[23];
	if (uParam0->f_11 != iVar1 && uParam0->f_11 != -1)
	{
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[14];
	if (uParam0->f_16 != iVar1 && uParam0->f_16 != -1)
	{
		if (uParam0->f_16 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_16 == 1)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_16 == 2)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_16 == 3)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_16 == 4)
		{
			iVar0 += 10000;
		}
		else if (uParam0->f_16 == 5)
		{
			iVar0 += 12500;
		}
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[16];
	if (uParam0->f_15 != iVar1 && uParam0->f_15 != -1)
	{
		if (uParam0->f_15 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_15 == 1)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_15 == 2)
		{
			iVar0 += 6000;
		}
		else if (uParam0->f_15 == 3)
		{
			iVar0 += 9600;
		}
		else if (uParam0->f_15 == 4)
		{
			iVar0 += 16800;
		}
		else if (uParam0->f_15 == 5)
		{
			iVar0 += 24000;
		}
	}
	iVar1 = Global_1586488[iParam1 /*142*/].f_9[15];
	if (uParam0->f_14 != iVar1 && uParam0->f_14 != -1)
	{
		if (uParam0->f_14 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_14 == 1)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_14 == 2)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_14 == 3)
		{
			iVar0 += 3400;
		}
		else if (uParam0->f_14 == 4)
		{
			iVar0 += 4400;
		}
	}
	if (uParam0->f_17 != -1)
	{
		if (uParam0->f_17 != 1 && Global_1586488[iParam1 /*142*/].f_9[22] > 0)
		{
			iVar0 += 100;
		}
		else if (uParam0->f_17 == 1 && Global_1586488[iParam1 /*142*/].f_9[22] <= 0)
		{
			iVar0 += 2000;
		}
	}
	if (uParam0->f_19 != -1)
	{
		if (uParam0->f_19 != 1 && Global_1586488[iParam1 /*142*/].f_9[18] > 0)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_19 == 1 && Global_1586488[iParam1 /*142*/].f_9[18] <= 0)
		{
			iVar0 += 24000;
		}
	}
	return uParam0->f_27 >= iVar0;
}

int func_394(int iParam0, int iParam1, int iParam2)//Position - 0x1DCD5
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1576220 && iParam1 == Global_1576221) && iParam2 == Global_1576222)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_396())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_395())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_395()//Position - 0x1DF03
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_396()//Position - 0x1DF14
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_397(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1DF25
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
			iVar0 = func_405(sParam0);
			if (func_402())
			{
				if ((bParam4 || bParam5) || bParam6)
				{
				}
				else
				{
					iVar0 = 0;
				}
			}
			break;
		
		case 4:
			iVar0 = func_401(sParam0);
			break;
		
		case 0:
			iVar0 = func_400(sParam0);
			break;
		
		case 3:
			iVar0 = func_399(sParam0);
			break;
		
		case 5:
			iVar0 = 25000;
			break;
		
		case 2:
			iVar0 = func_398(sParam0);
			break;
	}
	if (iParam3 && !bParam2)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 2f));
	}
	if (bParam4)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15309 /* Tunable: TRIMCOLORSUPERMOD */));
	}
	if (bParam5)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15310 /* Tunable: LIGHTCOLORSUPERMOD */));
	}
	if (bParam6)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15311 /* Tunable: ACCENTCOLORSUPERMOD */));
	}
	return iVar0;
}

int func_398(char* sParam0)//Position - 0x1E024
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2520;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 2430;
			break;
		
		case joaat("GRAPHITE"):
			return 2370;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 2490;
			break;
		
		case joaat("BLACK_STEEL"):
			return 2580;
			break;
		
		case joaat("DARK_SILVER"):
			return 2340;
			break;
		
		case joaat("SILVER"):
			return 2460;
			break;
		
		case joaat("BLUE_SILVER"):
			return 3200;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 2340;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 2580;
			break;
		
		case joaat("STONE_SILVER"):
			return 2610;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 2700;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 2640;
			break;
		
		case joaat("RED"):
			return 4200;
			break;
		
		case joaat("TORINO_RED"):
			return 15250;
			break;
		
		case joaat("FORMULA_RED"):
			return 15000;
			break;
		
		case joaat("LAVA_RED"):
			return 19550;
			break;
		
		case joaat("BLAZE_RED"):
			return 5400;
			break;
		
		case joaat("GRACE_RED"):
			return 2850;
			break;
		
		case joaat("GARNET_RED"):
			return 2670;
			break;
		
		case joaat("SUNSET_RED"):
			return 18100;
			break;
		
		case joaat("CABERNET_RED"):
			return 16240;
			break;
		
		case joaat("WINE_RED"):
			return 8200;
			break;
		
		case joaat("CANDY_RED"):
			return 19800;
			break;
		
		case joaat("HOT PINK"):
			return 20000;
			break;
		
		case joaat("PINK"):
			return 19200;
			break;
		
		case joaat("SALMON_PINK"):
			return 17600;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 15800;
			break;
		
		case joaat("ORANGE"):
			return 15480;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 15620;
			break;
		
		case joaat("GOLD"):
			return 3500;
			break;
		
		case joaat("BRONZE"):
			return 3450;
			break;
		
		case joaat("YELLOW"):
			return 15590;
			break;
		
		case joaat("RACE_YELLOW"):
			return 15860;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 16000;
			break;
		
		case joaat("DARK_GREEN"):
			return 2610;
			break;
		
		case joaat("RACING_GREEN"):
			return 15760;
			break;
		
		case joaat("SEA_GREEN"):
			return 2850;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 2550;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 15970;
			break;
		
		case joaat("PETROL_GREEN"):
			return 16850;
			break;
		
		case joaat("LIME_GREEN"):
			return 20000;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 7500;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 3030;
			break;
		
		case joaat("DARK_BLUE"):
			return 2790;
			break;
		
		case joaat("SAXON_BLUE"):
			return 2700;
			break;
		
		case joaat("BLUE"):
			return 3840;
			break;
		
		case joaat("MARINER_BLUE"):
			return 2610;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 2520;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 15700;
			break;
		
		case joaat("SURF_BLUE"):
			return 3900;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 3610;
			break;
		
		case joaat("RACING_BLUE"):
			return 15340;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 18750;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 3450;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 6300;
			break;
		
		case joaat("BISON_BROWN"):
			return 5800;
			break;
		
		case joaat("CREEK_BROWN"):
			return 2340;
			break;
		
		case joaat("UMBER_BROWN"):
			return 2430;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 2550;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 2700;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 2760;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 2490;
			break;
		
		case joaat("MOSS_BROWN"):
			return 2580;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 2700;
			break;
		
		case joaat("STRAW_BROWN"):
			return 2640;
			break;
		
		case joaat("SANDY_BROWN"):
			return 2610;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 2340;
			break;
		
		case joaat("PURPLE"):
			return 5650;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 10000;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 9400;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 20000;
			break;
		
		case joaat("CREAM"):
			return 2340;
			break;
		
		case joaat("WHITE"):
			return 2430;
			break;
		
		case joaat("FROST_WHITE"):
			return 2610;
			break;
	}
	return 0;
}

int func_399(char* sParam0)//Position - 0x1E4BC
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 2200;
			break;
		
		case joaat("GREY"):
			return 2050;
			break;
		
		case joaat("LIGHT_GREY"):
			return 2000;
			break;
		
		case joaat("WHITE"):
			return 2120;
			break;
		
		case joaat("BLUE"):
			return 14250;
			break;
		
		case joaat("DARK_BLUE"):
			return 2150;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 10000;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 13750;
			break;
		
		case joaat("PURPLE"):
			return 17000;
			break;
		
		case joaat("RED"):
			return 12500;
			break;
		
		case joaat("DARK_RED"):
			return 15000;
			break;
		
		case joaat("ORANGE"):
			return 14000;
			break;
		
		case joaat("YELLOW"):
			return 11600;
			break;
		
		case joaat("LIME_GREEN"):
			return 17500;
			break;
		
		case joaat("GREEN"):
			return 2130;
			break;
		
		case joaat("MATTE_FOR"):
			return 2150;
			break;
		
		case joaat("MATTE_FOIL"):
			return 2100;
			break;
		
		case joaat("MATTE_OD"):
			return 2250;
			break;
		
		case joaat("MATTE_DIRT"):
			return 2240;
			break;
		
		case joaat("MATTE_DESERT"):
			return 2170;
			break;
	}
	return 0;
}

int func_400(char* sParam0)//Position - 0x1E61B
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1400;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 1350;
			break;
		
		case joaat("GRAPHITE"):
			return 1320;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 1380;
			break;
		
		case joaat("BLACK_STEEL"):
			return 1440;
			break;
		
		case joaat("DARK_SILVER"):
			return 1300;
			break;
		
		case joaat("SILVER"):
			return 1370;
			break;
		
		case joaat("BLUE_SILVER"):
			return 1340;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 1300;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 1430;
			break;
		
		case joaat("STONE_SILVER"):
			return 1450;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 1500;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 1470;
			break;
		
		case joaat("RED"):
			return 1530;
			break;
		
		case joaat("TORINO_RED"):
			return 9260;
			break;
		
		case joaat("FORMULA_RED"):
			return 8890;
			break;
		
		case joaat("LAVA_RED"):
			return 14500;
			break;
		
		case joaat("BLAZE_RED"):
			return 5000;
			break;
		
		case joaat("GRACE_RED"):
			return 1590;
			break;
		
		case joaat("GARNET_RED"):
			return 1480;
			break;
		
		case joaat("SUNSET_RED"):
			return 13250;
			break;
		
		case joaat("CABERNET_RED"):
			return 12000;
			break;
		
		case joaat("WINE_RED"):
			return 13000;
			break;
		
		case joaat("CANDY_RED"):
			return 14750;
			break;
		
		case joaat("HOT PINK"):
			return 15000;
			break;
		
		case joaat("PINK"):
			return 13750;
			break;
		
		case joaat("SALMON_PINK"):
			return 13000;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 11000;
			break;
		
		case joaat("ORANGE"):
			return 7500;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 9000;
			break;
		
		case joaat("GOLD"):
			return 1650;
			break;
		
		case joaat("BRONZE"):
			return 1550;
			break;
		
		case joaat("YELLOW"):
			return 8500;
			break;
		
		case joaat("RACE_YELLOW"):
			return 11500;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 12000;
			break;
		
		case joaat("DARK_GREEN"):
			return 1450;
			break;
		
		case joaat("RACING_GREEN"):
			return 10500;
			break;
		
		case joaat("SEA_GREEN"):
			return 1580;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 1420;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 12000;
			break;
		
		case joaat("PETROL_GREEN"):
			return 13000;
			break;
		
		case joaat("LIME_GREEN"):
			return 15000;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 12250;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 1690;
			break;
		
		case joaat("DARK_BLUE"):
			return 1550;
			break;
		
		case joaat("SAXON_BLUE"):
			return 1500;
			break;
		
		case joaat("BLUE"):
			return 1430;
			break;
		
		case joaat("MARINER_BLUE"):
			return 1450;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 1400;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 10890;
			break;
		
		case joaat("SURF_BLUE"):
			return 1530;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 1480;
			break;
		
		case joaat("RACING_BLUE"):
			return 7500;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 13750;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 1350;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 11250;
			break;
		
		case joaat("BISON_BROWN"):
			return 10000;
			break;
		
		case joaat("CREEK_BROWN"):
			return 1300;
			break;
		
		case joaat("UMBER_BROWN"):
			return 1350;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 1420;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 1500;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 1530;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 1380;
			break;
		
		case joaat("MOSS_BROWN"):
			return 1430;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 1500;
			break;
		
		case joaat("STRAW_BROWN"):
			return 1470;
			break;
		
		case joaat("SANDY_BROWN"):
			return 1450;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 1300;
			break;
		
		case joaat("PURPLE"):
			return 7500;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 14250;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 13750;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 15000;
			break;
		
		case joaat("CREAM"):
			return 1300;
			break;
		
		case joaat("WHITE"):
			return 1350;
			break;
		
		case joaat("FROST_WHITE"):
			return 1450;
			break;
	}
	return 0;
}

int func_401(char* sParam0)//Position - 0x1EAB3
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BR_STEEL"):
			return 12500;
			break;
		
		case joaat("BR BLACK_STEEL"):
			return 11500;
			break;
		
		case joaat("BR_ALUMINIUM"):
			return 10250;
			break;
		
		case joaat("GOLD_P"):
			return Global_262145.f_8402 /* Tunable: HIPSTER_VEHICLE_PURE_GOLD_METAL_RESPRAY */;
			break;
		
		case joaat("GOLD_S"):
			return Global_262145.f_8403 /* Tunable: HIPSTER_VEHICLE_BRUSHED_GOLD_METAL_RESPRAY */;
			break;
	}
	return 0;
}

int func_402()//Position - 0x1EB39
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_99())
	{
		return 0;
	}
	if (!func_403(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

int func_403(int iParam0)//Position - 0x1EB88
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_404(int iParam0)//Position - 0x1EBCF
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

int func_405(char* sParam0)//Position - 0x1F083
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 840;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 810;
			break;
		
		case joaat("GRAPHITE"):
			return 790;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 830;
			break;
		
		case joaat("BLACK_STEEL"):
			return 860;
			break;
		
		case joaat("DARK_SILVER"):
			return 780;
			break;
		
		case joaat("SILVER"):
			return 820;
			break;
		
		case joaat("BLUE_SILVER"):
			return 800;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 780;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 860;
			break;
		
		case joaat("STONE_SILVER"):
			return 870;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 900;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 880;
			break;
		
		case joaat("RED"):
			return 920;
			break;
		
		case joaat("TORINO_RED"):
			return 5600;
			break;
		
		case joaat("FORMULA_RED"):
			return 5200;
			break;
		
		case joaat("LAVA_RED"):
			return 11600;
			break;
		
		case joaat("BLAZE_RED"):
			return 3800;
			break;
		
		case joaat("GRACE_RED"):
			return 950;
			break;
		
		case joaat("GARNET_RED"):
			return 890;
			break;
		
		case joaat("SUNSET_RED"):
			return 10600;
			break;
		
		case joaat("CABERNET_RED"):
			return 9600;
			break;
		
		case joaat("WINE_RED"):
			return 10400;
			break;
		
		case joaat("CANDY_RED"):
			return 12150;
			break;
		
		case joaat("HOT PINK"):
			return 12500;
			break;
		
		case joaat("PINK"):
			return 11000;
			break;
		
		case joaat("SALMON_PINK"):
			return 10400;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 8800;
			break;
		
		case joaat("ORANGE"):
			return 4500;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 5400;
			break;
		
		case joaat("GOLD"):
			return 990;
			break;
		
		case joaat("BRONZE"):
			return 930;
			break;
		
		case joaat("YELLOW"):
			return 5100;
			break;
		
		case joaat("RACE_YELLOW"):
			return 9200;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 9600;
			break;
		
		case joaat("DARK_GREEN"):
			return 870;
			break;
		
		case joaat("RACING_GREEN"):
			return 8400;
			break;
		
		case joaat("SEA_GREEN"):
			return 950;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 850;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 9600;
			break;
		
		case joaat("PETROL_GREEN"):
			return 10400;
			break;
		
		case joaat("LIME_GREEN"):
			return 12500;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 9800;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 1010;
			break;
		
		case joaat("DARK_BLUE"):
			return 930;
			break;
		
		case joaat("SAXON_BLUE"):
			return 900;
			break;
		
		case joaat("BLUE"):
			return 860;
			break;
		
		case joaat("MARINER_BLUE"):
			return 870;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 840;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 8650;
			break;
		
		case joaat("SURF_BLUE"):
			return 920;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 890;
			break;
		
		case joaat("RACING_BLUE"):
			return 4500;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 11000;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 810;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 9050;
			break;
		
		case joaat("BISON_BROWN"):
			return 8000;
			break;
		
		case joaat("CREEK_BROWN"):
			return 780;
			break;
		
		case joaat("UMBER_BROWN"):
			return 810;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 850;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 900;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 920;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 830;
			break;
		
		case joaat("MOSS_BROWN"):
			return 860;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 900;
			break;
		
		case joaat("STRAW_BROWN"):
			return 880;
			break;
		
		case joaat("SANDY_BROWN"):
			return 870;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 780;
			break;
		
		case joaat("PURPLE"):
			return 4500;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 11400;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 11000;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 12500;
			break;
		
		case joaat("CREAM"):
			return 780;
			break;
		
		case joaat("WHITE"):
			return 810;
			break;
		
		case joaat("FROST_WHITE"):
			return 870;
			break;
	}
	return 0;
}

bool func_406(int iParam0, var uParam1, var uParam2)//Position - 0x1F51B
{
	var uVar0;
	char* sVar1;
	
	func_392(iParam0, &sVar1, &uVar0, uParam1, uParam2);
	return (*uParam1 != -1 && *uParam2 != -1);
}

bool func_407(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1F541
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_293(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_408(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F56A
{
	if (bParam1)
	{
		if (func_101(iParam0))
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

int func_409(int iParam0, int iParam1)//Position - 0x1F59C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	var uVar7;
	var uVar8;
	int iVar9;
	
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	bVar1 = false;
	while ((iParam1 == -1 || iParam1 == iVar0) && func_392(iVar0, &sVar3, &iVar2, &uVar7, &uVar8))
	{
		bVar1 = true;
		iVar9 = func_418(&sVar3);
		if (iVar2 == 0)
		{
			if (func_410(0, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 1)
		{
			if (func_410(1, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 2)
		{
			if (func_410(3, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 3)
		{
			if (func_410(4, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 4)
		{
			if (func_410(5, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return -1;
	}
	return iParam1;
}

int func_410(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1F6BC
{
	int iVar0;
	
	if (func_417(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_416(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam3))
		{
			case joaat("phantom3"):
			case joaat("hauler2"):
			case joaat("trailerlarge"):
			case joaat("avenger"):
			case joaat("avenger3"):
			case joaat("riot2"):
			case joaat("chernobog"):
			case joaat("khanjali"):
			case joaat("barrage"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("terbyte"):
			case joaat("oppressor2"):
			case joaat("speedo4"):
			case joaat("rcbandito"):
			case joaat("minitank"):
			case joaat("surfer3"):
			case joaat("youga3"):
			case joaat("journey2"):
				return 1;
				break;
			
			default:
				if (func_415(ENTITY::GET_ENTITY_MODEL(iParam3)) || func_210(ENTITY::GET_ENTITY_MODEL(iParam3)))
				{
					return 1;
				}
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam3)))
				{
					return 1;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		if (iParam1 == 32 || iParam1 == 91)
		{
			return func_133(func_414(PLAYER::PLAYER_ID(), 1), 0) >= 100;
		}
	}
	iVar0 = func_413(iParam0, iParam1, bParam2);
	if (iVar0 != 0)
	{
		return func_411(iParam0, iVar0);
	}
	return 1;
}

int func_411(int iParam0, int iParam1)//Position - 0x1F818
{
	switch (iParam1)
	{
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 166:
		case 167:
		case 168:
		case 169:
		case 137:
			if (func_133(func_414(PLAYER::PLAYER_ID(), 1), 0) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 148:
		case 149:
		case 150:
		case 151:
			if (func_47(38, -1) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 152:
		case 153:
		case 154:
			if (func_49(154, -1) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_49(161, -1) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 159:
		case 160:
		case 161:
			if (func_49(162, -1) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
			if (func_49(819, -1) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 133:
			return 1;
			break;
		
		case 134:
			return 1;
			break;
		
		case 135:
			if (func_47(51, -1) >= 1 || func_47(52, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 170:
			if (func_133(func_414(PLAYER::PLAYER_ID(), 1), 0) >= func_412(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 136:
			if (func_47(58, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_412(int iParam0, int iParam1)//Position - 0x1FA4B
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_413(int iParam0, int iParam1, bool bParam2)//Position - 0x1FC89
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
				{
					return 134;
				}
				else
				{
					return 169;
				}
				break;
			
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
				break;
			
			case 70:
			case 72:
			case 43:
			case 44:
			case 79:
				return 137;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
				{
					return 133;
				}
				else
				{
					return 166;
				}
				break;
			}
	}
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 167;
				}
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 168;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
				break;
			
			case 32:
			case 91:
				return 170;
				break;
			}
	}
	switch (iParam1)
	{
		case 58:
			return 148;
			break;
		
		case 44:
			return 149;
			break;
		
		case 55:
			return 150;
			break;
		
		case 25:
			return 151;
			break;
		
		case 29:
			return 152;
			break;
		
		case 85:
			return 153;
			break;
		
		case 43:
			return 154;
			break;
		
		case 23:
			return 155;
			break;
		
		case 38:
			return 156;
			break;
		
		case 71:
			return 157;
			break;
		
		case 26:
			return 158;
			break;
		
		case 24:
			return 159;
			break;
		
		case 42:
			return 160;
			break;
		
		case 18:
			return 161;
			break;
		
		case 62:
			return 162;
			break;
		
		case 12:
			return 163;
			break;
		
		case 32:
			return 164;
			break;
		
		case 84:
			return 165;
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
					break;
				
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
					break;
				
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
					break;
				
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
					break;
				
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
					break;
				
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
					break;
				
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
					break;
				
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
					break;
				
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
					break;
				
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
					break;
			}
			break;
	}
	return 0;
}

int func_414(int iParam0, bool bParam1)//Position - 0x2017A
{
	if (bParam1)
	{
	}
	return func_137(iParam0);
}

int func_415(int iParam0)//Position - 0x2018D
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_416(int iParam0)//Position - 0x201E6
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)//Position - 0x2022D
{
	if (iParam0 != func_99())
	{
		if (func_403(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_418(char* sParam0)//Position - 0x20262
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("BLACK"):
			return 1;
			break;
		
		case joaat("BLACK_GRAPHITE"):
			return 2;
			break;
		
		case joaat("GRAPHITE"):
			return 3;
			break;
		
		case joaat("ANTHR_BLACK"):
			return 4;
			break;
		
		case joaat("BLACK_STEEL"):
			return 5;
			break;
		
		case joaat("DARK_SILVER"):
			return 6;
			break;
		
		case joaat("SILVER_STEEL"):
			return 7;
			break;
		
		case joaat("SILVER"):
			return 8;
			break;
		
		case joaat("BLUE_SILVER"):
			return 9;
			break;
		
		case joaat("ROLLED_STEEL"):
			return 10;
			break;
		
		case joaat("SHADOW_SILVER"):
			return 11;
			break;
		
		case joaat("STONE_SILVER"):
			return 12;
			break;
		
		case joaat("MIDNIGHT_SILVER"):
			return 13;
			break;
		
		case joaat("CAST_IRON_SIL"):
			return 14;
			break;
		
		case joaat("RED"):
			return 15;
			break;
		
		case joaat("TORINO_RED"):
			return 16;
			break;
		
		case joaat("FORMULA_RED"):
			return 17;
			break;
		
		case joaat("LAVA_RED"):
			return 18;
			break;
		
		case joaat("BLAZE_RED"):
			return 19;
			break;
		
		case joaat("GRACE_RED"):
			return 20;
			break;
		
		case joaat("GARNET_RED"):
			return 21;
			break;
		
		case joaat("SUNSET_RED"):
			return 22;
			break;
		
		case joaat("WINE_RED"):
			return 23;
			break;
		
		case joaat("CABERNET_RED"):
			return 24;
			break;
		
		case joaat("CANDY_RED"):
			return 25;
			break;
		
		case joaat("HOT PINK"):
			return 26;
			break;
		
		case joaat("PINK"):
			return 27;
			break;
		
		case joaat("SALMON_PINK"):
			return 28;
			break;
		
		case joaat("SUNRISE_ORANGE"):
			return 29;
			break;
		
		case joaat("ORANGE"):
			return 30;
			break;
		
		case joaat("BRIGHT_ORANGE"):
			return 31;
			break;
		
		case joaat("GOLD"):
			return 32;
			break;
		
		case joaat("BRONZE"):
			return 33;
			break;
		
		case joaat("YELLOW"):
			return 34;
			break;
		
		case joaat("RACE_YELLOW"):
			return 35;
			break;
		
		case joaat("RACE_YELLOW1"):
			return 36;
			break;
		
		case joaat("DARK_GREEN"):
			return 37;
			break;
		
		case joaat("RACING_GREEN"):
			return 38;
			break;
		
		case joaat("SEA_GREEN"):
			return 39;
			break;
		
		case joaat("OLIVE_GREEN"):
			return 40;
			break;
		
		case joaat("BRIGHT_GREEN"):
			return 41;
			break;
		
		case joaat("PETROL_GREEN"):
			return 42;
			break;
		
		case joaat("LIME_GREEN"):
			return 43;
			break;
		
		case joaat("MIDNIGHT_BLUE"):
			return 44;
			break;
		
		case joaat("GALAXY_BLUE"):
			return 45;
			break;
		
		case joaat("DARK_BLUE"):
			return 46;
			break;
		
		case joaat("SAXON_BLUE"):
			return 47;
			break;
		
		case joaat("BLUE"):
			return 48;
			break;
		
		case joaat("MARINER_BLUE"):
			return 49;
			break;
		
		case joaat("HARBOR_BLUE"):
			return 50;
			break;
		
		case joaat("DIAMOND_BLUE"):
			return 51;
			break;
		
		case joaat("SURF_BLUE"):
			return 52;
			break;
		
		case joaat("NAUTICAL_BLUE"):
			return 53;
			break;
		
		case joaat("RACING_BLUE"):
			return 54;
			break;
		
		case joaat("ULTRA_BLUE"):
			return 55;
			break;
		
		case joaat("LIGHT_BLUE"):
			return 56;
			break;
		
		case joaat("CHOCOLATE_BROWN"):
			return 57;
			break;
		
		case joaat("BISON_BROWN"):
			return 58;
			break;
		
		case joaat("CREEK_BROWN"):
			return 59;
			break;
		
		case joaat("UMBER_BROWN"):
			return 60;
			break;
		
		case joaat("MAPLE_BROWN"):
			return 61;
			break;
		
		case joaat("BEECHWOOD_BROWN"):
			return 62;
			break;
		
		case joaat("SIENNA_BROWN"):
			return 63;
			break;
		
		case joaat("SADDLE_BROWN"):
			return 64;
			break;
		
		case joaat("MOSS_BROWN"):
			return 65;
			break;
		
		case joaat("WOODBEECH_BROWN"):
			return 66;
			break;
		
		case joaat("STRAW_BROWN"):
			return 67;
			break;
		
		case joaat("SANDY_BROWN"):
			return 68;
			break;
		
		case joaat("BLEECHED_BROWN"):
			return 69;
			break;
		
		case joaat("PURPLE"):
			return 70;
			break;
		
		case joaat("SPIN_PURPLE"):
			return 71;
			break;
		
		case joaat("MIGHT_PURPLE"):
			return 72;
			break;
		
		case joaat("BRIGHT_PURPLE"):
			return 73;
			break;
		
		case joaat("CREAM"):
			return 74;
			break;
		
		case joaat("WHITE"):
			return 75;
			break;
		
		case joaat("FROST_WHITE"):
			return 76;
			break;
		
		case joaat("GREY"):
			return 77;
			break;
		
		case joaat("LIGHT_GREY"):
			return 78;
			break;
		
		case joaat("DARK_RED"):
			return 79;
			break;
		
		case joaat("GREEN"):
			return 80;
			break;
		
		case joaat("BR_STEEL"):
			return 81;
			break;
		
		case joaat("BR BLACK_STEEL"):
			return 82;
			break;
		
		case joaat("BR_ALUMINIUM"):
			return 83;
			break;
		
		case joaat("CHROME"):
			return 84;
			break;
		
		case joaat("FLUR_YELLOW"):
			return 85;
			break;
		
		case joaat("MATTE_OD"):
			return 86;
			break;
		
		case joaat("MATTE_FOR"):
			return 87;
			break;
		
		case joaat("MATTE_FOIL"):
			return 88;
			break;
		
		case joaat("MATTE_DESERT"):
			return 89;
			break;
		
		case joaat("MATTE_DIRT"):
			return 90;
			break;
		
		case joaat("GOLD_S"):
			return 91;
			break;
		
		case joaat("GOLD_P"):
			return 32;
			break;
	}
	return 0;
}

void func_419(int* iParam0)//Position - 0x20796
{
	*iParam0 = 0;
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_420(5, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_420(6, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_420(7, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_420(8, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_420(29, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_420(30, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_420(31, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_420(32, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_420(33, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_420(81, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_420(51, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
	if (func_420(61, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 13);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 14);
	}
	if (func_420(34, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 15);
	}
	if (func_420(35, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 16);
	}
	if (func_420(36, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 17);
	}
	if (func_420(37, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (func_395())
	{
		MISC::SET_BIT(iParam0, 19);
	}
}

int func_420(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2091F
{
	int iVar0;
	
	if (func_455(iParam1, iParam3))
	{
		return 1;
	}
	if (func_454())
	{
		return 1;
	}
	if (func_453(iParam1, iParam3) && func_417(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113810.f_2366.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam2);
		}
		if (func_452(iParam1, iParam3))
		{
			if (iVar0 == joaat("phantom3") || iVar0 == joaat("hauler2"))
			{
				return 1;
			}
			else if (iVar0 == joaat("trailerlarge"))
			{
				if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
				{
					return 1;
				}
			}
		}
		if (func_451(iParam1, iParam3))
		{
			if (iVar0 == joaat("brickade2") || iVar0 == joaat("manchez3"))
			{
				return 1;
			}
		}
		if (func_450(iParam1, iParam3))
		{
			if (iVar0 == joaat("avenger") || iVar0 == joaat("avenger3"))
			{
				return 1;
			}
		}
		if (func_449(iParam1, iParam3))
		{
			if (iVar0 == joaat("oppressor2"))
			{
				return 1;
			}
		}
		if (func_448(iParam1, iParam3))
		{
			return 1;
		}
		if (func_447(iParam1, iParam3))
		{
			if (iVar0 == joaat("vigilante"))
			{
				if (iParam0 == 85 || iParam0 == 86)
				{
					return 1;
				}
			}
		}
		switch (iVar0)
		{
			case joaat("monster3"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator"):
			case joaat("dominator2"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("slamvan4"):
			case joaat("imperator"):
			case joaat("zr380"):
			case joaat("cerberus"):
			case joaat("scarab"):
			case joaat("brutus"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("cerberus2"):
			case joaat("scarab2"):
			case joaat("brutus2"):
			case joaat("cerberus3"):
			case joaat("scarab3"):
			case joaat("brutus3"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("rcbandito"):
				return 1;
				break;
		}
		if (((iParam0 == 85 || iParam0 == 86) || iParam0 == 87) || iParam0 == 88)
		{
			if (func_426(iParam2) || func_425(iVar0))
			{
				return 1;
			}
		}
		if (iParam0 == 77 || iParam0 == 78)
		{
			if (iVar0 == joaat("thruster"))
			{
				return 1;
			}
		}
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
		{
			if (iVar0 == joaat("oppressor2"))
			{
				return 1;
			}
		}
		if (((iParam0 == 72 || iParam0 == 73) || iParam0 == 74) || iParam0 == 75)
		{
			if (iVar0 == joaat("barrage") || func_425(iVar0))
			{
				return 1;
			}
		}
		if ((iParam0 == 21 || iParam0 == 22) || iParam0 == 23)
		{
			if (func_425(iVar0))
			{
				return 1;
			}
		}
		else if (iParam0 == 95 || iParam0 == 96)
		{
			if (func_425(iVar0) || func_209(iVar0))
			{
				return 1;
			}
		}
		if ((((((iParam0 == 17 || iParam0 == 18) || iParam0 == 19) || iParam0 == 20) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
		{
			if (func_425(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_85() == 0)
	{
		return func_421(iParam0, -1);
	}
	return 1;
}

var func_421(int iParam0, int iParam1)//Position - 0x20D34
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_422(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_28(iVar1));
}

var func_422(var uParam0, int iParam1)//Position - 0x20D53
{
	var uVar0;
	
	uVar0 = func_49(func_423(uParam0), iParam1);
	return uVar0;
}

int func_423(var uParam0)//Position - 0x20D6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_31(iVar0);
	if ((func_85() == 0 || func_424() == 0) || (func_85() == 999 && func_424() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 730;
				break;
			
			case 1:
				return 731;
				break;
			
			case 2:
				return 732;
				break;
			
			case 3:
				return 733;
				break;
			
			case 4:
				return 734;
				break;
			
			case 5:
				return 735;
				break;
			
			case 6:
				return 736;
				break;
		}
	}
	return 14385;
}

int func_424()//Position - 0x20E25
{
	return Global_32284;
}

int func_425(int iParam0)//Position - 0x20E30
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0)//Position - 0x20E72
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (func_436(iParam0, 0))
	{
		return 1;
	}
	if (func_434(PLAYER::PLAYER_ID()) && ((((!func_431(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel1"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("openwheel2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("formula2"))))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("oppressor2")))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("thruster")))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (!func_427(iParam0))
			{
				return 1;
			}
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Thruster"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Thruster") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (!func_427(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x20FAA
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_429(iParam0)) || func_428(iVar0))
		{
			return 1;
		}
		switch (iVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x21021
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("brickade"):
		case joaat("dune"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("boxville5"):
			return 1;
		
		default:
	}
	return 0;
}

int func_429(int iParam0)//Position - 0x21071
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_430(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
		
		case joaat("brickade2"):
			if (func_416(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("journey2"):
			return 1;
			break;
	}
	return 0;
}

int func_430(int iParam0)//Position - 0x21139
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_431(int iParam0)//Position - 0x21180
{
	bool bVar0;
	
	if (iParam0 == joaat("oppressor2"))
	{
		return 0;
	}
	bVar0 = false;
	if ((iParam0 == joaat("riot2") || iParam0 == joaat("chernobog")) || iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_34153 /* Tunable: -1259888294 */)
		{
			bVar0 = true;
		}
	}
	if ((((!func_433(PLAYER::PLAYER_ID()) && iParam0 != joaat("thruster")) && iParam0 != joaat("avenger")) && iParam0 != func_432(1)) && !bVar0)
	{
		return 0;
	}
	return 1;
}

int func_432(bool bParam0)//Position - 0x21211
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_433(int iParam0)//Position - 0x2122B
{
	if (iParam0 != func_99())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_307, 2);
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x21251
{
	if (iParam0 == func_99())
	{
		return 0;
	}
	if (func_435(iParam0) && Global_2657704[iParam0 /*463*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x2128A
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_436(int iParam0, bool bParam1)//Position - 0x212D1
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_438(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2794162.f_304 == iParam0)
				{
					return 1;
				}
				else if (func_437(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_437(int iParam0)//Position - 0x2132C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2672524.f_221[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_438(int iParam0, int iParam1)//Position - 0x21365
{
	if (iParam1 == 0)
	{
		if (func_217(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_446();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return func_445();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return func_445();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return func_445();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return func_445();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return func_445();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_444();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */)
			{
				return func_443();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				return func_443();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */)
			{
				return func_443();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */)
			{
				return func_443();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */)
			{
				return func_443();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				return func_443();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				return func_443();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_21280 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				return func_442();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_21281 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				return func_442();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_441();
			break;
		
		case joaat("glendale"):
			if (func_441() || func_440())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_441();
			break;
		
		case joaat("issi3"):
			return func_441();
			break;
		
		case joaat("gargoyle"):
			return func_441();
			break;
		
		case joaat("dominator"):
			return func_441();
			break;
		
		case joaat("dominator2"):
			return func_441();
			break;
		
		case joaat("imperator"):
			return func_441();
			break;
		
		case joaat("imperator2"):
			return func_441();
			break;
		
		case joaat("imperator3"):
			return func_441();
			break;
		
		case joaat("deathbike"):
			return func_441();
			break;
		
		case joaat("deathbike2"):
			return func_441();
			break;
		
		case joaat("deathbike3"):
			return func_441();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_441();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_29539 /* Tunable: ENABLE_VEH_YOUGA3 */)
			{
				return func_440();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29889 /* Tunable: ENABLE_VEH_GAUNTLET5 */)
			{
				return func_440();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_29538 /* Tunable: ENABLE_VEH_MANANA2 */)
			{
				return func_440();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29888 /* Tunable: ENABLE_VEH_PEYOTE3 */)
			{
				return func_440();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29887 /* Tunable: ENABLE_VEH_YOSEMITE3 */)
			{
				return func_440();
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("tenf"):
			if (Global_262145.f_33358 /* Tunable: ENABLE_VEHICLE_TENF2 */)
			{
				return func_439();
			}
			break;
		
		case joaat("weevil"):
			if (Global_262145.f_33357 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */)
			{
				return func_439();
			}
			break;
		
		case joaat("brioso2"):
			if (Global_262145.f_33350 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */)
			{
				return func_439();
			}
			break;
		
		case joaat("sentinel3"):
			if (Global_262145.f_33359 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */)
			{
				return func_439();
			}
			break;
	}
	return 0;
}

bool func_439()//Position - 0x217E4
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}

bool func_440()//Position - 0x217F5
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}

bool func_441()//Position - 0x21806
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}

bool func_442()//Position - 0x21817
{
	return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}

bool func_443()//Position - 0x21828
{
	return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}

bool func_444()//Position - 0x21839
{
	return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}

bool func_445()//Position - 0x2184A
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}

bool func_446()//Position - 0x2185B
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_447(int iParam0, int iParam1)//Position - 0x2186C
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

int func_448(int iParam0, int iParam1)//Position - 0x21887
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0, int iParam1)//Position - 0x218A2
{
	if (iParam0 == 45)
	{
		if (iParam1 == 16)
		{
			return 1;
		}
	}
	return 0;
}

int func_450(int iParam0, int iParam1)//Position - 0x218BD
{
	if (iParam0 == 45)
	{
		if (iParam1 == 14)
		{
			return 1;
		}
	}
	return 0;
}

int func_451(int iParam0, int iParam1)//Position - 0x218D8
{
	if (iParam0 == 45)
	{
		if (iParam1 == 21)
		{
			return 1;
		}
	}
	return 0;
}

int func_452(int iParam0, int iParam1)//Position - 0x218F3
{
	if (iParam0 == 45)
	{
		if (iParam1 == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_453(int iParam0, int iParam1)//Position - 0x2190E
{
	if (iParam0 == 45)
	{
		if (iParam1 == 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_454()//Position - 0x21929
{
	return BitTest(Global_104325, 10);
}

int func_455(int iParam0, int iParam1)//Position - 0x21938
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

void func_456(int* iParam0)//Position - 0x21965
{
	*iParam0 = 0;
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_420(43, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_420(44, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_420(45, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_420(55, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_420(56, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_420(57, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_420(58, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_420(59, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_420(60, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_420(47, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
	if (func_420(48, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 13);
	}
	if (func_420(49, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 14);
	}
	if (func_420(50, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 15);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 16);
	}
	if (func_420(13, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 17);
	}
	if (func_420(14, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (func_420(15, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 19);
	}
	if (func_420(16, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 20);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 21);
	}
	if (func_420(77, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 22);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 23);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 24);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 25);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 26);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 27);
	}
	if (func_420(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 28);
	}
	if (func_420(46, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_457(int iParam0, bool bParam1)//Position - 0x21BB6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

int func_458(int iParam0)//Position - 0x21BD2
{
	if (func_105(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x21BEE
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_460(char* sParam0, float fParam1)//Position - 0x21C0C
{
	APP::APP_SET_FLOAT(func_24(sParam0), fParam1);
}

void func_461(char* sParam0, char* sParam1)//Position - 0x21C20
{
	APP::APP_SET_STRING(func_24(sParam0), sParam1);
}

int func_462(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x21C34
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_392(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

void func_463(int iParam0, var uParam1, int iParam2)//Position - 0x21CA7
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113810.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113810.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_464(int iParam0)//Position - 0x21F03
{
	if (func_257(iParam0))
	{
		if ((Global_113810.f_9088 || Global_3) || func_253(0))
		{
			return Global_113810.f_2366.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_465(int iParam0)//Position - 0x21F51
{
	return Global_43377 == iParam0;
}

void func_466(var uParam0, int iParam1)//Position - 0x21F5F
{
	*uParam0 = Global_1586488[iParam1 /*142*/].f_66;
	uParam0->f_3 = Global_1586488[iParam1 /*142*/].f_65;
	uParam0->f_4 = Global_1586488[iParam1 /*142*/].f_62;
	uParam0->f_5 = Global_1586488[iParam1 /*142*/].f_63;
	uParam0->f_6 = Global_1586488[iParam1 /*142*/].f_64;
	uParam0->f_10 = Global_1586488[iParam1 /*142*/].f_69;
	uParam0->f_16 = BitTest(Global_1586488[iParam1 /*142*/].f_77, 9);
	uParam0->f_19 = { Global_1586488[iParam1 /*142*/].f_1 };
	uParam0->f_23 = Global_1586488[iParam1 /*142*/];
	uParam0->f_7 = Global_1586488[iParam1 /*142*/].f_9[11];
	uParam0->f_8 = Global_1586488[iParam1 /*142*/].f_9[12];
	uParam0->f_9 = Global_1586488[iParam1 /*142*/].f_9[23];
	uParam0->f_11 = Global_1586488[iParam1 /*142*/].f_9[4];
	uParam0->f_12 = Global_1586488[iParam1 /*142*/].f_9[15];
	uParam0->f_13 = Global_1586488[iParam1 /*142*/].f_9[16];
	uParam0->f_14 = Global_1586488[iParam1 /*142*/].f_9[14];
	uParam0->f_15 = Global_1586488[iParam1 /*142*/].f_9[22];
	uParam0->f_18 = Global_1586488[iParam1 /*142*/].f_9[20];
	uParam0->f_17 = Global_1586488[iParam1 /*142*/].f_9[18];
	uParam0->f_40 = BitTest(Global_1586488[iParam1 /*142*/].f_103, 25);
	uParam0->f_41 = BitTest(Global_1586488[iParam1 /*142*/].f_103, 26);
	func_462(Global_1586488[iParam1 /*142*/].f_5, Global_1586488[iParam1 /*142*/].f_7, Global_1586488[iParam1 /*142*/].f_138, 1, &(uParam0->f_1));
	func_462(Global_1586488[iParam1 /*142*/].f_6, -1, Global_1586488[iParam1 /*142*/].f_139, 0, &(uParam0->f_2));
	if (BitTest(Global_1586488[iParam1 /*142*/].f_77, 13))
	{
		uParam0->f_1 = -1;
	}
	if (BitTest(Global_1586488[iParam1 /*142*/].f_77, 12))
	{
		uParam0->f_2 = -1;
	}
	uParam0->f_42 = Global_2359296[func_194() /*5568*/].f_593.f_52;
}

int func_467(int iParam0, var uParam1)//Position - 0x22143
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 415)
	{
		if (func_468(iVar0, &iVar1))
		{
			if (iVar1 == iParam0)
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_468(int iParam0, int iParam1)//Position - 0x2217B
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*iParam1 >= 212 || *iParam1 == -1)
	{
		*iParam1 = 0;
		return 0;
	}
	return *iParam1 != -1;
}

void func_469()//Position - 0x223EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_163(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = func_194();
		if (func_471(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				iVar2 = (Global_2359296[iVar0 /*5568*/].f_593.f_74[iVar1] - 1);
				if (((iVar2 >= 0 && Global_1586488[iVar2 /*142*/].f_66 != 0) && (!BitTest(Global_1586488[iVar2 /*142*/].f_103, 1) || BitTest(Global_1586488[iVar2 /*142*/].f_103, 2))) && func_219(Global_1586488[iVar2 /*142*/].f_66))
				{
					if (func_468(iVar2, &iVar3))
					{
						if (!BitTest(Global_1586488[iVar2 /*142*/].f_103, 26))
						{
							MISC::SET_BIT(&(Global_1586488[iVar2 /*142*/].f_103), 25);
						}
					}
				}
				iVar1++;
			}
			Global_2359296[iVar0 /*5568*/].f_593.f_53 = 0;
			func_470(iVar0, 0);
		}
	}
}

void func_470(int iParam0, bool bParam1)//Position - 0x224D5
{
	switch (iParam0)
	{
		case 0:
			uLocal_82 = bParam1;
			func_14(2921, bParam1, -1);
			break;
		
		case 1:
			bLocal_83 = bParam1;
			func_14(2922, bParam1, -1);
			break;
	}
}

int func_471(int iParam0)//Position - 0x22512
{
	switch (iParam0)
	{
		case 0:
			return uLocal_82;
			break;
		
		case 1:
			return bLocal_83;
			break;
	}
	return 0;
}

void func_472()//Position - 0x2253E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[10];
	bool bVar18;
	int iVar19;
	bool bVar20;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar7[iVar0] = Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0];
		iVar0++;
	}
	switch (iLocal_329)
	{
		case 0:
			bVar6 = false;
			if (!func_473(PLAYER::PLAYER_ID(), 1))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar2 = (Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] - 1);
					if (iVar2 >= 0 && (Global_1586488[iVar2 /*142*/].f_66 == 0 || (BitTest(Global_1586488[iVar2 /*142*/].f_103, 1) && !BitTest(Global_1586488[iVar2 /*142*/].f_103, 2))))
					{
						Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] = 0;
						iVar7[iVar0] = 0;
						iVar1 = 0;
						while (iVar1 < 10)
						{
							if (Global_2359296[func_194() /*5568*/].f_593.f_63[iVar1] == iVar2 + 1)
							{
								Global_2359296[func_194() /*5568*/].f_593.f_63[iVar1] = 0;
							}
							iVar1++;
						}
						bVar6 = true;
					}
					iVar0++;
				}
			}
			if (bVar6)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (iVar7[iVar0] != 0)
					{
						Global_2359296[func_194() /*5568*/].f_593.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			iLocal_329++;
			break;
		
		case 1:
			iVar2 = -1;
			if (((Global_2359296[func_194() /*5568*/].f_681.f_2 != Global_2359296[func_194() /*5568*/].f_593.f_85 && Global_2359296[func_194() /*5568*/].f_681.f_2 != -1) && Global_1586488[Global_2359296[func_194() /*5568*/].f_681.f_2 /*142*/].f_66 != 0) && (!BitTest(Global_1586488[Global_2359296[func_194() /*5568*/].f_681.f_2 /*142*/].f_103, 1) || BitTest(Global_1586488[Global_2359296[func_194() /*5568*/].f_681.f_2 /*142*/].f_103, 2)))
			{
				iVar2 = Global_2359296[func_194() /*5568*/].f_681.f_2;
				Global_2359296[func_194() /*5568*/].f_593.f_85 = iVar2;
			}
			else if (Global_2359296[func_194() /*5568*/].f_593.f_86 != 0)
			{
				iVar2 = (Global_2359296[func_194() /*5568*/].f_593.f_86 - 1);
				Global_2359296[func_194() /*5568*/].f_593.f_86 = 0;
			}
			if (iVar2 != -1)
			{
				bVar18 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (Global_2359296[func_194() /*5568*/].f_593.f_63[iVar0] == iVar2 + 1)
					{
						bVar18 = true;
					}
					iVar0++;
				}
				if (!bVar18)
				{
					iVar19 = -1;
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] > 0)
						{
							iVar19 = iVar0;
						}
						iVar0++;
					}
					if (iVar19 < 9)
					{
						iVar19++;
					}
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2359296[func_194() /*5568*/].f_593.f_63[iVar0] == Global_2359296[func_194() /*5568*/].f_593.f_74[iVar19])
						{
							Global_2359296[func_194() /*5568*/].f_593.f_63[iVar0] = iVar2 + 1;
							iVar0 = 11;
						}
						iVar0++;
					}
				}
				Global_2359296[func_194() /*5568*/].f_593.f_74[0] = iVar2 + 1;
				iVar1 = 1;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if ((iVar7[iVar0] != 0 && iVar7[iVar0] != iVar2 + 1) && iVar1 < 10)
					{
						Global_2359296[func_194() /*5568*/].f_593.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			else if (Global_110510)
			{
				iVar3 = 0;
				iVar5 = -1;
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] == 0)
					{
						if (iVar5 == -1)
						{
							iVar5 = iVar0;
						}
						iVar3++;
					}
					iVar0++;
				}
				if (iVar3 > 0)
				{
					iVar4 = 0;
					iVar0 = 0;
					while (iVar0 <= 414)
					{
						if (((func_468(iVar0, &iVar1) && Global_1586488[iVar0 /*142*/].f_66 != 0) && (!BitTest(Global_1586488[iVar0 /*142*/].f_103, 1) || BitTest(Global_1586488[iVar0 /*142*/].f_103, 2))) && func_219(Global_1586488[iVar0 /*142*/].f_66))
						{
							iVar4++;
						}
						if (iVar4 > (10 - iVar3))
						{
						}
						else
						{
							iVar0++;
						}
					}
					if (iVar4 > (10 - iVar3))
					{
						iVar0 = 0;
						while (iVar0 <= 414)
						{
							if (((func_468(iVar0, &iVar1) && Global_1586488[iVar0 /*142*/].f_66 != 0) && (!BitTest(Global_1586488[iVar0 /*142*/].f_103, 1) || BitTest(Global_1586488[iVar0 /*142*/].f_103, 2))) && func_219(Global_1586488[iVar0 /*142*/].f_66))
							{
								bVar20 = false;
								iVar1 = 0;
								while (iVar1 < 10)
								{
									if (Global_2359296[func_194() /*5568*/].f_593.f_63[iVar1] == iVar0 + 1)
									{
										bVar20 = true;
										iVar1 = 11;
									}
									iVar1++;
								}
								if (!bVar20)
								{
									iVar2 = iVar0;
									iVar0 = 416;
								}
							}
							iVar0++;
						}
						if (iVar2 != -1)
						{
							iVar0 = 0;
							while (iVar0 < 10)
							{
								if (Global_2359296[func_194() /*5568*/].f_593.f_63[iVar0] == Global_2359296[func_194() /*5568*/].f_593.f_74[iVar5])
								{
									Global_2359296[func_194() /*5568*/].f_593.f_63[iVar0] = iVar2 + 1;
									iVar0 = 11;
								}
								iVar0++;
							}
							Global_2359296[func_194() /*5568*/].f_593.f_74[iVar5] = iVar2 + 1;
						}
					}
				}
			}
			iLocal_329++;
			break;
		
		default:
			iLocal_329++;
			break;
	}
	if (iLocal_329 > Global_262145.f_32754 /* Tunable: STAGGERED_MAX_FRAMES_APP_VEHICLES */)
	{
		iLocal_329 = 0;
	}
}

int func_473(int iParam0, bool bParam1)//Position - 0x22B80
{
	if (func_474(iParam0, bParam1, -1))
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_474(int iParam0, bool bParam1, int iParam2)//Position - 0x22BAC
{
	if (Global_1853988[iParam0 /*867*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_475(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_475(int iParam0)//Position - 0x22C33
{
	int iVar0;
	
	if (iParam0 == func_99())
	{
		return iParam0;
	}
	if (func_479(iParam0) != -1)
	{
		iVar0 = func_404(func_479(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_477(iParam0, 0))
			{
				return func_476(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_99();
		}
		return Global_2657704[iParam0 /*463*/].f_321.f_10;
	}
	return func_99();
}

int func_476(int iParam0)//Position - 0x22CC2
{
	if (func_65(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_99();
}

bool func_477(int iParam0, bool bParam1)//Position - 0x22CE5
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_478(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_99();
}

int func_478(int iParam0)//Position - 0x22D1E
{
	if (func_65(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_99())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_479(int iParam0)//Position - 0x22D53
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_163(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

void func_480()//Position - 0x22DC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	switch (iLocal_88)
	{
		case 0:
			if (bLocal_87)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_496(0, 0);
				}
				func_456(&iVar0);
				APP::APP_SET_APP("car");
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_SET_BLOCK(&Local_90);
					APP::APP_SET_BLOCK("mpUnlocks");
				}
				else
				{
					APP::APP_SET_BLOCK("spUnlocks");
				}
				func_201("unlockBitset1", iVar0);
				iLocal_135[0] = iVar0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_BLOCK();
				}
				else
				{
					APP::APP_CLOSE_BLOCK();
				}
				APP::APP_CLOSE_APP();
				iLocal_88++;
			}
			break;
		
		case 1:
			func_419(&iVar0);
			APP::APP_SET_APP("car");
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_BLOCK(&Local_90);
				APP::APP_SET_BLOCK("mpUnlocks");
			}
			else
			{
				APP::APP_SET_BLOCK("spUnlocks");
			}
			func_201("unlockBitset2", iVar0);
			iLocal_135[1] = iVar0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
			}
			else
			{
				APP::APP_CLOSE_BLOCK();
			}
			APP::APP_CLOSE_APP();
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iLocal_140[iVar1] = 0;
				iVar1++;
			}
			iLocal_139 = 0;
			iLocal_88++;
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				while (iVar2 < 25 && !bVar3)
				{
					if (func_409(&iLocal_140, iLocal_139) == -1)
					{
						bVar3 = true;
						iLocal_88++;
					}
					iLocal_139++;
					iVar2++;
				}
			}
			else
			{
				iLocal_88++;
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&Local_90);
				APP::APP_SET_BLOCK(&Local_96);
				func_201("carColoursUnlocked0", iLocal_140[0]);
				uLocal_147[0] = iLocal_140[0];
				func_201("carColoursUnlocked1", iLocal_140[1]);
				uLocal_147[1] = iLocal_140[1];
				func_201("carColoursUnlocked2", iLocal_140[2]);
				uLocal_147[2] = iLocal_140[2];
				func_201("carColoursUnlocked3", iLocal_140[3]);
				uLocal_147[3] = iLocal_140[3];
				func_201("carColoursUnlocked4", iLocal_140[4]);
				uLocal_147[4] = iLocal_140[4];
				func_201("carColoursUnlocked5", iLocal_140[5]);
				uLocal_147[5] = iLocal_140[5];
				func_481(&iVar0);
				func_201("unlockBitset3", iVar0);
				iLocal_135[2] = iVar0;
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("spUnlocks");
				func_409(&iLocal_140, -1);
				func_201("carColoursUnlocked0", iLocal_140[0]);
				uLocal_147[0] = iLocal_140[0];
				func_201("carColoursUnlocked1", iLocal_140[1]);
				uLocal_147[1] = iLocal_140[1];
				func_201("carColoursUnlocked2", iLocal_140[2]);
				uLocal_147[2] = iLocal_140[2];
				func_201("carColoursUnlocked3", iLocal_140[3]);
				uLocal_147[3] = iLocal_140[3];
				func_201("carColoursUnlocked4", iLocal_140[4]);
				uLocal_147[4] = iLocal_140[4];
				func_201("carColoursUnlocked5", iLocal_140[5]);
				uLocal_147[5] = iLocal_140[5];
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			iLocal_88++;
			break;
		
		case 4:
			bLocal_87 = false;
			iLocal_88 = 0;
			break;
	}
}

void func_481(int* iParam0)//Position - 0x230AC
{
	if (func_482(18, 1) || func_420(61, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_482(11, 0))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_482(11, 1) || func_420(47, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_482(11, 2) || func_420(48, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_482(11, 3) || func_420(49, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_482(11, 4) || func_420(50, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_482(12, 0))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_482(12, 1) || func_420(13, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_482(12, 2) || func_420(14, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_482(12, 3) || func_420(15, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_482(12, 4) || func_420(16, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_482(4, 0))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_482(4, 1) || func_420(77, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
}

int func_482(int iParam0, int iParam1)//Position - 0x2322A
{
	int iVar0;
	
	if (func_485(iLocal_89, iParam0, iParam1, &iVar0))
	{
		return func_483(iVar0);
	}
	return 1;
}

int func_483(int iParam0)//Position - 0x2324B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(819, -1);
	iVar1 = func_484(iParam0);
	if (iVar1 == -1)
	{
		return 1;
	}
	else if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x2327E
{
	switch (iParam0)
	{
		case 4:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 2;
		
		case 11:
			return 2;
		
		case 12:
			return 3;
		
		case 5:
			return 3;
		
		case 3:
			return 3;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		case 8:
			return 4;
		
		case 40:
			return 5;
		
		case 38:
			return 5;
		
		case 37:
			return 5;
		
		case 46:
			return 6;
		
		case 45:
			return 6;
		
		case 47:
			return 6;
		
		case 48:
			return 7;
		
		case 41:
			return 7;
		
		case 39:
			return 7;
		
		case 42:
			return 8;
		
		case 43:
			return 8;
		
		case 44:
			return 8;
		
		case 16:
			return 9;
		
		case 14:
			return 9;
		
		case 13:
			return 9;
		
		case 21:
			return 10;
		
		case 22:
			return 10;
		
		case 23:
			return 10;
		
		case 24:
			return 11;
		
		case 17:
			return 11;
		
		case 15:
			return 11;
		
		case 18:
			return 12;
		
		case 19:
			return 12;
		
		case 20:
			return 12;
		
		case 27:
			return 13;
		
		case 26:
			return 13;
		
		case 25:
			return 13;
		
		case 32:
			return 14;
		
		case 34:
			return 14;
		
		case 35:
			return 14;
		
		case 36:
			return 15;
		
		case 28:
			return 15;
		
		case 33:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 16;
		
		case 31:
			return 16;
		
		case 52:
			return 17;
		
		case 50:
			return 17;
		
		case 49:
			return 17;
		
		case 57:
			return 18;
		
		case 58:
			return 18;
		
		case 59:
			return 18;
		
		case 60:
			return 19;
		
		case 53:
			return 19;
		
		case 51:
			return 19;
		
		case 54:
			return 20;
		
		case 55:
			return 20;
		
		case 56:
			return 20;
		
		case 85:
			return 21;
		
		case 86:
			return 21;
		
		case 87:
			return 21;
		
		case 88:
			return 22;
		
		case 89:
			return 22;
		
		case 90:
			return 22;
		
		case 91:
			return 23;
		
		case 92:
			return 23;
		
		case 93:
			return 23;
		
		case 94:
			return 24;
		
		case 95:
			return 24;
		
		case 96:
			return 24;
		
		case 97:
			return 25;
		
		case 98:
			return 25;
		
		case 99:
			return 25;
		
		case 100:
			return 26;
		
		case 101:
			return 26;
		
		case 102:
			return 26;
		
		case 103:
			return 27;
		
		case 104:
			return 27;
		
		case 105:
			return 27;
		
		case 106:
			return 28;
		
		case 107:
			return 28;
		
		case 108:
			return 28;
		
		case 64:
			return 29;
		
		case 62:
			return 29;
		
		case 61:
			return 29;
		
		case 69:
			return 30;
		
		case 70:
			return 30;
		
		case 71:
			return 30;
		
		case 72:
			return 31;
		
		case 65:
			return 31;
		
		case 63:
			return 31;
		
		case 66:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 109:
			return 33;
		
		case 110:
			return 33;
		
		case 111:
			return 33;
		
		case 112:
			return 34;
		
		case 113:
			return 34;
		
		case 114:
			return 34;
		
		case 115:
			return 35;
		
		case 116:
			return 35;
		
		case 117:
			return 35;
		
		case 118:
			return 36;
		
		case 119:
			return 36;
		
		case 120:
			return 36;
		
		case 121:
			return 37;
		
		case 122:
			return 37;
		
		case 123:
			return 37;
		
		case 124:
			return 38;
		
		case 125:
			return 38;
		
		case 126:
			return 38;
		
		case 127:
			return 39;
		
		case 128:
			return 39;
		
		case 129:
			return 39;
		
		case 131:
			return 40;
		
		case 130:
			return 40;
		
		case 132:
			return 40;
		
		case 76:
			return 41;
		
		case 74:
			return 41;
		
		case 73:
			return 41;
		
		case 81:
			return 42;
		
		case 82:
			return 42;
		
		case 83:
			return 42;
		
		case 84:
			return 43;
		
		case 77:
			return 43;
		
		case 75:
			return 43;
		
		case 78:
			return 44;
		
		case 79:
			return 44;
		
		case 80:
			return 44;
		
		default:
	}
	return -1;
}

bool func_485(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x23825
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	uVar0 = func_486(iParam0);
	*uParam3 = 0;
	if (iParam1 == 11)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 1;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 25;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 61;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 73;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 2;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 26;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 62;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 74;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 3;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 33;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 63;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 75;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 4;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 27;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 64;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 76;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 5;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 28;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 65;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 77;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 6;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 29;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 66;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 78;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 7;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 30;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 67;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 79;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 8;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 31;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 68;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 80;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 9;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 32;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 69;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 81;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 10;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 34;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 70;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 82;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 11;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 35;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 71;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 83;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 12;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 36;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 72;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 84;
			}
		}
	}
	else if (iParam1 == 18)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 49;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 50;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 51;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 52;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 53;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 54;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 55;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 56;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 57;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 58;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 59;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 60;
			}
		}
	}
	else if (iParam1 == 13)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 37;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 87;
			}
			else if (iParam2 == 3 || iParam2 > 4)
			{
				*uParam3 = 111;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 38;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 86;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 110;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 39;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 93;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 117;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 40;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 85;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 109;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 41;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 92;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 116;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 42;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 94;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 118;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 43;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 95;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 119;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 44;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 96;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 120;
			}
			else if (iParam2 >= 4)
			{
				*uParam3 = 120;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 45;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 88;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 112;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 46;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 89;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 113;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 47;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 90;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 114;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 48;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 91;
			}
			else if (iParam2 == 3 || iParam2 >= 4)
			{
				*uParam3 = 115;
			}
		}
	}
	else if (iParam1 == 12)
	{
		if (BitTest(uVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 13;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 99;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 123;
			}
		}
		else if (BitTest(uVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 14;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 98;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 122;
			}
		}
		else if (BitTest(uVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 15;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 105;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 129;
			}
		}
		else if (BitTest(uVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 16;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 97;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 121;
			}
		}
		else if (BitTest(uVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 17;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 104;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 128;
			}
		}
		else if (BitTest(uVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 18;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 106;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 130;
			}
		}
		else if (BitTest(uVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 19;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 107;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 131;
			}
		}
		else if (BitTest(uVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 20;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 108;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 132;
			}
		}
		else if (BitTest(uVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 21;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 100;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 124;
			}
		}
		else if (BitTest(uVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 22;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 101;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 125;
			}
		}
		else if (BitTest(uVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 23;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 102;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 126;
			}
		}
		else if (BitTest(uVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 24;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 103;
			}
			else if (iParam2 >= 3)
			{
				*uParam3 = 127;
			}
		}
	}
	return *uParam3 != 0;
}

var func_486(int iParam0)//Position - 0x2417C
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_487(iParam0, iVar1, 0))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_487(int iParam0, int iParam1, bool bParam2)//Position - 0x241AD
{
	if (bParam2)
	{
		return 1;
	}
	if (func_495(iParam0) && iParam1 != 19)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 15:
		case 16:
			if (func_494(iParam0) || func_493(iParam0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (func_210(iParam0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (func_216(iParam0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (func_495(iParam0))
			{
				return 1;
			}
			break;
		
		case 20:
			if (func_492(iParam0))
			{
				return 1;
			}
			break;
		
		case 21:
			break;
		
		case 22:
			break;
		
		case 23:
			break;
		
		case 24:
			break;
		
		default:
			if (func_489(iParam0, iParam1))
			{
				return 1;
			}
			else if (iParam1 == 14)
			{
			}
			else if (VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0) == func_488(iParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x242B3
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
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
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
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
		
		case 18:
			return 22;
			break;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)//Position - 0x2438D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_491(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_490(iParam1, iVar1) == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_490(int iParam0, int iParam1)//Position - 0x243C2
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("adder");
				
				case 1:
					return joaat("bullet");
				
				case 2:
					return joaat("cheetah");
				
				case 3:
					return joaat("entityxf");
				
				case 4:
					return joaat("infernus");
				
				case 5:
					return joaat("vacca");
				
				case 6:
					return joaat("voltic");
				
				case 7:
					return joaat("banshee2");
				
				case 8:
					return joaat("fmj");
				
				case 9:
					return joaat("osiris");
				
				case 10:
					return joaat("pfister811");
				
				case 11:
					return joaat("prototipo");
				
				case 12:
					return joaat("reaper");
				
				case 13:
					return joaat("sultanrs");
				
				case 14:
					return joaat("t20");
				
				case 15:
					return joaat("turismor");
				
				case 16:
					return joaat("zentorno");
				
				case 17:
					return joaat("le7b");
				
				case 18:
					return joaat("tyrus");
				
				case 19:
					return joaat("sheava");
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("ninef2");
				
				case 1:
					return joaat("banshee");
				
				case 2:
					return joaat("carbonizzare");
				
				case 3:
					return joaat("comet2");
				
				case 4:
					return joaat("coquette");
				
				case 5:
					return joaat("feltzer2");
				
				case 6:
					return joaat("fusilade");
				
				case 7:
					return joaat("rapidgt2");
				
				case 8:
					return joaat("sultan");
				
				case 9:
					return joaat("alpha");
				
				case 10:
					return joaat("bestiagts");
				
				case 11:
					return joaat("blista2");
				
				case 12:
					return joaat("blista3");
				
				case 13:
					return joaat("buffalo");
				
				case 14:
					return joaat("buffalo2");
				
				case 15:
					return joaat("buffalo3");
				
				case 16:
					return joaat("carbonizzare");
				
				case 17:
					return joaat("elegy2");
				
				case 18:
					return joaat("feltzer3");
				
				case 19:
					return joaat("furoregt");
				
				case 20:
					return joaat("futo");
				
				case 21:
					return joaat("jester");
				
				case 22:
					return joaat("jester2");
				
				case 23:
					return joaat("khamelion");
				
				case 24:
					return joaat("kuruma");
				
				case 25:
					return joaat("kuruma2");
				
				case 26:
					return joaat("massacro");
				
				case 27:
					return joaat("massacro2");
				
				case 28:
					return joaat("ninef");
				
				case 29:
					return joaat("penumbra");
				
				case 30:
					return joaat("rapidgt");
				
				case 31:
					return joaat("schwarzer");
				
				case 32:
					return joaat("seven70");
				
				case 33:
					return joaat("surano");
				
				case 34:
					return joaat("verlierer2");
				
				case 35:
					return joaat("tropos");
				
				case 36:
					return joaat("tampa2");
				
				case 37:
					return joaat("omnis");
				
				case 38:
					return joaat("lynx");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("cogcabrio");
				
				case 1:
					return joaat("exemplar");
				
				case 2:
					return joaat("f620");
				
				case 3:
					return joaat("felon");
				
				case 4:
					return joaat("felon2");
				
				case 5:
					return joaat("jackal");
				
				case 6:
					return joaat("oracle");
				
				case 7:
					return joaat("oracle2");
				
				case 8:
					return joaat("sentinel");
				
				case 9:
					return joaat("sentinel2");
				
				case 10:
					return joaat("windsor");
				
				case 11:
					return joaat("windsor2");
				
				case 12:
					return joaat("zion");
				
				case 13:
					return joaat("zion2");
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("buccaneer");
				
				case 1:
					return joaat("dominator");
				
				case 2:
					return joaat("gauntlet");
				
				case 3:
					return joaat("phoenix");
				
				case 4:
					return joaat("picador");
				
				case 5:
					return joaat("ruiner");
				
				case 6:
					return joaat("sabregt");
				
				case 7:
					return joaat("vigero");
				
				case 8:
					return joaat("blade");
				
				case 9:
					return joaat("buccaneer2");
				
				case 10:
					return joaat("chino");
				
				case 11:
					return joaat("chino2");
				
				case 12:
					return joaat("coquette3");
				
				case 13:
					return joaat("dominator2");
				
				case 14:
					return joaat("dukes");
				
				case 15:
					return joaat("dukes2");
				
				case 16:
					return joaat("faction");
				
				case 17:
					return joaat("faction2");
				
				case 18:
					return joaat("faction3");
				
				case 19:
					return joaat("gauntlet2");
				
				case 20:
					return joaat("hotknife");
				
				case 21:
					return joaat("lurcher");
				
				case 22:
					return joaat("moonbeam");
				
				case 23:
					return joaat("moonbeam2");
				
				case 24:
					return joaat("nightshade");
				
				case 25:
					return joaat("ratloader");
				
				case 26:
					return joaat("ratloader2");
				
				case 27:
					return joaat("sabregt2");
				
				case 28:
					return joaat("slamvan");
				
				case 29:
					return joaat("slamvan2");
				
				case 30:
					return joaat("slamvan3");
				
				case 31:
					return joaat("stalion");
				
				case 32:
					return joaat("stalion2");
				
				case 33:
					return joaat("tampa");
				
				case 34:
					return joaat("virgo");
				
				case 35:
					return joaat("virgo2");
				
				case 36:
					return joaat("virgo3");
				
				case 37:
					return joaat("voodoo");
				
				case 38:
					return joaat("voodoo2");
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("jb700");
				
				case 1:
					return joaat("monroe");
				
				case 2:
					return joaat("stinger");
				
				case 3:
					return joaat("ztype");
				
				case 4:
					return joaat("btype");
				
				case 5:
					return joaat("btype2");
				
				case 6:
					return joaat("btype3");
				
				case 7:
					return joaat("casco");
				
				case 8:
					return joaat("coquette2");
				
				case 9:
					return joaat("mamba");
				
				case 10:
					return joaat("manana");
				
				case 11:
					return joaat("peyote");
				
				case 12:
					return joaat("pigalle");
				
				case 13:
					return joaat("stinger");
				
				case 14:
					return joaat("stingergt");
				
				case 15:
					return joaat("tornado");
				
				case 16:
					return joaat("tornado2");
				
				case 17:
					return joaat("tornado3");
				
				case 18:
					return joaat("tornado4");
				
				case 19:
					return joaat("tornado5");
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("asea");
				
				case 1:
					return joaat("asterope");
				
				case 2:
					return joaat("fugitive");
				
				case 3:
					return joaat("premier");
				
				case 4:
					return joaat("primo");
				
				case 5:
					return joaat("schafter2");
				
				case 6:
					return joaat("stanier");
				
				case 7:
					return joaat("superd");
				
				case 8:
					return joaat("surge");
				
				case 9:
					return joaat("tailgater");
				
				case 10:
					return joaat("washington");
				
				case 11:
					return joaat("cog55");
				
				case 12:
					return joaat("cognoscenti");
				
				case 13:
					return joaat("cognoscenti2");
				
				case 14:
					return joaat("emperor");
				
				case 15:
					return joaat("emperor2");
				
				case 16:
					return joaat("emperor3");
				
				case 17:
					return joaat("glendale");
				
				case 18:
					return joaat("asea2");
				
				case 19:
					return joaat("cog552");
				
				case 20:
					return joaat("ingot");
				
				case 21:
					return joaat("intruder");
				
				case 22:
					return joaat("limo2");
				
				case 23:
					return joaat("primo2");
				
				case 24:
					return joaat("regina");
				
				case 25:
					return joaat("romero");
				
				case 26:
					return joaat("schafter3");
				
				case 27:
					return joaat("schafter4");
				
				case 28:
					return joaat("schafter5");
				
				case 29:
					return joaat("schafter6");
				
				case 30:
					return joaat("stratum");
				
				case 31:
					return joaat("stretch");
				
				case 32:
					return joaat("warrener");
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("baller");
				
				case 1:
					return joaat("baller2");
				
				case 2:
					return joaat("bjxl");
				
				case 3:
					return joaat("cavalcade");
				
				case 4:
					return joaat("cavalcade2");
				
				case 5:
					return joaat("crusader");
				
				case 6:
					return joaat("dubsta");
				
				case 7:
					return joaat("granger");
				
				case 8:
					return joaat("gresley");
				
				case 9:
					return joaat("landstalker");
				
				case 10:
					return joaat("mesa");
				
				case 11:
					return joaat("pranger");
				
				case 12:
					return joaat("radi");
				
				case 13:
					return joaat("seminole");
				
				case 14:
					return joaat("serrano");
				
				case 15:
					return joaat("baller3");
				
				case 16:
					return joaat("baller4");
				
				case 17:
					return joaat("baller5");
				
				case 18:
					return joaat("baller6");
				
				case 19:
					return joaat("dubsta2");
				
				case 20:
					return joaat("fq2");
				
				case 21:
					return joaat("habanero");
				
				case 22:
					return joaat("huntley");
				
				case 23:
					return joaat("mesa2");
				
				case 24:
					return joaat("patriot");
				
				case 25:
					return joaat("rocoto");
				
				case 26:
					return joaat("xls");
				
				case 27:
					return joaat("xls2");
				
				case 28:
					return joaat("contender");
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("blista");
				
				case 1:
					return joaat("dilettante");
				
				case 2:
					return joaat("issi2");
				
				case 3:
					return joaat("prairie");
				
				case 4:
					return joaat("dilettante2");
				
				case 5:
					return joaat("panto");
				
				case 6:
					return joaat("rhapsody");
				
				case 7:
					return joaat("brioso");
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("bfinjection");
				
				case 1:
					return joaat("baller");
				
				case 2:
					return joaat("blazer");
				
				case 3:
					return joaat("dloader");
				
				case 4:
					return joaat("dune");
				
				case 5:
					return joaat("patriot");
				
				case 6:
					return joaat("sanchez");
				
				case 7:
					return joaat("sandking");
				
				case 8:
					return joaat("paradise");
				
				case 9:
					return joaat("sanchez2");
				
				case 10:
					return joaat("guardian");
				
				case 11:
					return joaat("bifta");
				
				case 12:
					return joaat("blazer2");
				
				case 13:
					return joaat("blazer3");
				
				case 14:
					return joaat("bodhi2");
				
				case 15:
					return joaat("brawler");
				
				case 16:
					return joaat("dubsta3");
				
				case 17:
					return joaat("insurgent2");
				
				case 18:
					return joaat("kalahari");
				
				case 19:
					return joaat("marshall");
				
				case 20:
					return joaat("mesa3");
				
				case 21:
					return joaat("monster");
				
				case 22:
					return joaat("rancherxl");
				
				case 23:
					return joaat("rancherxl2");
				
				case 24:
					return joaat("rebel");
				
				case 25:
					return joaat("rebel2");
				
				case 26:
					return joaat("sandking2");
				
				case 28:
					return joaat("trophytruck");
				
				case 29:
					return joaat("trophytruck2");
				
				case 30:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
				
				case 1:
					return joaat("cutter");
				
				case 2:
					return joaat("dump");
				
				case 3:
					return joaat("handler");
				
				case 4:
					return joaat("mixer");
				
				case 5:
					return joaat("flatbed");
				
				case 6:
					return joaat("guardian");
				
				case 7:
					return joaat("mixer2");
				
				case 8:
					return joaat("rubble");
				
				case 9:
					return joaat("tiptruck");
				
				case 10:
					return joaat("tiptruck2");
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("airtug");
				
				case 1:
					return joaat("caddy");
				
				case 2:
					return joaat("faggio2");
				
				case 3:
					return joaat("tractor2");
				
				case 4:
					return joaat("forklift");
				
				case 5:
					return joaat("mower");
				
				case 6:
					return joaat("ripley");
				
				case 7:
					return joaat("armytanker");
				
				case 8:
					return joaat("sadler");
				
				case 9:
					return joaat("sadler2");
				
				case 10:
					return joaat("scrap");
				
				case 11:
					return joaat("towtruck");
				
				case 12:
					return joaat("towtruck2");
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("boxville");
				
				case 1:
					return joaat("burrito2");
				
				case 2:
					return joaat("camper");
				
				case 3:
					return joaat("speedo2");
				
				case 4:
					return joaat("journey");
				
				case 5:
					return joaat("pony");
				
				case 6:
					return joaat("rumpo");
				
				case 7:
					return joaat("surfer");
				
				case 8:
					return joaat("taco");
				
				case 9:
					return joaat("youga");
				
				case 10:
					return joaat("bison");
				
				case 11:
					return joaat("bison2");
				
				case 12:
					return joaat("bison3");
				
				case 13:
					return joaat("bobcatxl");
				
				case 14:
					return joaat("boxville2");
				
				case 15:
					return joaat("boxville3");
				
				case 16:
					return joaat("boxville4");
				
				case 17:
					return joaat("burrito");
				
				case 18:
					return joaat("burrito3");
				
				case 19:
					return joaat("burrito4");
				
				case 20:
					return joaat("burrito5");
				
				case 21:
					return joaat("gburrito");
				
				case 22:
					return joaat("gburrito2");
				
				case 23:
					return joaat("minivan");
				
				case 24:
					return joaat("minivan2");
				
				case 25:
					return joaat("paradise");
				
				case 26:
					return joaat("pony2");
				
				case 27:
					return joaat("rumpo2");
				
				case 28:
					return joaat("rumpo3");
				
				case 29:
					return joaat("speedo");
				
				case 30:
					return joaat("surfer2");
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("akuma");
				
				case 1:
					return joaat("bagger");
				
				case 2:
					return joaat("bati");
				
				case 3:
					return joaat("bati2");
				
				case 4:
					return joaat("blazer");
				
				case 5:
					return joaat("daemon");
				
				case 6:
					return joaat("double");
				
				case 7:
					return joaat("nemesis");
				
				case 8:
					return joaat("pcj");
				
				case 9:
					return joaat("ruffian");
				
				case 10:
					return joaat("sanchez");
				
				case 11:
					return joaat("sanchez2");
				
				case 12:
					return joaat("vader");
				
				case 13:
					return joaat("carbonrs");
				
				case 14:
					return joaat("enduro");
				
				case 15:
					return joaat("faggio2");
				
				case 16:
					return joaat("hakuchou");
				
				case 17:
					return joaat("hexer");
				
				case 18:
					return joaat("innovation");
				
				case 19:
					return joaat("lectro");
				
				case 20:
					return joaat("sovereign");
				
				case 21:
					return joaat("thrust");
				
				case 22:
					return joaat("vindicator");
				
				case 23:
					return joaat("gargoyle");
				
				case 24:
					return joaat("cliffhanger");
				
				case 25:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("bmx");
				
				case 1:
					return joaat("cruiser");
				
				case 2:
					return joaat("scorcher");
				
				case 3:
					return joaat("tribike");
				
				case 4:
					return joaat("tribike2");
				
				case 5:
					return joaat("tribike3");
				
				default:
			}
			break;
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x25622
{
	switch (iParam0)
	{
		case 7:
			return 20;
		
		case 6:
			return 39;
		
		case 3:
			return 14;
		
		case 4:
			return 39;
		
		case 5:
			return 20;
		
		case 1:
			return 32;
		
		case 2:
			return 29;
		
		case 0:
			return 8;
		
		case 9:
			return 31;
		
		case 10:
			return 11;
		
		case 11:
			return 13;
		
		case 12:
			return 31;
		
		case 8:
			return 26;
		
		case 13:
			return 6;
		
		default:
	}
	return 39;
}

int func_492(int iParam0)//Position - 0x256CC
{
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
		
		default:
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x25746
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("trailersmall2"):
		case joaat("trailerlarge"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("phantom3"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("hauler2"):
		case joaat("caddy3"):
		case joaat("vigilante"):
		case joaat("thruster"):
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("khanjali"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("caracara"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
		case joaat("paragon2"):
		case joaat("toreador"):
		case joaat("avenger3"):
			return 1;
		
		default:
	}
	if (func_210(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x25827
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("rcbandito"):
			return 1;
		
		default:
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x25877
{
	switch (iParam0)
	{
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
		
		default:
	}
	return 0;
}

void func_496(int iParam0, bool bParam1)//Position - 0x25897
{
	int iVar0;
	
	if (bParam1)
	{
		func_505(39, 1, 0);
		func_505(40, 1, 0);
		func_505(41, 1, 0);
		func_505(42, 1, 0);
		func_505(43, 1, 0);
	}
	func_497(1, iParam0, 0);
	func_497(2, iParam0, 1);
	func_497(3, iParam0, 2);
	func_497(4, iParam0, 3);
	func_497(103, iParam0, 3);
	func_497(5, iParam0, 0);
	func_497(6, iParam0, 0);
	func_497(7, iParam0, 0);
	func_497(8, iParam0, 0);
	func_497(9, iParam0, 0);
	func_497(10, iParam0, 0);
	func_497(11, iParam0, 0);
	func_497(12, iParam0, 0);
	func_497(13, iParam0, 0);
	func_497(14, iParam0, 2);
	func_497(15, iParam0, 3);
	func_497(16, iParam0, 3);
	func_497(17, iParam0, 0);
	func_497(18, iParam0, 1);
	func_497(19, iParam0, 2);
	func_497(20, iParam0, 2);
	func_497(101, iParam0, 3);
	func_497(102, iParam0, 3);
	func_497(21, iParam0, 0);
	func_497(22, iParam0, 1);
	func_497(23, iParam0, 2);
	func_497(24, iParam0, 3);
	func_497(25, iParam0, 0);
	func_497(26, iParam0, 1);
	func_497(27, iParam0, 2);
	func_497(28, iParam0, 3);
	func_497(29, iParam0, 0);
	func_497(30, iParam0, 0);
	func_497(31, iParam0, 1);
	func_497(32, iParam0, 2);
	func_497(33, iParam0, 3);
	func_497(34, iParam0, 0);
	func_497(35, iParam0, 0);
	func_497(36, iParam0, 0);
	func_497(37, iParam0, 0);
	func_497(38, iParam0, 0);
	func_497(39, iParam0, 0);
	func_497(40, iParam0, 0);
	func_497(41, iParam0, 0);
	func_497(42, iParam0, 0);
	func_497(43, iParam0, 0);
	func_497(44, iParam0, 2);
	func_497(45, iParam0, 3);
	func_497(99, iParam0, 1);
	func_497(46, iParam0, 1);
	func_497(55, iParam0, 0);
	func_497(60, iParam0, 0);
	func_497(59, iParam0, 1);
	func_497(58, iParam0, 1);
	func_497(56, iParam0, 2);
	func_497(57, iParam0, 3);
	func_497(47, iParam0, 0);
	func_497(48, iParam0, 1);
	func_497(49, iParam0, 2);
	func_497(50, iParam0, 3);
	func_497(51, iParam0, 0);
	func_497(52, iParam0, 1);
	func_497(53, iParam0, 2);
	func_497(54, iParam0, 3);
	func_497(106, iParam0, 3);
	func_497(61, iParam0, 0);
	func_497(62, iParam0, 1);
	func_497(63, iParam0, 1);
	func_497(64, iParam0, 2);
	func_497(65, iParam0, 2);
	func_497(66, iParam0, 0);
	func_497(67, iParam0, 1);
	func_497(68, iParam0, 2);
	func_497(69, iParam0, 3);
	func_497(70, iParam0, 3);
	func_497(71, iParam0, 3);
	func_497(72, iParam0, 0);
	func_497(73, iParam0, 0);
	func_497(74, iParam0, 1);
	func_497(75, iParam0, 2);
	func_497(76, iParam0, 3);
	func_497(77, iParam0, 0);
	func_497(78, iParam0, 1);
	func_497(79, iParam0, 2);
	func_497(80, iParam0, 3);
	func_497(100, iParam0, 3);
	func_497(81, iParam0, 0);
	func_497(82, iParam0, 1);
	func_497(83, iParam0, 2);
	func_497(84, iParam0, 3);
	func_497(105, iParam0, 3);
	func_497(85, iParam0, 0);
	func_497(86, iParam0, 0);
	func_497(87, iParam0, 0);
	func_497(88, iParam0, 0);
	func_497(104, iParam0, 0);
	func_497(91, iParam0, 0);
	func_497(92, iParam0, 1);
	func_497(93, iParam0, 2);
	func_497(94, iParam0, 3);
	func_497(95, iParam0, 0);
	func_497(96, iParam0, 1);
	func_497(97, iParam0, 2);
	func_497(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_497(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_497(int iParam0, int iParam1, int iParam2)//Position - 0x25C8F
{
	int iVar0;
	
	if (iParam1 >= iParam2)
	{
		if (!BitTest(Global_113810.f_2366.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_113810.f_20121)
			{
				Global_113810.f_20121[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			MISC::SET_BIT(&(Global_113810.f_2366.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_498(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_498(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x25D12
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
	
	if (func_504(iParam0) && func_420(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
		{
			iParam3 = (iParam3 - 20);
		}
		if ((iParam5 == 15 && iParam3 > 21) && !func_503(iParam0))
		{
			iParam3 = (iParam3 - 21);
		}
		if (iParam0 == joaat("oppressor2"))
		{
			if (iParam5 == 23)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		else if (iParam0 == joaat("strikeforce"))
		{
			if (iParam5 == 18)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		if (iParam5 == 58 && iParam4 == 2)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam2, "CMOD_TYR_LG" /* GXT: Low Grip Tires */))
			{
				if (func_492(iParam0) && func_502(PLAYER::PLAYER_ID()))
				{
					if (!func_21(31778, -1))
					{
						func_14(31778, 1, -1);
					}
				}
			}
		}
	}
	if (iParam1 == -1)
	{
		if (!func_504(iParam0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == 0)
				{
					iVar0 = 0;
					while (iVar0 < 306)
					{
						iVar1 = iVar0 * 3;
						iVar2 = func_501(MISC::GET_HASH_KEY(sParam2));
						if (iVar2 != -1)
						{
							MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_2691[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
						}
						iVar0++;
					}
				}
				else
				{
					iVar3 = func_500(iParam0);
					if (iVar3 != -1)
					{
						iVar4 = iVar3 * 3;
						iVar5 = func_501(MISC::GET_HASH_KEY(sParam2));
						if (iVar5 != -1)
						{
							MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_2691[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
						}
					}
					iVar6 = func_499(iParam0, iParam3, iParam4, iParam5);
					if (iVar6 > 0)
					{
						MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_3610[(iVar6 / 32)]), (iVar6 % 32));
					}
				}
			}
			return;
		}
		else if (func_420(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			iVar7 = func_499(iParam0, iParam3, iParam4, iParam5);
			if (iVar7 > 0)
			{
				MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_3610[(iVar7 / 32)]), (iVar7 % 32));
			}
		}
	}
	else if (func_504(iParam0) && func_420(iParam1, -1, 0, -1))
	{
		iVar8 = func_499(iParam0, iParam3, iParam4, iParam5);
		if (iVar8 > 0)
		{
			MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_3610[(iVar8 / 32)]), (iVar8 % 32));
		}
	}
	if (iParam0 == 0)
	{
		iVar9 = 0;
		while (iVar9 < 306)
		{
			if (func_420(iParam1, -1, 0, -1))
			{
				iVar10 = (iVar9 * 4 + (iParam1 / 32));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_47[iVar10]), (iParam1 % 32));
				}
				else
				{
					MISC::SET_BIT(&(Global_113810.f_668.f_90[iVar10]), (iParam1 % 32));
				}
			}
			iVar9++;
		}
	}
	else if (func_420(iParam1, -1, 0, -1))
	{
		iVar11 = func_500(iParam0);
		if (iVar11 != -1)
		{
			iVar12 = (iVar11 * 4 + (iParam1 / 32));
			iVar13 = (iParam1 % 32);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((iParam0 == joaat("avarus") || iParam0 == joaat("chimera")) || iParam0 == joaat("esskey")) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("esskey")))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("specter2") && (iParam1 == 21 || iParam1 == 72))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("trailerlarge") && iParam1 == 85)
				{
					iVar13++;
				}
				if (iParam0 == joaat("bombushka") && iParam1 == 21)
				{
					iVar13 = (iVar13 - 1);
				}
				if (iVar13 >= 0)
				{
					MISC::SET_BIT(&(Global_2359296[func_194() /*5568*/].f_681.f_47[iVar12]), iVar13);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_113810.f_668.f_90[iVar12]), iVar13);
			}
		}
	}
}

int func_499(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26115
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == joaat("btype2"))
	{
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("lurcher"))
	{
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 49;
	}
	if (iParam0 == joaat("faction2"))
	{
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 268;
	}
	if (iParam0 == joaat("buccaneer2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 319;
	}
	if (iParam0 == joaat("chino2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("moonbeam2"))
	{
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 68 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 69 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 308;
	}
	if (iParam0 == joaat("primo2"))
	{
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 309;
	}
	if (iParam0 == joaat("voodoo"))
	{
		if ((iParam3 == 79 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 326;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("buccaneer"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("chino"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("moonbeam"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("primo"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("voodoo2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sultan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("banshee"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
	}
	else
	{
		iVar0 += 17;
	}
	if (iParam0 == joaat("banshee2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (iParam3 == 65)
		{
			if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("sultanrs"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 221;
	}
	if (iParam0 == joaat("btype3"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 93 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 94 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sabregt"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("virgo3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("minivan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("slamvan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("faction3"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 272;
	}
	if (iParam0 == joaat("minivan2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 281;
	}
	if (iParam0 == joaat("sabregt2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 234;
	}
	if (iParam0 == joaat("slamvan3"))
	{
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("tornado5"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 91 && iParam2 == 3) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 382;
	}
	if (iParam0 == joaat("virgo2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_12217 /* Tunable: TURN_ON_HALLOWEEN_BOBBLEHEADS */)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 290;
	}
	if (iParam0 == joaat("avarus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("chimera"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("daemon2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombiea"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombieb"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("sanctus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("wolfsbane"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 28)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 29;
	}
	else
	{
		iVar0 += 29;
	}
	if (iParam0 == joaat("blazer4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("youga2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 20;
	}
	if (iParam0 == joaat("fcr2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("diablous2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("nightblade"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("defiler"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("esskey"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("hakuchou2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("manchez"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("vortex"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("apc"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("halftrack"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("dune3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("tampa3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("nightshark"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("trailersmall2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("oppressor"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("insurgent3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("technical3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("ardent"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("specter2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 116;
	}
	if (iParam0 == joaat("comet3"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 200;
	}
	if (iParam0 == joaat("elegy"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if ((iParam3 == 91 && iParam2 == 1) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 252;
	}
	if (iParam0 == joaat("italigtb2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 122;
	}
	if (iParam0 == joaat("nero2"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 81 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 105;
	}
	if (iParam0 == joaat("starling"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("nokota"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("rogue"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("molotok"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("bombushka"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("tula"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("hunter"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("seabreeze"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("alphaz1"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("havok"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("retinue"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("microlight"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("visione"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == joaat("comet4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("barrage"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("avenger") || iParam0 == joaat("avenger3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("gb200"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == joaat("fagaloa"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == joaat("michelli"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("ellie"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 27;
	}
	if (iParam0 == joaat("issi3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("tezeract"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("flashgt"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 56;
	}
	if (iParam0 == joaat("caracara"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("cheburek"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("dominator3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("tyrant"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 12;
	}
	if (iParam0 == joaat("taipan"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == joaat("entity2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 26;
	}
	if (iParam0 == joaat("hotring"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 31)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 32;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("jester3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == joaat("stafford"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 8;
	}
	if (iParam0 == joaat("speedo4"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 31;
	}
	if (iParam0 == joaat("mule4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("pounder2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 35;
	}
	if (iParam0 == joaat("swinger"))
	{
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("patriot2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("oppressor2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("menacer"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("freecrawler"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("scramjet"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("strikeforce"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 30;
	}
	if (iParam0 == joaat("patriot"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("prairie"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == joaat("clique"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == joaat("deveste"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 48;
	}
	if (iParam0 == joaat("deviant"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == joaat("impaler"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("schlagen"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("toros"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 96;
	}
	if (iParam0 == joaat("vamos"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 67;
	}
	if (iParam0 == joaat("tulip"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == joaat("impaler2"))
	{
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("italigto"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == joaat("dominator4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("scarab"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == joaat("cerberus"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == joaat("cerberus2"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == joaat("bruiser"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("monster3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 46;
	}
	if (iParam0 == joaat("slamvan4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("imperator"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 79;
	}
	if (iParam0 == joaat("zr380"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == joaat("issi4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 123;
	}
	if (iParam0 == joaat("deathbike"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == joaat("brutus"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == joaat("zr3802"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("dominator5"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("deathbike2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 40;
	}
	if (iParam0 == joaat("issi6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 98;
	}
	if (iParam0 == joaat("zr3803"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == joaat("dominator6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("deathbike3"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 14;
	}
	if (iParam0 == joaat("rcbandito"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("monster5"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("scarab2"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 108;
	}
	if (iParam0 == joaat("impaler3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 50;
	}
	if (iParam0 == joaat("impaler4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("brutus3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == joaat("monster4"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("bruiser2"))
	{
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 73;
	}
	if (iParam0 == joaat("bruiser3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("issi5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 129;
	}
	if (iParam0 == joaat("cerberus3"))
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == joaat("slamvan5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == joaat("imperator2"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == joaat("imperator3"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("brutus2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == joaat("scarab3"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == joaat("slamvan6"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("caracara2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("drafter"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("dynasty"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == joaat("gauntlet3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == joaat("gauntlet4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("hellion"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == joaat("issi7"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == joaat("krieger"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 37;
	}
	if (iParam0 == joaat("locust"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == joaat("nebula"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("neo"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == joaat("novak"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == joaat("s80"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == joaat("thrax"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == joaat("zion3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 78;
	}
	if (iParam0 == joaat("zorrusso"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 38;
	}
	if (iParam0 == joaat("emerus"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 24;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == joaat("peyote"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("peyote2"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == joaat("rrocket"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("jugular"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 54;
	}
	if (iParam0 == joaat("paragon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("paragon2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("rebla"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == joaat("imorgon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 125;
	}
	if (iParam0 == joaat("asbo"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 93;
	}
	if (iParam0 == joaat("sugoi"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 100;
	}
	if (iParam0 == joaat("komoda"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == joaat("zhaba"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == joaat("vstr"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 83;
	}
	if (iParam0 == joaat("everon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == joaat("sultan2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0 += 102;
	}
	if (iParam0 == joaat("kanjo"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
	}
	else
	{
		iVar0 += 275;
	}
	if (iParam0 == joaat("outlaw"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("formula"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == joaat("stryder"))
	{
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == joaat("jb7002"))
	{
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 5;
	}
	if (iParam0 == joaat("vagrant"))
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == joaat("retinue2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 64;
	}
	if (iParam0 == joaat("yosemite2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == joaat("furia"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 84;
	}
	if (iParam0 == joaat("formula2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == joaat("minitank"))
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 15;
	}
	if (iParam0 == joaat("gauntlet5"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == joaat("manana2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 204;
	}
	if (iParam0 == joaat("manana"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("yosemite"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("dukes3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 26)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 27;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("club"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 27)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 85;
	}
	if (iParam0 == joaat("youga3"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 24 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 182;
	}
	if (iParam0 == joaat("peyote3"))
	{
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == joaat("glendale2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 207;
	}
	if (iParam0 == joaat("yosemite3"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 84 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 65 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 264;
	}
	if (iParam0 == joaat("seminole2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 43 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == joaat("penumbra2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 19 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == joaat("glendale"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("landstalker2"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == joaat("coquette4"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 54 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == joaat("openwheel1"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 28;
	}
	if (iParam0 == joaat("openwheel2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == joaat("tigon"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("brioso2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == joaat("manchez2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == joaat("seasparrow2"))
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 3;
	}
	if (iParam0 == joaat("slamtruck"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("italirsx"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 112;
	}
	if (iParam0 == joaat("toreador"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == joaat("winky"))
	{
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 29)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 30;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == joaat("weevil"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 22) && iParam1 <= 27)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
	}
	else
	{
		iVar0 += 117;
	}
	if (iParam0 == joaat("squaddie"))
	{
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 159;
	}
	if (iParam0 == joaat("veto"))
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == joaat("alkonost"))
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("annihilator2"))
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 24;
	}
	if (iParam0 == joaat("veto2"))
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == joaat("verus"))
	{
		if (((iParam3 == 41 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 7 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 42;
	}
	if (iParam0 == joaat("kuruma"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("hermes"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 12;
	}
	if (iVar0 > 20000)
	{
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x3D3EA
{
	switch (iParam0)
	{
		case joaat("adder"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 1;
			break;
		
		case joaat("asea"):
			return 2;
			break;
		
		case joaat("asterope"):
			return 3;
			break;
		
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 5;
			break;
		
		case joaat("banshee"):
		case joaat("banshee2"):
			return 6;
			break;
		
		case joaat("bati"):
			return 7;
			break;
		
		case joaat("bati2"):
			return 8;
			break;
		
		case joaat("bfinjection"):
			return 9;
			break;
		
		case joaat("bison"):
			return 10;
			break;
		
		case joaat("bison2"):
			return 11;
			break;
		
		case joaat("bison3"):
			return 12;
			break;
		
		case joaat("bjxl"):
			return 13;
			break;
		
		case joaat("btype"):
			return 14;
			break;
		
		case joaat("blazer"):
			return 15;
			break;
		
		case joaat("blazer2"):
			return 15;
			break;
		
		case joaat("blazer3"):
			return 15;
			break;
		
		case joaat("blista"):
			return 16;
			break;
		
		case joaat("bobcatxl"):
			return 17;
			break;
		
		case joaat("bodhi2"):
			return 18;
			break;
		
		case joaat("boxville"):
			return 19;
			break;
		
		case joaat("boxville2"):
			return 20;
			break;
		
		case joaat("boxville3"):
			return 21;
			break;
		
		case joaat("buccaneer"):
		case joaat("buccaneer2"):
			return 22;
			break;
		
		case joaat("buffalo"):
			return 23;
			break;
		
		case joaat("buffalo2"):
			return 24;
			break;
		
		case joaat("bullet"):
			return 25;
			break;
		
		case joaat("burrito"):
			return 26;
			break;
		
		case joaat("paradise"):
			return 27;
			break;
		
		case joaat("bifta"):
			return 28;
			break;
		
		case joaat("kalahari"):
			return 29;
			break;
		
		case joaat("carbonizzare"):
			return 30;
			break;
		
		case joaat("carbonrs"):
			return 31;
			break;
		
		case joaat("cavalcade"):
			return 32;
			break;
		
		case joaat("cavalcade2"):
			return 33;
			break;
		
		case joaat("cheetah"):
			return 34;
			break;
		
		case joaat("cogcabrio"):
			return 35;
			break;
		
		case joaat("comet2"):
			return 36;
			break;
		
		case joaat("coquette"):
		case joaat("coquette2"):
			return 37;
			break;
		
		case joaat("daemon"):
			return 38;
			break;
		
		case joaat("dilettante"):
			return 39;
			break;
		
		case joaat("dominator"):
			return 40;
			break;
		
		case joaat("double"):
			return 41;
			break;
		
		case joaat("dubsta"):
			return 42;
			break;
		
		case joaat("dubsta2"):
			return 43;
			break;
		
		case joaat("elegy2"):
			return 44;
			break;
		
		case joaat("emperor"):
			return 45;
			break;
		
		case joaat("emperor2"):
			return 46;
			break;
		
		case joaat("emperor3"):
			return 47;
			break;
		
		case joaat("entityxf"):
			return 48;
			break;
		
		case joaat("exemplar"):
			return 49;
			break;
		
		case joaat("f620"):
			return 50;
			break;
		
		case joaat("faggio2"):
			return 51;
			break;
		
		case joaat("felon"):
			return 52;
			break;
		
		case joaat("felon2"):
			return 53;
			break;
		
		case joaat("feltzer2"):
			return 54;
			break;
		
		case joaat("fq2"):
			return 55;
			break;
		
		case joaat("fugitive"):
			return 56;
			break;
		
		case joaat("fusilade"):
			return 57;
			break;
		
		case joaat("futo"):
			return 58;
			break;
		
		case joaat("gauntlet"):
			return 59;
			break;
		
		case joaat("gburrito"):
			return 60;
			break;
		
		case joaat("granger"):
			return 61;
			break;
		
		case joaat("gresley"):
			return 62;
			break;
		
		case joaat("habanero"):
			return 63;
			break;
		
		case joaat("hexer"):
			return 64;
			break;
		
		case joaat("hotknife"):
			return 65;
			break;
		
		case joaat("infernus"):
			return 66;
			break;
		
		case joaat("ingot"):
			return 67;
			break;
		
		case joaat("intruder"):
			return 68;
			break;
		
		case joaat("issi2"):
			return 69;
			break;
		
		case joaat("jackal"):
			return 70;
			break;
		
		case joaat("jb700"):
			return 71;
			break;
		
		case joaat("khamelion"):
			return 72;
			break;
		
		case joaat("landstalker"):
			return 73;
			break;
		
		case joaat("lguard"):
			return 74;
			break;
		
		case joaat("manana"):
			return 75;
			break;
		
		case joaat("mesa"):
			return 76;
			break;
		
		case joaat("minivan"):
		case joaat("minivan2"):
			return 77;
			break;
		
		case joaat("monroe"):
			return 78;
			break;
		
		case joaat("nemesis"):
			return 79;
			break;
		
		case joaat("ninef"):
			return 80;
			break;
		
		case joaat("ninef2"):
			return 81;
			break;
		
		case joaat("oracle"):
			return 82;
			break;
		
		case joaat("oracle2"):
			return 83;
			break;
		
		case joaat("patriot"):
			return 84;
			break;
		
		case joaat("pcj"):
			return 85;
			break;
		
		case joaat("penumbra"):
			return 86;
			break;
		
		case joaat("peyote"):
			return 87;
			break;
		
		case joaat("phoenix"):
			return 88;
			break;
		
		case joaat("prairie"):
			return 89;
			break;
		
		case joaat("pranger"):
			return 90;
			break;
		
		case joaat("premier"):
			return 91;
			break;
		
		case joaat("primo"):
		case joaat("primo2"):
			return 92;
			break;
		
		case joaat("radi"):
			return 93;
			break;
		
		case joaat("rancherxl"):
			return 94;
			break;
		
		case joaat("rancherxl2"):
			return 95;
			break;
		
		case joaat("rapidgt"):
			return 96;
			break;
		
		case joaat("rapidgt2"):
			return 97;
			break;
		
		case joaat("ratloader"):
			return 98;
			break;
		
		case joaat("rebel"):
			return 99;
			break;
		
		case joaat("rebel2"):
			return 100;
			break;
		
		case joaat("regina"):
			return 101;
			break;
		
		case joaat("rocoto"):
			return 102;
			break;
		
		case joaat("ruffian"):
			return 103;
			break;
		
		case joaat("ruiner"):
			return 104;
			break;
		
		case joaat("rumpo"):
			return 105;
			break;
		
		case joaat("sabregt"):
		case joaat("sabregt2"):
			return 106;
			break;
		
		case joaat("sadler"):
			return 107;
			break;
		
		case joaat("sanchez"):
			return 108;
			break;
		
		case joaat("sandking"):
			return 109;
			break;
		
		case joaat("sandking2"):
			return 110;
			break;
		
		case joaat("schafter2"):
			return 111;
			break;
		
		case joaat("schwarzer"):
			return 112;
			break;
		
		case joaat("seminole"):
			return 113;
			break;
		
		case joaat("sentinel"):
			return 114;
			break;
		
		case joaat("sentinel2"):
			return 115;
			break;
		
		case joaat("serrano"):
			return 116;
			break;
		
		case joaat("speedo"):
			return 117;
			break;
		
		case joaat("speedo2"):
			return 118;
			break;
		
		case joaat("stanier"):
			return 119;
			break;
		
		case joaat("stinger"):
			return 120;
			break;
		
		case joaat("stingergt"):
			return 121;
			break;
		
		case joaat("stratum"):
			return 122;
			break;
		
		case joaat("stretch"):
			return 123;
			break;
		
		case joaat("sultan"):
		case joaat("sultanrs"):
			return 124;
			break;
		
		case joaat("superd"):
			return 125;
			break;
		
		case joaat("surano"):
			return 126;
			break;
		
		case joaat("surge"):
			return 127;
			break;
		
		case joaat("tailgater"):
			return 128;
			break;
		
		case joaat("jester"):
			return 129;
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("tornado5"):
			return 133;
			break;
		
		case joaat("vacca"):
			return 134;
			break;
		
		case joaat("vader"):
			return 135;
			break;
		
		case joaat("vigero"):
			return 136;
			break;
		
		case joaat("voltic"):
			return 137;
			break;
		
		case joaat("voodoo2"):
		case joaat("voodoo"):
			return 138;
			break;
		
		case joaat("washington"):
			return 139;
			break;
		
		case joaat("youga"):
			return 140;
			break;
		
		case joaat("zion"):
			return 141;
			break;
		
		case joaat("zion2"):
			return 142;
			break;
		
		case joaat("ztype"):
			return 143;
			break;
		
		case joaat("massacro"):
			return 144;
			break;
		
		case joaat("turismor"):
			return 145;
			break;
		
		case joaat("zentorno"):
			return 146;
			break;
		
		case joaat("huntley"):
			return 147;
			break;
		
		case joaat("alpha"):
			return 148;
			break;
		
		case joaat("cruiser"):
			return 149;
			break;
		
		case joaat("surfer"):
			return 150;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
			return 151;
			break;
		
		case joaat("chino"):
		case joaat("chino2"):
			return 152;
			break;
		
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 153;
			break;
		
		case joaat("btype2"):
			return 154;
			break;
		
		case joaat("lurcher"):
			return 155;
			break;
		
		case joaat("btype3"):
			return 156;
			break;
		
		case joaat("faction3"):
			return 157;
			break;
		
		case joaat("slamvan"):
		case joaat("slamvan2"):
		case joaat("slamvan3"):
			return 158;
			break;
		
		case joaat("virgo2"):
			return 159;
			break;
		
		case joaat("virgo3"):
			return 160;
			break;
		
		case joaat("bestiagts"):
			return 161;
			break;
		
		case joaat("brickade"):
			return 162;
			break;
		
		case joaat("fmj"):
			return 163;
			break;
		
		case joaat("nimbus"):
			return 164;
			break;
		
		case joaat("pfister811"):
			return 165;
			break;
		
		case joaat("prototipo"):
			return 166;
			break;
		
		case joaat("rumpo3"):
			return 167;
			break;
		
		case joaat("seven70"):
			return 168;
			break;
		
		case joaat("tug"):
			return 169;
			break;
		
		case joaat("volatus"):
			return 170;
			break;
		
		case joaat("windsor2"):
			return 171;
			break;
		
		case joaat("xls"):
			return 172;
			break;
		
		case joaat("xls2"):
			return 173;
			break;
		
		case joaat("reaper"):
			return 174;
			break;
		
		case joaat("le7b"):
			return 175;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
			return 176;
			break;
		
		case joaat("dominator2"):
			return 177;
			break;
		
		case joaat("gauntlet2"):
			return 178;
			break;
		
		case joaat("stalion2"):
			return 179;
			break;
		
		case joaat("omnis"):
			return 180;
			break;
		
		case joaat("tropos"):
			return 181;
			break;
		
		case joaat("brioso"):
			return 182;
			break;
		
		case joaat("trophytruck"):
			return 183;
			break;
		
		case joaat("trophytruck2"):
			return 184;
			break;
		
		case joaat("contender"):
			return 185;
			break;
		
		case joaat("cliffhanger"):
			return 186;
			break;
		
		case joaat("bf400"):
			return 187;
			break;
		
		case joaat("tyrus"):
			return 188;
			break;
		
		case joaat("rallytruck"):
			return 189;
			break;
		
		case joaat("tampa2"):
			return 190;
			break;
		
		case joaat("gargoyle"):
			return 191;
			break;
		
		case joaat("lynx"):
			return 192;
			break;
		
		case joaat("sheava"):
			return 193;
			break;
		
		case joaat("avarus"):
			return 194;
			break;
		
		case joaat("chimera"):
			return 195;
			break;
		
		case joaat("daemon2"):
			return 196;
			break;
		
		case joaat("defiler"):
			return 197;
			break;
		
		case joaat("esskey"):
			return 198;
			break;
		
		case joaat("nightblade"):
			return 199;
			break;
		
		case joaat("ratbike"):
			return 200;
			break;
		
		case joaat("zombiea"):
			return 202;
			break;
		
		case joaat("zombieb"):
			return 203;
			break;
		
		case joaat("shotaro"):
			return 204;
			break;
		
		case joaat("raptor"):
			return 205;
			break;
		
		case joaat("hakuchou2"):
			return 206;
			break;
		
		case joaat("blazer4"):
			return 207;
			break;
		
		case joaat("sanctus"):
			return 208;
			break;
		
		case joaat("vortex"):
			return 209;
			break;
		
		case joaat("manchez"):
			return 210;
			break;
		
		case joaat("tornado6"):
			return 211;
			break;
		
		case joaat("youga2"):
			return 212;
			break;
		
		case joaat("wolfsbane"):
			return 213;
			break;
		
		case joaat("faggio3"):
			return 214;
			break;
		
		case joaat("faggio"):
			return 215;
			break;
		
		case joaat("dune5"):
			return 216;
			break;
		
		case joaat("phantom2"):
			return 217;
			break;
		
		case joaat("technical2"):
			return 218;
			break;
		
		case joaat("blazer5"):
			return 219;
			break;
		
		case joaat("boxville5"):
			return 220;
			break;
		
		case joaat("wastelander"):
			return 221;
			break;
		
		case joaat("ruiner2"):
			return 222;
			break;
		
		case joaat("voltic2"):
			return 223;
			break;
		
		case joaat("penetrator"):
			return 224;
			break;
		
		case joaat("tempesta"):
			return 225;
			break;
		
		case joaat("italigtb2"):
			return 226;
			break;
		
		case joaat("nero2"):
			return 227;
			break;
		
		case joaat("diablous2"):
			return 228;
			break;
		
		case joaat("fcr2"):
			return 229;
			break;
		
		case joaat("elegy"):
			return 230;
			break;
		
		case joaat("comet3"):
			return 232;
			break;
		
		case joaat("specter2"):
			return 232;
			break;
		
		case joaat("nero"):
			return 233;
			break;
		
		case joaat("italigtb"):
			return 234;
			break;
		
		case joaat("fcr"):
			return 235;
			break;
		
		case joaat("specter"):
			return 236;
			break;
		
		case joaat("diablous"):
			return 237;
			break;
		
		case joaat("infernus2"):
			return 238;
			break;
		
		case joaat("gp1"):
			return 239;
			break;
		
		case joaat("ruston"):
			return 240;
			break;
		
		case joaat("turismo2"):
			return 241;
			break;
		
		case joaat("cheetah2"):
			return 242;
			break;
		
		case joaat("torero"):
			return 243;
			break;
		
		case joaat("vagner"):
			return 244;
			break;
		
		case joaat("xa21"):
			return 245;
			break;
		
		case joaat("nightshark"):
			return 246;
			break;
		
		case joaat("ardent"):
			return 247;
			break;
		
		case joaat("tampa3"):
			return 248;
			break;
		
		case joaat("apc"):
			return 249;
			break;
		
		case joaat("dune3"):
			return 250;
			break;
		
		case joaat("halftrack"):
			return 251;
			break;
		
		case joaat("oppressor"):
			return 252;
			break;
		
		case joaat("trailersmall2"):
			return 253;
			break;
		
		case joaat("insurgent3"):
			return 254;
			break;
		
		case joaat("technical3"):
			return 255;
			break;
		
		case joaat("hauler2"):
			return 256;
			break;
		
		case joaat("phantom3"):
			return 257;
			break;
		
		case joaat("trailerlarge"):
			return 258;
			break;
		
		case joaat("lazer"):
			return 259;
			break;
		
		case joaat("microlight"):
			return 260;
			break;
		
		case joaat("mogul"):
			return 261;
			break;
		
		case joaat("rogue"):
			return 262;
			break;
		
		case joaat("starling"):
			return 263;
			break;
		
		case joaat("seabreeze"):
			return 264;
			break;
		
		case joaat("tula"):
			return 265;
			break;
		
		case joaat("pyro"):
			return 266;
			break;
		
		case joaat("molotok"):
			return 267;
			break;
		
		case joaat("nokota"):
			return 268;
			break;
		
		case joaat("bombushka"):
			return 269;
			break;
		
		case joaat("hunter"):
			return 270;
			break;
		
		case joaat("havok"):
			return 271;
			break;
		
		case joaat("howard"):
			return 272;
			break;
		
		case joaat("alphaz1"):
			return 273;
			break;
		
		case joaat("cyclone"):
			return 274;
			break;
		
		case joaat("visione"):
			return 275;
			break;
		
		case joaat("vigilante"):
			return 276;
			break;
		
		case joaat("retinue"):
			return 277;
			break;
		
		case joaat("rapidgt3"):
			return 278;
			break;
		
		case joaat("deluxo"):
			return 277;
			break;
		
		case joaat("stromberg"):
			return 278;
			break;
		
		case joaat("riot2"):
			return 279;
			break;
		
		case joaat("chernobog"):
			return 280;
			break;
		
		case joaat("khanjali"):
			return 281;
			break;
		
		case joaat("akula"):
			return 282;
			break;
		
		case joaat("thruster"):
			return 283;
			break;
		
		case joaat("avenger"):
			return 284;
			break;
		
		case joaat("barrage"):
			return 285;
			break;
		
		case joaat("volatol"):
			return 286;
			break;
		
		case joaat("comet4"):
			return 287;
			break;
		
		case joaat("neon"):
			return 288;
			break;
		
		case joaat("streiter"):
			return 289;
			break;
		
		case joaat("sentinel3"):
			return 290;
			break;
		
		case joaat("yosemite"):
			return 291;
			break;
		
		case joaat("hustler"):
			return 292;
			break;
		
		case joaat("riata"):
			return 293;
			break;
		
		case joaat("revolter"):
			return 294;
			break;
		
		case joaat("hermes"):
			return 295;
			break;
		
		case joaat("comet5"):
			return 296;
			break;
		
		case joaat("z190"):
			return 297;
			break;
		
		case joaat("viseris"):
			return 298;
			break;
		
		case joaat("kamacho"):
			return 299;
			break;
		
		case joaat("autarch"):
			return 300;
			break;
		
		case joaat("pariah"):
			return 301;
			break;
		
		case joaat("raiden"):
			return 302;
			break;
		
		case joaat("sc1"):
			return 303;
			break;
		
		case joaat("gt500"):
			return 304;
			break;
		
		case joaat("savestra"):
			return 305;
			break;
	}
	return -1;
}

int func_501(int iParam0)//Position - 0x3E54F
{
	switch (iParam0)
	{
		case joaat("CMOD_TYR_10"):
		case joaat("CMOD_SMOKE_10"):
			return 0;
			break;
		
		case joaat("CMOD_TYR_11"):
		case joaat("CMOD_SMOKE_11"):
			return 1;
			break;
		
		case joaat("HORN_CLAS1"):
		case joaat("CMOD_SMOKE_4"):
			return 2;
			break;
		
		case joaat("HORN_CLAS2"):
		case joaat("CMOD_SMOKE_5"):
			return 3;
			break;
		
		case joaat("HORN_CLAS3"):
		case joaat("CMOD_SMOKE_6"):
			return 4;
			break;
		
		case joaat("HORN_CLAS4"):
		case joaat("CMOD_SMOKE_7"):
			return 5;
			break;
		
		case joaat("HORN_CLAS5"):
			return 6;
			break;
		
		case joaat("HORN_CLAS6"):
		case joaat("CMOD_SMOKE_3"):
			return 7;
			break;
		
		case joaat("HORN_CLAS7"):
		case joaat("CMOD_SMOKE_8"):
			return 8;
			break;
		
		case joaat("HORN_CNOTE_C0"):
			return 9;
			break;
		
		case joaat("HORN_CNOTE_D0"):
			return 10;
			break;
		
		case joaat("HORN_CNOTE_E0"):
			return 11;
			break;
		
		case joaat("HORN_CNOTE_F0"):
			return 12;
			break;
		
		case joaat("HORN_CNOTE_G0"):
			return 13;
			break;
		
		case joaat("HORN_CNOTE_A0"):
			return 14;
			break;
		
		case joaat("HORN_CNOTE_B0"):
			return 15;
			break;
		
		case joaat("HORN_CNOTE_C1"):
			return 16;
			break;
		
		case joaat("CMOD_WIN_5"):
			return 17;
			break;
		
		case joaat("CMOD_TYR_12"):
		case joaat("CMOD_SMOKE_12"):
			return 18;
			break;
		
		case joaat("CMOD_TYR_13"):
		case joaat("CMOD_SMOKE_13"):
			return 19;
			break;
		
		case joaat("HORN_HIPS1"):
			return 20;
			break;
		
		case joaat("HORN_HIPS2"):
			return 22;
			break;
		
		case joaat("HORN_HIPS3"):
			return 22;
			break;
		
		case joaat("HORN_HIPS4"):
			return 23;
			break;
		
		case joaat("HORN_INDI_1"):
			return 24;
			break;
		
		case joaat("HORN_INDI_2"):
			return 25;
			break;
		
		case joaat("HORN_INDI_3"):
			return 26;
			break;
		
		case joaat("HORN_INDI_4"):
			return 27;
			break;
		
		case joaat("CMOD_TYR_PAT"):
			return 28;
			break;
		
		case joaat("HORN_LUXE1"):
			return 29;
			break;
		
		case joaat("HORN_LUXE2"):
			return 30;
			break;
		
		case joaat("HORN_LUXE3"):
			return 31;
			break;
		
		case joaat("HORN_LOWRDER1"):
			return 32;
			break;
		
		case joaat("HORN_LOWRDER2"):
			return 33;
			break;
		
		case joaat("HORN_HWEEN1"):
			return 34;
			break;
		
		case joaat("HORN_HWEEN2"):
			return 35;
			break;
		
		case joaat("HORN_XM15_1"):
			return 36;
			break;
		
		case joaat("HORN_XM15_2"):
			return 37;
			break;
		
		case joaat("HORN_XM15_3"):
			return 38;
			break;
	}
	return -1;
}

int func_502(int iParam0)//Position - 0x3E7B5
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_503(int iParam0)//Position - 0x3E7FC
{
	switch (iParam0)
	{
		case joaat("club"):
		case joaat("gauntlet5"):
		case joaat("weevil"):
		case joaat("zr350"):
		case joaat("remus"):
		case joaat("dominator7"):
		case joaat("tailgater2"):
		case joaat("previon"):
		case joaat("rt3000"):
			return 1;
		
		default:
	}
	return 0;
}

int func_504(int iParam0)//Position - 0x3E846
{
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("pounder2"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("oppressor2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("zr380"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("club"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
		case joaat("dukes3"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("astron"):
		case joaat("baller7"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("shinobi"):
		case joaat("iwagen"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
		case joaat("manchez3"):
		case joaat("brickade2"):
		case joaat("eudora"):
		case joaat("powersurge"):
		case joaat("surfer3"):
		case joaat("journey2"):
		case joaat("entity3"):
		case joaat("panthere"):
		case joaat("boor"):
		case joaat("everon2"):
		case joaat("tulip2"):
		case joaat("r300"):
		case joaat("virtue"):
		case joaat("issi8"):
		case joaat("broadway"):
		case joaat("tahoma"):
		case joaat("gauntlet6"):
		case joaat("brigham"):
		case joaat("clique2"):
		case joaat("l35"):
		case joaat("conada2"):
		case joaat("ratel"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("streamer216"):
		case joaat("monstrociti"):
		case joaat("coureur"):
		case joaat("raiju"):
		case joaat("inductor"):
		case joaat("inductor2"):
			return 1;
			break;
	}
	return 0;
}

void func_505(int iParam0, bool bParam1, int iParam2)//Position - 0x3EDFF
{
	if (bParam1)
	{
		if (!func_260(iParam0, 0, 0))
		{
			if (iParam2 && Global_100885.f_18[iParam0])
			{
				if (func_511(iParam0) == 3 && !func_510(iParam0))
				{
					func_509(iParam0);
					func_508(iParam0, 0, 0);
					func_507(iParam0, 1, 0);
					func_506(iParam0);
				}
				else
				{
					func_508(iParam0, 1, 0);
					func_506(iParam0);
				}
			}
			else
			{
				func_508(iParam0, 0, 0);
				func_507(iParam0, 1, 0);
				func_506(iParam0);
			}
		}
		else
		{
			func_507(iParam0, 1, 0);
			func_506(iParam0);
		}
	}
	else if (func_260(iParam0, 0, 0))
	{
		func_507(iParam0, 0, 0);
		func_507(iParam0, 1, 0);
		func_506(iParam0);
	}
}

void func_506(int iParam0)//Position - 0x3EEBE
{
	Global_100885.f_205[iParam0] = 1;
	Global_100885.f_204 = 1;
}

void func_507(int iParam0, int iParam1, bool bParam2)//Position - 0x3EED8
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
		if (func_85() == 0)
		{
			iVar0 = func_49(func_261(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_132(func_261(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_508(int iParam0, int iParam1, bool bParam2)//Position - 0x3EF48
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
		if (func_85() == 0)
		{
			iVar0 = func_49(func_261(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_132(func_261(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_509(int iParam0)//Position - 0x3EFB8
{
	if (Global_100885.f_18[iParam0])
	{
		func_508(iParam0, 10, 1);
		func_508(iParam0, 19, 1);
	}
}

bool func_510(int iParam0)//Position - 0x3EFDF
{
	return func_260(iParam0, 5, 1);
}

int func_511(int iParam0)//Position - 0x3EFEF
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

void func_512()//Position - 0x3F325
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char cVar14[16];
	
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bVar0 = false;
			iVar1 = 0;
			if (iLocal_78)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				iVar2 = func_23("playerNameMP");
				if (iVar2 != 0 && iVar2 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
				{
					iVar1 = 1;
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				iLocal_78 = 0;
			}
			if (iVar1 || iLocal_80)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_201("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				bVar0 = true;
				func_470(0, 1);
				func_470(1, 1);
				iLocal_80 = 0;
				APP::APP_CLOSE_BLOCK();
				if (bVar0)
				{
					iVar3 = 0;
					while (iVar3 < 5)
					{
						StringCopy(&cVar5, "multiplayer", 16);
						StringIntConCat(&cVar5, iVar3, 16);
						APP::APP_SET_BLOCK(&cVar5);
						iVar4 = 0;
						while (iVar4 < 10)
						{
							StringCopy(&cVar5, "vehicle", 16);
							StringIntConCat(&cVar5, iVar4, 16);
							APP::APP_SET_BLOCK(&cVar5);
							func_201("carUnlocked", 0);
							APP::APP_CLOSE_BLOCK();
							iVar4++;
						}
						APP::APP_CLOSE_BLOCK();
						iVar3++;
					}
				}
				APP::APP_CLOSE_APP();
			}
		}
		else
		{
			bVar9 = false;
			iVar10 = 0;
			if (iLocal_77)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				iVar11 = func_23("playerNameSP");
				if (iVar11 != 0 && iVar11 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
				{
					iVar10 = 1;
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				iLocal_77 = 0;
			}
			if (iVar10 || iLocal_79)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_201("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				iLocal_103 = 1;
				iLocal_79 = 0;
				bVar9 = true;
				APP::APP_CLOSE_BLOCK();
				if (bVar9)
				{
					iVar12 = 0;
					while (iVar12 < 5)
					{
						StringCopy(&cVar14, "multiplayer", 16);
						StringIntConCat(&cVar14, iVar12, 16);
						APP::APP_SET_BLOCK(&cVar14);
						iVar13 = 0;
						while (iVar13 < 10)
						{
							StringCopy(&cVar14, "vehicle", 16);
							StringIntConCat(&cVar14, iVar13, 16);
							APP::APP_SET_BLOCK(&cVar14);
							func_201("carUnlocked", 0);
							APP::APP_CLOSE_BLOCK();
							iVar13++;
						}
						APP::APP_CLOSE_BLOCK();
						iVar12++;
					}
				}
				APP::APP_CLOSE_APP();
			}
		}
	}
}

void func_513()//Position - 0x3F525
{
	int iVar0;
	char cVar1[16];
	char cVar5[16];
	int iVar9;
	struct<3> Var10;
	int iVar16;
	struct<3> Var17;
	int iVar23;
	
	iVar0 = func_194();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_2359296[iVar0 /*5568*/].f_593.f_53)
		{
			APP::APP_SET_APP("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, func_15(), 16);
			APP::APP_SET_BLOCK(&cVar1);
			iVar9 = 0;
			while (iVar9 < 10)
			{
				StringCopy(&cVar1, "vehicle", 16);
				StringIntConCat(&cVar1, iVar9, 16);
				APP::APP_SET_BLOCK(&cVar1);
				func_201("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
				iVar9++;
			}
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			StringCopy(&Var10, "orderCount_mp", 24);
			StringIntConCat(&Var10, func_15(), 24);
			func_201(&Var10, 0);
			APP::APP_CLOSE_BLOCK();
			iLocal_104 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			Global_2359296[iVar0 /*5568*/].f_593.f_53 = 1;
		}
		if (iLocal_75 >= 0 && BitTest(Global_1586488[iLocal_75 /*142*/].f_103, 26))
		{
			iVar16 = 0;
			while (iVar16 < 10)
			{
				if ((Global_2359296[iVar0 /*5568*/].f_593.f_63[iVar16] - 1) == iLocal_75)
				{
					APP::APP_SET_APP("car");
					StringCopy(&cVar1, "multiplayer", 16);
					StringIntConCat(&cVar1, func_15(), 16);
					APP::APP_SET_BLOCK(&cVar1);
					StringCopy(&cVar1, "vehicle", 16);
					StringIntConCat(&cVar1, iVar16, 16);
					APP::APP_SET_BLOCK(&cVar1);
					func_201("carUnlocked", 0);
					APP::APP_CLOSE_BLOCK();
					iLocal_104 = 1;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					MISC::CLEAR_BIT(&(Global_1586488[iLocal_75 /*142*/].f_103), 25);
					MISC::CLEAR_BIT(&(Global_1586488[iLocal_75 /*142*/].f_103), 26);
				}
				iVar16++;
			}
		}
		switch (iLocal_85)
		{
			case 0:
				if (Global_2359296[iVar0 /*5568*/].f_593.f_54)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_84 = true;
					iLocal_85++;
				}
				else
				{
					bLocal_84 = false;
				}
				break;
			
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
					{
						Global_2359296[iVar0 /*5568*/].f_593.f_54 = 0;
					}
					APP::APP_SET_APP("car");
					StringCopy(&cVar5, "mp", 16);
					StringIntConCat(&cVar5, func_15(), 16);
					StringConCat(&cVar5, "_order", 16);
					APP::APP_SET_BLOCK(&cVar5);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					StringCopy(&Var17, "orderCount_mp", 24);
					StringIntConCat(&Var17, func_15(), 24);
					func_201(&Var17, Global_2359296[iVar0 /*5568*/].f_593.f_61);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_85 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_113810.f_20121.f_260)
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_201("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_201("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			func_201("orderCount_sp0", 0);
			func_201("orderCount_sp1", 0);
			func_201("orderCount_sp2", 0);
			APP::APP_CLOSE_BLOCK();
			iLocal_104 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_201("chopSafeHouse", 0);
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			Global_113810.f_20121.f_273[0] = 0;
			Global_113810.f_20121.f_273[1] = 0;
			Global_113810.f_20121.f_273[2] = 0;
			Global_113810.f_20121.f_260 = 1;
		}
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (Global_113810.f_20121[iVar23 /*43*/].f_41)
			{
				APP::APP_SET_APP("car");
				StringCopy(&cVar1, "singleplayer", 16);
				StringIntConCat(&cVar1, iVar23, 16);
				APP::APP_SET_BLOCK(&cVar1);
				func_201("carUnlocked", 0);
				iLocal_104 = 1;
				SYSTEM::SETTIMERA(0);
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Global_113810.f_20121.f_273[iVar23] = 0;
				Global_113810.f_20121[iVar23 /*43*/].f_41 = 0;
				Global_113810.f_20121[iVar23 /*43*/].f_40 = 0;
				Global_113810.f_20121[iVar23 /*43*/] = 0;
				Global_113810.f_20121.f_273[iVar23] = 0;
			}
			iVar23++;
		}
		switch (iLocal_85)
		{
			case 0:
				if (Global_113810.f_20121.f_265)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_84 = true;
					iLocal_85++;
				}
				else
				{
					bLocal_84 = false;
				}
				break;
			
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
					{
						Global_113810.f_20121.f_265 = 0;
					}
					APP::APP_SET_APP("car");
					StringCopy(&cVar5, "sp", 16);
					StringIntConCat(&cVar5, Global_113810.f_20121.f_266, 16);
					StringConCat(&cVar5, "_order", 16);
					APP::APP_SET_BLOCK(&cVar5);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					func_201("orderCount_sp0", Global_113810.f_20121.f_285[0]);
					func_201("orderCount_sp1", Global_113810.f_20121.f_285[1]);
					func_201("orderCount_sp2", Global_113810.f_20121.f_285[2]);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_85 = 0;
				}
				break;
			}
	}
}

int func_514(int iParam0)//Position - 0x3F994
{
	if (iParam0 != func_99())
	{
		if (func_163(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_404(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

void func_515()//Position - 0x3F9DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!APP::APP_HAS_SYNCED_DATA("car"))
	{
		return;
	}
	if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT())
	{
		iLocal_81 = 0;
		return;
	}
	else
	{
		if (!iLocal_81)
		{
			iLocal_79 = 1;
			iLocal_80 = 1;
			iLocal_77 = 1;
			iLocal_78 = 1;
			Global_110507 = 1;
		}
		iLocal_81 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_85() != 0)
		{
			return;
		}
		if (!func_164())
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_85() == 0)
		{
			iLocal_71 = 1;
		}
		if (!Global_2359296[func_194() /*5568*/].f_593.f_87)
		{
			iVar0 = 9;
			while (iVar0 >= 0)
			{
				Global_2359296[func_194() /*5568*/].f_593.f_63[iVar0] = iVar0 + 1;
				Global_2359296[func_194() /*5568*/].f_593.f_74[iVar0] = iVar0 + 1;
				Global_2359296[func_194() /*5568*/].f_593.f_41[iVar0] = 0;
				iVar0 = (iVar0 + -1);
			}
			Global_2359296[func_194() /*5568*/].f_593.f_85 = -1;
			Global_2359296[func_194() /*5568*/].f_593.f_87 = 1;
		}
		uLocal_82 = func_21(2921, -1);
		bLocal_83 = func_21(2922, -1);
		if (func_516())
		{
			if (!func_21(3612, -1))
			{
				func_470(0, 1);
				func_470(1, 1);
				func_14(3612, 1, -1);
			}
		}
		else if (func_21(3612, -1))
		{
			func_14(3612, 0, -1);
		}
	}
	else
	{
		iLocal_71 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2359296[func_194() /*5568*/].f_593.f_36)
		{
			iLocal_328 = 1;
		}
		if (func_105(187, -1))
		{
			iLocal_328 = 1;
			func_57(187, 0, -1, 1);
		}
		if (!Global_262145.f_10762 /* Tunable: DISABLE_SC_NUMBER_PLATE_INITIAL_GET */ && !Global_110509)
		{
			iLocal_328 = 1;
		}
	}
	else if ((Global_113810.f_20121.f_130[0 /*41*/].f_36 || Global_113810.f_20121.f_130[1 /*41*/].f_36) || Global_113810.f_20121.f_130[2 /*41*/].f_36)
	{
		iLocal_328 = 1;
	}
	iLocal_85 = 0;
	iLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_130 = 0;
	bLocal_87 = false;
	iLocal_88 = 0;
	if (!iLocal_131 || Global_110341)
	{
		Global_113810.f_20121.f_264 = 1;
		iLocal_103 = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar1 = func_23("appUID");
		if (iVar1 != Global_113810.f_20121.f_272)
		{
			iLocal_103 = 1;
		}
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		iVar2 = 0;
		while (iVar2 < Global_113810.f_20121.f_130)
		{
			iLocal_109[iVar2] = 0;
			iLocal_113[iVar2] = 0;
			iLocal_117[iVar2] = 0;
			iVar2++;
		}
		iLocal_121 = 0;
	}
	Global_110341 = 0;
	iLocal_131 = 1;
	iLocal_70 = 1;
}

int func_516()//Position - 0x3FC62
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

void func_517()//Position - 0x3FD1A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_110511)
	{
		NETWORK::NETWORK_BAIL(49, 0, 0);
	}
}

void func_518()//Position - 0x3FD3A
{
	func_524();
	switch (iLocal_65)
	{
		case 0:
			func_523();
			break;
		
		case 1:
			func_521();
			break;
		
		case 2:
			func_519();
			break;
	}
}

void func_519()//Position - 0x3FD74
{
	func_520(0);
}

void func_520(int iParam0)//Position - 0x3FD81
{
	iLocal_65 = iParam0;
}

void func_521()//Position - 0x3FD8D
{
	struct<2> Var0;
	
	switch (iLocal_66)
	{
		case 0:
			iLocal_68 = iLocal_67;
			SCRIPT::REQUEST_SCRIPT("tuneables_processing");
			if (SCRIPT::HAS_SCRIPT_LOADED("tuneables_processing") && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1424) > 0)
			{
				Var0.f_0 = func_522(iLocal_67);
				Var0.f_1 = func_522(iLocal_69);
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuneables_processing", &Var0, 2, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("tuneables_processing");
				iLocal_66++;
			}
			break;
		
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tuneables_processing")) == 0)
			{
				func_520(2);
				iLocal_66 = 0;
			}
			break;
	}
}

int func_522(int iParam0)//Position - 0x3FE1A
{
	if (iParam0 >= 22)
	{
		return (28 + (iParam0 - 22));
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 9;
		
		case 6:
			return 10;
		
		case 7:
			return 11;
		
		case 8:
			return 12;
		
		case 9:
			return 13;
		
		case 10:
			return 14;
		
		case 11:
			return 17;
		
		case 12:
			return 18;
		
		case 13:
			return 19;
		
		case 18:
			return 26;
		
		case 14:
			return 20;
		
		case 15:
			return 21;
		
		case 16:
			return 22;
		
		case 19:
			return 23;
		
		case 17:
			return 24;
		
		case 20:
			return 25;
		
		case 21:
			return 27;
		
		default:
	}
	return 0;
}

void func_523()//Position - 0x3FF2B
{
	if (iLocal_67 != iLocal_68 || Global_262144)
	{
		Global_262144 = 0;
		func_520(1);
	}
}

void func_524()//Position - 0x3FF4F
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_115()) && !func_558()) && func_85() == -1)
	{
		iLocal_67 = 0;
		iLocal_69 = 21;
	}
	else
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_557())
		{
			return;
		}
		if (Global_1950540)
		{
			return;
		}
		iLocal_67 = 1;
		iLocal_69 = 21;
		iVar0 = func_556(PLAYER::PLAYER_ID());
		if (iVar0 != -1)
		{
			iVar1 = -1;
			if (func_101(PLAYER::PLAYER_ID()))
			{
				iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_1048576.f_44)));
			}
			if (iVar1 == -1)
			{
				iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_4718592.f_117878)));
			}
			iLocal_69 = func_555(iVar1);
			if (iVar0 == 0)
			{
				if (func_408(PLAYER::PLAYER_ID(), 0, 0) && func_533(Global_4718592.f_117591, Global_4718592.f_171044))
				{
					iLocal_67 = 20;
				}
				else if (func_532(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 12;
				}
				else if (func_531(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 13;
				}
				else if (func_530(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 14;
				}
				else if (func_529(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 16;
				}
				else if (func_528(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 15;
				}
				else if (func_527(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 19;
				}
				else if (func_526(PLAYER::PLAYER_ID()) || func_525(PLAYER::PLAYER_ID()))
				{
					iLocal_67 = 18;
				}
				else
				{
					iLocal_67 = 3;
				}
			}
			if (iVar0 == 3)
			{
				iLocal_67 = 4;
			}
			if (iVar0 == 1 || Global_1836590)
			{
				iLocal_67 = 2;
			}
			if (iVar0 == 2)
			{
				iLocal_67 = 5;
				if (Global_4718592.f_108230 == 0 || Global_4718592.f_108230 == 1)
				{
					iLocal_67 = 5;
				}
				if (((Global_4718592.f_108230 == 6 || Global_4718592.f_108230 == 7) || Global_4718592.f_108230 == 18) || Global_4718592.f_108230 == 19)
				{
					iLocal_67 = 10;
				}
				if (Global_4718592.f_108230 == 2 || Global_4718592.f_108230 == 3)
				{
					iLocal_67 = 9;
				}
				if (Global_4718592.f_108230 == 4 || Global_4718592.f_108230 == 5)
				{
					iLocal_67 = 8;
				}
				if ((Global_4718592.f_108230 == 8 || Global_4718592.f_108230 == 9) || Global_1836617)
				{
					iLocal_67 = 11;
				}
				if (Global_4718592.f_108230 == 12 || Global_4718592.f_108230 == 13)
				{
					if (Global_4718592.f_108233 == 8)
					{
						iLocal_67 = 6;
					}
					else
					{
						iLocal_67 = 7;
					}
				}
			}
			if (iVar0 == 8)
			{
				iLocal_67 = 11;
			}
		}
		if (func_4())
		{
			iLocal_67 = 1;
			iLocal_69 = 21;
		}
		if ((((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_115()) && !func_558()) && !func_85() == -1) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_2692792 > 10000)
			{
				CLOCK::GET_POSIX_TIME(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
				if ((Var2.f_0 > Global_2692785 || Var2.f_1 > Global_2692785.f_1) || Var2.f_2 > Global_2692785.f_2)
				{
					CLOCK::GET_POSIX_TIME(&Global_2692785, &(Global_2692785.f_1), &(Global_2692785.f_2), &(Global_2692785.f_3), &(Global_2692785.f_4), &(Global_2692785.f_5));
					func_520(1);
					Global_2692792 = 0;
				}
				Global_2692792 = 0;
			}
			else
			{
				Global_2692792++;
			}
		}
	}
}

bool func_525(int iParam0)//Position - 0x402ED
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

bool func_526(int iParam0)//Position - 0x40302
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_527(int iParam0)//Position - 0x40317
{
	return Global_2657704[iParam0 /*463*/].f_121 == 8;
}

bool func_528(int iParam0)//Position - 0x4032D
{
	return Global_2657704[iParam0 /*463*/].f_121 == 3;
}

bool func_529(int iParam0)//Position - 0x40342
{
	return Global_2657704[iParam0 /*463*/].f_121 == 4;
}

bool func_530(int iParam0)//Position - 0x40357
{
	return Global_2657704[iParam0 /*463*/].f_121 == 1;
}

bool func_531(int iParam0)//Position - 0x4036C
{
	return Global_2657704[iParam0 /*463*/].f_121 == 5;
}

bool func_532(int iParam0)//Position - 0x40381
{
	return Global_2657704[iParam0 /*463*/].f_121 == 6;
}

int func_533(int iParam0, int iParam1)//Position - 0x40396
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_554(iParam0) || func_553(iParam0)) || func_552(iParam0)) || func_551(iParam0, 1)) || func_550(iParam0)) || func_549(iParam0)) || func_548(iParam0)) || func_547(iParam0)) || func_546(iParam0)) || func_545(iParam0)) || func_544(iParam0)) || func_543(iParam0)) || func_542(iParam0)) || func_541(iParam0)) || func_540(iParam0)) || func_539(iParam0)) || func_538(iParam0)) || func_537(iParam0)) || func_536(iParam0)) || func_535(iParam1)) || func_534(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_534(int iParam0)//Position - 0x404A7
{
	return iParam0 == 65;
}

bool func_535(int iParam0)//Position - 0x404B4
{
	return iParam0 == 57;
}

int func_536(int iParam0)//Position - 0x404C1
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 30)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9860[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_537(int iParam0)//Position - 0x4050E
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9893[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_538(int iParam0)//Position - 0x4055B
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 31)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9882[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_539(int iParam0)//Position - 0x405A8
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 34)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9871[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_540(int iParam0)//Position - 0x405F5
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 29)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9847[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_541(int iParam0)//Position - 0x40642
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9836[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_542(int iParam0)//Position - 0x4068F
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 28)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9825[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_543(int iParam0)//Position - 0x406DC
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9814[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x40729
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_545(int iParam0)//Position - 0x40776
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 33)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9739[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_546(int iParam0)//Position - 0x407C3
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 86)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9728[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_547(int iParam0)//Position - 0x40810
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 84)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9706[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_548(int iParam0)//Position - 0x4085D
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 25)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9695[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0)//Position - 0x408AA
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 85)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9684[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_550(int iParam0)//Position - 0x408F7
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9650[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0, bool bParam1)//Position - 0x40943
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_171044 == 65)
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
		if (iParam0 == Global_262145.f_9658[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x40994
{
	if (Global_4718592.f_171044 == 18)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9645 /* Tunable: NEW_VS_COME_OUT_TO_PLAY_0 */ || iParam0 == Global_262145.f_9646 /* Tunable: NEW_VS_COME_OUT_TO_PLAY_1 */) || iParam0 == Global_262145.f_9647 /* Tunable: NEW_VS_COME_OUT_TO_PLAY_2 */) || iParam0 == Global_262145.f_9648 /* Tunable: NEW_VS_COME_OUT_TO_PLAY_3 */) || iParam0 == Global_262145.f_9649 /* Tunable: NEW_VS_COME_OUT_TO_PLAY_4 */)
	{
		return 1;
	}
	return 0;
}

int func_553(int iParam0)//Position - 0x40A01
{
	if (Global_4718592.f_171044 == 20)
	{
		return 1;
	}
	if ((((iParam0 == Global_262145.f_9640 /* Tunable: NEW_VS_HASTA_LA_VISTA_0 */ || iParam0 == Global_262145.f_9641 /* Tunable: NEW_VS_HASTA_LA_VISTA_1 */) || iParam0 == Global_262145.f_9642 /* Tunable: NEW_VS_HASTA_LA_VISTA_2 */) || iParam0 == Global_262145.f_9643 /* Tunable: NEW_VS_HASTA_LA_VISTA_3 */) || iParam0 == Global_262145.f_9644 /* Tunable: NEW_VS_HASTA_LA_VISTA_4 */)
	{
		return 1;
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x40A6E
{
	if (Global_4718592.f_171044 == 19)
	{
		return 1;
	}
	if ((((((iParam0 == Global_262145.f_9633 /* Tunable: NEW_VS_SIEGE_MEMTALITY_0 */ || iParam0 == Global_262145.f_9634 /* Tunable: NEW_VS_SIEGE_MEMTALITY_1 */) || iParam0 == Global_262145.f_9635 /* Tunable: NEW_VS_SIEGE_MEMTALITY_2 */) || iParam0 == Global_262145.f_9636 /* Tunable: NEW_VS_SIEGE_MEMTALITY_3 */) || iParam0 == Global_262145.f_9637 /* Tunable: NEW_VS_SIEGE_MEMTALITY_4 */) || iParam0 == Global_262145.f_9638 /* Tunable: NEW_VS_SIEGE_MEMTALITY_5 */) || iParam0 == Global_262145.f_9639 /* Tunable: NEW_VS_SIEGE_MEMTALITY_6 */)
	{
		return 1;
	}
	return 0;
}

int func_555(int iParam0)//Position - 0x40AFB
{
	if (iParam0 >= 0)
	{
		return (22 + iParam0);
	}
	return 21;
}

var func_556(int iParam0)//Position - 0x40B13
{
	return Global_1853988[iParam0 /*867*/];
}

var func_557()//Position - 0x40B24
{
	return BitTest(Global_2683883.f_43.f_4, 0);
}

bool func_558()//Position - 0x40B36
{
	return Global_2683883.f_692;
}

void func_559()//Position - 0x40B45
{
	if (iLocal_70 != 0 && iLocal_71 != 2)
	{
		if (iLocal_71 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_71 = 2;
			}
		}
		else if (iLocal_71 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_115()) && !func_560())
			{
				iLocal_71 = 2;
			}
			if (func_85() != 0)
			{
				iLocal_71 = 2;
			}
		}
		if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT())
		{
			iLocal_71 = 2;
		}
		if (Global_110341)
		{
			iLocal_71 = 2;
		}
		if (iLocal_71 == 2)
		{
			iLocal_70 = 0;
		}
	}
}

int func_560()//Position - 0x40BBE
{
	if ((((func_112() || func_111()) || func_115()) || func_562()) || func_561())
	{
		return 1;
	}
	return 0;
}

var func_561()//Position - 0x40BFA
{
	return Global_2683883.f_843;
}

var func_562()//Position - 0x40C09
{
	return Global_2683883.f_693;
}

int func_563()//Position - 0x40C18
{
	if (Global_1574996 == 68)
	{
		return 1;
	}
	return 0;
}

