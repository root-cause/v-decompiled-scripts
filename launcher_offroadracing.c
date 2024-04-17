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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<3> Local_119 = { 0, 0, 0 } ;
	int iLocal_122 = 0;
	struct<3> Local_123[5];
	int* iLocal_139 = NULL;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int* iLocal_142 = NULL;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	int* iLocal_145 = NULL;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	float fLocal_148[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_154 = 0f;
	int iLocal_155 = 0;
	bool bLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 16;
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
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	int iLocal_326 = 0;
	struct<100> Local_327 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
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
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	Local_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	iLocal_95 = 2050;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */;
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	bLocal_116 = true;
	iLocal_117 = 6;
	iLocal_118 = 18;
	iLocal_122 = -1;
	bLocal_156 = true;
	iLocal_157 = 1;
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_88 = { Local_88 };
	iLocal_84 = iLocal_84;
	Local_67 = { Local_67 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_153(1);
	}
	iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_151(&Global_113020, 0);
	func_145();
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	if (func_144(uLocal_92, 1))
	{
		iLocal_98 = 10;
	}
	else
	{
		iLocal_98 = 9;
	}
	while (!Global_39261)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_144(uLocal_92, 8))
	{
		if (!func_142(iLocal_98))
		{
			if (func_141(0, iLocal_97))
			{
				func_153(0);
			}
			else
			{
				func_153(1);
			}
		}
	}
	if (iLocal_97 != -1)
	{
		if (!func_141(0, iLocal_97))
		{
			bLocal_116 = false;
		}
	}
	if (func_144(uLocal_92, 8388608))
	{
		func_153(1);
	}
	if (func_144(uLocal_92, 524288) && (func_140() && !func_139()))
	{
		func_153(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_144(uLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_138(iLocal_103, 1, 0);
			iLocal_103 = 263;
		}
		func_137(10);
	}
	while (true)
	{
		if (!func_144(uLocal_92, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_0.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_136(&uLocal_92, 268435456);
				}
			}
		}
		iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_144(uLocal_92, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				func_153(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			Local_85 = { ENTITY::GET_ENTITY_COORDS(iLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(Local_85, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			Local_109 = { Local_85 };
			Local_112 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_109.f_2 = 0f;
			Local_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(Local_109, Local_112);
			switch (iLocal_93)
			{
				case 0:
					if (func_142(iLocal_98) || (func_144(uLocal_92, 16) && !func_144(uLocal_92, 524288)))
					{
						iLocal_96 = -1;
						func_132();
						func_137(1);
					}
					else
					{
						if (fLocal_108 > (fLocal_100 * fLocal_100))
						{
							if (iLocal_103 != 263)
							{
								func_138(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
							func_137(10);
						}
						if ((Local_85.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_130() && fLocal_91 > ((fLocal_115 * 1.5f) * (fLocal_115 * 1.5f)))
					{
						iLocal_101 = iLocal_101;
						func_137(3);
					}
					else
					{
						func_132();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_153(1);
						return;
					}
					if (!func_142(iLocal_98))
					{
						if (!func_144(uLocal_92, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101392.f_3), &Local_67))
							{
								Local_67 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_153(0);
								break;
							}
						}
					}
					if (!func_144(uLocal_92, 4))
					{
						func_119();
						func_136(&uLocal_92, 4);
					}
					if (fLocal_108 > (fLocal_100 * fLocal_100) && !Global_101426)
					{
						if (iLocal_103 != 263)
						{
							if (func_118(6) && !func_117(iLocal_103))
							{
							}
							else
							{
								func_138(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
						}
						func_137(10);
					}
					else
					{
						Local_67 = { Local_51 };
						bVar3 = !func_144(uLocal_92, 64);
						func_151(&uLocal_92, 128);
						if (!func_116(3) && !Global_101426)
						{
							if (func_144(uLocal_92, 2097152))
							{
								if ((!func_144(uLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_115())) && !Global_101426)
								{
									func_137(10);
									break;
								}
							}
						}
						if (func_144(uLocal_92, 524288) && (func_140() && !func_139()))
						{
							func_153(1);
						}
						if (func_114())
						{
							func_153(1);
						}
						if ((!func_106(6) || Global_113419) || func_105())
						{
							bVar3 = false;
						}
						if (!bLocal_116)
						{
							func_103(&uLocal_92, 128);
							bVar3 = false;
						}
						if (func_144(uLocal_92, 1))
						{
							if (!func_102())
							{
								func_103(&uLocal_92, 128);
								bVar3 = false;
							}
						}
						if (func_101(1))
						{
							bVar3 = false;
						}
						if (Global_79248)
						{
							bVar3 = false;
						}
						if (func_100())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_99() || func_98(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (func_97(0) || func_96())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
							{
								bVar3 = false;
							}
							iVar4 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_117 > iLocal_118)
							{
								if (iVar4 < iLocal_117 && iVar4 >= iLocal_118)
								{
									func_103(&uLocal_92, 128);
									bVar3 = false;
									if (fLocal_91 < ((fLocal_115 * fLocal_115) + 4f))
									{
										if (!func_144(uLocal_92, 134217728))
										{
											func_95("MG_NA_TIME" /* GXT: This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity. */, iLocal_117, iLocal_118);
											func_103(&uLocal_92, 134217728);
										}
									}
									else
									{
										func_151(&uLocal_92, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_117 || iVar4 >= iLocal_118)
							{
								func_103(&uLocal_92, 128);
								bVar3 = false;
								if (fLocal_91 < ((fLocal_115 * fLocal_115) + 4f))
								{
									if (!func_144(uLocal_92, 134217728))
									{
										func_95("MG_NA_TIME" /* GXT: This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity. */, iLocal_117, iLocal_118);
										func_103(&uLocal_92, 134217728);
									}
								}
								else
								{
									func_151(&uLocal_92, 134217728);
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (func_94(iLocal_84))
								{
									if (iLocal_94 == -1)
									{
										func_93(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_103(&uLocal_92, 2048);
									}
									else if (!func_144(uLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_92(&iLocal_94);
										func_151(&uLocal_92, 2048);
									}
									if (func_90(iLocal_94, 1))
									{
										sLocal_99 = sLocal_99;
										func_92(&iLocal_94);
										func_151(&uLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_137(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_92(&iLocal_94);
									func_151(&uLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_137(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_94 != -1)
							{
								func_92(&iLocal_94);
								func_151(&uLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_52();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_67))
					{
						if (iLocal_94 != -1)
						{
							func_92(&iLocal_94);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_144(uLocal_92, 1))
						{
							if (func_118(6) || func_118(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_49(&iLocal_96, 6, iLocal_98, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_84, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_84);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_48();
							if (Global_45122)
							{
								func_39(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_38();
							func_103(&uLocal_92, 2);
							func_137(6);
							func_34(&iLocal_105);
							if (iLocal_97 != -1)
							{
								func_33(iLocal_97);
								func_31(func_32(iLocal_97), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_30();
						}
						else if (iVar5 == 0)
						{
							func_137(10);
						}
					}
					else
					{
						func_30();
					}
					break;
				
				case 6:
					if (func_144(Global_113020, 262144))
					{
						func_151(&Global_113020, 262144);
						func_29();
					}
					if (func_144(uLocal_92, 2097152))
					{
						if (!func_116(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_137(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_25(&iLocal_105) * 1000f)), iLocal_97, false);
						func_24(&iLocal_105);
						func_151(&uLocal_92, 256);
						func_21();
						if (bVar0)
						{
							func_151(&uLocal_92, 2);
						}
						else if (func_144(uLocal_92, 2))
						{
							if (func_144(Global_113020, 0))
							{
								func_20(&iLocal_96);
								iLocal_96 = -1;
								func_151(&uLocal_92, 2);
							}
							else
							{
								func_20(&iLocal_96);
								iLocal_96 = -1;
								func_151(&uLocal_92, 2);
							}
						}
						func_137(0);
						if (iLocal_97 != -1)
						{
							if (func_144(Global_113020, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_32(iLocal_97), 0, Global_101429, 0);
								func_19(func_32(iLocal_97), 0, Global_101429, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_32(iLocal_97), 0, Global_101429, 0);
								func_19(func_32(iLocal_97), 0, Global_101429, 0, 0);
							}
						}
						func_5();
						func_151(&Global_113020, 0);
						if (func_144(uLocal_92, 16777216))
						{
							func_153(1);
						}
						if (iLocal_97 != -1)
						{
							if (Global_114372.f_9088)
							{
								if (!func_141(0, iLocal_97))
								{
									func_153(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_137(0);
					break;
				
				case 10:
					func_153(1);
					break;
				
				case 9:
					if (fLocal_108 > (fLocal_100 * fLocal_100))
					{
						if (iLocal_103 != 263)
						{
							func_138(iLocal_103, 1, 0);
							iLocal_103 = 263;
						}
						func_137(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_103 != 263)
					{
						func_138(iLocal_103, 0, 0);
					}
					if (iLocal_94 != -1)
					{
						func_92(&iLocal_94);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
					{
						if (func_1(sLocal_99))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					func_137(4);
					break;
				
				case 4:
					if ((iLocal_102 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (func_142(iLocal_98) && func_141(0, iLocal_97))
									{
										func_145();
										if (iLocal_103 != 263)
										{
											func_138(iLocal_103, 1, 0);
										}
										func_137(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > (fLocal_100 * fLocal_100))
								{
									if (iLocal_103 != 263)
									{
										func_138(iLocal_103, 1, 0);
										iLocal_103 = 263;
									}
									func_137(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > ((80f + 5f) * (80f + 5f)))
								{
									func_145();
									if (iLocal_103 != 263)
									{
										func_138(iLocal_103, 1, 0);
									}
									func_137(0);
								}
							}
						}
						else
						{
							func_138(iLocal_103, 1, 0);
						}
					}
					else
					{
						iLocal_102++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)//Position - 0xB3C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xB4F
{
	char* sVar0;
	
	func_3(&(Local_327.f_71));
	func_3(&(Local_327.f_77));
	func_3(&(Local_327.f_99));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REMOVE_ANIM_DICT("random@street_race");
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	switch (iLocal_122)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
			}
		}
	}
}

void func_3(var uParam0)//Position - 0xC25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()//Position - 0xC55
{
}

void func_5()//Position - 0xC5D
{
	if (func_144(Global_114372.f_19019, 1))
	{
		func_151(&(Global_114372.f_19019), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()//Position - 0xC8D
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_7(bool bParam0)//Position - 0xCD8
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_8()//Position - 0xD00
{
	if (Global_114372.f_19019.f_18 < Global_114372.f_19019.f_19[iLocal_122] || Global_114372.f_19019.f_19[iLocal_122] == 0)
	{
		Global_114372.f_19019.f_19[iLocal_122] = Global_114372.f_19019.f_18;
		Global_114372.f_19019.f_18 = 999;
	}
	if (iLocal_122 == Global_114372.f_19019.f_1 || Global_114372.f_19019.f_1 == -1)
	{
		if (Global_114372.f_19019.f_1 != 5)
		{
			Global_114372.f_19019.f_1++;
			switch (Global_114372.f_19019.f_1)
			{
				case 1:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					break;
				
				case 2:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					break;
				
				case 3:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					break;
				
				case 4:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					break;
				
				case 5:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					func_17(74, 1);
					func_138(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW" /* GXT: New Off-Road Race unlocked at ~BLIP_OFF_ROAD_RACING~ */, 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_138(70, 1, 0);
			func_17(70, 1);
			func_138(71, 1, 0);
			func_17(71, 1);
			func_138(73, 1, 0);
			func_17(73, 1);
			func_138(74, 1, 0);
			func_17(74, 1);
			func_138(75, 1, 0);
			func_17(75, 1);
			func_138(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_114372.f_19019.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)//Position - 0xFD3
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)//Position - 0xFF1
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33208[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 4);
	}
	if (Global_33205 == 1)
	{
		Global_33206 = 1;
	}
	Global_33205 = 1;
	MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)//Position - 0x1074
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33208[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 5);
	}
	if (Global_33205 == 1)
	{
		Global_33206 = 1;
	}
	Global_33205 = 1;
	MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x10F7
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33208[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 11);
	}
	if (Global_33205 == 1)
	{
		Global_33206 = 1;
	}
	Global_33205 = 1;
	MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)//Position - 0x11A0
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x11BE
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x11E0
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
	while (iVar0 < Global_114372.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114372.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114372.f_20413[Global_114372.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114372.f_20413.f_145++;
		func_16();
	}
}

void func_16()//Position - 0x13B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114372.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114372.f_20413.f_145)
	{
		if (BitTest(Global_114372.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114372.f_20413[iVar0 /*16*/].f_12 > Global_114372.f_20413.f_146[0])
			{
				Global_114372.f_20413.f_146[0] = Global_114372.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114372.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114372.f_20413[iVar0 /*16*/].f_12 > Global_114372.f_20413.f_146[1])
			{
				Global_114372.f_20413.f_146[1] = Global_114372.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114372.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114372.f_20413[iVar0 /*16*/].f_12 > Global_114372.f_20413.f_146[2])
			{
				Global_114372.f_20413.f_146[2] = Global_114372.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)//Position - 0x14CB
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33208[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 20);
	}
	if (Global_33205 == 1)
	{
		Global_33206 = 1;
	}
	Global_33205 = 1;
	MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 20);
}

void func_18()//Position - 0x1551
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	switch (iLocal_122)
	{
		case 0:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, 1);
			break;
		
		case 3:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1662
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_98442, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95549);
	StringCopy(&Global_98442, "", 64);
}

void func_20(int iParam0)//Position - 0x16A7
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43884)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

void func_21()//Position - 0x16E4
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_23())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_22())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR" /* GXT: Playing story */, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_22()//Position - 0x1727
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_23()//Position - 0x173D
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_24(int* iParam0)//Position - 0x1753
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_25(int* iParam0)//Position - 0x1769
{
	if (func_28(iParam0))
	{
		if (func_27(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_26(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_26(bool bParam0)//Position - 0x17A5
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

bool func_27(var uParam0)//Position - 0x17FD
{
	return BitTest(*uParam0, 2);
}

bool func_28(int* iParam0)//Position - 0x180A
{
	return BitTest(*iParam0, 1);
}

int func_29()//Position - 0x1817
{
	func_8();
	return 1;
}

void func_30()//Position - 0x1824
{
}

void func_31(char* sParam0, int iParam1, int iParam2)//Position - 0x182C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98442))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98442, 0, 0, false, true, false);
		StringCopy(&Global_98442, "", 64);
	}
	StringCopy(&Global_98442, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_7(0));
}

char* func_32(int iParam0)//Position - 0x186E
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_33(int iParam0)//Position - 0x19C1
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_23())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_22())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_34(int* iParam0)//Position - 0x1A1A
{
	if (!func_28(iParam0))
	{
		func_37(iParam0);
	}
	else
	{
		func_35(iParam0);
	}
}

void func_35(int* iParam0)//Position - 0x1A3B
{
	func_36(iParam0, 0f);
}

void func_36(int* iParam0, float fParam1)//Position - 0x1A4A
{
	iParam0->f_1 = (func_26(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_37(int* iParam0)//Position - 0x1A75
{
	if (!func_28(iParam0))
	{
		func_35(iParam0);
	}
}

int func_38()//Position - 0x1A8D
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	
	HUD::CLEAR_HELP(true);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_122;
	Var0.f_1 = { Local_119 };
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < Var0.f_4)
	{
		Var0.f_4[iVar18] = Local_327[iVar18 /*14*/];
		Var0.f_10[iVar18] = Local_327[iVar18 /*14*/].f_1;
		iVar18++;
	}
	Var0.f_16 = Local_327.f_83;
	Var0.f_17 = Local_327.f_83.f_1;
	GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneNeutral", 0, true);
	SYSTEM::WAIT(400);
	iVar19 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &Var0, 18, iLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar19;
}

void func_39(int iParam0)//Position - 0x1B2A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44908[iVar0 /*5*/];
		func_42(1, iVar1, 1);
		return;
	}
	iVar2 = func_41(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_40(iVar2);
}

void func_40(int iParam0)//Position - 0x1B83
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44882[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44882[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_45120 = 0;
		}
	}
	Global_44882[iParam0 /*5*/] = 13;
	Global_44882[iParam0 /*5*/].f_1 = 0;
	Global_44882[iParam0 /*5*/].f_2 = 0;
	Global_44882[iParam0 /*5*/].f_3 = 0;
	Global_44882[iParam0 /*5*/].f_4 = 0;
	Global_44880 = (Global_44880 - 1);
	if (Global_44880 < 0)
	{
		Global_44880 = 0;
	}
}

int func_41(int iParam0)//Position - 0x1C06
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44882[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0x1C37
{
	func_43(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1C4C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_45(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_44();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44989[iVar0 /*6*/] = iParam0;
	Global_44989[iVar0 /*6*/].f_1 = iParam1;
	Global_44989[iVar0 /*6*/].f_2 = iParam2;
	Global_44989[iVar0 /*6*/].f_3 = iParam3;
	Global_44989[iVar0 /*6*/].f_4 = iParam4;
	Global_44989[iVar0 /*6*/].f_5 = iParam5;
}

int func_44()//Position - 0x1CCE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44989[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x1CFF
{
	if (func_46(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, int iParam1, int iParam2)//Position - 0x1D1A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44989[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44989[iVar0 /*6*/])
			{
				if (iParam1 == Global_44989[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0)//Position - 0x1D66
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
		if (!Global_44908[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44908[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_48()//Position - 0x1DAF
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8683, 25);
	MISC::SET_BIT(&Global_8684, 11);
}

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1E2C
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98850.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_51(0))
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *iParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*iParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883++;
		if (iParam4 != 0)
		{
			func_50(iParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)//Position - 0x1F63
{
	int iVar0;
	
	if (Global_43883 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43883)
	{
		if (Global_43889[iVar0 /*4*/] == *uParam0)
		{
			Global_43889[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_51(int iParam0)//Position - 0x1FB2
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_52()//Position - 0x1FD4
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_119);
	if (fVar0 < 62500f)
	{
		func_82();
		func_79();
		if (iLocal_157)
		{
			if (fVar0 < 64f)
			{
				func_78();
				iLocal_157 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_56();
		}
	}
	if (!iLocal_158)
	{
		if (func_54())
		{
			iLocal_158 = 1;
			func_53();
		}
	}
}

void func_53()//Position - 0x203C
{
	iLocal_46++;
}

int func_54()//Position - 0x204A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_327[iVar0 /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_327[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_327.f_83) || !ENTITY::DOES_ENTITY_EXIST(Local_327.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_55()//Position - 0x20B2
{
	switch (iLocal_122)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_56()//Position - 0x20F4
{
	int iVar0;
	char* sVar1;
	
	if (!func_28(&iLocal_145))
	{
		func_37(&iLocal_145);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && !ENTITY::IS_ENTITY_DEAD(iLocal_155, false))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_155))
		{
			return;
		}
	}
	if (func_25(&iLocal_145) >= 8f)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_327[(iVar0 - 1) /*14*/], false))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_57(&uLocal_161, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_35(&iLocal_145);
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x21BE
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_58(sParam2, iParam3, 0);
}

int func_58(char* sParam0, int iParam1, bool bParam2)//Position - 0x220C
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_76();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_75();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_68();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_67())
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
				if (!Global_79248)
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
			if (func_66())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_65();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_64();
		func_59();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_76();
	}
	return 0;
}

void func_59()//Position - 0x24DA
{
	if (!func_60())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_60()//Position - 0x2511
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_63())
	{
		return 0;
	}
	if (func_61(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_61(int iParam0)//Position - 0x2574
{
	return func_62(iParam0, 20);
}

var func_62(int iParam0, int iParam1)//Position - 0x2584
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_63()//Position - 0x259C
{
	return -1;
}

void func_64()//Position - 0x25A5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_65()//Position - 0x25D7
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_66()//Position - 0x266C
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_67()//Position - 0x2693
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
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

void func_68()//Position - 0x272C
{
	if (func_118(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_69();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

var func_69()//Position - 0x27CE
{
	func_70();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_70()//Position - 0x27E7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_73(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_72(PLAYER::PLAYER_PED_ID());
			if (func_71(iVar0) && (!func_118(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_71(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_71(int iParam0)//Position - 0x28E4
{
	return iParam0 < 3;
}

int func_72(int iParam0)//Position - 0x28F0
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)//Position - 0x292D
{
	if (func_71(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)//Position - 0x2952
{
	return Global_2139[iParam0 /*29*/];
}

void func_75()//Position - 0x2961
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

void func_76()//Position - 0x29B9
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2A10
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = uParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

void func_78()//Position - 0x2A66
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_327.f_83, false))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 <= iLocal_117 && iVar0 >= iLocal_118)
		{
			iLocal_157 = 0;
			return;
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_327.f_83, 0f, 0f, 0.75f, true, 2000, 2000, 2000, 0);
	}
}

void func_79()//Position - 0x2AC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 <= iLocal_117 && iVar0 >= iLocal_118)
	{
		iLocal_326 = 0;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_155, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		switch (iLocal_326)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_155, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 64f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_159 = 0;
					iLocal_160 = 0;
					iLocal_326 = 1;
				}
				break;
			
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_155, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				iLocal_326 = 2;
				break;
			
			case 2:
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_155, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || PED::IS_PED_FACING_PED(iLocal_155, PLAYER::PLAYER_PED_ID(), 20f)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_160)
					{
						func_80(iLocal_155, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_80(iLocal_155, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_326 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_155))
				{
					func_35(&iLocal_142);
					TASK::TASK_PLAY_ANIM(iLocal_155, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0f, false, false, false);
					iLocal_326 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_155, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 225f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_327.f_83.f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_327.f_83.f_12, Local_327.f_83.f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_155, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iLocal_326 = 0;
				}
				if (func_28(&iLocal_142))
				{
					if (func_25(&iLocal_142) >= 5f && !iLocal_159)
					{
						iLocal_159 = 1;
						iLocal_326 = 1;
					}
					else if (func_25(&iLocal_142) >= 10f && !iLocal_160)
					{
						iLocal_160 = 1;
						iLocal_326 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_80(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2CED
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_81(iParam3), false);
}

int func_81(int iParam0)//Position - 0x2D06
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

void func_82()//Position - 0x2EFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_327[iVar2 /*14*/].f_1) && ENTITY::DOES_ENTITY_EXIST(Local_327[iVar2 /*14*/]))
		{
			if (func_87(Local_327[iVar2 /*14*/], 1, 0, 0, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_327[iVar2 /*14*/].f_1, true))
			{
				func_85();
				func_84(iLocal_103);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (!PED::IS_PED_INJURED(Local_327[iVar2 /*14*/]))
			{
				if (func_28(&(Local_123[iVar2 /*3*/])))
				{
					if (func_25(&(Local_123[iVar2 /*3*/])) > fLocal_148[iVar2])
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_327[iVar2 /*14*/].f_1, false) && PED::IS_PED_IN_VEHICLE(Local_327[iVar2 /*14*/], Local_327[iVar2 /*14*/].f_1, false))
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_327[iVar2 /*14*/].f_1, 1, iVar0);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_327[iVar2 /*14*/].f_1, 31, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
							if (!PED::IS_PED_INJURED(Local_327[iVar2 /*14*/]))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_327[iVar2 /*14*/], iVar3);
							}
							TASK::CLEAR_SEQUENCE_TASK(&iVar3);
						}
						func_35(&(Local_123[iVar2 /*3*/]));
						fLocal_148[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
					}
				}
				else
				{
					func_37(&(Local_123[iVar2 /*3*/]));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_327[iVar2 /*14*/], false))
			{
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_327[iVar2 /*14*/]) && !PED::IS_PED_RAGDOLL(Local_327[iVar2 /*14*/])) && !TASK::IS_PED_GETTING_UP(Local_327[iVar2 /*14*/]))
				{
					Local_327[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_327[iVar2 /*14*/].f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_ACHIEVE_HEADING(0, Local_327[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_327[iVar2 /*14*/].f_12, Local_327[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_327[iVar2 /*14*/], iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					Local_327[iVar2 /*14*/].f_11 = 0;
				}
				if (PED::IS_PED_RAGDOLL(Local_327[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_327[iVar2 /*14*/]))
				{
					if (!Local_327[iVar2 /*14*/].f_10 && (PED::IS_PED_RAGDOLL(Local_327[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_327[iVar2 /*14*/])))
					{
						Local_327.f_101++;
					}
					Local_327[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_327[iVar2 /*14*/].f_10)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_ACHIEVE_HEADING(0, Local_327[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_327[iVar2 /*14*/].f_12, Local_327[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_327[iVar2 /*14*/], iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					Local_327[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_327.f_83.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_327.f_83))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_327.f_83.f_1, false))
		{
			iLocal_84 = Local_327.f_83.f_1;
		}
		if (func_87(Local_327.f_83, 1, 0, 0, 0))
		{
			func_85();
			func_84(iLocal_103);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		if (!PED::IS_PED_INJURED(Local_327.f_83))
		{
			if (func_28(&iLocal_139))
			{
				if (func_25(&iLocal_139) > fLocal_154)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_327.f_83.f_1, false) && PED::IS_PED_IN_VEHICLE(Local_327.f_83, Local_327.f_83.f_1, false))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_327.f_83.f_1, 1, iVar0);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_327.f_83.f_1, 31, iVar1);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						if (!PED::IS_PED_INJURED(Local_327.f_83))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_327.f_83, iVar3);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
					func_35(&iLocal_139);
					fLocal_154 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
				}
			}
			else
			{
				func_37(&iLocal_139);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_327.f_83, false))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_327.f_83) && !PED::IS_PED_RAGDOLL(Local_327.f_83)) && !TASK::IS_PED_GETTING_UP(Local_327.f_83))
			{
				Local_327.f_83.f_11 = 1;
			}
			else if (Local_327.f_83.f_11)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_ACHIEVE_HEADING(0, Local_327.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_327.f_83.f_12, Local_327.f_83.f_13, 4f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_327.f_83, iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				Local_327.f_83.f_11 = 0;
			}
			if (PED::IS_PED_RAGDOLL(Local_327.f_83) || TASK::IS_PED_GETTING_UP(Local_327.f_83))
			{
				if (!Local_327.f_83.f_10)
				{
					Local_327.f_101++;
				}
				Local_327.f_83.f_10 = 1;
			}
			else if (Local_327.f_83.f_10)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_ACHIEVE_HEADING(0, Local_327.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_327.f_83.f_12, Local_327.f_83.f_13, 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_327.f_83, iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				iLocal_326 = 4;
				func_35(&iLocal_142);
				Local_327.f_83.f_10 = 0;
			}
		}
	}
}

char* func_83()//Position - 0x3499
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_84(int iParam0)//Position - 0x34D5
{
	if (iLocal_93 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_138(iParam0, 0, 0);
		}
		iLocal_103 = 263;
		func_92(&iLocal_94);
		iLocal_93 = 9;
	}
}

void func_85()//Position - 0x3518
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar12]) && !PED::IS_PED_INJURED(iVar0[iVar12]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0[iVar12], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar11);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(300, 900));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar11);
				TASK::TASK_PERFORM_SEQUENCE(iVar0[iVar12], iVar11);
				TASK::CLEAR_SEQUENCE_TASK(&iVar11);
			}
		}
		iVar12++;
	}
	switch (Global_114372.f_19019.f_1)
	{
		case 0:
			func_86(0);
			break;
		
		case 1:
			func_86(0);
			break;
		
		case 3:
			func_86(0);
			break;
		
		case 4:
			func_86(0);
			break;
		
		case 5:
			func_86(0);
			break;
		
		case 2:
			func_86(0);
			break;
	}
}

void func_86(int iParam0)//Position - 0x3628
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_104 = iParam0;
	iLocal_102 = 0;
	iLocal_93 = 7;
}

int func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3649
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (Local_327.f_101 >= 3)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			if (bParam1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					if (func_88(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), iVar0, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_FLEEING(iParam0))
			{
				return 1;
			}
			if (WEAPON::IS_PED_ARMED(iVar0, 4))
			{
				if (PED::IS_PED_SHOOTING(iVar0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (MISC::IS_BULLET_IN_AREA(Var1, 4f, true))
			{
				return 1;
			}
			if (MISC::IS_PROJECTILE_IN_AREA((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), false))
			{
				return 1;
			}
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, Var1, 25f)) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, Var1, 25f))
			{
				return 1;
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_88(int iParam0, bool bParam1)//Position - 0x3803
{
	return func_89(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_89(int iParam0, int iParam1, bool bParam2)//Position - 0x381B
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

int func_90(int iParam0, bool bParam1)//Position - 0x3879
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_97(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/] == 1 && Global_44676[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44676[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44676[iVar0 /*32*/].f_5 = 1;
			Global_44676[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44676[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44676[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x3931
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
		if (Global_44676[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_92(int iParam0)//Position - 0x396C
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_91(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x39C3
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_92(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44676[iVar0 /*32*/])
		{
			Global_44676[iVar0 /*32*/] = 1;
			Global_44676[iVar0 /*32*/].f_1 = Global_44877;
			Global_44877++;
			Global_44676[iVar0 /*32*/].f_4 = 0;
			Global_44676[iVar0 /*32*/].f_29 = 0;
			Global_44676[iVar0 /*32*/].f_5 = 0;
			Global_44676[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44676[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44676[iVar0 /*32*/].f_6 = iParam3;
			Global_44676[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44676[iVar0 /*32*/].f_7 = 0;
			Global_44676[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44676[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44676[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44676[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44676[iVar0 /*32*/].f_12 = 0;
				Global_44676[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44676[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_94(int iParam0)//Position - 0x3AEE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_95(char* sParam0, int iParam1, int iParam2)//Position - 0x3B1B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
}

var func_96()//Position - 0x3B3D
{
	return Global_76369;
}

int func_97(int iParam0)//Position - 0x3B49
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
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
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_98(int iParam0, int iParam1)//Position - 0x3BA0
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

bool func_99()//Position - 0x3BD8
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_100()//Position - 0x3BED
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_101(bool bParam0)//Position - 0x3C07
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

int func_102()//Position - 0x3C30
{
	return 1;
}

void func_103(var uParam0, int iParam1)//Position - 0x3C39
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)//Position - 0x3C49
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_105()//Position - 0x3C5A
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_106(int iParam0)//Position - 0x3D64
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_69();
				if (!func_71(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_113()) || Global_113419) || Global_32831) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_109()) || func_100()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_113()) || Global_32831) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_113()) || Global_113419) || Global_32831) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_114372.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_113()) || Global_113419) || Global_32831) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_100()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_113() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_98(8, -1)) || func_100()) || func_108()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_111()) || func_110()) || func_108()) || func_107())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_113()) || Global_32831) || func_112()) || func_98(8, -1)) || func_110()) || func_109()) || func_100()) || Global_114372.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_113()) || func_110()) || Global_113419) || Global_32831) || func_112()) || Global_45122) || func_98(8, -1)) || func_109()) || func_108()) || func_100()) || Global_114372.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_113()) || Global_113419) || Global_32831) || func_112()) || func_98(8, -1)) || func_109()) || func_108()) || func_111()) || func_110()) || func_100())
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

var func_107()//Position - 0x4481
{
	return Global_101431.f_1;
}

int func_108()//Position - 0x448F
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_109()//Position - 0x44B2
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

bool func_110()//Position - 0x44DC
{
	return Global_101444.f_394 > 0;
}

bool func_111()//Position - 0x44ED
{
	return Global_101444.f_393 > 0;
}

var func_112()//Position - 0x44FE
{
	return Global_1575079;
}

int func_113()//Position - 0x450A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_114()//Position - 0x4526
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_115()//Position - 0x4540
{
	return Global_97204;
}

int func_116(int iParam0)//Position - 0x454C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_118(6) || func_118(7))
			{
				return 1;
			}
			else
			{
				return func_116(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_142(5))
			{
				if (func_106(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0)//Position - 0x45BE
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19);
}

bool func_118(int iParam0)//Position - 0x45FA
{
	return Global_43922 == iParam0;
}

void func_119()//Position - 0x4608
{
	int iVar0;
	char* sVar1;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if ((iVar0 <= iLocal_117 && iVar0 >= iLocal_118) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
	{
		return;
	}
	if (bLocal_156)
	{
		func_129();
		func_128();
		switch (iLocal_122)
		{
			case 0:
				func_127(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.4417f, 4440.8657f, 37.2504f, 184.125f);
				func_127(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.7954f, 4438.275f, 37.402f, 78.7749f);
				func_127(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_127(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.2506f, 4438.761f, 36.9256f, 23.8377f);
				func_127(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.3187f, 4439.913f, 36.7166f, 250.6112f);
				func_126(-1939.5636f, 4443.3057f, 36.3803f, 262.3551f, -1936.2085f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_127(-520.2097f, 2010.8163f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_127(-516.9937f, 2013.9797f, 203.5907f, 19.3803f, -517.1741f, 2010.8132f, 203.8412f, 125.7555f);
				func_127(-518.3414f, 2005.4489f, 204.1878f, 20.7231f, -519.0882f, 2013.6492f, 203.3304f, 195.7951f);
				func_127(-514.8247f, 2008.5737f, 204.3629f, 20.2278f, -514.2933f, 2004.9231f, 204.5935f, 126.8655f);
				func_126(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.6216f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_127(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_127(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.2505f, 43.8681f, 179.3787f);
				func_127(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.1016f, 43.8909f, 311.8915f);
				func_127(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_127(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.6826f, 43.8597f, 28.0083f);
				func_126(-225.6736f, 4224.5034f, 43.8435f, 77.7579f, -227.2893f, 4224.6987f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_127(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.1633f, 32.9854f, 29.8332f);
				func_127(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.9076f, 3841.4924f, 32.9721f, 78.3f);
				func_127(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.0966f, 3842.6758f, 33.3217f, 198.5355f);
				func_127(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.4274f, 3837.3677f, 32.9989f, 9.9463f);
				func_126(1603.4052f, 3836.324f, 33.1144f, 305.055f, 1605.7883f, 3840.2363f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_127(2046.7721f, 2130.4421f, 91.9486f, 233.1493f, 2036.1232f, 2133.9807f, 92.615f, 260.0519f);
				func_127(2045.3445f, 2126.3523f, 91.9358f, 236.3633f, 2044.4219f, 2128.9607f, 92.088f, 47.8797f);
				func_127(2036.512f, 2137.8071f, 92.6507f, 237.2446f, 2041.778f, 2131.3538f, 92.4544f, 226.7534f);
				func_127(2041.739f, 2134.3242f, 92.4013f, 232.956f, 2039.6033f, 2132.5635f, 92.6648f, 61.0834f);
				func_127(2039.7745f, 2130.025f, 92.5324f, 241.6337f, 2038.7444f, 2134.5232f, 92.6235f, 128.98f);
				func_126(2030.8984f, 2134.1968f, 92.5014f, 249.4471f, 2036.5801f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_127(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.3918f, 42.1008f, 29.7228f);
				func_127(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.1204f, 2779.783f, 42.3128f, 286.9825f);
				func_127(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.2527f, 2783.97f, 42.5421f, 108.7426f);
				func_127(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.5823f, 2787.4763f, 42.6953f, 157.4885f);
				func_127(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.7188f, 2784.905f, 42.6444f, 213.8879f);
				func_126(2995.525f, 2775.5225f, 41.98f, 4.3249f, 2993.511f, 2776.9482f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_122)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar1))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar1))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED(sVar1, true);
				}
			}
		}
	}
	func_120();
}

void func_120()//Position - 0x4CEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_108 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_327.f_0)
		{
			if (!func_125(Local_327[iVar5 /*14*/].f_2))
			{
				Local_327[iVar5 /*14*/].f_1 = VEHICLE::CREATE_VEHICLE(func_124(0), Local_327[iVar5 /*14*/].f_2, Local_327[iVar5 /*14*/].f_5, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_327[iVar5 /*14*/].f_1, 5f);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_327[iVar5 /*14*/].f_1, true);
				if (func_125(Local_327[iVar5 /*14*/].f_6))
				{
					Local_327[iVar5 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_327[iVar5 /*14*/].f_1, 4, func_123(), -1, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_327[iVar5 /*14*/].f_1, true, false, false);
				}
				else
				{
					Local_327[iVar5 /*14*/] = PED::CREATE_PED(4, func_123(), Local_327[iVar5 /*14*/].f_6, Local_327[iVar5 /*14*/].f_9, true, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_327[iVar5 /*14*/].f_12 = sVar3;
					Local_327[iVar5 /*14*/].f_13 = sVar4;
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
					TASK::TASK_PLAY_ANIM(0, sVar3, sVar4, 8f, -8f, -1, 8193, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_327[iVar5 /*14*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				PED::SET_PED_HELMET(Local_327[iVar5 /*14*/], true);
				PED::GIVE_PED_HELMET(Local_327[iVar5 /*14*/], true, 4096, -1);
			}
			iVar5++;
		}
		Local_327.f_83.f_1 = VEHICLE::CREATE_VEHICLE(func_124(1), Local_327.f_83.f_2, Local_327.f_83.f_5, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_327.f_83.f_1, 5f);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_327.f_83.f_1, true);
		if (func_125(Local_327.f_83.f_6))
		{
			Local_327.f_83 = PED::CREATE_PED_INSIDE_VEHICLE(Local_327.f_83.f_1, 4, func_123(), -1, true, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_327.f_83.f_1, true, false, false);
		}
		else
		{
			Local_327.f_83 = PED::CREATE_PED(4, func_123(), Local_327.f_83.f_6, Local_327.f_83.f_9, true, true);
			iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_327.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_327.f_83.f_13 = sVar4;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, func_122((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 1000), 1, 1000));
			TASK::TASK_PLAY_ANIM(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_327.f_83, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else if (fLocal_108 < 225f)
	{
	}
	iLocal_155 = Local_327.f_83;
	if (!ENTITY::IS_ENTITY_DEAD(Local_327[0 /*14*/], false))
	{
		func_121(&uLocal_161, 1, Local_327[0 /*14*/], "MALE1", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_327[1 /*14*/], false))
	{
		func_121(&uLocal_161, 2, Local_327[1 /*14*/], "MALE2", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_327[2 /*14*/], false))
	{
		func_121(&uLocal_161, 3, Local_327[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_28(&iLocal_145))
	{
		func_37(&iLocal_145);
	}
	else
	{
		func_35(&iLocal_145);
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x50BC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

int func_122(int iParam0, int iParam1, int iParam2)//Position - 0x5157
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

int func_123()//Position - 0x517C
{
	return joaat("A_M_Y_MotoX_01");
}

int func_124(bool bParam0)//Position - 0x5189
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_327.f_71)
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Local_327.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_122 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (Local_327.f_71[iVar0] == 0)
	{
		if (Local_327.f_71[0] == 0)
		{
			switch (iLocal_122)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_327.f_71[0];
		}
	}
	return Local_327.f_71[iVar0];
}

int func_125(struct<3> Param0)//Position - 0x527B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_126(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x52A5
{
	if (func_125(Local_327.f_83.f_2))
	{
		Local_327.f_83.f_2 = { Param0 };
		Local_327.f_83.f_5 = fParam3;
		Local_327.f_83.f_6 = { Param4 };
		Local_327.f_83.f_9 = fParam7;
	}
}

void func_127(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x52E9
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_327.f_0)
	{
		if (!bVar1 && func_125(Local_327[iVar0 /*14*/].f_2))
		{
			Local_327[iVar0 /*14*/].f_2 = { Param0 };
			Local_327[iVar0 /*14*/].f_5 = fParam3;
			Local_327[iVar0 /*14*/].f_6 = { Param4 };
			Local_327[iVar0 /*14*/].f_9 = fParam7;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_128()//Position - 0x5364
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_327.f_0)
	{
		Local_327[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_327[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_327.f_83.f_2 = { 0f, 0f, 0f };
	Local_327.f_83.f_5 = 0f;
}

void func_129()//Position - 0x53AF
{
	switch (iLocal_122)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, true, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, true, false, false, false, false, false, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, false, false, true);
			break;
		
		case 3:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, false, false, false, false, false, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, true, false, true);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			break;
		
		case 4:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", true);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", true);
			break;
		
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, false, false, false, false, false, 0, 0);
			break;
		
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, false, false, false, false, false, 0, 0);
			break;
	}
}

bool func_130()//Position - 0x55EB
{
	return ((((((((func_131(&(Local_327.f_71)) && func_131(&(Local_327.f_77))) && func_131(&(Local_327.f_99))) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_c@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_aa_smoke@male@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("random@street_race")) && STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"));
}

int func_131(var uParam0)//Position - 0x5660
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_132()//Position - 0x56A7
{
	char cVar0[64];
	
	func_134(&(Local_327.f_77), joaat("A_M_Y_MotoX_01"));
	func_134(&(Local_327.f_99), joaat("A_M_Y_MotoX_01"));
	switch (iLocal_122)
	{
		case 0:
			func_134(&(Local_327.f_71), joaat("sanchez"));
			func_134(&(Local_327.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_134(&(Local_327.f_71), joaat("mesa"));
			func_134(&(Local_327.f_71), joaat("bjxl"));
			func_134(&(Local_327.f_71), joaat("patriot"));
			func_134(&(Local_327.f_71), joaat("dubsta2"));
			func_134(&(Local_327.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_134(&(Local_327.f_71), joaat("sanchez"));
			func_134(&(Local_327.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_134(&(Local_327.f_71), joaat("sanchez"));
			func_134(&(Local_327.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_134(&(Local_327.f_71), joaat("mesa"));
			func_134(&(Local_327.f_71), joaat("bfinjection"));
			func_134(&(Local_327.f_71), joaat("bjxl"));
			func_134(&(Local_327.f_71), joaat("sadler"));
			func_134(&(Local_327.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_134(&(Local_327.f_71), joaat("sanchez"));
			func_134(&(Local_327.f_71), joaat("blazer"));
			break;
	}
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("random@street_race");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	if (iLocal_122 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14c"));
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_122)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, &cVar0);
	func_133(&(Local_327.f_77));
	func_133(&(Local_327.f_71));
	func_133(&(Local_327.f_99));
}

void func_133(var uParam0)//Position - 0x58E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_134(var uParam0, int iParam1)//Position - 0x5917
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_135(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_135(var uParam0)//Position - 0x5974
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0, int iParam1)//Position - 0x59A0
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(int iParam0)//Position - 0x59B1
{
	iLocal_93 = iParam0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)//Position - 0x59BD
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
		iVar1 = BitTest(Global_33208[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 18);
		if (Global_33205 == 1)
		{
			Global_33206 = 1;
		}
		Global_33205 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33208[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33208[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33208[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33208[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33208[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

int func_139()//Position - 0x5ABD
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

int func_140()//Position - 0x5ADA
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141(int iParam0, int iParam1)//Position - 0x5AFD
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
	iVar0 = BitTest(Global_114372.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_142(int iParam0)//Position - 0x5B47
{
	return func_143(iParam0, Global_43922);
}

int func_143(int iParam0, int iParam1)//Position - 0x5B58
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

bool func_144(var uParam0, int iParam1)//Position - 0x5D39
{
	return (uParam0 && iParam1) != 0;
}

void func_145()//Position - 0x5D48
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	fLocal_115 = (6f + 4f);
	iLocal_97 = 4;
	func_103(&uLocal_92, 4194304);
	iLocal_95 = 60500;
	iLocal_84 = 0;
	iLocal_117 = 0;
	iLocal_118 = 25;
	iLocal_101 = 0;
	iLocal_122 = func_149(Local_88, &Local_119);
	iLocal_103 = func_148(iLocal_122);
	fLocal_100 = (SYSTEM::TO_FLOAT(func_147(iLocal_103)) + 5f);
	if (func_141(0, iLocal_97))
	{
		bLocal_156 = true;
	}
	else
	{
		func_84(iLocal_103);
		bLocal_156 = false;
	}
	if (iLocal_122 > Global_114372.f_19019.f_1)
	{
		if (func_117(func_148(iLocal_122)))
		{
		}
		iLocal_103 = 263;
		func_84(iLocal_103);
	}
	if (!func_117(func_148(iLocal_122)) && CAM::IS_SCREEN_FADED_IN())
	{
		if (iLocal_103 != 263)
		{
			if (func_146(iLocal_103, 1))
			{
				iLocal_103 = 263;
			}
		}
		func_84(iLocal_103);
	}
	if (iLocal_122 == 2)
	{
		iLocal_117 = 20;
		iLocal_118 = 3;
	}
	if (iLocal_122 == 1 || iLocal_122 == 5)
	{
		sLocal_99 = "PLAY_OFFROAD_V" /* GXT: Press ~INPUT_CONTEXT~ to enter an off-road truck race. */;
	}
	else
	{
		sLocal_99 = "PLAY_OFFROAD_M" /* GXT: Press ~INPUT_CONTEXT~ to enter an off-road motorcycle / ATV race. */;
	}
}

int func_146(int iParam0, bool bParam1)//Position - 0x5E44
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return BitTest(Global_33208[iVar0 /*23*/].f_11, 15);
	}
	return BitTest(Global_33208[iVar0 /*23*/].f_11, 0);
}

int func_147(int iParam0)//Position - 0x5E92
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_148(int iParam0)//Position - 0x5FAA
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_149(struct<3> Param0, var uParam3)//Position - 0x5FFE
{
	int iVar0;
	struct<3> Var1[7];
	float fVar23;
	int iVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_150(0) };
	Var1[1 /*3*/] = { func_150(1) };
	Var1[3 /*3*/] = { func_150(3) };
	Var1[4 /*3*/] = { func_150(4) };
	Var1[5 /*3*/] = { func_150(5) };
	Var1[2 /*3*/] = { func_150(2) };
	Var1[6 /*3*/] = { func_150(6) };
	fVar23 = SYSTEM::VDIST2(Param0, Var1[0 /*3*/]);
	iVar24 = 0;
	fVar25 = 0f;
	iVar24 = 1;
	while (iVar24 <= (7 - 1))
	{
		fVar25 = SYSTEM::VDIST2(Param0, Var1[iVar24 /*3*/]);
		if (fVar25 < fVar23)
		{
			iVar0 = iVar24;
			fVar23 = fVar25;
		}
		iVar24++;
	}
	*uParam3 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_150(int iParam0)//Position - 0x60BD
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.4829f, 4443.9526f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.6436f, 43.7304f;
		
		case 4:
			return 1606.5785f, 3841.1882f, 33.2931f;
		
		case 5:
			return 2037.6644f, 2137.3862f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_151(var uParam0, int iParam1)//Position - 0x6176
{
	func_152(uParam0, iParam1);
}

void func_152(var uParam0, var uParam1)//Position - 0x6186
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_153(bool bParam0)//Position - 0x619B
{
	if (bParam0)
	{
		if (iLocal_103 != 263)
		{
			func_138(iLocal_103, 0, 0);
		}
	}
	func_92(&iLocal_94);
	if (func_144(uLocal_92, 2))
	{
		func_5();
		func_151(&uLocal_92, 2);
		func_20(&iLocal_96);
	}
	iLocal_96 = -1;
	func_154();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_154()//Position - 0x61E4
{
	func_151(&uLocal_92, 4);
	func_155();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_67))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_67) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_67);
		}
	}
}

void func_155()//Position - 0x6221
{
}

