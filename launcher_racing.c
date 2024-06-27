#region Local Var
	int* iLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	struct<6> Local_81 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	float fLocal_119 = 0f;
	struct<3> Local_120[3];
	float fLocal_130[3] = { 0f, 0f, 0f };
	struct<3> Local_134[7];
	float fLocal_156[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_164[3] = { 0, 0, 0 };
	int iLocal_168[3] = { 0, 0, 0 };
	int iLocal_172[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	char[] cLocal_182[8] = 0;
	char* sLocal_183[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int* iLocal_196 = NULL;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	struct<3> Local_199 = { 0, 0, 0 } ;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_205 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	float fLocal_211 = 0f;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	var uLocal_214 = 8;
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
	var uLocal_361 = 1;
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
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_91 = 1;
	bLocal_100 = true;
	iLocal_181 = joaat("feltzer2");
	iLocal_191 = 1;
	Local_199 = { 0f, 0f, 0f };
	Local_202 = { 1f, 1f, 1f };
	Local_205 = { 0f, 0f, 0f };
	Local_208 = { 0f, 0f, 0f };
	fLocal_211 = 0f;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	Local_87 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_220(0);
	}
	func_217();
	switch (Local_81.f_1)
	{
		case 1:
		case 2:
			if (!func_216(0, 8))
			{
				func_220(0);
			}
			if (!func_215(Local_81.f_0))
			{
				func_220(0);
			}
			break;
		
		case 3:
			if (!func_216(0, 7))
			{
				func_220(0);
			}
			break;
		
		case 0:
			func_220(0);
			break;
	}
	func_209();
	if (!func_185())
	{
		func_220(0);
	}
	func_179();
	while (true)
	{
		func_176(&uLocal_214);
		if (func_185())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_80)
				{
					case 0:
						iLocal_80 = 1;
						break;
					
					case 1:
						func_167();
						func_136();
						break;
					
					case 2:
						func_68();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_220(0);
			}
		}
		else
		{
			func_220(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19F
{
	if (!bLocal_98)
	{
		func_11();
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x1B8
{
	func_10(-1);
	func_9(0);
	func_8(Local_87);
	func_7();
	Global_1574510 = 1;
	Global_1574510.f_1 = Local_81.f_0;
	StringCopy(&(Global_1574510.f_2), func_6(), 24);
	StringCopy(&(Global_1574510.f_8), func_3(Local_81.f_0), 32);
	Global_1574510.f_16 = { Local_87 };
	Global_1575086 = 1;
	func_220(1);
}

char* func_3(int iParam0)//Position - 0x213
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (func_5())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (func_4())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

bool func_4()//Position - 0x4EF
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_5()//Position - 0x505
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

char* func_6()//Position - 0x51B
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (func_5())
	{
		sVar0 = "SPRACE";
	}
	else if (func_4())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_PC_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_7()//Position - 0x57B
{
	MISC::SET_BIT(&Global_1574589, 0);
}

void func_8(struct<3> Param0)//Position - 0x58C
{
	Global_1574589.f_6 = { Param0 };
}

void func_9(int iParam0)//Position - 0x5A0
{
	Global_1574589.f_2 = iParam0;
}

void func_10(int iParam0)//Position - 0x5B0
{
	Global_1574589.f_1 = iParam0;
}

void func_11()//Position - 0x5C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_81.f_2 = -1;
	if (func_67(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	while (!func_61())
	{
		SYSTEM::WAIT(0);
	}
	if (Local_81.f_1 != 3)
	{
		func_19(func_55(), 1, Local_81.f_3);
		iVar0 = MISC::GET_GAME_TIMER() + 1500;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_17(iVar1))
		{
			while (!func_14(iVar1, 3f, 2, 1056964608, 0, 1, 0) || MISC::GET_GAME_TIMER() < iVar0)
			{
				SYSTEM::WAIT(0);
			}
		}
		iVar2 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(iVar2))
		{
			PLAYER::SET_PLAYER_CONTROL(iVar2, false, 0);
		}
	}
	func_12();
}

void func_12()//Position - 0x66F
{
	if (!func_13(0))
	{
		SCRIPT::REQUEST_SCRIPT("mission_Race");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race"))
		{
			SCRIPT::REQUEST_SCRIPT("mission_Race");
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_81, 6, 62500);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
	func_220(1);
}

int func_13(bool bParam0)//Position - 0x6C4
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_14(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6EC
{
	func_16(bParam5, bParam6);
	func_15(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_30) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_30 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_15(int iParam0)//Position - 0x743
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_16(bool bParam0, bool bParam1)//Position - 0x76F
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

int func_17(int iParam0)//Position - 0x8C0
{
	if (func_18(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x8EA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, int iParam2)//Position - 0x90B
{
	if (func_54(iParam0) == 3)
	{
		return 0;
	}
	if (func_54(iParam0) == 4)
	{
		return 0;
	}
	return func_20(func_54(iParam0), 0, iParam1, iParam2, 0);
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x93F
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_53();
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
					func_52(99, 1);
					func_51(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_51(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_51(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_35(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_32(5))
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
							func_51(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_32(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_51(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_51(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_32(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_31(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_52(95, iParam3);
					break;
				
				case 1:
					func_52(97, iParam3);
					break;
				
				case 2:
					func_52(96, iParam3);
					break;
			}
			func_52(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_23(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_23(bVar1);
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
					func_51(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_51(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_51(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_22(iParam0);
	if (Global_44042 == 15)
	{
		func_21(0);
	}
	return 1;
}

void func_21(bool bParam0)//Position - 0xF3E
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

void func_22(int iParam0)//Position - 0x11C0
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

void func_23(bool bParam0)//Position - 0x121A
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_30(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_30(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_30(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_30(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_26(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_26(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_26(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_26(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_26(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_26(8277, 0, -1, 1);
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
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_25() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_25() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_24(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_24(bool bParam0)//Position - 0x1394
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

int func_25()//Position - 0x1497
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_26(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x14A4
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_27(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_27(int iParam0, var uParam1)//Position - 0x14D2
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_28(uParam1));
}

int func_28(var uParam0)//Position - 0x14E7
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_29()//Position - 0x151B
{
	return Global_1574926;
}

void func_30(int iParam0, bool bParam1, int iParam2)//Position - 0x1527
{
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_31(int iParam0)//Position - 0x1545
{
	func_52(93, iParam0);
	func_52(29, iParam0);
	func_52(30, iParam0);
}

int func_32(int iParam0)//Position - 0x1565
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
		return func_34(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_34(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_34(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_34(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_33(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_33(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_33(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_33(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_33(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_33(8277, -1);
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
	return BitTest(Global_2359296[func_25() /*5570*/].f_681.f_10, iParam0);
}

int func_33(int iParam0, int iParam1)//Position - 0x1705
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_27(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)//Position - 0x1734
{
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_35(bool bParam0)//Position - 0x1750
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
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_36(27, 1);
	return 1;
}

int func_36(int iParam0, int iParam1)//Position - 0x1807
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_37(iParam0, iParam1);
}

int func_37(int iParam0, int iParam1)//Position - 0x1822
{
	if (func_49(14) && !func_48(iParam0))
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
	if (func_47(&Global_4543384))
	{
		if (func_45(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_38(&Global_4543384, iParam0))
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

int func_38(var uParam0, int iParam1)//Position - 0x18BF
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_49(14) && !func_48(iParam1))
	{
		return 0;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0);
	}
	func_41(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_39(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_39(var uParam0, int iParam1)//Position - 0x1970
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_49(14) && !func_48(iParam1))
	{
		return 0;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_40(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_40(var uParam0, int iParam1)//Position - 0x19EB
{
	return (*uParam0)[iParam1] == 78;
}

void func_41(var uParam0)//Position - 0x19FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_42(uParam0, iVar0);
		iVar0++;
	}
	func_43(uParam0, (Global_4543383 - 0.5f));
}

void func_42(var uParam0, int iParam1)//Position - 0x1A30
{
	(*uParam0)[iParam1] = 78;
}

void func_43(var uParam0, float fParam1)//Position - 0x1A40
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

float func_44(var uParam0)//Position - 0x1A5D
{
	return uParam0->f_80;
}

bool func_45(var uParam0, int iParam1)//Position - 0x1A69
{
	return func_46(uParam0, iParam1) != -1;
}

int func_46(var uParam0, int iParam1)//Position - 0x1A7B
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

bool func_47(var uParam0)//Position - 0x1AA8
{
	return uParam0->f_79 == 1;
}

int func_48(int iParam0)//Position - 0x1AB6
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

bool func_49(int iParam0)//Position - 0x1B06
{
	return Global_44042 == iParam0;
}

int func_50(int iParam0, int iParam1)//Position - 0x1B14
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

void func_51(int iParam0, int iParam1)//Position - 0x1B65
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_52(int iParam0, int iParam1)//Position - 0x1B88
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

void func_53()//Position - 0x1BE5
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

int func_54(int iParam0)//Position - 0x1C5A
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_55()//Position - 0x1C6B
{
	func_56();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_56()//Position - 0x1C84
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_59(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_58(PLAYER::PLAYER_PED_ID());
			if (func_57(iVar0) && (!func_49(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_57(Global_113969.f_2366.f_539.f_4321))
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

bool func_57(int iParam0)//Position - 0x1D81
{
	return iParam0 < 3;
}

int func_58(int iParam0)//Position - 0x1D8D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)//Position - 0x1DCA
{
	if (func_57(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_60(int iParam0)//Position - 0x1DEF
{
	return Global_2169[iParam0 /*29*/];
}

int func_61()//Position - 0x1DFE
{
	int iVar0;
	
	iVar0 = func_62(&(Local_81.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_62(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1E22
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
		if (func_66(0))
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
		if (!func_64(iParam2))
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
			func_63(uParam0, iParam4);
		}
	}
	return 2;
}

void func_63(var uParam0, int iParam1)//Position - 0x1F59
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

bool func_64(int iParam0)//Position - 0x1FA8
{
	return func_65(iParam0, Global_44042);
}

int func_65(int iParam0, int iParam1)//Position - 0x1FB9
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

int func_66(int iParam0)//Position - 0x219A
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_64(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_67(int iParam0)//Position - 0x21BC
{
	if (func_18(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_68()//Position - 0x21DC
{
	int iVar0;
	
	switch (iLocal_94)
	{
		case 0:
			if (func_134(0, -1, 0))
			{
				HUD::CLEAR_HELP(true);
				func_126();
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				iLocal_99 = 1;
				bLocal_97 = false;
				bLocal_98 = false;
				iLocal_94 = 1;
			}
			break;
		
		case 1:
			if (func_82())
			{
				iLocal_94 = 2;
			}
			break;
		
		case 2:
			iVar0 = PLAYER::GET_PLAYER_INDEX();
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
			PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
			func_72(0, 1, 1, 0, 0, 0, 0);
			func_69(1, -1);
			iLocal_94 = 0;
			if (bLocal_97)
			{
				iLocal_80 = 3;
			}
			else
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
				iLocal_80 = 1;
			}
			break;
	}
}

void func_69(bool bParam0, int iParam1)//Position - 0x2270
{
	int iVar0;
	
	if (!func_71(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23831.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23831.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_70(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_70(int* iParam0)//Position - 0x2336
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_71(var uParam0, bool bParam1, int iParam2)//Position - 0x2362
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23831.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23831.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23831.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_72(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x23FF
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_81(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_80())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_79(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_81(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_79(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_77(PLAYER::PLAYER_ID())) && !func_74(PLAYER::PLAYER_ID(), 0)) && !func_73()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_77(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_73()//Position - 0x254C
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_74(int iParam0, int iParam1)//Position - 0x2566
{
	bool bVar0;
	
	if (!func_76(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_75(-1, 0) == 8;
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

int func_75(int iParam0, bool bParam1)//Position - 0x25BF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_76(var uParam0)//Position - 0x2600
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

int func_77(int iParam0)//Position - 0x2622
{
	if (func_74(iParam0, 0))
	{
		return 1;
	}
	if (func_78())
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

bool func_78()//Position - 0x2661
{
	return BitTest(Global_2621446, 3);
}

int func_79(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x266F
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

int func_80()//Position - 0x26A2
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_81(int iParam0)//Position - 0x26C9
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

int func_82()//Position - 0x26EC
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_125(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	if (iLocal_96 != 0)
	{
		if (SYSTEM::TIMERA() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_96 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
	bVar5 = (iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_95 == 1)
		{
			bLocal_98 = true;
		}
		else
		{
			bLocal_98 = false;
		}
		bLocal_97 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_192 = 0;
		bLocal_97 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_95 == 0)
			{
				iLocal_95 = 1;
			}
			else if (iLocal_95 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_95 == 1)
			{
				iLocal_95 = 0;
			}
			else if (iLocal_95 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_96 = 1;
			}
			func_124(iLocal_95, 1, 1);
		}
	}
	func_83(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_83(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x2848
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
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_71(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_121(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23831)
	{
		if (func_119(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23829;
	}
	else
	{
		fVar59 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_117(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_113(Global_23831.f_5821 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar63, func_112(29), 64);
					StringCopy(&cVar79, func_109(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_108(Global_23828, Global_23829, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23828 + (fParam5 * 0.5f)), (Global_23829 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_108(Global_23828, (Global_23829 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23829 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) != 0)
				{
					func_107();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23828 + 0.00390625f), ((Global_23829 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_107();
					func_105((((Global_23828 + fParam5) - 0.00390625f) - func_106("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_107();
						func_105((((Global_23828 + fParam5) - 0.00390625f) - func_106("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23831.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_108(Global_23828, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23831.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_119(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_104(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_108(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_104(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_119(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_103(Global_23831.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_5325), func_109(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_104(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_108(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_104(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_104(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_108(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_104(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23828 + 0.0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_119(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23828 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_104(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_108(Global_23828, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_104(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_119(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_103(Global_4541740.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_112(Global_4541740.f_67), func_109(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_98(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar98 = (Global_23831.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23831.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23831.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0.0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23828 + Global_23830) - 0.0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_96(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_119(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23831.f_5686[iVar101] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar101)] - Global_23831.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_119(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_119(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_112(26), func_109(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_119(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_119(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_112(27), func_109(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_96(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_95(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_119(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_119(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_103(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_4984[(iVar22 + iVar28)]), func_109(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_4984[(iVar22 + iVar28)]), func_109(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_94() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_96(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23831.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_119(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_119(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_103(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_4984[(iVar22 + iVar14)]), func_109(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_4984[(iVar22 + iVar14)]), func_109(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_4984[(iVar22 + iVar14)]), func_109(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_96(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_95(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_119(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_119(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_112(26), func_109(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_119(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_119(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_112(27), func_109(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_96(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										func_93((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_96(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_95(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar43 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_119(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_119(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_112(26), func_109(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_119(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_119(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_112(27), func_109(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_96(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar55, 0, 0, 0);
									func_92((fVar34 + fVar42), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_119(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar44 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_119(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_119(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_103(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_112(26), func_109(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_119(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_119(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_103(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_112(27), func_109(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_119(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_103(Global_23831.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_112(Global_23831.f_4984[iVar22]), func_109(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_91(Global_23831.f_4984[iVar22])), (fVar37 * func_91(Global_23831.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_119(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar51;
	Global_23831.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_85(0);
	}
	Global_23831.f_9081 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_84(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_84(int iParam0)//Position - 0x5A06
{
	Global_1670224.f_1163 = iParam0;
}

void func_85(int iParam0)//Position - 0x5A17
{
	if (func_90())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_89(0))
		{
			func_86(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_86(int iParam0)//Position - 0x5A4A
{
	if (func_90())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_88())
		{
			func_87(1, 1);
		}
		else
		{
			func_87(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_80())
	{
		Global_20930.f_1 = 3;
	}
}

void func_87(bool bParam0, bool bParam1)//Position - 0x5AD4
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_88()//Position - 0x5B48
{
	return BitTest(Global_1956920, 5);
}

int func_89(int iParam0)//Position - 0x5B56
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_90()//Position - 0x5BAD
{
	return BitTest(Global_1956920, 19);
}

float func_91(int iParam0)//Position - 0x5BBC
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_92(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x5C2B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_93(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x5C4A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_94()//Position - 0x5C68
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_95(bool bParam0)//Position - 0x5C79
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_96(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5CBF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_97(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_97(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5E6D
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_98(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x60F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_71(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_121(bParam4, bParam8))
	{
		return;
	}
	if (func_101())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_74(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23831.f_5625[iVar1], true), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23831.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23831.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_100(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_100(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_99(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5326);
				func_100(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_99(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23831.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23831.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_99(char* sParam0)//Position - 0x65FC
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_100(char* sParam0)//Position - 0x660E
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_101()//Position - 0x661C
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_102())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_102()//Position - 0x668A
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x66A4
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_104(float fParam0)//Position - 0x67C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_105(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6824
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_106(char* sParam0, int iParam1, int iParam2)//Position - 0x6847
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_107();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_107()//Position - 0x6889
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23828 + 0.0046875f), ((Global_23828 + Global_23830) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_108(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6913
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_109(int iParam0, bool bParam1)//Position - 0x6942
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_111(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_110(&uVar3);
			}
		}
		else
		{
			return func_110(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_110(var uParam0)//Position - 0x6E6C
{
	return uParam0;
}

struct<13> func_111(int iParam0)//Position - 0x6E76
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_112(int iParam0)//Position - 0x6E8D
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_111(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_110(&uVar0);
		}
		else
		{
			return func_110(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_113(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x6F02
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_116(Global_23831.f_5821, 1);
	}
	else
	{
		func_116(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_115(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_119(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_114(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_114(char* sParam0)//Position - 0x711E
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_115(char* sParam0)//Position - 0x713A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_96(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_116(int iParam0, bool bParam1)//Position - 0x7177
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_117(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x71C3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_118(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_118(int iParam0, int iParam1)//Position - 0x724B
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_119(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x7266
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_112(iParam0), 64);
	StringCopy(&cVar16, func_109(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_117(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_120(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23831.f_7680[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_120(int iParam0)//Position - 0x7392
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_121(bool bParam0, bool bParam1)//Position - 0x7466
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_123(8, -1) && func_122() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79650) || Global_23831.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_122()//Position - 0x7503
{
	return Global_1575011;
}

var func_123(int iParam0, int iParam1)//Position - 0x750F
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

void func_124(int iParam0, bool bParam1, int iParam2)//Position - 0x7547
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = iParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

void func_125(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7699
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
}

void func_126()//Position - 0x776E
{
	func_133(0, 0);
	func_132(1, 0, 0, 0, 0);
	func_131(1, 1, 1, 1, 1);
	if (Local_81.f_1 == 3)
	{
		func_130("SEA_MENU" /* GXT: Sea Races */);
	}
	else
	{
		func_130("STREET_MENU" /* GXT: Street Races */);
	}
	func_113(0, "RACES_OPT_SP" /* GXT: Standard Race */, 0, 1, 0, 0, 0);
	func_113(1, "RACES_OPT_MP" /* GXT: Play Online */, 0, 1, 0, 0, 0);
	func_129(201, "ITEM_SELECT" /* GXT: Select */, -1);
	func_129(202, "ITEM_EXIT" /* GXT: Exit */, -1);
	func_128(11, "ITEM_SCROLL" /* GXT: Scroll */, -1);
	func_127(0);
	func_124(0, 1, 1);
	iLocal_95 = 0;
}

void func_127(int iParam0)//Position - 0x77F5
{
	Global_23831.f_6341 = iParam0;
}

void func_128(int iParam0, char* sParam1, int iParam2)//Position - 0x7805
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = 365;
	Global_23831.f_5640[Global_23831.f_5326] = iParam0;
	Global_23831.f_5326++;
}

void func_129(int iParam0, char* sParam1, int iParam2)//Position - 0x78B5
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_130(char* sParam0)//Position - 0x7964
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x79AF
{
	Global_23831.f_5686[0] = iParam0;
	Global_23831.f_5686[1] = iParam1;
	Global_23831.f_5686[2] = iParam2;
	Global_23831.f_5686[3] = iParam3;
	Global_23831.f_5686[4] = iParam4;
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x79EE
{
	Global_23831.f_5659[0] = iParam0;
	Global_23831.f_5659[1] = iParam1;
	Global_23831.f_5659[2] = iParam2;
	Global_23831.f_5659[3] = iParam3;
	Global_23831.f_5659[4] = iParam4;
	Global_23831.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23831.f_5829++;
	}
}

void func_133(bool bParam0, bool bParam1)//Position - 0x7A98
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696723[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0.05f;
	Global_23829 = 0.05f;
	Global_23830 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23830 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23830 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23830 = 0.225f;
	}
}

bool func_134(char* sParam0, int iParam1, bool bParam2)//Position - 0x7F8B
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_71(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23831.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_135(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_135(var uParam0)//Position - 0x809A
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_136()//Position - 0x813C
{
	int iVar0;
	
	if (func_166())
	{
		if (func_149())
		{
			iVar0 = 6;
			if (Local_81.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_147(iVar0);
			if (func_67(iLocal_101[iVar0]))
			{
				if (bLocal_100)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], 3))
					{
						TASK::STOP_ANIM_TASK(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], -8f);
					}
					func_138(iVar0);
				}
			}
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				iLocal_192 = 1;
				HUD::CLEAR_HELP(true);
				iLocal_80 = 3;
			}
		}
		else if (!iLocal_91)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			iLocal_91 = 1;
		}
	}
	else
	{
		func_137();
		if (!iLocal_91)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			iLocal_91 = 1;
		}
	}
}

void func_137()//Position - 0x81ED
{
	if (iLocal_90 && MISC::GET_GAME_TIMER() > iLocal_93)
	{
		HUD::CLEAR_HELP(true);
		iLocal_90 = 0;
	}
}

void func_138(int iParam0)//Position - 0x820E
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_101[iParam0], false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		switch (iLocal_193)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_101[iParam0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 64f)
				{
					iLocal_194 = 0;
					iLocal_195 = 0;
					iLocal_193 = 1;
				}
				break;
			
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_101[iParam0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iLocal_193 = 2;
				break;
			
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_101[iParam0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || PED::IS_PED_FACING_PED(iLocal_101[iParam0], PLAYER::PLAYER_PED_ID(), 20f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_101[iParam0], PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_195)
					{
						func_145(iLocal_101[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11, 0);
					}
					else
					{
						func_145(iLocal_101[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11, 0);
					}
					iLocal_193 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_101[iParam0]))
				{
					func_143(&iLocal_196);
					TASK::TASK_PLAY_ANIM(iLocal_101[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0f, false, false, false);
					iLocal_193 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_101[iParam0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 225f)
				{
					iLocal_193 = 0;
				}
				if (func_139(&iLocal_196) >= 5f && !iLocal_194)
				{
					iLocal_194 = 1;
					iLocal_193 = 1;
				}
				else if (func_139(&iLocal_196) >= 10f && !iLocal_195)
				{
					iLocal_195 = 1;
					iLocal_193 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_139(int* iParam0)//Position - 0x83D7
{
	if (func_142(iParam0))
	{
		if (func_141(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_140(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_140(bool bParam0)//Position - 0x8413
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

bool func_141(var uParam0)//Position - 0x846B
{
	return BitTest(*uParam0, 2);
}

bool func_142(var uParam0)//Position - 0x8478
{
	return BitTest(*uParam0, 1);
}

void func_143(int* iParam0)//Position - 0x8485
{
	func_144(iParam0, 0f);
}

void func_144(int* iParam0, float fParam1)//Position - 0x8494
{
	iParam0->f_1 = (func_140(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_145(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x84BF
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_146(iParam3), bParam4);
}

int func_146(int iParam0)//Position - 0x84D9
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

void func_147(int iParam0)//Position - 0x86CE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !func_148())
	{
		if (func_67(iLocal_101[iParam0]))
		{
			if (iLocal_91 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_101[iParam0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				iLocal_91 = 0;
			}
		}
	}
}

int func_148()//Position - 0x872B
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_149()//Position - 0x8744
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_165())
		{
			return 0;
		}
		if (func_164(func_55()) < Local_81.f_3)
		{
			if (Local_81.f_1 == 3)
			{
				func_161("SEA_NA_CASH" /* GXT: Can't afford to enter this sea race. $~1~ needed to race. */, Local_81.f_3);
			}
			else
			{
				func_161("STREET_NA_CASH" /* GXT: Can't afford to enter this street race. $~1~ needed to race. */, Local_81.f_3);
			}
			iLocal_90 = 1;
			iLocal_93 = MISC::GET_GAME_TIMER() + 1000;
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_160(&iLocal_0);
			iLocal_0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (!func_155())
			{
				iLocal_90 = 1;
				iLocal_93 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if ((ENTITY::GET_ENTITY_HEALTH(iLocal_0) <= 200 || FIRE::IS_ENTITY_ON_FIRE(iLocal_0)) || func_154())
			{
				func_153("RACE_VehDmg" /* GXT: This vehicle is too damaged to race. Get it fixed, or find a vehicle in better repair to race. */);
				iLocal_90 = 1;
				iLocal_93 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_0, -1, false) != PLAYER::PLAYER_PED_ID())
			{
				func_150();
				return 0;
			}
			else
			{
				if (func_89(0) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
				{
					func_137();
					return 0;
				}
				switch (Local_81.f_1)
				{
					case 1:
						func_161("STREET_PLAY_B" /* GXT: Press ~INPUT_CONTEXT~ to enter a motorcycle street race. The entry fee is $~1~. */, Local_81.f_3);
						break;
					
					case 2:
						func_161("STREET_PLAY_C" /* GXT: Press ~INPUT_CONTEXT~ to enter a street race. The entry fee is $~1~. */, Local_81.f_3);
						break;
					
					case 3:
						func_153("SEA_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to enter a sea race. */);
						break;
				}
				iLocal_90 = 1;
				iLocal_93 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else
		{
			func_160(&iLocal_0);
			func_150();
			return 0;
		}
	}
	return 0;
}

void func_150()//Position - 0x88B6
{
	char* sVar0;
	
	if (Local_81.f_1 == 3)
	{
		if (func_17(iLocal_109))
		{
			sVar0 = "SEA_NA_VEH" /* GXT: Climb aboard the Seashark at the start line to enter this race. */;
		}
		else
		{
			sVar0 = "SEA_NA_VEH2" /* GXT: You need a Seashark to enter this race. */;
		}
		if (!func_152(sVar0))
		{
			func_151(sVar0);
			iLocal_90 = 1;
			iLocal_93 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (Local_81.f_1 == 1)
	{
		if (!func_152("STREET_NA_BIKE" /* GXT: A motorcycle is needed to enter this street race. */))
		{
			func_151("STREET_NA_BIKE" /* GXT: A motorcycle is needed to enter this street race. */);
			iLocal_90 = 1;
			iLocal_93 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (!func_152("STREET_NA_CAR" /* GXT: A car is needed to enter this street race. */))
	{
		func_151("STREET_NA_CAR" /* GXT: A car is needed to enter this street race. */);
		iLocal_90 = 1;
		iLocal_93 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_151(char* sParam0)//Position - 0x8948
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_152(char* sParam0)//Position - 0x895E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_153(char* sParam0)//Position - 0x8971
{
	if (!func_152(sParam0))
	{
		func_151(sParam0);
	}
}

int func_154()//Position - 0x8989
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 6, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 7, false))
		{
			return 1;
		}
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_155()//Position - 0x8A05
{
	int iVar0;
	char* sVar1;
	
	switch (Local_81.f_1)
	{
		case 1:
			iVar0 = func_159();
			if (iVar0 == 1)
			{
				func_153("STREET_NA_COP" /* GXT: Can't enter a street race in an emergency vehicle. */);
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_153("STREET_NA_BIKE" /* GXT: A motorcycle is needed to enter this street race. */);
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_157();
			if (iVar0 == 1)
			{
				func_153("STREET_NA_COP" /* GXT: Can't enter a street race in an emergency vehicle. */);
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_153("STREET_NA_CAR" /* GXT: A car is needed to enter this street race. */);
				return 0;
			}
			break;
		
		case 3:
			if (!func_156())
			{
				if (func_17(iLocal_109))
				{
					sVar1 = "SEA_NA_VEH" /* GXT: Climb aboard the Seashark at the start line to enter this race. */;
				}
				else
				{
					sVar1 = "SEA_NA_VEH2" /* GXT: You need a Seashark to enter this race. */;
				}
				func_153(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_156()//Position - 0x8AB6
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157()//Position - 0x8AF8
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (func_158(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x8F9B
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
		
		case joaat("polgauntlet"):
		case joaat("pranger"):
		case joaat("police5"):
		case joaat("polimpaler5"):
		case joaat("polimpaler6"):
		case joaat("polgreenwood"):
		case joaat("poldorado"):
		case joaat("poldominator10"):
			return 1;
			break;
	}
	return 0;
}

int func_159()//Position - 0x902B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_160(int* iParam0)//Position - 0x9077
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_161(char* sParam0, int iParam1)//Position - 0x90AF
{
	if (!func_163(sParam0, iParam1))
	{
		func_162(sParam0, iParam1);
	}
}

void func_162(char* sParam0, int iParam1)//Position - 0x90CB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_163(char* sParam0, int iParam1)//Position - 0x90E7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_164(int iParam0)//Position - 0x9100
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

int func_165()//Position - 0x9158
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (func_18(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					if (Local_81.f_1 == 3 && ENTITY::IS_ENTITY_IN_WATER(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_166()//Position - 0x91B7
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = 20;
		if (Local_81.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_87, true) < IntToFloat(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_167()//Position - 0x9207
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_172(&uLocal_214))
	{
		if (Local_81.f_1 == 2)
		{
			if (func_169())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_109))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_180) && STREAMING::HAS_MODEL_LOADED(iLocal_180))
					{
						iLocal_109 = VEHICLE::CREATE_VEHICLE(iLocal_180, Local_111, fLocal_114, true, true, false);
						if (PED::CAN_CREATE_RANDOM_PED(true) && PED::CAN_CREATE_RANDOM_DRIVER())
						{
							iLocal_110 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_109, true);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_110, iLocal_109, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_110, true);
							PED::SET_PED_KEEP_TASK(iLocal_110, true);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_109, 5f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_109, true, true, false);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_109, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_109, true);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), true);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_109, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_109, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_180);
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_115))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_181))
					{
						iLocal_115 = VEHICLE::CREATE_VEHICLE(iLocal_181, Local_116, fLocal_119, true, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_115, false, true, false);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_115, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_115, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_115, 5f);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), true);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_115, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_115, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181);
						SYSTEM::WAIT(0);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_182))
				{
					if (iLocal_191)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_172 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_101[iVar0]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_101[iVar0], false) && !func_168(iLocal_101[iVar0], joaat("SCRIPT_TASK_PLAY_ANIM")))
								{
									TASK::TASK_PLAY_ANIM(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], 1000f, -1000f, -1, 1, 0f, false, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_101[iVar0], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_172[iVar0]))
							{
								iLocal_101[iVar0] = PED::CREATE_PED(25, iLocal_172[iVar0], Local_134[iVar0 /*3*/], fLocal_156[iVar0], true, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_101[iVar0], Local_134[iVar0 /*3*/], false, false, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_101[iVar0], true);
								TASK::TASK_PLAY_ANIM(iLocal_101[iVar0], cLocal_182, sLocal_183[iVar0], 1000f, -1000f, -1, 1, 0f, false, false, false);
								PED::SET_PED_KEEP_TASK(iLocal_101[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_67(iLocal_101[0]) && func_67(iLocal_101[1])) && func_67(iLocal_101[2])) && func_67(iLocal_101[3])) && func_67(iLocal_101[4])) && func_67(iLocal_101[5])) && func_67(iLocal_101[6])) && func_17(iLocal_109)) && func_17(iLocal_115))
						{
							bLocal_100 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_172 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172[iVar0]);
								iVar0++;
							}
							iLocal_191 = 0;
						}
					}
				}
			}
		}
		else if (Local_81.f_1 == 1)
		{
			if (func_169())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_109))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_180))
					{
						iLocal_109 = VEHICLE::CREATE_VEHICLE(iLocal_180, Local_111, fLocal_114, true, true, false);
						if (PED::CAN_CREATE_RANDOM_PED(false) && PED::CAN_CREATE_RANDOM_BIKE_RIDER())
						{
							iLocal_110 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_109, true);
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_110, iLocal_109, 1, 99999999);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_110, true);
							PED::SET_PED_KEEP_TASK(iLocal_110, true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_109, true, true, false);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_109, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_109, true);
						AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), true);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_109, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_109, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_180);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_182))
				{
					if (iLocal_191)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_172 - 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_101[iVar1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_101[iVar1], false) && !func_168(iLocal_101[iVar1], joaat("SCRIPT_TASK_PLAY_ANIM")))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_101[iVar1], Local_134[iVar1 /*3*/], false, false, true);
									if (iVar1 != 2 && iVar1 != 3)
									{
										TASK::TASK_PLAY_ANIM(iLocal_101[iVar1], cLocal_182, sLocal_183[iVar1], 1000f, -1000f, -1, 1, 0f, false, false, false);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(iLocal_101[iVar1], cLocal_182, sLocal_183[iVar1], 1000f, -1000f, -1, 1, 0.5f, false, false, false);
									}
									PED::SET_PED_KEEP_TASK(iLocal_101[iVar1], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_172[iVar1]))
							{
								iLocal_101[iVar1] = PED::CREATE_PED(25, iLocal_172[iVar1], Local_134[iVar1 /*3*/], fLocal_156[iVar1], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_101[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_67(iLocal_101[0]) && func_67(iLocal_101[1])) && func_67(iLocal_101[2])) && func_67(iLocal_101[3])) && func_67(iLocal_101[4]))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_101[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_172 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172[iVar1]);
								iVar1++;
							}
							iLocal_191 = 0;
						}
					}
				}
			}
		}
		else if (Local_81.f_1 == 3)
		{
			if (func_169())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_109))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_180))
					{
						iLocal_109 = VEHICLE::CREATE_VEHICLE(iLocal_180, Local_111, fLocal_114, true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_109, 5f);
						VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_109, 0f);
						VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(iLocal_109, false);
						VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iLocal_109, false);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_109))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_109, true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_109, false, true, false);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iVar2]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar2]))
						{
							if (!PED::IS_PED_INJURED(iLocal_168[iVar2]) && func_17(iLocal_164[iVar2]))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_164[iVar2], -1, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_168[iVar2], iLocal_164[iVar2], -1);
								}
							}
						}
						else if (func_17(iLocal_164[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Jetski_01")))
						{
							iLocal_168[iVar2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_164[iVar2], 25, joaat("A_M_Y_Jetski_01"), -1, true, true);
							PED::SET_PED_DIES_IN_WATER(iLocal_168[iVar2], false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[iVar2], true);
						}
					}
					else if (STREAMING::HAS_MODEL_LOADED(iLocal_180))
					{
						iLocal_164[iVar2] = VEHICLE::CREATE_VEHICLE(iLocal_180, Local_120[iVar2 /*3*/], fLocal_130[iVar2], true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_164[iVar2], 5f);
						VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_164[iVar2], 0f);
						VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(iLocal_164[iVar2], true);
						VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iLocal_164[iVar2], true);
						if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iLocal_164[iVar2]))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_164[iVar2], true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_164[iVar2], false, true, false);
					}
					iVar2++;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_109) && ENTITY::DOES_ENTITY_EXIST(iLocal_164[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_164[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_164[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_180);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_168[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Jetski_01"));
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			}
		}
	}
}

int func_168(int iParam0, int iParam1)//Position - 0x992C
{
	if (func_67(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_169()//Position - 0x995F
{
	if (!func_171())
	{
		return 0;
	}
	if (func_67(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_170(PLAYER::PLAYER_PED_ID(), Local_111, 100f, 1) || CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

bool func_170(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x99A3
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

int func_171()//Position - 0x99C1
{
	if (Local_81.f_1 == 3)
	{
		return 1;
	}
	else if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
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

int func_172(var uParam0)//Position - 0x9A0F
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_173(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_173(var uParam0)//Position - 0x9A6B
{
	return func_174(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_174(char* sParam0, char* sParam1, int iParam2)//Position - 0x9A82
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_175(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_175(var uParam0)//Position - 0x9B6D
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_176(var uParam0)//Position - 0x9B96
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_101533.f_20, 2)) || BitTest(Global_101533.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_177(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_177(int* iParam0)//Position - 0x9C14
{
	func_178(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_178(int* iParam0, char* sParam1, int iParam2)//Position - 0x9C2A
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_175(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_179()//Position - 0x9CFB
{
	int iVar0;
	
	if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		switch (Local_81.f_0)
		{
			case 0:
				Local_111 = { -158.67f, -1555.16f, 34.63f };
				fLocal_114 = 187.71f;
				Local_116 = { -155.15f, -1550.83f, 34.53f };
				fLocal_119 = 213.13f;
				Local_199 = { -68.878784f, -1818.9027f, 24.553106f };
				Local_202 = { -56.0098f, -1807.0287f, 27.85417f };
				Local_134[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_134[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_134[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_134[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_134[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_134[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_134[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_156[0] = 101.91f;
				fLocal_156[1] = 38.48f;
				fLocal_156[2] = -36.7f;
				fLocal_156[3] = -52.93f;
				fLocal_156[4] = -75.07f;
				fLocal_156[5] = 33.13f;
				fLocal_156[6] = -170.02f;
				break;
			
			case 1:
				Local_111 = { 368.72f, 294.06f, 102.96f };
				fLocal_114 = 25.17f;
				Local_116 = { 373.71f, 290.72f, 102.89f };
				fLocal_119 = 33.24f;
				Local_199 = { -523.5497f, 262.29855f, 80.019905f };
				Local_202 = { -509.10135f, 272.47803f, 86.17713f };
				Local_134[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_134[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_134[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_134[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_134[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_134[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_134[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_156[0] = -64.83f;
				fLocal_156[1] = -163.04f;
				fLocal_156[2] = -118.77f;
				fLocal_156[3] = 127.18f;
				fLocal_156[4] = 105.04f;
				fLocal_156[5] = -146.75f;
				fLocal_156[6] = 10.11f;
				break;
			
			case 2:
				Local_111 = { -807.98f, -2555.14f, 13.34f };
				fLocal_114 = 3.35f;
				Local_116 = { -810.1f, -2560.85f, 13.38f };
				fLocal_119 = 43.57f;
				Local_199 = { -1000.75854f, -2436.0918f, 17.169464f };
				Local_202 = { -986.7399f, -2424.8699f, 22.16946f };
				Local_134[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_134[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_134[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_134[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_134[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_134[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_134[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_156[0] = -86.65f;
				fLocal_156[1] = -130.05f;
				fLocal_156[2] = 150.04f;
				fLocal_156[3] = 137.51f;
				fLocal_156[4] = 115.37f;
				fLocal_156[5] = -136.43f;
				fLocal_156[6] = 20.43f;
				break;
			
			case 3:
				Local_111 = { 778.59f, -1160.2f, 28.35f };
				fLocal_114 = 302.47f;
				Local_116 = { 778.47f, -1164.01f, 28.25f };
				fLocal_119 = 287.97f;
				Local_199 = { -1000.75854f, -2436.0918f, 17.169464f };
				Local_202 = { -986.7399f, -2424.8699f, 22.16946f };
				Local_134[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_134[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_134[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_134[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_134[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_134[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_134[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_156[0] = -147.53f;
				fLocal_156[1] = 171.51f;
				fLocal_156[2] = 104.94f;
				fLocal_156[3] = 21.91f;
				fLocal_156[4] = -0.22f;
				fLocal_156[5] = 107.91f;
				fLocal_156[6] = -95.23f;
				break;
			
			case 4:
				Local_111 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_114 = 258.32f;
				Local_134[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_134[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_134[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_134[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_134[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_156[0] = 75.06f;
				fLocal_156[1] = 134.25f;
				fLocal_156[2] = -52.71f;
				fLocal_156[3] = -93.39f;
				fLocal_156[4] = -141.52f;
				Local_199 = { -1265.7444f, -1057.1992f, 5.410841f };
				Local_202 = { -1258.679f, -1049.9191f, 9.443882f };
				break;
		}
		func_184(Local_81.f_0, &Local_205, &Local_208, &fLocal_211);
		iLocal_172[0] = joaat("A_F_Y_Hipster_02");
		iLocal_172[1] = joaat("A_M_Y_Hipster_02");
		iLocal_172[2] = joaat("A_M_Y_Hipster_02");
		iLocal_172[3] = joaat("A_F_Y_Hipster_02");
		iLocal_172[4] = joaat("A_M_Y_Hipster_02");
		iLocal_172[5] = joaat("A_M_Y_Hipster_02");
		iLocal_172[6] = joaat("A_M_Y_Hipster_02");
		if (Local_81.f_1 == 1)
		{
			cLocal_182 = "random@street_race";
			sLocal_183[0] = "_car_b_chatting_female";
			sLocal_183[1] = "_car_b_chatting_male";
			sLocal_183[2] = "_car_b_chatting_male";
			sLocal_183[3] = "_car_b_chatting_female";
			sLocal_183[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_182 = "random@street_race";
			sLocal_183[0] = "_car_a_flirt_girl";
			sLocal_183[1] = "_car_a_gawker_male_a";
			sLocal_183[2] = "_car_a_gawker_male_b";
			sLocal_183[3] = "_car_b_chatting_female";
			sLocal_183[4] = "_car_b_chatting_male";
			sLocal_183[5] = "_car_b_driver";
			sLocal_183[6] = "_car_b_lookout";
			func_183(&uLocal_214, iLocal_181);
		}
		iLocal_180 = func_182(Local_81.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_172 - 1))
		{
			func_183(&uLocal_214, iLocal_172[iVar0]);
			iVar0++;
		}
		func_183(&uLocal_214, iLocal_180);
		func_180(&uLocal_214, cLocal_182);
		PATHFIND::SET_PED_PATHS_IN_AREA(Local_199, Local_202, false, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_205, Local_208, fLocal_211, false, false, true);
		iLocal_92 = 1;
	}
	else if (Local_81.f_1 == 3)
	{
		switch (Local_81.f_0)
		{
			case 5:
				Local_111 = { 3066.63f, 650.9f, 0.17f };
				fLocal_114 = 351.81f;
				Local_120[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_130[0] = 5.72f;
				Local_120[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_130[1] = 351.33f;
				Local_120[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_130[2] = 348.18f;
				break;
			
			case 6:
				Local_111 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_114 = 222.9f;
				Local_120[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_130[0] = 211.54f;
				Local_120[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_130[1] = 201.55f;
				Local_120[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_130[2] = 221.55f;
				break;
			
			case 7:
				Local_111 = { 194.64f, 3621.27f, 29.91f };
				fLocal_114 = 163.95f;
				Local_120[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_130[0] = 175.4f;
				Local_120[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_130[1] = 163.69f;
				Local_120[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_130[2] = 175.31f;
				break;
			
			case 8:
				Local_111 = { 627.58f, -2138.06f, -0.07f };
				fLocal_114 = 180.09f;
				Local_120[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_130[0] = 143.89f;
				Local_120[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_130[1] = 172.41f;
				Local_120[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_130[2] = 191.97f;
				break;
		}
		iLocal_180 = joaat("seashark");
		func_183(&uLocal_214, iLocal_180);
		func_183(&uLocal_214, joaat("A_M_Y_Jetski_01"));
	}
}

void func_180(var uParam0, char* sParam1)//Position - 0xA686
{
	func_181(uParam0, 1, -1, sParam1, 0);
}

void func_181(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA699
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_182(int iParam0)//Position - 0xA778
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_183(var uParam0, int iParam1)//Position - 0xA7B9
{
	func_181(uParam0, 0, iParam1, "NULL", 0);
}

void func_184(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0xA7CD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.12622f, -1896.2614f, 20.683289f };
			*uParam2 = { -295.06534f, -1405.5297f, 35.314598f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.18497f, 335.29688f, 105.57044f };
			*uParam2 = { 412.28766f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588.0005f, 13.769104f };
			*uParam2 = { -801.33563f, -2464.0066f, 12.429126f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.82574f, -1423.8627f, 24.179544f };
			*uParam2 = { 783.167f, -1015.648f, 50.241344f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.0304f, -1165.7235f, 0.150211f };
			*uParam2 = { -1029.2129f, -1134.5809f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_185()//Position - 0xA8EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_66(9))
	{
		return 0;
	}
	if (func_49(6) || func_49(7))
	{
		return 0;
	}
	if (Global_64160)
	{
		return 0;
	}
	if (func_208())
	{
		return 0;
	}
	if (Local_81.f_1 != 3 && func_55() != 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (func_67(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((func_17(iVar0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0)) && !func_207(PLAYER::PLAYER_PED_ID(), iVar0, -1)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_81.f_0)
	{
		case 0:
			if (Global_113943[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_113943[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_113943[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_113943[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_113943[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_113933[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_113933[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_113933[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_113933[3])
			{
				return 0;
			}
			break;
	}
	if (!func_171())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_172 - 1))
		{
			if (func_67(iLocal_101[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_PAUSE(0, iVar1 * 100);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_101[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_168 - 1))
		{
			if (func_67(iLocal_168[iVar1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_PAUSE(0, iVar1 * 110);
				if (func_17(iLocal_164[iVar1]) && PED::IS_PED_IN_VEHICLE(iLocal_168[iVar1], iLocal_164[iVar1], false))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_164[iVar1], 30f, 786597);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_168[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_67(iLocal_110))
		{
			if (func_17(iLocal_109) && PED::IS_PED_IN_VEHICLE(iLocal_110, iLocal_109, false))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_110, iLocal_109, 30f, 786597);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_110, 40000f, 0);
			}
		}
		return 0;
	}
	if (func_187())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_172 - 1))
		{
			if (func_67(iLocal_101[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_PAUSE(0, iVar4 * 50);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_186(iLocal_101[iVar4], 1);
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_101[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_168 - 1))
		{
			if (func_17(iLocal_164[iVar4]) && Local_81.f_1 == 3)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_164[iVar4], false);
			}
			if (func_67(iLocal_168[iVar4]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_PAUSE(0, iVar4 * 60);
				if (func_17(iLocal_164[iVar4]) && PED::IS_PED_IN_VEHICLE(iLocal_168[iVar4], iLocal_164[iVar4], false))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_164[iVar4], 50f, 786468);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_168[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_186(iLocal_168[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_17(iLocal_109) && Local_81.f_1 == 3)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_109, false);
		}
		if (func_67(iLocal_110))
		{
			if (func_17(iLocal_109) && PED::IS_PED_IN_VEHICLE(iLocal_110, iLocal_109, false))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_110, iLocal_109, 50f, 786468);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_110, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			}
		}
		switch (Local_81.f_0)
		{
			case 0:
				Global_113943[0] = 1;
				Global_113949[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 1:
				Global_113943[1] = 1;
				Global_113949[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 2:
				Global_113943[2] = 1;
				Global_113949[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 3:
				Global_113943[3] = 1;
				Global_113949[3] = MISC::GET_GAME_TIMER();
				break;
			
			case 4:
				Global_113943[4] = 1;
				Global_113949[4] = MISC::GET_GAME_TIMER();
				break;
			
			case 5:
				Global_113933[0] = 1;
				Global_113938[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				Global_113933[1] = 1;
				Global_113938[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 7:
				Global_113933[2] = 1;
				Global_113938[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				Global_113933[3] = 1;
				Global_113938[3] = MISC::GET_GAME_TIMER();
				break;
		}
		return 0;
	}
	return 1;
}

void func_186(int iParam0, bool bParam1)//Position - 0xAE43
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_67(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (PED::IS_PED_MALE(iParam0))
		{
			func_145(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24, 0);
		}
		else
		{
			func_145(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24, 0);
		}
	}
}

int func_187()//Position - 0xAEB6
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (Local_81.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_168 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_168[iVar0]))
				{
					return 1;
				}
				else if (func_188(iLocal_168[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_BEING_JACKED(iLocal_168[iVar0]))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_164[iVar0], false))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_164[iVar0], PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_164[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_109, false))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_109) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_170(PLAYER::PLAYER_PED_ID(), Local_87, 50f, 1) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		if (PED::IS_PED_INJURED(iLocal_110))
		{
			return 1;
		}
		else if (func_188(iLocal_110, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_110))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_110, false);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_109, false))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_109, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_115))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_115, false))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_115, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_115, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_172 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_101[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_101[iVar0]))
			{
				return 1;
			}
			else if (func_188(iLocal_101[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_188(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xB109
{
	struct<3> Var0;
	
	if (func_18(PLAYER::PLAYER_PED_ID()) && func_18(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (func_202(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_201(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_189(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0, float fParam1)//Position - 0xB1C4
{
	float fVar0;
	
	if (func_18(PLAYER::PLAYER_PED_ID()) && func_18(iParam0))
	{
		if (func_200(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_190(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_190(int iParam0, float fParam1)//Position - 0xB23A
{
	return func_191(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_191(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB252
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_199(iParam0, iParam1);
	if (!func_18(iParam0) || !func_18(iParam1))
	{
		if (iVar4 != -1)
		{
			func_198(&(Local_38[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_195(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_194();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_192(&(Local_38[iVar4 /*4*/]), Var1, iParam1, &(Local_38[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_192(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0xB313
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_18(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_193(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_18(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_79)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_18(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, false))
			{
				if (bLocal_79)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_193(int iParam0, int iParam1)//Position - 0xB43F
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}

int func_194()//Position - 0xB504
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_195(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xB54E
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_197(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_197(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_196(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_196(struct<3> Param0, struct<3> Param3)//Position - 0xB5DF
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_197(struct<3> Param0)//Position - 0xB600
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_198(var uParam0)//Position - 0xB63F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_199(int iParam0, int iParam1)//Position - 0xB65A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_200(int iParam0)//Position - 0xB699
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, int iParam1, float fParam2)//Position - 0xB6C1
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / SYSTEM::VDIST(Var3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB708
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_18(PLAYER::PLAYER_PED_ID()) && func_18(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_206(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_206(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xB803
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_GRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, true))
		{
			if (bParam3)
			{
				if (func_204(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_204(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1)//Position - 0xB90F
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_GRENADE"), fParam1, &Var1, &uVar0, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_BZGAS"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_MOLOTOV"), fParam1, &Var1, &uVar0, false))
	{
		if (func_205(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0xB9A4
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_197(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_197(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_196(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_206(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xBA32
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, int iParam2)//Position - 0xBA7A
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

int func_208()//Position - 0xBAB8
{
	switch (Local_81.f_0)
	{
		case 5:
			return BitTest(Global_113969.f_24979.f_2, 0);
			break;
		
		case 6:
			return BitTest(Global_113969.f_24979.f_2, 1);
			break;
		
		case 7:
			return BitTest(Global_113969.f_24979.f_2, 2);
			break;
		
		case 8:
			return BitTest(Global_113969.f_24979.f_2, 3);
			break;
		
		case 0:
			return BitTest(Global_113969.f_24982.f_3, 0);
			break;
		
		case 1:
			return BitTest(Global_113969.f_24982.f_3, 1);
			break;
		
		case 2:
			return BitTest(Global_113969.f_24982.f_3, 2);
			break;
		
		case 3:
			return BitTest(Global_113969.f_24982.f_3, 3);
			break;
		
		case 4:
			return BitTest(Global_113969.f_24982.f_3, 4);
			break;
	}
	return 0;
}

void func_209()//Position - 0xBB97
{
	iLocal_80 = 0;
	iLocal_90 = 0;
	bLocal_97 = false;
	bLocal_98 = false;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	func_211(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", false);
	if (Local_81.f_0 == 1)
	{
		iLocal_213 = func_210(374.00833f, 279.59192f, 102.330574f, 40f);
		MISC::CLEAR_AREA_OF_VEHICLES(374.00833f, 279.59192f, 102.330574f, 25f, false, false, false, false, false, false, 0);
	}
	if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		iLocal_212 = func_210(Local_87, 60f);
	}
}

int func_210(struct<3> Param0, float fParam3)//Position - 0xBC2E
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0, Param0 + Var0, false, true, true, true, 1);
}

void func_211(bool bParam0)//Position - 0xBC61
{
	if (bParam0)
	{
		switch (Local_81.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_183(&uLocal_214, joaat("banshee"));
				func_183(&uLocal_214, joaat("feltzer2"));
				func_183(&uLocal_214, joaat("sentinel"));
				break;
			
			case 4:
				func_183(&uLocal_214, joaat("bati"));
				func_183(&uLocal_214, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_183(&uLocal_214, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_212(&uLocal_214);
	}
}

void func_212(var uParam0)//Position - 0xBCFF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_213(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_213(var uParam0)//Position - 0xBD35
{
	func_214(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_214(int iParam0, char* sParam1, int iParam2)//Position - 0xBD4C
{
	if (BitTest(iParam0, 30))
	{
		switch (func_175(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_215(int iParam0)//Position - 0xBE06
{
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_113969.f_24982.f_1, 0);
			break;
		
		case 1:
			return BitTest(Global_113969.f_24982.f_1, 1);
			break;
		
		case 2:
			return BitTest(Global_113969.f_24982.f_1, 2);
			break;
		
		case 3:
			return BitTest(Global_113969.f_24982.f_1, 3);
			break;
		
		case 4:
			return BitTest(Global_113969.f_24982.f_1, 4);
			break;
	}
	return 0;
}

int func_216(int iParam0, int iParam1)//Position - 0xBE89
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_217()//Position - 0xBED3
{
	if (func_218(func_219(86, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 0;
		Local_81.f_1 = 2;
		Local_81.f_3 = 100;
		Local_81.f_4 = 20;
	}
	else if (func_218(func_219(87, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 1;
		Local_81.f_1 = 2;
		Local_81.f_3 = 500;
		Local_81.f_4 = 18;
	}
	else if (func_218(func_219(88, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 2;
		Local_81.f_1 = 2;
		Local_81.f_3 = 1000;
		Local_81.f_4 = 2;
	}
	else if (func_218(func_219(89, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 3;
		Local_81.f_1 = 2;
		Local_81.f_3 = 1250;
		Local_81.f_4 = 4;
	}
	else if (func_218(func_219(90, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 4;
		Local_81.f_1 = 1;
		Local_81.f_3 = 1500;
		Local_81.f_4 = 5;
	}
	else if (func_218(func_219(82, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 5;
		Local_81.f_1 = 3;
		Local_81.f_3 = 0;
		Local_81.f_4 = 16;
	}
	else if (func_218(func_219(83, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 6;
		Local_81.f_1 = 3;
		Local_81.f_3 = 0;
		Local_81.f_4 = 13;
	}
	else if (func_218(func_219(84, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 7;
		Local_81.f_1 = 3;
		Local_81.f_3 = 0;
		Local_81.f_4 = 15;
		Local_81.f_5 = 1;
	}
	else if (func_218(func_219(85, 0), Local_87, 1f, 0))
	{
		Local_81.f_0 = 8;
		Local_81.f_1 = 3;
		Local_81.f_4 = 24;
		Local_81.f_3 = 0;
		Local_81.f_5 = 1;
	}
	else
	{
		func_220(0);
	}
}

int func_218(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0xC06C
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_219(int iParam0, int iParam1)//Position - 0xC0E7
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_33328[iVar0 /*23*/][iParam1 /*3*/];
}

void func_220(bool bParam0)//Position - 0xC125
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_91)
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		iLocal_91 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_18(iLocal_101[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_101[iVar0]);
			TASK::TASK_WANDER_STANDARD(iLocal_101[iVar0], 40000f, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_101[iVar0], false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_101[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_18(iLocal_168[iVar0]))
		{
			if (func_18(iLocal_164[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_168[iVar0]);
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_164[iVar0])))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_164[iVar0], false);
				}
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_168[iVar0], iLocal_164[iVar0], 20f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_168[iVar0], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[iVar0], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_168[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_164[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_18(iLocal_110))
	{
		if (func_18(iLocal_109))
		{
			TASK::CLEAR_PED_TASKS(iLocal_110);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_110, 1, true);
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_110, iLocal_109, 15f, 786599);
			PED::SET_PED_KEEP_TASK(iLocal_110, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_110, false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_110);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_109);
		}
	}
	if (func_18(iLocal_115))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_115);
	}
	switch (Local_81.f_0)
	{
		case 5:
			func_223(82, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24979.f_2), 0);
			break;
		
		case 6:
			func_223(83, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24979.f_2), 1);
			break;
		
		case 7:
			func_223(84, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24979.f_2), 2);
			break;
		
		case 8:
			func_223(85, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24979.f_2), 3);
			break;
		
		case 0:
			func_223(86, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24982.f_3), 0);
			break;
		
		case 1:
			func_223(87, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24982.f_3), 1);
			break;
		
		case 2:
			func_223(88, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24982.f_3), 2);
			break;
		
		case 3:
			func_223(89, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24982.f_3), 3);
			break;
		
		case 4:
			func_223(90, 0, 0);
			MISC::SET_BIT(&(Global_113969.f_24982.f_3), 4);
			break;
	}
	if (iLocal_90)
	{
		HUD::CLEAR_HELP(true);
	}
	AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), false);
	if (iLocal_99)
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	}
	if (iLocal_192 && !bParam0)
	{
		iVar1 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(iVar1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(iVar1))
			{
				PLAYER::SET_PLAYER_CONTROL(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_211(0);
	}
	if (iLocal_92)
	{
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_199, Local_202, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_205, Local_208, fLocal_211, 1);
		iLocal_92 = 0;
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", true);
	if (Local_81.f_0 == 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_213, false);
	}
	if (Local_81.f_1 == 1 || Local_81.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_212, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	}
	func_221(&uLocal_214, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_221(var uParam0, bool bParam1)//Position - 0xC46C
{
	int iVar0;
	
	if (!bParam1)
	{
		func_212(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_222(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_222(var uParam0)//Position - 0xC4A7
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_223(int iParam0, bool bParam1, bool bParam2)//Position - 0xC4C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_33328[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33328[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33328[iVar0 /*23*/].f_11), 18);
		if (Global_33325 == 1)
		{
			Global_33326 = 1;
		}
		Global_33325 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33328[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33328[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33328[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33328[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33328[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33328[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33328[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33328[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

